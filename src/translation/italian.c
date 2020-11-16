#include "translation/common.h"
#include "translation/translation.h"

static translation_string all_strings[] = {
    {TR_NO_PATCH_TITLE, "Patch 1.0.1.0 non installata"},
    {TR_NO_PATCH_MESSAGE,
        "La tua installazione di Caesar 3 non comprende la patch 1.0.1.0."
        "Puoi scaricare la patch da:\n"
        URL_PATCHES "\n"
        "Prosegui a tuo rischio e pericolo."},
    {TR_MISSING_FONTS_TITLE, "Missing fonts"},
    {TR_MISSING_FONTS_MESSAGE,
        "La tua installazione di Caesar 3 richiede i font extra."
        "Puoi scaricare la patch da:\n"
        URL_PATCHES},
    {TR_NO_EDITOR_TITLE, "Editor non installato"},
    {TR_NO_EDITOR_MESSAGE,
        "La tua installazione di Caesar 3 non conmprende l'editor delle mappe."
        "Puoi scaricarlo da:\n"
        URL_EDITOR},
    {TR_INVALID_LANGUAGE_TITLE, "Cartella della lingua non valida"},
    {TR_INVALID_LANGUAGE_MESSAGE,
        "La cartella selezionata non contiene un pacchetto di lingua corretto."
        "Per favore controlla il log degli errori."},
    {TR_BUTTON_OK, "OK"},
    {TR_BUTTON_CANCEL, "Cancella"},
    {TR_BUTTON_RESET_DEFAULTS, "Ripristina default"},
    {TR_BUTTON_CONFIGURE_HOTKEYS, "Configura tasti rapidi"},
    {TR_BUTTON_NEXT, "+"},
    {TR_BUTTON_PREV, "-"},
    {TR_CONFIG_TITLE, "Opzioni di configurazione di Augustus"},
    {TR_CONFIG_LANGUAGE_LABEL, "Lingua:"},
    {TR_CONFIG_LANGUAGE_DEFAULT, "(default)"},
    {TR_CONFIG_PAGE_LABEL, "Pagina"},
    {TR_CONFIG_HEADER_UI_CHANGES, "Modifiche all'interfaccia utente"},
    {TR_CONFIG_HEADER_GAMEPLAY_CHANGES, "Modifiche al gioco"},
    {TR_CONFIG_SHOW_INTRO_VIDEO, "Riproduci video introduttivo"},
    {TR_CONFIG_SIDEBAR_INFO, "Informazioni extra nel pannello di controllo"},
    {TR_CONFIG_SMOOTH_SCROLLING, "Abilita lo scorrimento fluido"},
    {TR_CONFIG_DISABLE_RIGHT_CLICK_MAP_DRAG, "Disabilita lo spostamento della mappa col tasto destro"},
    {TR_CONFIG_VISUAL_FEEDBACK_ON_DELETE, "Migliora il feedback visivo quando si sgombera il terreno"},
    {TR_CONFIG_ALLOW_CYCLING_TEMPLES, "Consente la costruzione di tutti i templi in successione"},
    {TR_CONFIG_SHOW_WATER_STRUCTURE_RANGE, "Mostra la copertura di cisterne, fontane e pozzi"},
    {TR_CONFIG_SHOW_CONSTRUCTION_SIZE, "Mostra le dimensioni della costruzione durante il trascinamento"},
    {TR_CONFIG_HIGHLIGHT_LEGIONS, "Evidenzia la legione al passaggio del cursore"},
    {TR_CONFIG_ROTATE_MANUALLY, "Ruota i Bastioni e l'Arco di Trionfo tramite scorciatoie da tastiera"},
    {TR_CONFIG_SHOW_MILITARY_SIDEBAR, "Abilita il pannello militare"},
    {TR_CONFIG_FIX_IMMIGRATION_BUG, "Correggi il bug dell'immigrazione al livello molto difficile"},
    {TR_CONFIG_FIX_100_YEAR_GHOSTS, "Corregge il bug dei centenari"},
    {TR_CONFIG_FIX_EDITOR_EVENTS, "Elimina le complicazioni al cambio di Imperatore"},
    {TR_CONFIG_DRAW_WALKER_WAYPOINTS, "Draw walker waypoints on overlay after right clicking on a building"},
    {TR_CONFIG_ENABLE_ZOOM, "Abilità lo zoom (può causare rallentamenti, utilizza più RAM)"},
    {TR_CONFIG_COMPLETE_RATING_COLUMNS, "Fissa colonne di valutazione non completate su obiettivi bassi"},
    {TR_CONFIG_GRANDFESTIVAL, "Le grandi feste permettono una benedizione extra da parte di una divinità"},
    {TR_CONFIG_JEALOUS_GODS, "Disabilita gelosia delle divinità"},
    {TR_CONFIG_GLOBAL_LABOUR, "Abilita mercato del lavoro globale"},
    {TR_CONFIG_SCHOOL_WALKERS, "Extend school walkers range"},
    {TR_CONFIG_RETIRE_AT_60, "Cambia l'età della pensione da 50 a 60 anni"},
    {TR_CONFIG_FIXED_WORKERS, "Mercato del lavoro fisso - 38% della popolazione plebea"},
    {TR_CONFIG_EXTRA_FORTS, "Consenti l'edificazione di 4 forti supplementari"},
    {TR_CONFIG_WOLVES_BLOCK, "Impedisci la costruzione vicino ai lupi"},
    {TR_CONFIG_DYNAMIC_GRANARIES, "Bloccare le strade del granaio non collegate"},
    {TR_CONFIG_MORE_STOCKPILE, "Le case accumulano più merci dal mercato"},
    {TR_CONFIG_NO_BUYER_DISTRIBUTION, "Le signore del mercato non distribuiscono merci"},
    {TR_CONFIG_IMMEDIATELY_DELETE_BUILDINGS, "Rimuovi edifici immediatamente"},
    {TR_CONFIG_GETTING_GRANARIES_GO_OFFROAD, "Cart pushers from getting granaries can go offroad"},
    {TR_CONFIG_GRANARIES_GET_DOUBLE, "Double the capacity of cart pushers from getting granaries"},
    {TR_CONFIG_TOWER_SENTRIES_GO_OFFROAD, "Le sentinelle della torre non hanno bisogno di un accesso stradale dalle caserme"},
    {TR_CONFIG_FARMS_DELIVER_CLOSE, "Le fattorie e i moli consegnano solo ai granai vicini"},
    {TR_CONFIG_DELIVER_ONLY_TO_ACCEPTING_GRANARIES, "Food isn't delivered to getting granaries"},
    {TR_CONFIG_ALL_HOUSES_MERGE, "Tutte le case si uniscono"},
    {TR_CONFIG_WINE_COUNTS_IF_OPEN_TRADE_ROUTE, "Le vie commerciali aperte contano come fornitura di diversi tipi di vino"},
    {TR_CONFIG_RANDOM_COLLAPSES_TAKE_MONEY, "Randomly collapsing clay pits and iron mines take some money instead"},
    {TR_CONFIG_MULTIPLE_BARRACKS, "Permetti la costruzione di caserme multiple" },
    {TR_CONFIG_NOT_ACCEPTING_WAREHOUSES, "I magazzini non accettano nulla quando costruiti"},
    {TR_CONFIG_HOUSES_DONT_EXPAND_INTO_GARDENS, "Le case non si espandono nei giardini"},
    {TR_HOTKEY_TITLE, "Configurazione scorciatoie da tastiera Augustus"},
    {TR_HOTKEY_LABEL, "Scorciatoia da tastiera"},
    {TR_HOTKEY_ALTERNATIVE_LABEL, "Alternativa"},
    {TR_HOTKEY_HEADER_ARROWS, "Pulsanti frecce"},
    {TR_HOTKEY_HEADER_GLOBAL, "Scorciatoie globali"},
    {TR_HOTKEY_HEADER_CITY, "Scorciatoie città"},
    {TR_HOTKEY_HEADER_ADVISORS, "Consiglieri"},
    {TR_HOTKEY_HEADER_OVERLAYS, "Sovrapposizioni mappa"},
    {TR_HOTKEY_HEADER_BOOKMARKS, "Segnalibri mappa città"},
    {TR_HOTKEY_HEADER_EDITOR, "Editor"},
    {TR_HOTKEY_HEADER_BUILD, "Scorciatoie costruzione"},
    {TR_HOTKEY_ARROW_UP, "Su"},
    {TR_HOTKEY_ARROW_DOWN, "Giù"},
    {TR_HOTKEY_ARROW_LEFT, "Sinistra"},
    {TR_HOTKEY_ARROW_RIGHT, "Destra"},
    {TR_HOTKEY_TOGGLE_FULLSCREEN, "Abilità modalità a schermo intero"},
    {TR_HOTKEY_CENTER_WINDOW, "Center window"},
    {TR_HOTKEY_RESIZE_TO_640, "Ridimensiona finestra a 640x480"},
    {TR_HOTKEY_RESIZE_TO_800, "Ridimensiona finestra a 800x600"},
    {TR_HOTKEY_RESIZE_TO_1024, "Ridimensiona finestra a 1024x768"},
    {TR_HOTKEY_SAVE_SCREENSHOT, "Salva screenshot"},
    {TR_HOTKEY_SAVE_CITY_SCREENSHOT, "Salva screenshot dell'intera città"},
    {TR_HOTKEY_BUILD_CLONE, "Duplica edificio selezionato"},
    {TR_HOTKEY_LOAD_FILE, "Carica file"},
    {TR_HOTKEY_SAVE_FILE, "Salva file"},
    {TR_HOTKEY_INCREASE_GAME_SPEED, "Aumenta velocità gioco"},
    {TR_HOTKEY_DECREASE_GAME_SPEED, "Diminuisci velocità gioco"},
    {TR_HOTKEY_TOGGLE_PAUSE, "Pausa"},
    {TR_HOTKEY_CYCLE_LEGION, "Scorri tra le legioni"},
    {TR_HOTKEY_ROTATE_MAP_LEFT, "Ruota mappa a sinistra"},
    {TR_HOTKEY_ROTATE_MAP_RIGHT, "Ruota mappa a destra"},
    {TR_HOTKEY_SHOW_ADVISOR_LABOR, "Consigliere del lavoro"},
    {TR_HOTKEY_SHOW_ADVISOR_MILITARY, "Consigliere militare"},
    {TR_HOTKEY_SHOW_ADVISOR_IMPERIAL, "Consigliere imperiale"},
    {TR_HOTKEY_SHOW_ADVISOR_RATINGS, "Consigliere del livelli"},
    {TR_HOTKEY_SHOW_ADVISOR_TRADE, "Consigliere del commercio"},
    {TR_HOTKEY_SHOW_ADVISOR_POPULATION, "Consigliere della popolazione"},
    {TR_HOTKEY_SHOW_ADVISOR_HEALTH, "Consigliere della salute"},
    {TR_HOTKEY_SHOW_ADVISOR_EDUCATION, "Consigliere dell'educazione"},
    {TR_HOTKEY_SHOW_ADVISOR_ENTERTAINMENT, "Consigliere degli intrattenimenti"},
    {TR_HOTKEY_SHOW_ADVISOR_RELIGION, "Consigliere religioso"},
    {TR_HOTKEY_SHOW_ADVISOR_FINANCIAL, "Consigliere finanziario"},
    {TR_HOTKEY_SHOW_ADVISOR_CHIEF, "Consigliere capo"},
    {TR_HOTKEY_SHOW_ADVISOR_HOUSING, "Consigliere delle abitazioni"},
    {TR_HOTKEY_TOGGLE_OVERLAY, "Disabilita sovrapposizione attuale"},
    {TR_HOTKEY_SHOW_OVERLAY_WATER, "Mostra sovrapposizione acque"},
    {TR_HOTKEY_SHOW_OVERLAY_FIRE, "Mostra sovrapposizione fuoco"},
    {TR_HOTKEY_SHOW_OVERLAY_DAMAGE, "Mostra sovrapposizione danni"},
    {TR_HOTKEY_SHOW_OVERLAY_CRIME, "Mostra sovrapposizione crimine"},
    {TR_HOTKEY_ROTATE_BUILDING, "Ruota edificio"},
    {TR_HOTKEY_SHOW_OVERLAY_PROBLEMS, "Mostra sovrapposizione problemi"},
    {TR_HOTKEY_GO_TO_BOOKMARK_1, "Vai a segnaposto 1"},
    {TR_HOTKEY_GO_TO_BOOKMARK_2, "Vai a segnaposto 2"},
    {TR_HOTKEY_GO_TO_BOOKMARK_3, "Vai a segnaposto 3"},
    {TR_HOTKEY_GO_TO_BOOKMARK_4, "Vai a segnaposto 4"},
    {TR_HOTKEY_SET_BOOKMARK_1, "Imposta segnaposto 1"},
    {TR_HOTKEY_SET_BOOKMARK_2, "Imposta segnaposto 2"},
    {TR_HOTKEY_SET_BOOKMARK_3, "Imposta segnaposto 3"},
    {TR_HOTKEY_SET_BOOKMARK_4, "Imposta segnaposto 4"},
    {TR_HOTKEY_EDITOR_TOGGLE_BATTLE_INFO, "Mostra informazioni della Battaglia"},
    {TR_HOTKEY_EDIT_TITLE, "Premi nuova pulsante scorciatoia"},
    {TR_BUILDING_ROADBLOCK, "Blocco stradale"}, 
    {TR_BUILDING_ROADBLOCK_DESC, "Il Blocco stradale blocca i vagabondi."},
    {TR_BUILDING_ENGINEER_GUILD, "Gilda degli Ingienieri" },
    {TR_BUILDING_ENGINEER_GUILD_DESC, "Gli ingenieri di questa gilda lavorano senza sosta alla costruzione dei monumenti per la gloria di Roma" },
    {TR_BUILDING_GRAND_TEMPLE_ADD_MODULE, "Concedi un epiteto sul tempio" },
    {TR_BUILDING_GRAND_TEMPLE_CERES, "Tempio Grande di Cerere" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE, "Tempio Grande di Nettuno" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY, "Tempio Grande di Mercurio" },
    {TR_BUILDING_GRAND_TEMPLE_MARS, "Tempio Grande di Marte" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS, "Tempio Grande di Venere" },
    {TR_BUILDING_PANTHEON, "Pantheon" }, 
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC, "Tempio Grande di Cerere" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC, "Tempio Grande di Nettuno" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC, "Tempio Grande di Mercurio" },
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC, "Tempio Grande di Marte" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC, "Tempio Grande di Venere" },
    {TR_BUILDING_PANTHEON_DESC, "Pantheon" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_BONUS_DESC, "I braccianti si muovono il 50% più velocemente." },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_BONUS_DESC, "Garantisce +1 al raggio di azione di fontane e pozzi e + 2 alle riserve. Il costo del lavoro degli impianti idrici è ridotto del 50%. Le navi da commercio viaggiano il 25% più velocemente." }, 
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_BONUS_DESC, "I commercianti via terra e via mare hanno il 50% in più di capicità di carico. I commercianti via terra si muovono il 25% più velocemente." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_BONUS_DESC, "Addestra i soldati come una caserma. Possono essere costruiti quattro forti supplementari." },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_BONUS_DESC, "Giardini, statue e templi risplendono con maggiore bellezza aumentando la loro desiderabilità. Le case accumulano più beni e si impoveriscono più lentamente." }, 
    {TR_BUILDING_PANTHEON_BONUS_DESC, "Fornisce accesso a tutte le divinità. Vi si tengono festival annuali e riduce il personale dei templi del 25%" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_1_DESC, "I sacerdoti riducono il consumo di cibo del 20%." }, 
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_1_DESC, "I templi producono aurighi per l'ippodromo." },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_1_DESC, "I sacerdoti riducono il consumo di vettovaglie e mobili del 20%." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_1_DESC, "I templi generano cibo, in un ammontare pari al numero di case che coprono e lo consegnano al mercato." }, 
    {TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_1_DESC, "Il Tempio Grande produce vino in quantità in scala alla popolazione con accesso al tempio di Venere. I templi lo raccolgono e lo distribuiscono alle case." },
    {TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_2_DESC, "I sacerdoti accumulano e distribuiscono olio e un altro genere alimentare dai magazzini." }, 
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_2_DESC, "I sacerdoti espandono la capacità abitativa delle case del 5%. Il tempio grande fornisce acqua come una riserva" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_2_DESC, "I sacerdoti riducono il consumo di olio e vino del 20%." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_2_DESC, "I sacerdoti riducono il consumo di ogni bene del 10%" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_2_DESC, "I sacerdoti offrono intrattenimento e abbelliscono le case, aumentando l'attrattività delle abitiazioni senza bisogno di ulteriori decorazioni." },
    {TR_BUILDING_PANTHEON_MODULE_1_DESC, "Tutti i templi mandano dei sacerdoti al Patheon, diffondendo la fede nelle proprie divinità ed elargendo benedizioni." },
    {TR_BUILDING_PANTHEON_MODULE_2_DESC, "Le case con accesso al Patheon possono migliorare di un livello aggiuntivo." }, 
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_1, "Tempio di Cerere Promotrice" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_2, "Tempio di Cerere Preparatrice" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_1, "Tempio di Nettuno Equestre" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_2, "Tempio di Nettuno Adiutor" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_1, "Tempio di Mercurio Fortunus" },   
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_2, "Tempio dell'Abbondanza di Mercurio" },
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_1, "Tempio di Marte Ultore" }, 
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_2, "Tempio di Marte Quirino" }, 
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_1, "Tempio di Venere Verticordia" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_2, "Tempio di Venere Genetrice" }, 
    {TR_BUILDING_PANTHEON_DESC_MODULE_1, "Pantheon Ara Maxima" }, 
    {TR_BUILDING_PANTHEON_DESC_MODULE_2, "Pantheon Roma Aeterna" }, 
    {TR_BUILDING_GRAND_TEMPLE_MENU, "Tempio Grande" }, 
    {TR_BUILDING_WORK_CAMP, "Campo di Lavoro" }, 
    {TR_BUILDING_WORK_CAMP_DESC, "Gli operai si radunano qui per il trasporto dei materiali da costruzione del cantiere." }, 
    {TR_HEADER_HOUSING, "Alloggi"},
    {TR_ADVISOR_HOUSING_ROOM, "Gli alloggi della città hanno posti disponibili"},
    {TR_ADVISOR_HOUSING_NO_ROOM, "La città non ha alloggi disponibili."},
    {TR_ADVISOR_RESIDENCES_DEMANDING_POTTERY, "Residences demanding pottery"}, I residenti chiedono vettovaglie
    {TR_ADVISOR_RESIDENCES_DEMANDING_FURNITURE, "Residences demanding furniture"}, I residenti chiedono mobili/mobilio
    {TR_ADVISOR_RESIDENCES_DEMANDING_OIL, "Residences demanding oil"}, I residenti chiedono olio
    {TR_ADVISOR_RESIDENCES_DEMANDING_WINE, "Residences demanding wine"}, I residenti chiedono vino
    {TR_ADVISOR_TOTAL_NUM_HOUSES, "Total residences:"}, Totale residenti 
    {TR_ADVISOR_AVAILABLE_HOUSING_CAPACITY, "Available capacity:"}, Capacità rimanente
    {TR_ADVISOR_TOTAL_HOUSING_CAPACITY, "Total capacity:"}, Capacità complessiva
    {TR_ADVISOR_ADVISOR_HEADER_HOUSING, "Popolazione - alloggi"},
    {TR_ADVISOR_BUTTON_GRAPHS, "Graphs"}, Grafici
    {TR_ADVISOR_HOUSING_PROSPERITY_RATING, "Housing prosperity rating is"}, Il rating di prosperità di questa abitazione è: 
    {TR_ADVISOR_PERCENTAGE_IN_VILLAS_PALACES, "Percentage of your population in villas and palaces is"}, La percentuale di popolazione in ville e palazzi è:
    {TR_ADVISOR_PERCENTAGE_IN_TENTS_SHACKS, "Percentage of your population in tents and shacks is"}, La percentuale di popolazione in tende e baracche è:
    {TR_ADVISOR_AVERAGE_TAX, "Average tax income per residence is"}, Introito medio per residente: 
    {TR_ADVISOR_AVERAGE_AGE, "Average age of your population is"}, Età media della popolazione:
    {TR_ADVISOR_PERCENT_IN_WORKFORCE, "Percentage of your population in the workforce is"}, Percentuale della popolazione come forza lavoro:
    {TR_ADVISOR_BIRTHS_LAST_YEAR, "Births last year:"}, Nascite nell'ultimo anno:
    {TR_ADVISOR_DEATHS_LAST_YEAR, "Deaths last year:"}, Morti nell'ultimo anno:
    {TR_ADVISOR_TOTAL_POPULATION, "residents total"}, Residenti totali
    {TR_REQUIRED_RESOURCES, "Risorse consegnate per la fase attuale:"},
    {TR_BUILDING_GRAND_TEMPLE_CONSTRUCTION_DESC, "La costruzione di grandi templi richiede materiale conservato in un magazzino, operai da un campo di lavoro e ingegneri da una gilda di ingegneri."},
    {TR_CONSTRUCTION_PHASE, "Fase della costruzione:"},
    {TR_ADD_MODULE, "Riconsacrare il tempio?"},
    {TR_BUILDING_TEMPLE_MODULE_CONSTRUCTED, "Epiteto conferito."},
    {TR_BUILDING_CERES_TEMPLE_QUOTE, "First Ceres taught the laboring hind to plow\nThe pregnant Earth, and quickening seed to sow.\nShe first for Man did wholesome food provide\nAnd with just laws the wicked world supplied.\n-Ovid, the Metamorphoses, Book V" },
    { TR_BUILDING_NEPTUNE_TEMPLE_QUOTE, "The billows fall, while Neptune lays his mace\nOn the rough sea,and smooths its furrowed face.\nAlready Triton, at his call, appears Above the waves;\na Tyrian robe he wears;\nAnd in his hand a crooked trumpet bears.\n-Ovid, the Metamorphoses, Book I"},
    {TR_BUILDING_MERCURY_TEMPLE_QUOTE, "Cattle and fat sheep can all be had for the raiding,\ntripods for the trading, and tawny headed stallions.\nBut a mans's lifebreath cannot come back again-\nno raiders in force, no trading brings it back, \nonce it slips through a man's clenched teeth.\n-Homer, The Iliad, Book IX"},
    {TR_BUILDING_MARS_TEMPLE_QUOTE, "For Mars, repair his broken axletrees and blunted war,\nAnd send him forth again with furbished arms,\nTo wake the lazy war with trumpets' loud alarms.\n-Virgil, the Aeneid, Book VIII" },
    {TR_BUILDING_VENUS_TEMPLE_QUOTE, "By winged Cupid, and Venus, his tender mother,\nhow great the joy I had!\nHow clearly passion touched me!\nHow my whole heart melted where I lay!\n-Ovid, the Metamorphoses, Book IX" },
    {TR_BUILDING_PANTHEON_QUOTE, "The gates of heaven unfold: Jupiter summons all\nThe gods to council in the common hall.\nSublimely seated, he surveys from far\nThe fields, the camp, the fortune of the war,\nAnd all the inferior world. From first to last,\nThe sovereign senate in degrees are placed.\n-Virgil, The Aeneid, Book X" },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_1, "(Podium)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_2, "(Portico)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_3, "(Cella)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_4, "(Praecinctum)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_5, "(Dedicatio)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_1_TEXT, "Laborers are constructing the podium that will elevate the temple and provide a solid foundation to weather the passage of time." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_2_TEXT, "Artisans are crafting the portico, which bears the temple's sacrificial altar." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_3_TEXT, "Engineers are crafting the cella, the temple interior that houses the sacred images." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_4_TEXT, "Work on the temple praecinctum has begun, where worshippers will gather outdoors for public ceremonies." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_5_TEXT, "With the temple nearly complete, priests gather to perform the rites of consecration." },
    {TR_BUILDING_MENU_TREES, "Alberi" },
    {TR_BUILDING_MENU_PATHS, "Sentieri" },
    {TR_BUILDING_MENU_PARKS, "Parchi"},
    {TR_BUILDING_SMALL_POND, "Piccolo stagno"},
    {TR_BUILDING_LARGE_POND, "Grande stagno"},
    {TR_BUILDING_PINE_TREE, "Pino"},
    {TR_BUILDING_FIR_TREE, "Abete" },
    {TR_BUILDING_OAK_TREE, "Quercia" },
    {TR_BUILDING_ELM_TREE, "Olmo" },
    {TR_BUILDING_FIG_TREE, "Fico" },
    {TR_BUILDING_PLUM_TREE, "Prugno" },
    {TR_BUILDING_PALM_TREE, "Palma" },
    {TR_BUILDING_DATE_TREE, "Palma da dattero" },
    {TR_BUILDING_PINE_PATH, "Sentiero con pini" },
    {TR_BUILDING_FIR_PATH, "Sentiero con abeti" },
    {TR_BUILDING_OAK_PATH, "Sentiero con querce" },
    {TR_BUILDING_ELM_PATH, "Sentiero con olmi" },
    {TR_BUILDING_FIG_PATH, "Sentiero con fichi" },
    {TR_BUILDING_PLUM_PATH, "Sentiero con prugni" },
    {TR_BUILDING_PALM_PATH, "Sentiero con palme" },
    {TR_BUILDING_DATE_PATH, "Sentiero con datteri" },
    {TR_BUILDING_BLUE_PAVILION, "Padiglione blu" },
    {TR_BUILDING_RED_PAVILION, "Padiglione rosso"},
    {TR_BUILDING_ORANGE_PAVILION, "Padiglione arancione"},
    {TR_BUILDING_YELLOW_PAVILION, "Padiglione giallo"},
    {TR_BUILDING_GREEN_PAVILION, "Padiglione verde" },
    {TR_BUILDING_SMALL_STATUE_ALT, "Statua divinità" },
    {TR_BUILDING_SMALL_STATUE_ALT_B, "Statua senatore"},
    {TR_BUILDING_OBELISK, "Obelisco" },
    {TR_BUILDING_POND_DESC, "Gli stagni attingono dalle riserve d'acqua della città fornendo acqua per le piante e un fresco, rilassante ristoro per le persone. Tutti i cittadini vorrebbero vivere vicino a uno stagno." },
    {TR_BUILDING_WINDOW_POND, "Stagno"},
    {TR_BUILDING_OBELISK_DESC, "Un monumento prestigioso, opera di un antico Re del nilo. Gli egizioni non lo utilizzavano."},
    {TR_ADVISOR_FINANCE_LEVIES, "Tasse edilizie"},
    {TR_CONFIRM_DELETE_MONUMENT, "Demolire questo monumento"},
    {TR_SELECT_EPITHET_PROMPT_HEADER, "Seleziona l'epiteto da conferire"},
    {TR_SELECT_EPITHET_PROMPT_TEXT, "Bestowing an epithet will permanently dedicate your temple to one aspect of its deity, imbuing priests with divine power. This will cost 1000 Dn." },
    {TR_BUILDING_INFO_MONTHLY_LEVY, "/mese"},
    {TR_BUILDING_MESS_HALL, "Supply post"},
    {TR_BUILDING_MESS_HALL_DESC, "The supply post collects food from city granaries to feed soldiers stationed at city forts. A poorly supplied supply post will slow recruitment and damage morale."},
    {TR_BUILDING_MESS_HALL_FULFILLMENT, "Le scorte di cibo dell'ultimo mese:"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER, "I soldati sono: " }, 
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_1, "Pasciuti" }, 
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_2, "Sazi"}, 
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_3, "Affamati"}, 
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_4, "Molto Affamati"}, 
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_5, "Morenti di fame"},
    {TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_1, "Una dieta variegata per i tuoi soldati aumenta considerevolmente il loro morale."},
    {TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_2, "Una dieta diversa e nutriente dieta per i tuoi soldati aumenta di molto il morale."},
    {TR_BUILDING_MESS_HALL_NO_SOLDIERS, "Non hai soldati da sfamare." },
    {TR_BUILDING_MESS_HALL_MONTHS_FOOD_STORED, "Mesi di cibo in magazzino:" },
    {TR_BUILDING_BARRACKS_FOOD_WARNING, "Food shortages at your supply post are slowing soldier recruitment."},
    {TR_BUILDING_BARRACKS_FOOD_WARNING_2, "Critical food shortages at your supply post are crippling soldier recruitment." },
    {TR_BUILDING_LEGION_FOOD_WARNING_1, "La recente carenza di cibo ha ridotto il morale"},
    {TR_BUILDING_LEGION_FOOD_WARNING_2, "La recente carenza di cibo ha ridotto di molto il morale"},
    {TR_BUILDING_LEGION_STARVING, "Carenza di cibo" },
    {TR_ADVISOR_LEGION_FOOD_SATISFIED, "I tuoi soldati hanno tutto il cibo di cui hanno bisogno."},
    {TR_ADVISOR_LEGION_FOOD_NEEDED, "I tuoi soldati necessitano di più cibo." },
    {TR_ADVISOR_LEGION_FOOD_CRITICAL, "I tuoi soldati muoiono di fame!"},
    {TR_ADVISOR_LEGION_MONTHS_FOOD_STORED, "Months of food stored at supply post:" },
    {TR_CITY_MESSAGE_TITLE_MESS_HALL_NEEDS_FOOD, "Soldati affamati" },
    {TR_CITY_MESSAGE_TEXT_MESS_HALL_NEEDS_FOOD, "Your supply post is critically low on food, and the morale of your troops wanes. Ensure your supply post can access a well-stocked granary."},
    {TR_CITY_MESSAGE_TEXT_MESS_HALL_MISSING, "Your city has lost its supply post, and your troops starve. Construct a supply post immediately."},
    {TR_MARKET_SPECIAL_ORDERS_HEADER, "Goods to collect"},
    {TR_WARNING_NO_MESS_HALL, "You must first build a supply post to feed your soldiers." },
    {TR_WARNING_MAX_GRAND_TEMPLES, "Solo due Templi Grandi possono essere costruiti." },
    {TR_CITY_MESSAGE_TITLE_GRAND_TEMPLE_COMPLETE, "Tempio Grande completato"},
    {TR_CITY_MESSAGE_TEXT_GRAND_TEMPLE_COMPLETE, "Priests and worshippers flock to the new grand temple for the rites of dedication. Your people stand in awe of the majesty of your works, and your chosen deity showers you with favor."},
    {TR_CITY_MESSAGE_TITLE_MERCURY_BLESSING, "A blessing from Mercury" }, Una benedizione da Mercurio
    {TR_CITY_MESSAGE_TEXT_MERCURY_BLESSING, "Deliziato dalla tua devozione, Mercurio ha benedetto la tua industria, fornendo materiali grezzi per i tuoi artigiani."},
    {TR_FIGURE_TYPE_WORK_CAMP_WORKER, "Capomastro"},
    {TR_FIGURE_TYPE_WORK_CAMP_SLAVE, "Trasportatore"},
    {TR_FIGURE_TYPE_WORK_CAMP_ENGINEER, "Ingeniere"}, 
    {TR_FIGURE_TYPE_MESS_HALL_BUYER, "Borgomastro"}, 
    {TR_FIGURE_TYPE_MESS_HALL_COLLECTOR, "Operaio"}, 
    {TR_BUILDING_CERES_TEMPLE_MODULE_DESC, "The grand temple organizes priests of Ceres to aid in distributing food and oil to your hungry citizens."},
    {TR_BUILDING_VENUS_TEMPLE_MODULE_DESC, "The grand temple allows priests of Venus to supply sacred wine to your citizens." },
    {TR_BUILDING_MARS_TEMPLE_MODULE_DESC, "The grand temple organizes priests of Mars to supply food to your supply post."},
    {TR_BUILDING_SMALL_TEMPLE_CERES_NAME, "Tempio di Cerere"},
    {TR_BUILDING_SMALL_TEMPLE_NEPTUNE_NAME, "Tempio di Nettuno"},
    {TR_BUILDING_SMALL_TEMPLE_MERCURY_NAME, "Tempio di Mercurio"},
    {TR_BUILDING_SMALL_TEMPLE_MARS_NAME, "Tempio di Marte"},
    {TR_BUILDING_SMALL_TEMPLE_VENUS_NAME, "Tempio di Venere"},
    {TR_FIGURE_TYPE_PRIEST_BUYER, "Priest" },
    // Transcription of mission_exact4.wav
    {TR_PHRASE_FIGURE_MISSIONARY_EXACT_4, "\"I'll do what I can to calm these barbarians down. I'm sure they'll stop attacking the city when I've had a word with them.\"" },
    {TR_CITY_MESSAGE_TITLE_PANTHEON_FESTIVAL, "An annual festival"},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_CERES, "The faithful flock to temples for the celebration of Cerealia, in honor of Ceres. Farmers offer sacrifices for rich harvests in the coming years."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_NEPTUNE, "Today is the festival of Neptunalia, in honor of Neptune. The faithful build huts of branch and foliage and make merry under the blazing heat of the midsummer sun."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MERCURY, "Traders and merchants turn out in droves to celebrate Mercuralia. Sacred water is sprinkled on ships and warehouses in hopes of divine protection from the god Mercury."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MARS, "Citizens gather outside the city for the celebration of Equirria, to seek the favor of Mars. The air is filled with the thunder of hooves and the creaking of chariots as the faithful race in honor of their god."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_VENUS, "The faithful gather for the celebration of Veneralia, a day sacred to Venus. Your citizens beseech her for good fortune in matters of the heart."},
    {TR_TOOLTIP_BUTTON_DELETE_READ_MESSAGES, "Cancella messaggi già letti"},
    {TR_TOOLTIP_BUTTON_MOTHBALL_ON, "Disattiva questo edificio"}, 
    {TR_TOOLTIP_BUTTON_MOTHBALL_OFF, "Attiva questo edificio"}, 
    {TR_TOOLTIP_BUTTON_ACCEPT_MARKET_LADIES, "Allow market ladies to buy from here"}, Consenti alle donne del mercato di comprare
    {TR_TOOLTIP_BUTTON_ACCEPT_TRADE_CARAVAN, "Allow caravans to trade here"}, Consenti alle carovane di comprare
    {TR_TOOLTIP_BUTTON_ACCEPT_TRADE_SHIPS, "Allow trade ships to trade here"}, Consenti alle navi commerciali di comprare
    {TR_CONFIG_HEADER_CITY_MANAGEMENT_CHANGES, "Gestione della città"},
    {TR_BUILDING_LIGHTHOUSE, "Lighthouse"},
    {TR_BUILDING_LIGHTHOUSE_PHASE_1, "(Foundation)" },
    {TR_BUILDING_LIGHTHOUSE_PHASE_2, "(Pedestal)" },
    {TR_BUILDING_LIGHTHOUSE_PHASE_3, "(Tower)" },
    {TR_BUILDING_LIGHTHOUSE_PHASE_4, "(Crown)" },
    {TR_BUILDING_LIGHTHOUSE_PHASE_1_TEXT, "Gli ingegneri stanno gettando una solida base per sostenere il peso di una grande torre di pietra." },
    {TR_BUILDING_LIGHTHOUSE_PHASE_2_TEXT, "I muratori stanno costruendo il piedistallo che innalzerà la fiamma del faro molto al di sopra dell'orizzonte." },
    {TR_BUILDING_LIGHTHOUSE_PHASE_3_TEXT, "La torre del faro si erge ancora più in alto ogni giorno, mentre i muratori praticano con cura il loro mestiere." },
    {TR_BUILDING_LIGHTHOUSE_PHASE_4_TEXT, "Gli ingegneri stanno eseguendo gli ultimi ritocchi al faro. Presto risplenderà per miglia e miglia, guidando le navi verso casa." },
    {TR_BUILDING_LIGHTHOUSE_CONSTRUCTION_DESC, "La costruzione del faro richiede materiale immagazzinato in un magazzino, operai di un campo di lavoro e ingegneri di una gilda di ingegneri." },
    {TR_BUILDING_LIGHTHOUSE_BONUS_DESC, "Le navi da pesca si muovono il 10% più velocemente. Le tempeste marine durano la metà del tempo." },
    {TR_EDITOR_ALLOWED_BUILDINGS_MONUMENTS, "Monumenti"},
    {TR_CITY_MESSAGE_TEXT_LIGHTHOUSE_COMPLETE, "Il faro completato, una possente torre di pietra, si staglia all'orizzonte. Che il suo faro guidi le navi fino alla fine dei tempi." },
    {TR_CITY_MESSAGE_TEXT_PANTHEON_COMPLETE, "Il Pantheon è completato. Non ha rivali come monumento al grande potere degli dei e del popolo di Roma." },
    {TR_CITY_MESSAGE_TITLE_MONUMENT_COMPLETE, "Monumento completato" },
    {TR_CITY_MESSAGE_TITLE_NEPTUNE_BLESSING, "Una benedizione da Nettuno"},
    {TR_CITY_MESSAGE_TEXT_NEPTUNE_BLESSING, "Premiando la devozione della vostra città, Nettuno concede ai commercianti un passaggio senza intoppi per dodici mesi, durante i quali le vostre esportazioni otterranno la metà del prezzo extra."},
    {TR_CITY_MESSAGE_TITLE_VENUS_BLESSING, "Una benedizione da Venere" },
    {TR_CITY_MESSAGE_TEXT_VENUS_BLESSING, "Deliziata dalla gioiosa riverenza che le viene mostrata, Venere concede giovinezza, salute e felicità al vostro popolo, aumentando la dimensione della vostra popolazione attiva." },
    {TR_BUILDING_MENU_STATUES, "Statue" },
    {TR_BUILDING_MENU_GOV_RES, "Governor's mansions" },
    {TR_OVERLAY_ROADS, "Strade" },
    {TR_NO_MODS_TITLE, "La cartella mods non è stata trovata" },
    {TR_NO_MODS_MESSAGE,
        "La tua installazione di Caesar 3 non ha la cartella mods installata correttamente. "
        "I nuovi assett non saranno mostrati correttamente.\n"
        "Assicurati che la cartella '/mods' esiste nella cartella principale della tua installazione di Caesar 3. " },
    {TR_WARNING_WATER_NEEDED_FOR_LIGHTHOUSE, "Lighthouse must be placed near water"},
    {TR_TOOLTIP_OVERLAY_PANTHEON_ACCESS, "Questa casa ha accesso a tutti i cinque dei del Pantheon"},
    {TR_BUILDING_LEGION_FOOD_BONUS, "L'abbondanza di cibo aumenta il morale" },
    {TR_BUILDING_LEGION_FOOD_STATUS, "Stato del cibo"},
    {TR_TOOLTIP_BUTTON_ACCEPT_QUARTERMASTER, "Permetti al capomastro di prelevare cibo da qui"},
    {TR_WARNING_RESOURCES_NOT_AVAILABLE, "Non puoi ottenere i materiali necessari"},
    {TR_CONFIG_GP_CH_MONUMENTS_BOOST_CULTURE_RATING, "Completed grand temples grant +8 culture rating"},
    {TR_BUTTON_BACK_TO_MAIN_MENU, "Torna al menu principale" },
    {TR_LABEL_PAUSE_MENU, "Pausa" },
    {TR_OVERLAY_LEVY, "Arruolamenti" },
    {TR_TOOLTIP_OVERLAY_LEVY, " denari pagati mensilmente in arruolamenti." }, 
    {TR_MAP_EDITOR_OPTIONS, "Impostazioni scenario" }
};

void translation_italian(const translation_string **strings, int *num_strings)
{
    *strings = all_strings;
    *num_strings = sizeof(all_strings) / sizeof(translation_string);
}
