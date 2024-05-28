const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        //.partySize = 0,
        .party = NULL_PARTY(NULL),
    },

    [TRAINER_SAWYER_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer1),

    },

    [TRAINER_WINONA_AQUA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_DELTA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING,
        .party = ITEM_CUSTOM_MOVES(WinonaAquaHideout),
    },

    [TRAINER_WINONA_AQUA_HIDEOUT_PARTNER] =
    {
        .trainerClass = TRAINER_CLASS_DELTA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(WinonaAquaHideout),
    },

    [TRAINER_MATT_PARTNER] =
    {
		.trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .trainerName = _("MATT"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Matt),
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntAquaHideout4),

    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSeafloorCavern1),

    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSeafloorCavern2),

    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSeafloorCavern3),

    },

    [TRAINER_GABRIELLE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle1),

    },

    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntPetalburgWoods),

    },

    [TRAINER_MARCEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("MARCEL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Marcel),

    },

    [TRAINER_ALBERTO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ALBERTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alberto),

    },

    [TRAINER_ED] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("ED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ed),

    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSeafloorCavern4),

    },

    [TRAINER_DECLAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DECLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Declan),

    },

    [TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntRusturfTunnel),

    },

    [TRAINER_GRUNT_WEATHER_INST_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntWeatherInst1),

    },

    [TRAINER_GRUNT_WEATHER_INST_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntWeatherInst2),

    },

    [TRAINER_GRUNT_WEATHER_INST_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntWeatherInst3),

    },

    [TRAINER_GRUNT_MUSEUM_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMuseum1),

    },

    [TRAINER_GRUNT_MUSEUM_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMuseum2),

    },

    [TRAINER_GRUNT_SPACE_CENTER_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter1),

    },

    [TRAINER_GRUNT_MT_PYRE_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMtPyre1),

    },

    [TRAINER_GRUNT_MT_PYRE_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMtPyre2),

    },

    [TRAINER_GRUNT_MT_PYRE_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMtPyre3),

    },

    [TRAINER_GRUNT_WEATHER_INST_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntWeatherInst4),

    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntAquaHideout5),

    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntAquaHideout6),

    },

    [TRAINER_FREDRICK] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("FREDRICK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Fredrick),

    },

    [TRAINER_MATT] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .trainerName = _("Matt"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Matt),

    },

    [TRAINER_ZANDER] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("ZANDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Zander),

    },

    [TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("SHELLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(ShellyWeatherInstitute),

    },

    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("SHELLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(ShellySeafloorCavern),

    },

    [TRAINER_ARCHIE] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("ARCHIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Archie),

    },

    [TRAINER_LEAH] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("LEAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Leah),

    },

    [TRAINER_DAISY] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("DAISY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Daisy),

    },

    [TRAINER_ROSE_1] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rose1),

    },

    [TRAINER_FELIX] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("FELIX"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Felix),

    },

    [TRAINER_VIOLET] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("VIOLET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Violet),
    },

    [TRAINER_ROSE_2] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rose2),
    },

    [TRAINER_ROSE_3] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rose3),
    },

    [TRAINER_ROSE_4] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rose4),

    },

    [TRAINER_ROSE_5] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rose5),

    },

    [TRAINER_DUSTY_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dusty1),

    },

    [TRAINER_CHIP] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("CHIP"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Chip),

    },

    [TRAINER_FOSTER] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("FOSTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Foster),

    },

    [TRAINER_DUSTY_2] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dusty2),

    },

    [TRAINER_DUSTY_3] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dusty3),

    },

    [TRAINER_DUSTY_4] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dusty4),

    },

    [TRAINER_DUSTY_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dusty5),

    },

    [TRAINER_GABBY_AND_TY_1] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GabbyAndTy1),

    },

    [TRAINER_GABBY_AND_TY_2] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GabbyAndTy2),

    },

    [TRAINER_GABBY_AND_TY_3] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GabbyAndTy3),

    },

    [TRAINER_GABBY_AND_TY_4] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GabbyAndTy4),

    },

    [TRAINER_GABBY_AND_TY_5] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GabbyAndTy5),

    },

    [TRAINER_GABBY_AND_TY_6] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GabbyAndTy6),

    },

    [TRAINER_LOLA_1] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lola1),

    },

    [TRAINER_AUSTINA] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("AUSTINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Austina),

    },

    [TRAINER_GWEN] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("GWEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Gwen),

    },

    [TRAINER_LOLA_2] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lola2),

    },

    [TRAINER_LOLA_3] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lola3),

    },

    [TRAINER_LOLA_4] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lola4),

    },

    [TRAINER_LOLA_5] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lola5),

    },

    [TRAINER_RICKY_1] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ricky1),

    },

    [TRAINER_SIMON] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("SIMON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Simon),

    },

    [TRAINER_CHARLIE] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("CHARLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Charlie),

    },

    [TRAINER_RICKY_2] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ricky2),

    },

    [TRAINER_RICKY_3] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ricky3),

    },

    [TRAINER_RICKY_4] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ricky4),

    },

    [TRAINER_RICKY_5] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ricky5),

    },

    [TRAINER_RANDALL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("RANDALL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Randall),

    },

    [TRAINER_PARKER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("PARKER"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Parker),

    },

    [TRAINER_GEORGE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("GEORGE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(George),

    },

    [TRAINER_BERKE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("BERKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Berke),

    },

    [TRAINER_BRAXTON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("BRAXTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Braxton),

    },

    [TRAINER_VINCENT] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("VINCENT"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Vincent),

    },

    [TRAINER_LEROY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("LEROY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Leroy),

    },

    [TRAINER_WILTON_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wilton1),

    },

    [TRAINER_EDGAR] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Yadriel"),
        .items = {ITEM_FULL_RESTORE, ITEM_X_ATTACK, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edgar),

    },

    [TRAINER_ALBERT] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ALBERT"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Albert),

    },

    [TRAINER_SAMUEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("SAMUEL"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Samuel),

    },

    [TRAINER_VITO] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("VITO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Vito),

    },

    [TRAINER_OWEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("OWEN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Owen),

    },

    [TRAINER_WILTON_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wilton2),

    },

    [TRAINER_WILTON_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wilton3),

    },

    [TRAINER_WILTON_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wilton4),

    },

    [TRAINER_WILTON_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wilton5),

    },

    [TRAINER_WARREN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WARREN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Warren),

    },

    [TRAINER_MARY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MARY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Mary),

    },

    [TRAINER_ALEXIA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ALEXIA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alexia),

    },

    [TRAINER_JODY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JODY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jody),

    },

    [TRAINER_WENDY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("WENDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wendy),

    },

    [TRAINER_KEIRA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("KEIRA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Keira),

    },

    [TRAINER_BROOKE_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brooke1),

    },

    [TRAINER_JENNIFER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JENNIFER"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jennifer),

    },

    [TRAINER_HOPE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("HOPE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hope),

    },

    [TRAINER_SHANNON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("SHANNON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shannon),

    },

    [TRAINER_MICHELLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MICHELLE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Michelle),

    },

    [TRAINER_CAROLINE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CAROLINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Caroline),

    },

    [TRAINER_JULIE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JULIE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Julie),

    },

    [TRAINER_BROOKE_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brooke2),

    },

    [TRAINER_BROOKE_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brooke3),

    },

    [TRAINER_BROOKE_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brooke4),

    },

    [TRAINER_BROOKE_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brooke5),

    },

    [TRAINER_PATRICIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("PATRICIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Patricia),

    },

    [TRAINER_KINDRA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KINDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kindra),

    },

    [TRAINER_TAMMY] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("TAMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tammy),

    },

    [TRAINER_VALERIE_1] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Valerie1),

    },

    [TRAINER_TASHA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("TASHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tasha),

    },

    [TRAINER_VALERIE_2] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Valerie2),

    },

    [TRAINER_VALERIE_3] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Valerie3),

    },

    [TRAINER_VALERIE_4] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Valerie4),

    },

    [TRAINER_VALERIE_5] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Valerie5),

    },

    [TRAINER_CINDY_1] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cindy1),

    },

    [TRAINER_DAPHNE] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("DAPHNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE, 
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Daphne),

    },

    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter2),

    },

    [TRAINER_CINDY_2] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cindy2),

    },

    [TRAINER_BRIANNA] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("BRIANNA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brianna),

    },

    [TRAINER_NAOMI] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("NAOMI"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Naomi),

    },

    [TRAINER_CINDY_3] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cindy3),

    },

    [TRAINER_CINDY_4] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cindy4),

    },

    [TRAINER_CINDY_5] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cindy5),

    },

    [TRAINER_CINDY_6] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cindy6),

    },

    [TRAINER_MELISSA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("MELISSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Melissa),

    },

    [TRAINER_SHEILA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("SHEILA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sheila),

    },

    [TRAINER_SHIRLEY] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("SHIRLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shirley),

    },

    [TRAINER_JESSICA_1] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jessica1),

    },

    [TRAINER_CONNIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("CONNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Connie),

    },

    [TRAINER_BRIDGET] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("BRIDGET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bridget),

    },

    [TRAINER_OLIVIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("OLIVIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Olivia),

    },

    [TRAINER_TIFFANY] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("TIFFANY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tiffany),

    },

    [TRAINER_JESSICA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jessica2),

    },

    [TRAINER_JESSICA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jessica3),

    },

    [TRAINER_JESSICA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jessica4),

    },

    [TRAINER_JESSICA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jessica5),

    },

    [TRAINER_WINSTON_1] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winston1),

    },

    [TRAINER_MOLLIE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("MOLLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Mollie),

    },

    [TRAINER_GARRET] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("GARRET"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Garret),

    },

    [TRAINER_WINSTON_2] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winston2),

    },

    [TRAINER_WINSTON_3] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winston3),

    },

    [TRAINER_WINSTON_4] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winston4),

    },

    [TRAINER_WINSTON_5] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winston5),

    },

    [TRAINER_STEVE_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Steve1),

    },

    [TRAINER_THALIA_1] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Thalia1),

    },

    [TRAINER_MARK] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("MARK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Mark),

    },

    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMtChimney1),

    },

    [TRAINER_STEVE_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Steve2),

    },

    [TRAINER_STEVE_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Steve3),

    },

    [TRAINER_STEVE_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Steve4),

    },

    [TRAINER_STEVE_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Steve5),

    },

    [TRAINER_LUIS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("LUIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Luis),

    },

    [TRAINER_DOMINIK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DOMINIK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dominik),

    },

    [TRAINER_DOUGLAS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DOUGLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Douglas),

    },

    [TRAINER_DARRIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DARRIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Darrin),

    },

    [TRAINER_TONY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tony1),

    },

    [TRAINER_JEROME] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("JEROME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jerome),

    },

    [TRAINER_MATTHEW] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MATTHEW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Matthew),

    },

    [TRAINER_DAVID] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DAVID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(David),

    },

    [TRAINER_SPENCER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("SPENCER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Spencer),

    },

    [TRAINER_ROLAND] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("ROLAND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Roland),

    },

    [TRAINER_NOLEN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("NOLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
		.party = ITEM_CUSTOM_MOVES_NO_HARD(Nolen),

    },

    [TRAINER_STAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("STAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Stan),

    },

    [TRAINER_BARRY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("BARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Barry),

    },

    [TRAINER_DEAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DEAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dean),

    },

    [TRAINER_RODNEY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("RODNEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rodney),

    },

    [TRAINER_RICHARD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("RICHARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Richard),

    },

    [TRAINER_HERMAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HERMAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Herman),

    },

    [TRAINER_SANTIAGO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("SANTIAGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Santiago),

    },

    [TRAINER_GILBERT] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("GILBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Gilbert),

    },

    [TRAINER_FRANKLIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("FRANKLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Franklin),

    },

    [TRAINER_KEVIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("KEVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kevin),

    },

    [TRAINER_JACK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("JACK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jack),

    },

    [TRAINER_DUDLEY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DUDLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dudley),

    },

    [TRAINER_CHAD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CHAD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Chad),

    },

    [TRAINER_TONY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tony2),

    },

    [TRAINER_TONY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tony3),

    },

    [TRAINER_TONY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tony4),

    },

    [TRAINER_TONY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tony5),

    },

    [TRAINER_TAKAO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("TAKAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Takao),

    },

    [TRAINER_HITOSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("HITOSHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hitoshi),

    },

    [TRAINER_KIYO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KIYO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kiyo),

    },

    [TRAINER_KOICHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOICHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Koichi),

    },

    [TRAINER_NOB_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nob1),

    },

    [TRAINER_NOB_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nob2),

    },

    [TRAINER_NOB_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nob3),

    },

    [TRAINER_NOB_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nob4),

    },

    [TRAINER_NOB_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nob5),

    },

    [TRAINER_YUJI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("YUJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Yuji),

    },

    [TRAINER_DAISUKE] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("DAISUKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Daisuke),

    },

    [TRAINER_ATSUSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("ATSUSHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Atsushi),

    },

    [TRAINER_KIRK] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("KIRK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kirk),

    },

    [TRAINER_ARCHIE_2] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("Archie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntAquaHideout7),

    },

    [TRAINER_ARCHIE_ALLY] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("Archie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(ArchieAlly),

    },

    [TRAINER_SHAWN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("SHAWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shawn),

    },

    [TRAINER_FERNANDO_1] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando1),

    },

    [TRAINER_DALTON_1] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dalton1),

    },

    [TRAINER_DALTON_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dalton2),

    },

    [TRAINER_DALTON_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dalton3),

    },

    [TRAINER_DALTON_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dalton4),

    },

    [TRAINER_DALTON_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dalton5),

    },

    [TRAINER_COLE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("COLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cole),

    },

    [TRAINER_JEFF] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("JEFF"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jeff),

    },

    [TRAINER_AXLE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("AXLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Axle),

    },

    [TRAINER_JACE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("JACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jace),

    },

    [TRAINER_KEEGAN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("KEEGAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Keegan),

    },

    [TRAINER_BERNIE_1] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bernie1),

    },

    [TRAINER_BERNIE_2] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bernie2),

    },

    [TRAINER_BERNIE_3] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bernie3),

    },

    [TRAINER_BERNIE_4] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bernie4),

    },

    [TRAINER_BERNIE_5] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bernie5),

    },

    [TRAINER_DREW] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Drew),

    },

    [TRAINER_BEAU] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BEAU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Beau),

    },

    [TRAINER_LARRY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Larry),

    },

    [TRAINER_SHANE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("SHANE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shane),

    },

    [TRAINER_JUSTIN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("JUSTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Justin),

    },

    [TRAINER_ETHAN_1] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ethan1),

    },

    [TRAINER_AUTUMN] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("AUTUMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Autumn),

    },

    [TRAINER_TRAVIS] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Travis),

    },

    [TRAINER_ETHAN_2] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ethan2),

    },

    [TRAINER_ETHAN_3] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ethan3),

    },

    [TRAINER_ETHAN_4] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ethan4),

    },

    [TRAINER_ETHAN_5] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ethan5),

    },

    [TRAINER_BRENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("BRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brent),

    },

    [TRAINER_DONALD] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("DONALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Donald),

    },

    [TRAINER_TAYLOR] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("TAYLOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Taylor),

    },

    [TRAINER_JEFFREY_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jeffrey1),

    },

    [TRAINER_DEREK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("DEREK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Derek),

    },

    [TRAINER_JEFFREY_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jeffrey2),

    },

    [TRAINER_JEFFREY_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jeffrey3),

    },

    [TRAINER_JEFFREY_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jeffrey4),

    },

    [TRAINER_JEFFREY_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jeffrey5),

    },

    [TRAINER_EDWARD] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edward),

    },

    [TRAINER_PRESTON] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("PRESTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Preston),

    },

    [TRAINER_VIRGIL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("VIRGIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Virgil),

    },

    [TRAINER_BLAKE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("BLAKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Blake),

    },

    [TRAINER_WILLIAM] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("WILLIAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(William),

    },

    [TRAINER_JOSHUA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("JOSHUA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Joshua),

    },

    [TRAINER_CAMERON_1] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cameron1),

    },

    [TRAINER_CAMERON_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cameron2),

    },

    [TRAINER_CAMERON_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cameron3),

    },

    [TRAINER_CAMERON_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cameron4),

    },

    [TRAINER_CAMERON_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cameron5),

    },

    [TRAINER_JACLYN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACLYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jaclyn),

    },

    [TRAINER_HANNAH] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("HANNAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hannah),

    },

    [TRAINER_SAMANTHA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("SAMANTHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Samantha),

    },

    [TRAINER_MAURA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MAURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Maura),

    },

    [TRAINER_KAYLA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("KAYLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kayla),

    },

    [TRAINER_ALEXIS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("ALEXIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alexis),

    },

    [TRAINER_JACKI_1] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jacki1),

    },

    [TRAINER_JACKI_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jacki2),

    },

    [TRAINER_JACKI_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jacki3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jacki3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jacki3),

    },

    [TRAINER_JACKI_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jacki4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jacki4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jacki4),

    },

    [TRAINER_JACKI_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jacki5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jacki5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jacki5),

    },

    [TRAINER_WALTER_1] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Walter1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Walter1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Walter1),

    },

    [TRAINER_MICAH] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("MICAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Micah},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Micah),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Micah),

    },

    [TRAINER_THOMAS] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("THOMAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Thomas},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Thomas),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Thomas),

    },

    [TRAINER_WALTER_2] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Walter2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Walter2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Walter2),

    },

    [TRAINER_WALTER_3] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Walter3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Walter3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Walter3),

    },

    [TRAINER_WALTER_4] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Walter4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Walter4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Walter4),

    },

    [TRAINER_WALTER_5] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Walter5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Walter5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Walter5),

    },

    [TRAINER_SIDNEY] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = _("SIDNEY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(Sidney},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sidney),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sidney),

    },

    [TRAINER_PHOEBE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("PHOEBE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Phoebe},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Phoebe),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Phoebe),

    },

    [TRAINER_GLACIA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .trainerName = _("GLACIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Glacia},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Glacia),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Glacia),

    },

    [TRAINER_DRAKE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .trainerName = _("DRAKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Drake},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Drake),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Drake),

    },

    [TRAINER_ROXANNE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_X_DEFENSE, ITEM_X_SP_DEF, ITEM_POTION, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        //.partySize = ARRAY_COUNT(Roxanne1),
        .party = ITEM_CUSTOM_MOVES(Roxanne1),

    },

    [TRAINER_BRAWLY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        //.partySize = ARRAY_COUNT(Brawly1),
        .party = ITEM_CUSTOM_MOVES(Brawly1),

    },

    [TRAINER_WATTSON_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        //.partySize = ARRAY_COUNT(Wattson1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson1),

    },

    [TRAINER_FLANNERY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        //.partySize = ARRAY_COUNT(Flannery1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery1),
    },

    [TRAINER_NORMAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        //.partySize = ARRAY_COUNT(Norman1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Norman1),

    },

    [TRAINER_WINONA_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,

        ////.partySize = ARRAY_COUNT(Winona1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winona1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Winona1),

    },

    [TRAINER_TATE_AND_LIZA_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        //.partySize = ARRAY_COUNT(TateAndLiza1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza1),

    },

    [TRAINER_JUAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SETUP_FIRST_TURN,
        //.partySize = ARRAY_COUNT(Juan1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Juan1),
    },

    [TRAINER_JERRY_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Ángel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jerry1),
    },

    [TRAINER_TED] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("TED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ted},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ted),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ted),

    },

    [TRAINER_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("PAUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Paul},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Paul),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Paul),

    },

    [TRAINER_JERRY_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Ángel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jerry2),
    },

    [TRAINER_JERRY_3] =
    {
		.trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Ángel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jerry3),
    },

    [TRAINER_JERRY_4] =
    {
		.trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Ángel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jerry4),
    },

    [TRAINER_JERRY_5] =
    {
		.trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Ángel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jerry5),

    },

    [TRAINER_KAREN_1] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Karen1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Karen1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Karen1),

    },

    [TRAINER_GEORGIA] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("GEORGIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Georgia},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Georgia),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Georgia),

    },

    [TRAINER_KAREN_2] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Karen2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Karen2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Karen2),

    },

    [TRAINER_KAREN_3] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Karen3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Karen3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Karen3),

    },

    [TRAINER_KAREN_4] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Karen4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Karen4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Karen4),

    },

    [TRAINER_KAREN_5] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Karen5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Karen5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Karen5),

    },

    [TRAINER_KATE_AND_JOY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("KATE & JOY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(KateAndJoy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(KateAndJoy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(KateAndJoy),

    },

    [TRAINER_ANNA_AND_MEG_1] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AnnaAndMeg1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg1),

    },

    [TRAINER_ANNA_AND_MEG_2] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AnnaAndMeg2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg2),

    },

    [TRAINER_ANNA_AND_MEG_3] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AnnaAndMeg3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg3),

    },

    [TRAINER_ANNA_AND_MEG_4] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AnnaAndMeg4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg4),

    },

    [TRAINER_ANNA_AND_MEG_5] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AnnaAndMeg5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AnnaAndMeg5),

    },

    [TRAINER_VICTOR] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("VICTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Victor},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Victor),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Victor),

    },

    [TRAINER_MIGUEL_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Miguel1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel1),

    },

    [TRAINER_COLTON] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("COLTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Colton},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Colton),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Colton),

    },

    [TRAINER_MIGUEL_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Miguel2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel2),

    },

    [TRAINER_MIGUEL_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Miguel3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel3),

    },

    [TRAINER_MIGUEL_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Miguel4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel4),

    },

    [TRAINER_MIGUEL_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Miguel5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Miguel5),

    },

    [TRAINER_VICTORIA] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("VICTORIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,

        ////.partySize = ARRAY_COUNT(Victoria},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Victoria),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Victoria),

    },

    [TRAINER_VANESSA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("VANESSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Vanessa},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Vanessa),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Vanessa),

    },

    [TRAINER_BETHANY] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("BETHANY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Bethany},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bethany),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Bethany),

    },

    [TRAINER_ISABEL_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isabel1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel1),

    },

    [TRAINER_ISABEL_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isabel2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel2),

    },

    [TRAINER_ISABEL_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isabel3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel3),

    },

    [TRAINER_ISABEL_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isabel4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel4),

    },

    [TRAINER_ISABEL_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isabel5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isabel5),

    },

    [TRAINER_TIMOTHY_1] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Timothy1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy1),

    },

    [TRAINER_TIMOTHY_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Timothy2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy2),

    },

    [TRAINER_TIMOTHY_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Timothy3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy3),

    },

    [TRAINER_TIMOTHY_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Timothy4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy4),

    },

    [TRAINER_TIMOTHY_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Timothy5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Timothy5),

    },

    [TRAINER_VICKY] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("VICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Vicky},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Vicky),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Vicky),

    },

    [TRAINER_SHELBY_1] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Shelby1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby1),

    },

    [TRAINER_SHELBY_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Shelby2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby2),

    },

    [TRAINER_SHELBY_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Shelby3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby3),

    },

    [TRAINER_SHELBY_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Shelby4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby4),

    },

    [TRAINER_SHELBY_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Shelby5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Shelby5),

    },

    [TRAINER_CALVIN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Calvin1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin1),

    },

    [TRAINER_BILLY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("BILLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Billy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Billy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Billy),

    },

    [TRAINER_JOSH] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOSH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Josh},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Josh),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Josh),

    },

    [TRAINER_TOMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("TOMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Tommy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tommy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Tommy),

    },

    [TRAINER_JOEY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Joey},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Joey),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Joey),

    },

    [TRAINER_BEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("BEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ben},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ben),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ben),

    },

    [TRAINER_QUINCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("QUINCY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Quincy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Quincy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Quincy),

    },

    [TRAINER_KATELYNN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("KATELYNN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Katelynn},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Katelynn),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Katelynn),

    },

    [TRAINER_JAYLEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JAYLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jaylen},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jaylen),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jaylen),

    },

    [TRAINER_DILLON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DILLON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dillon},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dillon),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dillon),

    },

    [TRAINER_CALVIN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Calvin2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin2),

    },

    [TRAINER_CALVIN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Calvin3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin3),

    },

    [TRAINER_CALVIN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Calvin4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin4),

    },

    [TRAINER_CALVIN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Calvin5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Calvin5),

    },

    [TRAINER_EDDIE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("EDDIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Eddie},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Eddie),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Eddie),

    },

    [TRAINER_ALLEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("ALLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Allen},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Allen),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Allen),

    },

    [TRAINER_TIMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("TIMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Timmy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Timmy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Timmy),

    },

    [TRAINER_WALLACE] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .trainerName = _("WALLACE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Wallace},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wallace),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Wallace),

    },

    [TRAINER_ANDREW] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ANDREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Andrew},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Andrew),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Andrew),

    },

    [TRAINER_IVAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("IVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ivan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ivan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ivan),

    },

    [TRAINER_CLAUDE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CLAUDE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Claude},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Claude),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Claude),

    },

    [TRAINER_ELLIOT_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Elliot1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot1),

    },

    [TRAINER_NED] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("NED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ned},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ned),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ned),

    },

    [TRAINER_DALE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("DALE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dale},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dale),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dale),

    },

    [TRAINER_NOLAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("NOLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nolan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nolan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nolan),

    },

    [TRAINER_BARNY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("BARNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Barny},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Barny),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Barny),

    },

    [TRAINER_WADE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("WADE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Wade},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wade),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Wade),

    },

    [TRAINER_CARTER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CARTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Carter},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Carter),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Carter),

    },

    [TRAINER_ELLIOT_2] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Elliot2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot2),

    },

    [TRAINER_ELLIOT_3] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Elliot3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot3),

    },

    [TRAINER_ELLIOT_4] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Elliot4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot4),

    },

    [TRAINER_ELLIOT_5] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,

        ////.partySize = ARRAY_COUNT(Elliot5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Elliot5),

    },

    [TRAINER_RONALD] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("RONALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ronald},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ronald),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ronald),

    },

    [TRAINER_JACOB] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("JACOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jacob},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jacob),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jacob),

    },

    [TRAINER_ANTHONY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ANTHONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Anthony},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Anthony),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Anthony),

    },

    [TRAINER_BENJAMIN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Benjamin1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin1),

    },

    [TRAINER_BENJAMIN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Benjamin2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin2),

    },

    [TRAINER_BENJAMIN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Benjamin3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin3),

    },

    [TRAINER_BENJAMIN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Benjamin4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin4),

    },

    [TRAINER_BENJAMIN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Benjamin5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Benjamin5),

    },

    [TRAINER_ABIGAIL_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Abigail1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail1),

    },

    [TRAINER_JASMINE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("JASMINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jasmine},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jasmine),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jasmine),

    },

    [TRAINER_ABIGAIL_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Abigail2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail2),

    },

    [TRAINER_ABIGAIL_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Abigail3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail3),

    },

    [TRAINER_ABIGAIL_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Abigail4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail4),

    },

    [TRAINER_ABIGAIL_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Abigail5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Abigail5),

    },

    [TRAINER_DYLAN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dylan1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan1),

    },

    [TRAINER_DYLAN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dylan2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan2),

    },

    [TRAINER_DYLAN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dylan3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan3),

    },

    [TRAINER_DYLAN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dylan4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan4),

    },

    [TRAINER_DYLAN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dylan5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dylan5),

    },

    [TRAINER_MARIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Maria1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Maria1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Maria1),

    },

    [TRAINER_MARIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Maria2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Maria2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Maria2),

    },

    [TRAINER_MARIA_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Maria3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Maria3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Maria3),

    },

    [TRAINER_MARIA_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Maria4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Maria4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Maria4),

    },

    [TRAINER_MARIA_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Maria5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Maria5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Maria5),

    },

    [TRAINER_CAMDEN] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CAMDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Camden},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Camden),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Camden),

    },

    [TRAINER_DEMETRIUS] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DEMETRIUS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Demetrius},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Demetrius),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Demetrius),

    },

    [TRAINER_ISAIAH_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaiah1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah1),

    },

    [TRAINER_PABLO_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Pablo1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo1),

    },

    [TRAINER_CHASE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CHASE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Chase},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Chase),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Chase),

    },

    [TRAINER_ISAIAH_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaiah2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah2),

    },

    [TRAINER_ISAIAH_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaiah3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah3),

    },

    [TRAINER_ISAIAH_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaiah4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah4),

    },

    [TRAINER_ISAIAH_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaiah5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaiah5),

    },

    [TRAINER_ISOBEL] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ISOBEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isobel},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isobel),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isobel),

    },

    [TRAINER_DONNY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("DONNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Donny},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Donny),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Donny),

    },

    [TRAINER_TALIA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("TALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Talia},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Talia),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Talia),

    },

    [TRAINER_KATELYN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Katelyn1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn1),

    },

    [TRAINER_ALLISON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ALLISON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Allison},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Allison),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Allison),

    },

    [TRAINER_KATELYN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Katelyn2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn2),

    },

    [TRAINER_KATELYN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Katelyn3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn3),

    },

    [TRAINER_KATELYN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Katelyn4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn4),

    },

    [TRAINER_KATELYN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Katelyn5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Katelyn5),

    },

    [TRAINER_NICOLAS_1] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nicolas1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas1),

    },

    [TRAINER_NICOLAS_2] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nicolas2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas2),

    },

    [TRAINER_NICOLAS_3] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nicolas3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas3),

    },

    [TRAINER_NICOLAS_4] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nicolas4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas4),

    },

    [TRAINER_NICOLAS_5] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nicolas5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nicolas5),

    },

    [TRAINER_AARON] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("AARON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Aaron},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Aaron),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Aaron),

    },

    [TRAINER_PERRY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("PERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Perry},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Perry),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Perry),

    },

    [TRAINER_HUGH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("HUGH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Hugh},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hugh),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Hugh),

    },

    [TRAINER_PHIL] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("PHIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Phil},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Phil),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Phil),

    },

    [TRAINER_JARED] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("JARED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jared},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jared),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jared),

    },

    [TRAINER_HUMBERTO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("HUMBERTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Humberto},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Humberto),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Humberto),

    },

    [TRAINER_PRESLEY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("PRESLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Presley},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Presley),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Presley),

    },

    [TRAINER_EDWARDO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("EDWARDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Edwardo},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edwardo),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Edwardo),

    },

    [TRAINER_COLIN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("COLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Colin},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Colin),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Colin),

    },

    [TRAINER_ROBERT_1] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Robert1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Robert1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Robert1),

    },

    [TRAINER_BENNY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("BENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Benny},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Benny),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Benny),

    },

    [TRAINER_CHESTER] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("CHESTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Chester},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Chester),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Chester),

    },

    [TRAINER_ROBERT_2] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Robert2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Robert2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Robert2),

    },

    [TRAINER_ROBERT_3] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Robert3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Robert3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Robert3),

    },

    [TRAINER_ROBERT_4] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Robert4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Robert4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Robert4),

    },

    [TRAINER_ROBERT_5] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Robert5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Robert5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Robert5),

    },

    [TRAINER_ALEX] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ALEX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Alex},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alex),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Alex),

    },

    [TRAINER_BECK] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("BECK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Beck},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Beck),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Beck),

    },

    [TRAINER_YASU] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("YASU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,

        ////.partySize = ARRAY_COUNT(Yasu},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Yasu),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Yasu),

    },

    [TRAINER_TAKASHI] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("TAKASHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,

        ////.partySize = ARRAY_COUNT(Takashi},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Takashi),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Takashi),

    },

    [TRAINER_DIANNE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DIANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Dianne},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dianne),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dianne),

    },

    [TRAINER_JANI] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("JANI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Jani},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jani),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jani),

    },

    [TRAINER_LAO_1] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Lao1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lao1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lao1),

    },

    [TRAINER_LUNG] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LUNG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Lung},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lung),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lung),

    },

    [TRAINER_LAO_2] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Lao2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lao2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lao2),

    },

    [TRAINER_LAO_3] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Lao3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lao3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lao3),

    },

    [TRAINER_LAO_4] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Lao4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lao4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lao4),

    },

    [TRAINER_LAO_5] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Lao5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lao5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lao5),

    },

    [TRAINER_JOCELYN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("JOCELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jocelyn},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jocelyn),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jocelyn),

    },

    [TRAINER_LAURA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("LAURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Laura},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Laura),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Laura),

    },

    [TRAINER_CYNDY_1] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cyndy1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy1),

    },

    [TRAINER_CORA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CORA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cora},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cora),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cora),

    },

    [TRAINER_PAULA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("PAULA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Paula},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Paula),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Paula),

    },

    [TRAINER_CYNDY_2] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cyndy2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy2),

    },

    [TRAINER_CYNDY_3] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cyndy3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy3),

    },

    [TRAINER_CYNDY_4] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cyndy4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy4),

    },

    [TRAINER_CYNDY_5] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cyndy5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cyndy5),

    },

    [TRAINER_MADELINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Madeline1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline1),

    },

    [TRAINER_CLARISSA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("CLARISSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Clarissa},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Clarissa),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Clarissa),

    },

    [TRAINER_ANGELICA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("ANGELICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Angelica},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Angelica),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Angelica),

    },

    [TRAINER_MADELINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Madeline2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline2),

    },

    [TRAINER_MADELINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Madeline3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline3),

    },

    [TRAINER_MADELINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Madeline4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline4),

    },

    [TRAINER_MADELINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Madeline5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Madeline5),

    },

    [TRAINER_BEVERLY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BEVERLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Beverly},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Beverly),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Beverly),

    },

    [TRAINER_IMANI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("IMANI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Imani},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Imani),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Imani),

    },

    [TRAINER_KYLA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KYLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kyla},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kyla),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kyla),

    },

    [TRAINER_DENISE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DENISE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Denise},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Denise),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Denise),

    },

    [TRAINER_BETH] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BETH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Beth},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Beth),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Beth),

    },

    [TRAINER_TARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Tara},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tara),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Tara),

    },

    [TRAINER_MISSY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("MISSY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Missy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Missy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Missy),

    },

    [TRAINER_ALICE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ALICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Alice},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alice),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Alice),

    },

    [TRAINER_JENNY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jenny1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny1),

    },

    [TRAINER_GRACE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("GRACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Grace},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Grace),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Grace),

    },

    [TRAINER_TANYA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TANYA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Tanya},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tanya),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Tanya),

    },

    [TRAINER_SHARON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SHARON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Sharon},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sharon),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sharon),

    },

    [TRAINER_NIKKI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("NIKKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nikki},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nikki),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nikki),

    },

    [TRAINER_BRENDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BRENDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Brenda},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brenda),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brenda),

    },

    [TRAINER_KATIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KATIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Katie},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Katie),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Katie),

    },

    [TRAINER_SUSIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SUSIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Susie},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Susie),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Susie),

    },

    [TRAINER_KARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kara},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kara),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kara),

    },

    [TRAINER_DANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dana},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dana),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dana),

    },

    [TRAINER_SIENNA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SIENNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Sienna},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sienna),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sienna),

    },

    [TRAINER_DEBRA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DEBRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Debra},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Debra),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Debra),

    },

    [TRAINER_LINDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LINDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Linda},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Linda),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Linda),

    },

    [TRAINER_KAYLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KAYLEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kaylee},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kaylee),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kaylee),

    },

    [TRAINER_LAUREL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LAUREL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Laurel},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Laurel),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Laurel),

    },

    [TRAINER_CARLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("CARLEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Carlee},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Carlee),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Carlee),

    },

    [TRAINER_JENNY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jenny2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny2),

    },

    [TRAINER_JENNY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jenny3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny3),

    },

    [TRAINER_JENNY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jenny4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny4),

    },

    [TRAINER_JENNY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jenny5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jenny5),

    },

    [TRAINER_HEIDI] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("HEIDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Heidi},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Heidi),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Heidi),

    },

    [TRAINER_BECKY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BECKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Becky},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Becky),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Becky),

    },

    [TRAINER_CAROL] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CAROL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Carol},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Carol),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Carol),

    },

    [TRAINER_NANCY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("NANCY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nancy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nancy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nancy),

    },

    [TRAINER_MARTHA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("MARTHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Martha},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Martha),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Martha),

    },

    [TRAINER_DIANA_1] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Diana1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Diana1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Diana1),

    },

    [TRAINER_CEDRIC] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CEDRIC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cedric},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cedric),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cedric),

    },

    [TRAINER_IRENE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("IRENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Irene},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Irene),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Irene),

    },

    [TRAINER_DIANA_2] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Diana2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Diana2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Diana2),

    },

    [TRAINER_DIANA_3] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Diana3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Diana3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Diana3),

    },

    [TRAINER_DIANA_4] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Diana4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Diana4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Diana4),

    },

    [TRAINER_DIANA_5] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Diana5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Diana5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Diana5),

    },

    [TRAINER_AMY_AND_LIV_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AmyAndLiv1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv1),

    },

    [TRAINER_AMY_AND_LIV_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AmyAndLiv2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv2),

    },

    [TRAINER_GINA_AND_MIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GinaAndMia1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GinaAndMia1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GinaAndMia1),

    },

    [TRAINER_MIU_AND_YUKI] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("MIU & YUKI"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(MiuAndYuki},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MiuAndYuki),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MiuAndYuki),

    },

    [TRAINER_AMY_AND_LIV_3] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AmyAndLiv3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv3),

    },

    [TRAINER_GINA_AND_MIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GinaAndMia2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GinaAndMia2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GinaAndMia2),

    },

    [TRAINER_AMY_AND_LIV_4] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AmyAndLiv4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv4),

    },

    [TRAINER_AMY_AND_LIV_5] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AmyAndLiv5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv5),

    },

    [TRAINER_AMY_AND_LIV_6] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(AmyAndLiv6),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv6),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(AmyAndLiv6),

    },

    [TRAINER_HUEY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Huey},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Huey),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Huey),

    },

    [TRAINER_EDMOND] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("EDMOND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Edmond},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edmond),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Edmond),

    },

    [TRAINER_ERNEST_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ernest1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest1),

    },

    [TRAINER_DWAYNE] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DWAYNE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dwayne},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dwayne),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dwayne),

    },

    [TRAINER_PHILLIP] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("PHILLIP"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Phillip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Phillip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Phillip),

    },

    [TRAINER_LEONARD] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("LEONARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Leonard},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Leonard),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Leonard),

    },

    [TRAINER_DUNCAN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DUNCAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Duncan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Duncan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Duncan),

    },

    [TRAINER_ERNEST_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ernest2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest2),

    },

    [TRAINER_ERNEST_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ernest3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest3),

    },

    [TRAINER_ERNEST_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ernest4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest4),

    },

    [TRAINER_ERNEST_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ernest5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ernest5),

    },

    [TRAINER_ELI] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ELI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Eli},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Eli),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Eli),

    },

    [TRAINER_ANNIKA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ANNIKA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Annika},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Annika),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Annika),

    },

    [TRAINER_JAZMYN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JAZMYN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Jazmyn},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jazmyn),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jazmyn),

    },

    [TRAINER_JONAS] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JONAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Jonas},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jonas),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jonas),

    },

    [TRAINER_KAYLEY] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("KAYLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kayley},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kayley),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kayley),

    },

    [TRAINER_AURON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("AURON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Auron},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Auron),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Auron),

    },

    [TRAINER_KELVIN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("KELVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kelvin},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kelvin),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kelvin),

    },

    [TRAINER_MARLEY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MARLEY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Marley},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Marley),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Marley),

    },

    [TRAINER_REYNA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("REYNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Reyna},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Reyna),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Reyna),

    },

    [TRAINER_HUDSON] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUDSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Hudson},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hudson),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Hudson),

    },

    [TRAINER_CONOR] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("CONOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Conor},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Conor),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Conor),

    },

    [TRAINER_EDWIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Edwin1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin1),

    },

    [TRAINER_HECTOR] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("HECTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Hector},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hector),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Hector),

    },

    [TRAINER_TABITHA_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(TabithaMossdeep},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(TabithaMossdeep),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TabithaMossdeep),

    },

    [TRAINER_EDWIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Edwin2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin2),

    },

    [TRAINER_EDWIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Edwin3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin3),

    },

    [TRAINER_EDWIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Edwin4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin4),

    },

    [TRAINER_EDWIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Edwin5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Edwin5),

    },

    [TRAINER_WALLY_VR_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(WallyVR1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR1),

    },

    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRoute103Mudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute103Mudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute103Mudkip),

    },

    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRoute110Mudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute110Mudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute110Mudkip),

    },

    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRoute119Mudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute119Mudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute119Mudkip),

    },

    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(BrendanRoute103Treecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute103Treecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute103Treecko),

    },

    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRoute110Treecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute110Treecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute110Treecko),

    },

    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRoute119Treecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute119Treecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute119Treecko),

    },

    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRoute103Torchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute103Torchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute103Torchic),

    },

    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRoute110Torchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute110Torchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute110Torchic),

    },

    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRoute119Torchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute119Torchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRoute119Torchic),

    },

    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute103Mudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute103Mudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute103Mudkip),

    },

    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute110Mudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute110Mudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute110Mudkip),

    },

    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute119Mudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute119Mudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute119Mudkip),

    },

    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute103Treecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute103Treecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute103Treecko),

    },

    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute110Treecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute110Treecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute110Treecko),

    },

    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute119Treecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute119Treecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute119Treecko),

    },

    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute103Torchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute103Torchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute103Torchic),

    },

    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute110Torchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute110Torchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute110Torchic),

    },

    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRoute119Torchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute119Torchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRoute119Torchic),

    },

    [TRAINER_ISAAC_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaac1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac1),

    },

    [TRAINER_DAVIS] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Davis},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Davis),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Davis),

    },

    [TRAINER_MITCHELL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("MITCHELL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Mitchell},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Mitchell),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Mitchell),

    },

    [TRAINER_ISAAC_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaac2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac2),

    },

    [TRAINER_ISAAC_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaac3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac3),

    },

    [TRAINER_ISAAC_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaac4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac4),

    },

    [TRAINER_ISAAC_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isaac5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isaac5),

    },

    [TRAINER_LYDIA_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lydia1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia1),

    },

    [TRAINER_HALLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("HALLE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Halle},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Halle),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Halle),

    },

    [TRAINER_GARRISON] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("GARRISON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Garrison},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Garrison),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Garrison),

    },

    [TRAINER_LYDIA_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lydia2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia2),

    },

    [TRAINER_LYDIA_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lydia3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia3),

    },

    [TRAINER_LYDIA_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lydia4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia4),

    },

    [TRAINER_LYDIA_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lydia5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lydia5),

    },

    [TRAINER_JACKSON_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Jackson1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson1),

    },

    [TRAINER_LORENZO] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("LORENZO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Lorenzo},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lorenzo),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lorenzo),

    },

    [TRAINER_SEBASTIAN] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("SEBASTIAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Sebastian},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sebastian),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sebastian),

    },

    [TRAINER_JACKSON_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(Jackson2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson2),

    },

    [TRAINER_JACKSON_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Jackson3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson3),

    },

    [TRAINER_JACKSON_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(Jackson4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson4),

    },

    [TRAINER_JACKSON_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Jackson5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jackson5),

    },

    [TRAINER_CATHERINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(Catherine1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine1),

    },

    [TRAINER_JENNA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("JENNA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(Jenna},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jenna),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jenna),

    },

    [TRAINER_SOPHIA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("SOPHIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Sophia},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sophia),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sophia),

    },

    [TRAINER_CATHERINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(Catherine2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine2),

    },

    [TRAINER_CATHERINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Catherine3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine3),

    },

    [TRAINER_CATHERINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(Catherine4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine4),

    },

    [TRAINER_CATHERINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Catherine5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Catherine5),

    },

    [TRAINER_JULIO] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("JULIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Julio},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Julio),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Julio),

    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntSeafloorCavern5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSeafloorCavern5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSeafloorCavern5),

    },

    [TRAINER_GRUNT_UNUSED] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntUnused},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntUnused),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntUnused),

    },

    [TRAINER_GRUNT_MT_PYRE_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMtPyre4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMtPyre4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMtPyre4),

    },

    [TRAINER_GRUNT_JAGGED_PASS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntJaggedPass},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntJaggedPass),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntJaggedPass),

    },

    [TRAINER_MARC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MARC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_SMART_SWITCHING,

        ////.partySize = ARRAY_COUNT(Marc},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Marc),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Marc),

    },

    [TRAINER_BRENDEN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("BRENDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Brenden},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brenden),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brenden),

    },

    [TRAINER_LILITH] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("LILITH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lilith},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lilith),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lilith),

    },

    [TRAINER_CRISTIAN] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("CRISTIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cristian},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cristian),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cristian),

    },

    [TRAINER_SYLVIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("SYLVIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Sylvia},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sylvia),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sylvia),

    },

    [TRAINER_LEONARDO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("LEONARDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Leonardo},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Leonardo),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Leonardo),

    },

    [TRAINER_ATHENA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ATHENA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Athena},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Athena),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Athena),

    },

    [TRAINER_HARRISON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HARRISON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Harrison},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Harrison),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Harrison),

    },

    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMtChimney2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMtChimney2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMtChimney2),

    },

    [TRAINER_CLARENCE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CLARENCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Clarence},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Clarence),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Clarence),

    },

    [TRAINER_TERRY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("TERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Terry},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Terry),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Terry),

    },

    [TRAINER_NATE] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("NATE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nate},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nate),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nate),

    },

    [TRAINER_KATHLEEN] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KATHLEEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kathleen},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kathleen),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kathleen),

    },

    [TRAINER_CLIFFORD] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("CLIFFORD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Clifford},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Clifford),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Clifford),

    },

    [TRAINER_NICHOLAS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("NICHOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Nicholas},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Nicholas),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Nicholas),

    },

    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntSpaceCenter3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter3),

    },

    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntSpaceCenter4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter4),

    },

    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntSpaceCenter5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter5),

    },

    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntSpaceCenter6),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter6),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter6),

    },

    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntSpaceCenter7),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter7),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntSpaceCenter7),

    },

    [TRAINER_MACEY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MACEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Macey},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Macey),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Macey),

    },

    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(BrendanRustboroTreecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRustboroTreecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRustboroTreecko),

    },

    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(BrendanRustboroMudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRustboroMudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRustboroMudkip),

    },

    [TRAINER_PAXTON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("PAXTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Paxton},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Paxton),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Paxton),

    },

    [TRAINER_ISABELLA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ISABELLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isabella},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isabella),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isabella),

    },

    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntWeatherInst5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntWeatherInst5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntWeatherInst5),

    },

    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("Tabitha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(TabithaMtChimney},
        .party = ITEM_CUSTOM_MOVES(TabithaMtChimney),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TabithaMtChimney),

    },
	
	[TRAINER_COURTNEY_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("Courtney"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(TabithaMtChimney},
        .party = ITEM_CUSTOM_MOVES(CourtneyMtChimney),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TabithaMtChimney),

    },

    [TRAINER_JONATHAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("JONATHAN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(Jonathan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jonathan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jonathan),

    },

    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanRustboroTorchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRustboroTorchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanRustboroTorchic),

    },

    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(MayRustboroMudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRustboroMudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRustboroMudkip),

    },

    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MaxieMagmaHideout},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MaxieMagmaHideout),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MaxieMagmaHideout),

    },

    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MaxieMtChimney},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MaxieMtChimney),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MaxieMtChimney),

    },

    [TRAINER_TIANA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("TIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Tiana},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tiana),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Tiana),

    },

    [TRAINER_HALEY_1] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Haley1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Haley1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Haley1),

    },

    [TRAINER_JANICE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("JANICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Janice},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Janice),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Janice),

    },

    [TRAINER_VIVI] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("VIVI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Vivi},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Vivi),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Vivi),

    },

    [TRAINER_HALEY_2] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Haley2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Haley2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Haley2),

    },

    [TRAINER_HALEY_3] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Haley3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Haley3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Haley3),

    },

    [TRAINER_HALEY_4] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Haley4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Haley4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Haley4),

    },

    [TRAINER_HALEY_5] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Haley5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Haley5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Haley5),

    },

    [TRAINER_SALLY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("SALLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Sally},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sally),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sally),

    },

    [TRAINER_ROBIN] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ROBIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Robin},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Robin),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Robin),

    },

    [TRAINER_ANDREA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Ángel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Andrea),
    },

    [TRAINER_CRISSY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("CRISSY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Crissy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Crissy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Crissy),

    },

    [TRAINER_RICK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("RICK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Rick},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rick),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Rick),

    },

    [TRAINER_LYLE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("LYLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lyle},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lyle),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lyle),

    },

    [TRAINER_JOSE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JOSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jose},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jose),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jose),

    },

    [TRAINER_DOUG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DOUG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Doug},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Doug),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Doug),

    },

    [TRAINER_GREG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("GREG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Greg},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Greg),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Greg),

    },

    [TRAINER_KENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("KENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kent},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kent),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kent),

    },

    [TRAINER_JAMES_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(James1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(James1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(James1),

    },

    [TRAINER_JAMES_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(James2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(James2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(James2),

    },

    [TRAINER_JAMES_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(James3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(James3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(James3),

    },

    [TRAINER_JAMES_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(James4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(James4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(James4),

    },

    [TRAINER_JAMES_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(James5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(James5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(James5),

    },

    [TRAINER_BRICE] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("BRICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Brice},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brice),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brice),

    },

    [TRAINER_TRENT_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Trent1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Trent1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Trent1),

    },

    [TRAINER_LENNY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lenny},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lenny),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lenny),

    },

    [TRAINER_LUCAS_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lucas1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lucas1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lucas1),

    },

    [TRAINER_ALAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ALAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Alan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Alan),

    },

    [TRAINER_CLARK] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("CLARK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Clark},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Clark),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Clark),

    },

    [TRAINER_ERIC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ERIC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Eric},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Eric),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Eric),

    },

    [TRAINER_LUCAS_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lucas2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lucas2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lucas2),

    },

    [TRAINER_MIKE_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Mike1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Mike1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Mike1),

    },

    [TRAINER_MIKE_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Mike2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Mike2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Mike2),

    },

    [TRAINER_TRENT_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Trent2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Trent2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Trent2),

    },

    [TRAINER_TRENT_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Trent3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Trent3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Trent3),

    },

    [TRAINER_TRENT_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Trent4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Trent4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Trent4),

    },

    [TRAINER_TRENT_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Trent5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Trent5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Trent5),

    },

    [TRAINER_DEZ_AND_LUKE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("DEZ & LUKE"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(DezAndLuke},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(DezAndLuke),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(DezAndLuke),

    },

    [TRAINER_LEA_AND_JED] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("LEA & JED"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(LeaAndJed},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(LeaAndJed),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(LeaAndJed),

    },

    [TRAINER_KIRA_AND_DAN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(KiraAndDan1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan1),

    },

    [TRAINER_KIRA_AND_DAN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(KiraAndDan2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan2),

    },

    [TRAINER_KIRA_AND_DAN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(KiraAndDan3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan3),

    },

    [TRAINER_KIRA_AND_DAN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(KiraAndDan4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan4),

    },

    [TRAINER_KIRA_AND_DAN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(KiraAndDan5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(KiraAndDan5),

    },

    [TRAINER_JOHANNA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JOHANNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Johanna},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Johanna),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Johanna),

    },

    [TRAINER_GERALD] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("GERALD"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Gerald},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Gerald),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Gerald),

    },

    [TRAINER_VIVIAN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("VIVIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Vivian},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Vivian),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Vivian),

    },

    [TRAINER_DANIELLE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("DANIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Danielle},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Danielle),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Danielle),

    },

    [TRAINER_HIDEO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("HIDEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,

        ////.partySize = ARRAY_COUNT(Hideo},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hideo),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Hideo),

    },

    [TRAINER_KEIGO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("KEIGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,

        ////.partySize = ARRAY_COUNT(Keigo},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Keigo),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Keigo),

    },

    [TRAINER_RILEY] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("RILEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,

        ////.partySize = ARRAY_COUNT(Riley},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Riley),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Riley),

    },

    [TRAINER_FLINT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("FLINT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Flint},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Flint),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Flint),

    },

    [TRAINER_ASHLEY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ASHLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Ashley},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ashley),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ashley),

    },

    [TRAINER_WALLY_MAUVILLE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(WallyMauville},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(WallyMauville),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(WallyMauville),

    },

    [TRAINER_WALLY_VR_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(WallyVR2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR2),

    },

    [TRAINER_WALLY_VR_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(WallyVR3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR3),

    },

    [TRAINER_WALLY_VR_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(WallyVR4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR4),

    },

    [TRAINER_WALLY_VR_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(WallyVR5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(WallyVR5),

    },

    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanLilycoveMudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanLilycoveMudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanLilycoveMudkip),

    },

    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanLilycoveTreecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanLilycoveTreecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanLilycoveTreecko),

    },

    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(BrendanLilycoveTorchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanLilycoveTorchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanLilycoveTorchic),

    },

    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayLilycoveMudkip},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayLilycoveMudkip),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayLilycoveMudkip),

    },

    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayLilycoveTreecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayLilycoveTreecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayLilycoveTreecko),

    },

    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayLilycoveTorchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayLilycoveTorchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayLilycoveTorchic),

    },

    [TRAINER_JONAH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JONAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jonah},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jonah),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jonah),

    },

    [TRAINER_HENRY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("HENRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Henry},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Henry),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Henry),

    },

    [TRAINER_ROGER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ROGER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Roger},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Roger),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Roger),

    },

    [TRAINER_ALEXA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ALEXA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Alexa},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alexa),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Alexa),

    },

    [TRAINER_RUBEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("RUBEN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Ruben},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Ruben),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Ruben),

    },

    [TRAINER_KOJI_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Koji1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Koji1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Koji1),

    },

    [TRAINER_WAYNE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("WAYNE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Wayne},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wayne),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Wayne),

    },

    [TRAINER_AIDAN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("AIDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Aidan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Aidan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Aidan),

    },

    [TRAINER_REED] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("REED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Reed},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Reed),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Reed),

    },

    [TRAINER_TISHA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TISHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Tisha},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tisha),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Tisha),

    },

    [TRAINER_TORI_AND_TIA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("TORI & TIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(ToriAndTia},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(ToriAndTia),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(ToriAndTia),

    },

    [TRAINER_KIM_AND_IRIS] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("KIM & IRIS"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(KimAndIris},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(KimAndIris),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(KimAndIris),

    },

    [TRAINER_TYRA_AND_IVY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("TYRA & IVY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(TyraAndIvy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(TyraAndIvy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TyraAndIvy),

    },

    [TRAINER_MEL_AND_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("MEL & PAUL"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(MelAndPaul},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MelAndPaul),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MelAndPaul),

    },

    [TRAINER_JOHN_AND_JAY_1] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(JohnAndJay1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay1),

    },

    [TRAINER_JOHN_AND_JAY_2] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(JohnAndJay2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay2),

    },

    [TRAINER_JOHN_AND_JAY_3] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(JohnAndJay3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay3),

    },

    [TRAINER_JOHN_AND_JAY_4] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,

        ////.partySize = ARRAY_COUNT(JohnAndJay4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay4),

    },

    [TRAINER_JOHN_AND_JAY_5] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(JohnAndJay5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(JohnAndJay5),

    },

    [TRAINER_RELI_AND_IAN] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("RELI & IAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(ReliAndIan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(ReliAndIan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(ReliAndIan),

    },

    [TRAINER_LILA_AND_ROY_1] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(LilaAndRoy1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy1),

    },

    [TRAINER_LILA_AND_ROY_2] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(LilaAndRoy2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy2),

    },

    [TRAINER_LILA_AND_ROY_3] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(LilaAndRoy3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy3),

    },

    [TRAINER_LILA_AND_ROY_4] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(LilaAndRoy4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy4),

    },

    [TRAINER_LILA_AND_ROY_5] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(LilaAndRoy5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(LilaAndRoy5),

    },

    [TRAINER_LISA_AND_RAY] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LISA & RAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(LisaAndRay},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(LisaAndRay),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(LisaAndRay),

    },

    [TRAINER_CHRIS] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CHRIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Chris},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Chris),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Chris),

    },

    [TRAINER_DAWSON] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("DAWSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dawson},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dawson),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dawson),

    },

    [TRAINER_SARAH] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("SARAH"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Sarah},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sarah),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sarah),

    },

    [TRAINER_DARIAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("DARIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Darian},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Darian),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Darian),

    },

    [TRAINER_HAILEY] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("HAILEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Hailey},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hailey),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Hailey),

    },

    [TRAINER_CHANDLER] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("CHANDLER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Chandler},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Chandler),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Chandler),

    },

    [TRAINER_KALEB] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("KALEB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kaleb},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kaleb),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kaleb),

    },

    [TRAINER_JOSEPH] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("JOSEPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Joseph},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Joseph),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Joseph),

    },

    [TRAINER_ALYSSA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ALYSSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Alyssa},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alyssa),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Alyssa),

    },

    [TRAINER_MARCOS] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("MARCOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Marcos},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Marcos),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Marcos),

    },

    [TRAINER_RHETT] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("RHETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Rhett},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rhett),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Rhett),

    },

    [TRAINER_TYRON] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("TYRON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Tyron},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tyron),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Tyron),

    },

    [TRAINER_CELINA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("CELINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Celina},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Celina),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Celina),

    },

    [TRAINER_BIANCA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BIANCA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Bianca},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bianca),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Bianca),

    },

    [TRAINER_HAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("HAYDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Hayden},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Hayden),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Hayden),

    },

    [TRAINER_SOPHIE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("SOPHIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Sophie},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sophie),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sophie),

    },

    [TRAINER_COBY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("COBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Coby},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Coby),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Coby),

    },

    [TRAINER_LAWRENCE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LAWRENCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Lawrence},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lawrence),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lawrence),

    },

    [TRAINER_WYATT] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("WYATT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Wyatt},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wyatt),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Wyatt),

    },

    [TRAINER_ANGELINA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ANGELINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Angelina},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Angelina),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Angelina),

    },

    [TRAINER_KAI] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("KAI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kai},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kai),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kai),

    },

    [TRAINER_CHARLOTTE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CHARLOTTE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Charlotte},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Charlotte),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Charlotte),

    },

    [TRAINER_DEANDRE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DEANDRE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Deandre},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Deandre),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Deandre),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout1),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout2),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout3),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout4),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout5),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout6),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout6),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout6),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout7),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout7),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout7),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout8),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout8),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout8),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout9),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout9),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout9),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout10),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout10),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout10),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout11),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout11),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout11),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout12),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout12),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout12),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout13),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout13),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout13),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout14),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout14),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout14),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout15),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout15),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout15),

    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(GruntMagmaHideout16),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout16),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(GruntMagmaHideout16),

    },

    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(TabithaMagmaHideout},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(TabithaMagmaHideout),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TabithaMagmaHideout),

    },

    [TRAINER_DARCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DARCY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Darcy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Darcy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Darcy),

    },

    [TRAINER_MAXIE_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MaxieMossdeep},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MaxieMossdeep),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MaxieMossdeep),

    },

    [TRAINER_PETE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("PETE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Pete},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Pete),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Pete),

    },

    [TRAINER_ISABELLE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ISABELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Isabelle},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Isabelle),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Isabelle),

    },

    [TRAINER_ANDRES_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Andres1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Andres1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Andres1),

    },

    [TRAINER_JOSUE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("JOSUE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Josue},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Josue),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Josue),

    },

    [TRAINER_CAMRON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CAMRON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Camron},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Camron),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Camron),

    },

    [TRAINER_CORY_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cory1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cory1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cory1),

    },

    [TRAINER_CAROLINA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CAROLINA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Carolina},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Carolina),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Carolina),

    },

    [TRAINER_ELIJAH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ELIJAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Elijah},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Elijah),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Elijah),

    },

    [TRAINER_CELIA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CELIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Celia},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Celia),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Celia),

    },

    [TRAINER_BRYAN] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("BRYAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Bryan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bryan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Bryan),

    },

    [TRAINER_BRANDEN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BRANDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Branden},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Branden),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Branden),

    },

    [TRAINER_BRYANT] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BRYANT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Bryant},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Bryant),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Bryant),

    },

    [TRAINER_SHAYLA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("SHAYLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Shayla},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Shayla),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Shayla),

    },

    [TRAINER_KYRA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("KYRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Kyra},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Kyra),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Kyra),

    },

    [TRAINER_JAIDEN] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JAIDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Jaiden},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Jaiden),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Jaiden),

    },

    [TRAINER_ALIX] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("ALIX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Alix},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alix),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Alix),

    },

    [TRAINER_HELENE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("HELENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Helene},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Helene),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Helene),

    },

    [TRAINER_MARLENE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARLENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Marlene},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Marlene),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Marlene),

    },

    [TRAINER_DEVAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DEVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Devan},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Devan),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Devan),

    },

    [TRAINER_JOHNSON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOHNSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Johnson},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Johnson),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Johnson),

    },

    [TRAINER_MELINA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MELINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Melina},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Melina),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Melina),

    },

    [TRAINER_BRANDI] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("BRANDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Brandi},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brandi),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brandi),

    },

    [TRAINER_AISHA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AISHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Aisha},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Aisha),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Aisha),

    },

    [TRAINER_MAKAYLA] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("MAKAYLA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Makayla},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Makayla),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Makayla),

    },

    [TRAINER_FABIAN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FABIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Fabian},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Fabian),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Fabian),

    },

    [TRAINER_DAYTON] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("DAYTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Dayton},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Dayton),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Dayton),

    },

    [TRAINER_RACHEL] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("RACHEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Rachel},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Rachel),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Rachel),

    },

    [TRAINER_LEONEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("LEONEL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Leonel},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Leonel),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Leonel),

    },

    [TRAINER_CALLIE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CALLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Callie},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Callie),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Callie),

    },

    [TRAINER_CALE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("CALE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cale},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cale),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cale),

    },

    [TRAINER_MYLES] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("MYLES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Myles},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Myles),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Myles),

    },

    [TRAINER_PAT] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("PAT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Pat},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Pat),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Pat),

    },

    [TRAINER_CRISTIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Cristin1),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin1),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin1),

    },

    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRustboroTreecko},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRustboroTreecko),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRustboroTreecko),

    },

    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(MayRustboroTorchic},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayRustboroTorchic),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayRustboroTorchic),

    },

    [TRAINER_ROXANNE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Roxanne2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Roxanne2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Roxanne2),

    },

    [TRAINER_ROXANNE_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Roxanne3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Roxanne3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Roxanne3),

    },

    [TRAINER_ROXANNE_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Roxanne4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Roxanne4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Roxanne4),

    },

    [TRAINER_ROXANNE_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Roxanne5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Roxanne5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Roxanne5),

    },

    [TRAINER_BRAWLY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Brawly2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly2),

    },

    [TRAINER_BRAWLY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Brawly3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly3),

    },

    [TRAINER_BRAWLY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Brawly4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly4),

    },

    [TRAINER_BRAWLY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Brawly5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly5),
    },
    [TRAINER_BRAWLY_6] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        //.partySize = ARRAY_COUNT(Brawly6),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly6),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brawly5),

    },

    [TRAINER_WATTSON_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Wattson2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson2),

    },

    [TRAINER_WATTSON_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Wattson3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson3),

    },

    [TRAINER_WATTSON_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Wattson4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson4),

    },

    [TRAINER_WATTSON_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Wattson5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Wattson5),

    },

    [TRAINER_FLANNERY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Flannery2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery2),

    },

    [TRAINER_FLANNERY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Flannery3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery3),

    },

    [TRAINER_FLANNERY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Flannery4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery4),

    },

    [TRAINER_FLANNERY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Flannery5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Flannery5),

    },

    [TRAINER_NORMAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Norman2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Norman2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Norman2),

    },

    [TRAINER_NORMAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Norman3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Norman3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Norman3),

    },

    [TRAINER_NORMAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Norman4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Norman4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Norman4),

    },

    [TRAINER_NORMAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Norman5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Norman5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Norman5),

    },

    [TRAINER_WINONA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,

        ////.partySize = ARRAY_COUNT(Winona2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winona2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Winona2),

    },

    [TRAINER_WINONA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,

        ////.partySize = ARRAY_COUNT(Winona3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winona3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Winona3),

    },

    [TRAINER_WINONA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,

        ////.partySize = ARRAY_COUNT(Winona4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winona4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Winona4),

    },

    [TRAINER_WINONA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,

        ////.partySize = ARRAY_COUNT(Winona5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Winona5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Winona5),

    },

    [TRAINER_TATE_AND_LIZA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(TateAndLiza2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza2),

    },

    [TRAINER_TATE_AND_LIZA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(TateAndLiza3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza3),

    },

    [TRAINER_TATE_AND_LIZA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(TateAndLiza4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza4),

    },

    [TRAINER_TATE_AND_LIZA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(TateAndLiza5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(TateAndLiza5),

    },

    [TRAINER_JUAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Juan2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Juan2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Juan2),

    },

    [TRAINER_JUAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Juan3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Juan3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Juan3),

    },

    [TRAINER_JUAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Juan4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Juan4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Juan4),

    },

    [TRAINER_JUAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Juan5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Juan5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Juan5),

    },

    [TRAINER_ANGELO] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("ANGELO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Angelo},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Angelo),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Angelo),

    },

    [TRAINER_DARIUS] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("DARIUS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Darius},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Darius),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Darius),

    },

    [TRAINER_STEVEN] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        .trainerName = _("STEVEN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Steven},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Steven),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Steven),

    },

    [TRAINER_ANABEL] =
    {
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = _("ANABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Anabel},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Anabel),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Anabel),

    },

    [TRAINER_TUCKER] =
    {
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("TUCKER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Tucker},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Tucker),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Tucker),

    },

    [TRAINER_SPENSER] =
    {
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = _("SPENSER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Spenser},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Spenser),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Spenser),

    },

    [TRAINER_GRETA] =
    {
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("GRETA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Greta},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Greta),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Greta),

    },

    [TRAINER_NOLAND] =
    {
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("NOLAND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Noland},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Noland),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Noland),

    },

    [TRAINER_LUCY] =
    {
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("LUCY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Lucy},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Lucy),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Lucy),

    },

    [TRAINER_BRANDON] =
    {
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Brandon},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Brandon),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Brandon),

    },

    [TRAINER_ANDRES_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        //.partySize = ARRAY_COUNT(Andres2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Andres2),
    },

    [TRAINER_ANDRES_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        //.partySize = ARRAY_COUNT(Andres3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Andres3),
    },

    [TRAINER_ANDRES_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Recluta"),
        .items = {ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_PREFER_STRONGEST_MOVE | AI_FLAG_SETUP_FIRST_TURN,
        //.partySize = ARRAY_COUNT(Andres4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Andres4),
    },

    [TRAINER_ANDRES_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Andres5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Andres5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Andres5),

    },

    [TRAINER_CORY_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cory2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cory2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cory2),

    },

    [TRAINER_CORY_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cory3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cory3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cory3),

    },

    [TRAINER_CORY_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cory4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cory4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cory4),

    },

    [TRAINER_CORY_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Cory5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cory5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cory5),

    },

    [TRAINER_PABLO_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Pablo2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo2),

    },

    [TRAINER_PABLO_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Pablo3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo3),

    },

    [TRAINER_PABLO_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Pablo4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo4),

    },

    [TRAINER_PABLO_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Pablo5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Pablo5),

    },

    [TRAINER_KOJI_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Koji2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Koji2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Koji2),

    },

    [TRAINER_KOJI_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Koji3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Koji3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Koji3),

    },

    [TRAINER_KOJI_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Koji4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Koji4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Koji4),

    },

    [TRAINER_KOJI_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Koji5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Koji5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Koji5),

    },

    [TRAINER_CRISTIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Cristin2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin2),

    },

    [TRAINER_CRISTIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Cristin3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin3),

    },

    [TRAINER_CRISTIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Cristin4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin4),

    },

    [TRAINER_CRISTIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Cristin5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Cristin5),

    },

    [TRAINER_FERNANDO_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Fernando2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando2),

    },

    [TRAINER_FERNANDO_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Fernando3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando3),

    },

    [TRAINER_FERNANDO_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Fernando4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando4),

    },

    [TRAINER_FERNANDO_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Fernando5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Fernando5),

    },

    [TRAINER_SAWYER_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Sawyer2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer2),

    },

    [TRAINER_SAWYER_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Sawyer3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer3),

    },

    [TRAINER_SAWYER_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Sawyer4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer4),

    },

    [TRAINER_SAWYER_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,

        ////.partySize = ARRAY_COUNT(Sawyer5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Sawyer5),

    },

    [TRAINER_GABRIELLE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Gabrielle2),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle2),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle2),

    },

    [TRAINER_GABRIELLE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Gabrielle3),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle3),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle3),

    },

    [TRAINER_GABRIELLE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Gabrielle4),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle4),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle4),

    },

    [TRAINER_GABRIELLE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,

        ////.partySize = ARRAY_COUNT(Gabrielle5),
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle5),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Gabrielle5),

    },

    [TRAINER_MARIELA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARIELA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Mariela},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Mariela),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Mariela),

    },

    [TRAINER_ALVARO] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("ALVARO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Alvaro},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Alvaro),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Alvaro),

    },

    [TRAINER_EVERETT] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("EVERETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Everett},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Everett),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Everett),

    },

    [TRAINER_RED] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("RED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(Red},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Red),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(Red),

    },

    [TRAINER_LEAF] =
    {
        // .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEAF,
        .trainerName = _("Leaf"),
        .items = {ITEM_MAX_REVIVE, ITEM_FULL_HEAL, ITEM_X_ATTACK, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        //.partySize = ARRAY_COUNT(Leaf},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Leaf),

    },

    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(BrendanLinkPlaceholder},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanLinkPlaceholder),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(BrendanLinkPlaceholder),

    },

    [TRAINER_MAY_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,

        ////.partySize = ARRAY_COUNT(MayLinkPlaceholder},
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MayLinkPlaceholder),

        //.party = ITEM_CUSTOM_MOVES_NO_HARD(MayLinkPlaceholder),

    },
	
	[TRAINER_WALLY2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {ITEM_X_DEFENSE, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_SMART_SWITCHING,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(Wally2),
    },
	
	[TRAINER_ARCHIE_DOUBLE] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("Archie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_SMART_SWITCHING,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(ArchieDouble),
    },
	
	[TRAINER_MAXIE_DOUBLE] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("Maxie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_SMART_SWITCHING,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(MaxieDouble),
    },
	
	[TRAINER_RIVAL_HELPS] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("{RIVAL}"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_SMART_SWITCHING,
        .party = ITEM_CUSTOM_MOVES_NO_HARD(RivalAlly),
    },

};
