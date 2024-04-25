#if GAME_LANGUAGE == LANGUAGE_SPANISH
    const u8 gEasyChatWord_Appeal[] = _("EXHIBICIÓN");
    const u8 gEasyChatWord_Events[] = _("INHIBICIÓN");
    const u8 gEasyChatWord_StayAtHome[] = _("SAFARI");
    const u8 gEasyChatWord_Berry[] = _("BAYA");
    const u8 gEasyChatWord_Contest[] = _("CONCURSO");
    const u8 gEasyChatWord_Mc[] = _("PRESENTADOR");
    const u8 gEasyChatWord_Judge[] = _("JUEZ");
    const u8 gEasyChatWord_Super[] = _("ALTO");
    const u8 gEasyChatWord_Stage[] = _("ESCENARIO");
    const u8 gEasyChatWord_HallOfFame[] = _("HALL FAMA");
    const u8 gEasyChatWord_Evolution[] = _("EVOLUCIÓN");
    const u8 gEasyChatWord_Hyper[] = _("AVANZADO");
    const u8 gEasyChatWord_BattleTower[] = _("T. BATALLA");
    const u8 gEasyChatWord_Leaders[] = _("LÍDERES");
    const u8 gEasyChatWord_BattleRoom[] = _("SALA BATALLA");
    const u8 gEasyChatWord_Hidden[] = _("GUARIDA");
    const u8 gEasyChatWord_SecretBase[] = _("BASE SECRETA");
    const u8 gEasyChatWord_Blend[] = _("LICUAR");
    const u8 gEasyChatWord_POKEBLOCK[] = _("POKECUBO");
    const u8 gEasyChatWord_Master[] = _("EXPERTO");
    const u8 gEasyChatWord_Rank[] = _("TIPOS");
    const u8 gEasyChatWord_Ribbon[] = _("CINTA");
    const u8 gEasyChatWord_Crush[] = _("MACHACABAYAS");
    const u8 gEasyChatWord_Direct[] = _("DIRECTA");
    const u8 gEasyChatWord_Tower[] = _("TORRE");
    const u8 gEasyChatWord_Union[] = _("UNIÓN");
    const u8 gEasyChatWord_Room[] = _("SALA");
    const u8 gEasyChatWord_Wireless[] = _("INÁLAMBRICA");
    const u8 gEasyChatWord_Frontier[] = _("FRENTE");

    const struct EasyChatWordInfo gEasyChatGroup_Events[] = {
        {
            .text = gEasyChatWord_Appeal,
            .alphabeticalOrder = 0,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Events,
            .alphabeticalOrder = 14,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_StayAtHome,
            .alphabeticalOrder = 12,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Berry,
            .alphabeticalOrder = 3,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Contest,
            .alphabeticalOrder = 17,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Mc,
            .alphabeticalOrder = 4,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Judge,
            .alphabeticalOrder = 22,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Super,
            .alphabeticalOrder = 23,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Stage,
            .alphabeticalOrder = 1,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_HallOfFame,
            .alphabeticalOrder = 10,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Evolution,
            .alphabeticalOrder = 28,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Hyper,
            .alphabeticalOrder = 9,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_BattleTower,
            .alphabeticalOrder = 15,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Leaders,
            .alphabeticalOrder = 11,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_BattleRoom,
            .alphabeticalOrder = 6,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Hidden,
            .alphabeticalOrder = 13,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_SecretBase,
            .alphabeticalOrder = 19,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Blend,
            .alphabeticalOrder = 5,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_POKEBLOCK,
            .alphabeticalOrder = 18,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Master,
            .alphabeticalOrder = 20,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Rank,
            .alphabeticalOrder = 21,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Ribbon,
            .alphabeticalOrder = 26,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Crush,
            .alphabeticalOrder = 16,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Direct,
            .alphabeticalOrder = 8,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Tower,
            .alphabeticalOrder = 2,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Union,
            .alphabeticalOrder = 7,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Room,
            .alphabeticalOrder = 24,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Wireless,
            .alphabeticalOrder = 25,
            .enabled = TRUE,
        },
        {
            .text = gEasyChatWord_Frontier,
            .alphabeticalOrder = 27,
            .enabled = TRUE,
        },
    };

#else
    const u8 gEasyChatWord_Appeal[] = _("APPEAL");
    const u8 gEasyChatWord_Events[] = _("EVENTS");
    const u8 gEasyChatWord_StayAtHome[] = _("STAY-AT-HOME");
    const u8 gEasyChatWord_Berry[] = _("BERRY");
    const u8 gEasyChatWord_Contest[] = _("CONTEST");
    const u8 gEasyChatWord_Mc[] = _("MC");
    const u8 gEasyChatWord_Judge[] = _("JUDGE");
    const u8 gEasyChatWord_Super[] = _("SUPER");
    const u8 gEasyChatWord_Stage[] = _("STAGE");
    const u8 gEasyChatWord_HallOfFame[] = _("HALL OF FAME");
    const u8 gEasyChatWord_Evolution[] = _("EVOLUTION");
    const u8 gEasyChatWord_Hyper[] = _("HYPER");
    const u8 gEasyChatWord_BattleTower[] = _("BATTLE TOWER");
    const u8 gEasyChatWord_Leaders[] = _("LEADERS");
    const u8 gEasyChatWord_BattleRoom[] = _("BATTLE ROOM");
    const u8 gEasyChatWord_Hidden[] = _("HIDDEN");
    const u8 gEasyChatWord_SecretBase[] = _("SECRET BASE");
    const u8 gEasyChatWord_Blend[] = _("BLEND");
    const u8 gEasyChatWord_POKEBLOCK[] = _("{POKEBLOCK}");
    const u8 gEasyChatWord_Master[] = _("MASTER");
    const u8 gEasyChatWord_Rank[] = _("RANK");
    const u8 gEasyChatWord_Ribbon[] = _("RIBBON");
    const u8 gEasyChatWord_Crush[] = _("CRUSH");
    const u8 gEasyChatWord_Direct[] = _("DIRECT");
    const u8 gEasyChatWord_Tower[] = _("TOWER");
    const u8 gEasyChatWord_Union[] = _("UNION");
    const u8 gEasyChatWord_Room[] = _("ROOM");
    const u8 gEasyChatWord_Wireless[] = _("WIRELESS");
    const u8 gEasyChatWord_Frontier[] = _("FRONTIER");

    const struct EasyChatWordInfo gEasyChatGroup_Events[] = {
        [EC_INDEX(EC_WORD_APPEAL)] =
        {
            .text = gEasyChatWord_Appeal,
            .alphabeticalOrder = 0,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_EVENTS)] =
        {
            .text = gEasyChatWord_Events,
            .alphabeticalOrder = 14,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_STAY_AT_HOME)] =
        {
            .text = gEasyChatWord_StayAtHome,
            .alphabeticalOrder = 12,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_BERRY)] =
        {
            .text = gEasyChatWord_Berry,
            .alphabeticalOrder = 3,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_CONTEST)] =
        {
            .text = gEasyChatWord_Contest,
            .alphabeticalOrder = 17,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_MC)] =
        {
            .text = gEasyChatWord_Mc,
            .alphabeticalOrder = 4,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_JUDGE)] =
        {
            .text = gEasyChatWord_Judge,
            .alphabeticalOrder = 22,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_SUPER)] =
        {
            .text = gEasyChatWord_Super,
            .alphabeticalOrder = 23,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_STAGE)] =
        {
            .text = gEasyChatWord_Stage,
            .alphabeticalOrder = 1,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_HALL_OF_FAME)] =
        {
            .text = gEasyChatWord_HallOfFame,
            .alphabeticalOrder = 10,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_EVOLUTION)] =
        {
            .text = gEasyChatWord_Evolution,
            .alphabeticalOrder = 28,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_HYPER)] =
        {
            .text = gEasyChatWord_Hyper,
            .alphabeticalOrder = 9,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_BATTLE_TOWER)] =
        {
            .text = gEasyChatWord_BattleTower,
            .alphabeticalOrder = 15,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_LEADERS)] =
        {
            .text = gEasyChatWord_Leaders,
            .alphabeticalOrder = 11,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_BATTLE_ROOM)] =
        {
            .text = gEasyChatWord_BattleRoom,
            .alphabeticalOrder = 6,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_HIDDEN)] =
        {
            .text = gEasyChatWord_Hidden,
            .alphabeticalOrder = 13,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_SECRET_BASE)] =
        {
            .text = gEasyChatWord_SecretBase,
            .alphabeticalOrder = 19,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_BLEND)] =
        {
            .text = gEasyChatWord_Blend,
            .alphabeticalOrder = 5,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_POKEBLOCK)] =
        {
            .text = gEasyChatWord_POKEBLOCK,
            .alphabeticalOrder = 18,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_MASTER)] =
        {
            .text = gEasyChatWord_Master,
            .alphabeticalOrder = 20,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_RANK)] =
        {
            .text = gEasyChatWord_Rank,
            .alphabeticalOrder = 21,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_RIBBON)] =
        {
            .text = gEasyChatWord_Ribbon,
            .alphabeticalOrder = 26,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_CRUSH)] =
        {
            .text = gEasyChatWord_Crush,
            .alphabeticalOrder = 16,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_DIRECT)] =
        {
            .text = gEasyChatWord_Direct,
            .alphabeticalOrder = 8,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_TOWER)] =
        {
            .text = gEasyChatWord_Tower,
            .alphabeticalOrder = 2,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_UNION)] =
        {
            .text = gEasyChatWord_Union,
            .alphabeticalOrder = 7,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_ROOM)] =
        {
            .text = gEasyChatWord_Room,
            .alphabeticalOrder = 24,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_WIRELESS)] =
        {
            .text = gEasyChatWord_Wireless,
            .alphabeticalOrder = 25,
            .enabled = TRUE,
        },
        [EC_INDEX(EC_WORD_FRONTIER)] =
        {
            .text = gEasyChatWord_Frontier,
            .alphabeticalOrder = 27,
            .enabled = TRUE,
        },
    };
#endif
