#include "farmer.h"

#include "building/building.h"
#include "building/farmhouse.h"
#include "city/resource.h"
#include "core/image_group.h"
#include "figure/image.h"
#include "figure/movement.h"
#include "figure/route.h"
#include "map/terrain.h"



void figure_farmer_action(figure* f) {
    f->terrain_usage = TERRAIN_USAGE_ANY;
    figure_image_increase_offset(f, 12);

    switch (f->action_state) {
    case FIGURE_ACTION_150_ATTACK:
        figure_combat_handle_attack(f);
        break;
    case FIGURE_ACTION_149_CORPSE:
        figure_combat_handle_corpse(f);
        break;
    case FIGURE_ACTION_203_FARMER_SPAWNED: {
        building* b = building_get(f->building_id);
        f->source_x = f->x;
        f->source_y = f->y;
        if (b->figure_id != f->id) {
            f->state = FIGURE_STATE_DEAD;
        }
        f->wait_ticks++;
        if (f->wait_ticks > 2) {
            building* min_building = 0;
            for (int i = 1; i < MAX_BUILDINGS; i++) {
                building* b = building_get(i);
                if (b->type != BUILDING_WHEAT_PLOT) {
                    continue;
                }
                if (b->distance_from_entry <= 0) {
                    continue;
                }
                if (b->subtype.plot_fertilized != 0 && b->data.industry.progress < FARM_MAX_TICKS) {
                    continue;
                }
                min_building = b;
                if (min_building) {
                    f->destination_building_id = min_building->id;
                    f->destination_x = min_building->x;
                    f->destination_y = min_building->y;
                    f->action_state = FIGURE_ACTION_204_FARMER_GOING_TO_PLOT;
                    f->wait_ticks = 0;
                }
                else {
                    f->state = FIGURE_STATE_DEAD;
                }
            }
        }
        break;
    }
    case FIGURE_ACTION_204_FARMER_GOING_TO_PLOT:
        figure_movement_move_ticks(f, 1);
        if (f->direction == DIR_FIGURE_AT_DESTINATION) {
            f->wait_ticks++;
            building* b = building_get(f->destination_building_id);
            if (f->wait_ticks >= 75) {
                if (b->subtype.plot_fertilized) {
                    b->subtype.plot_fertilized = 0;
                    b->data.industry.progress = 0;
                    f->resource_id = RESOURCE_WHEAT;
                } else {
                    b->subtype.plot_fertilized = 1;
                    b->data.industry.progress = 30;
                }
                f->action_state = FIGURE_ACTION_206_FARMER_RETURNING_TO_FARMHOUSE;
                f->wait_ticks = 0;
                f->destination_x = f->source_x;
                f->destination_y = f->source_y;
            }
        } else if (f->direction == DIR_FIGURE_REROUTE) {
            figure_route_remove(f);
        } else if (f->direction == DIR_FIGURE_LOST) {
            f->state = FIGURE_STATE_DEAD;
        }
        break;

    case FIGURE_ACTION_205_FARMER_FARMING:
        break;

    case FIGURE_ACTION_206_FARMER_RETURNING_TO_FARMHOUSE:
        figure_movement_move_ticks(f, 1);
        if (f->direction == DIR_FIGURE_AT_DESTINATION || f->direction == DIR_FIGURE_LOST) {
            f->state = FIGURE_STATE_DEAD;
            building* b = building_get(f->building_id);
            if (f->resource_id == RESOURCE_WHEAT) {
                b->data.granary.resource_stored[RESOURCE_WHEAT] = 100;
            }
        } else if (f->direction == DIR_FIGURE_REROUTE) {
            figure_route_remove(f);
        }
        break;
    }
    figure_image_update(f, image_group(GROUP_FIGURE_LABOR_SEEKER));
}

