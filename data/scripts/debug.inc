Debug_Script_3::
# 3 "data/scripts/debug.pory"
	lockall
# 4 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_0
# 5 "data/scripts/debug.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, Debug_Script_3_Text_1, Debug_Script_3_Text_2, Debug_Script_3_Text_3, Debug_Script_3_Text_4, Debug_Script_3_Text_5, Debug_Script_3_Text_6
# 6 "data/scripts/debug.pory"
	setvar VAR_0x8004, 0
# 7 "data/scripts/debug.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 8 "data/scripts/debug.pory"
	special SetCustomization
# 9 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_7
# 10 "data/scripts/debug.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, Debug_Script_3_Text_1, Debug_Script_3_Text_8, Debug_Script_3_Text_9, Debug_Script_3_Text_10, Debug_Script_3_Text_11, Debug_Script_3_Text_12, Debug_Script_3_Text_13, Debug_Script_3_Text_14, Debug_Script_3_Text_15
# 11 "data/scripts/debug.pory"
	addvar VAR_RESULT, 5
# 12 "data/scripts/debug.pory"
	compare VAR_RESULT, 5
	goto_if_eq Debug_Script_3_2
Debug_Script_3_1:
# 15 "data/scripts/debug.pory"
	setvar VAR_0x8004, 1
# 16 "data/scripts/debug.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 17 "data/scripts/debug.pory"
	special SetCustomization
# 18 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_16
# 19 "data/scripts/debug.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, Debug_Script_3_Text_1, Debug_Script_3_Text_8, Debug_Script_3_Text_9, Debug_Script_3_Text_10, Debug_Script_3_Text_11, Debug_Script_3_Text_12, Debug_Script_3_Text_13, Debug_Script_3_Text_14, Debug_Script_3_Text_15
# 20 "data/scripts/debug.pory"
	addvar VAR_RESULT, 5
# 21 "data/scripts/debug.pory"
	compare VAR_RESULT, 5
	goto_if_eq Debug_Script_3_5
Debug_Script_3_4:
# 24 "data/scripts/debug.pory"
	setvar VAR_0x8004, 2
# 25 "data/scripts/debug.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 26 "data/scripts/debug.pory"
	special SetCustomization
# 27 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_17
# 28 "data/scripts/debug.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, Debug_Script_3_Text_1, Debug_Script_3_Text_8, Debug_Script_3_Text_9, Debug_Script_3_Text_10, Debug_Script_3_Text_11, Debug_Script_3_Text_12, Debug_Script_3_Text_13, Debug_Script_3_Text_14, Debug_Script_3_Text_15, Debug_Script_3_Text_18
# 29 "data/scripts/debug.pory"
	addvar VAR_RESULT, 5
# 30 "data/scripts/debug.pory"
	compare VAR_RESULT, 5
	goto_if_eq Debug_Script_3_8
Debug_Script_3_7:
# 33 "data/scripts/debug.pory"
	setvar VAR_0x8004, 3
# 34 "data/scripts/debug.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 35 "data/scripts/debug.pory"
	special SetCustomization
# 36 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_19
# 37 "data/scripts/debug.pory"
	releaseall
	return

Debug_Script_3_2:
# 13 "data/scripts/debug.pory"
	setvar VAR_RESULT, 0
	goto Debug_Script_3_1

Debug_Script_3_5:
# 22 "data/scripts/debug.pory"
	setvar VAR_RESULT, 0
	goto Debug_Script_3_4

Debug_Script_3_8:
# 31 "data/scripts/debug.pory"
	setvar VAR_RESULT, 0
	goto Debug_Script_3_7


# 40 "data/scripts/debug.pory"

# 41 "data/scripts/debug.pory"
Debug_ShowFieldMessageStringVar4::
# 42 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 43 "data/scripts/debug.pory"
	waitmessage
# 44 "data/scripts/debug.pory"
	waitbuttonpress
# 45 "data/scripts/debug.pory"
	releaseall
# 46 "data/scripts/debug.pory"
	end
# 47 "data/scripts/debug.pory"

# 48 "data/scripts/debug.pory"
Debug_CheckWeekDay_Text:
# 49 "data/scripts/debug.pory"
	.string "Aaaaah, yes!\l"
# 50 "data/scripts/debug.pory"
	.string "{STR_VAR_1}s are made for dads!\l"
# 51 "data/scripts/debug.pory"
	.string "And dad's car!$"
# 52 "data/scripts/debug.pory"

# 53 "data/scripts/debug.pory"
Debug_CheatStart::
# 54 "data/scripts/debug.pory"
	lockall
# 55 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/scripts/debug.pory"
	setflag FLAG_RESCUED_BIRCH
# 57 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 58 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 59 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 60 "data/scripts/debug.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 61 "data/scripts/debug.pory"
	setvar VAR_ROUTE101_STATE, 3
# 62 "data/scripts/debug.pory"
	givemon SPECIES_TREECKO, 20, ITEM_NONE
# 63 "data/scripts/debug.pory"
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
# 64 "data/scripts/debug.pory"
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
# 65 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 66 "data/scripts/debug.pory"
	special SetUnlockedPokedexFlags
# 67 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 68 "data/scripts/debug.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 69 "data/scripts/debug.pory"
	 setflag FLAG_SYS_NATIONAL_DEX
# 70 "data/scripts/debug.pory"
	 special EnableNationalPokedex
# 71 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 72 "data/scripts/debug.pory"
	setflag FLAG_SYS_B_DASH
# 73 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4: Received Running Shoes
# 74 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
# 75 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 76 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 77 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
# 78 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_BIKE
# 79 "data/scripts/debug.pory"
	giveitem ITEM_ACRO_BIKE
# 80 "data/scripts/debug.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 81 "data/scripts/debug.pory"
	setvar VAR_ROUTE116_STATE, 2
# 82 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 83 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 84 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 85 "data/scripts/debug.pory"
	 additem ITEM_MAX_REPEL, 10
# 86 "data/scripts/debug.pory"
	 giveitem ITEM_EON_TICKET
# 87 "data/scripts/debug.pory"
	 setflag FLAG_SHOWN_EON_TICKET
# 88 "data/scripts/debug.pory"
	 setvar VAR_DISTRIBUTE_EON_TICKET, 0
# 89 "data/scripts/debug.pory"
	 giveitem ITEM_MYSTIC_TICKET
# 90 "data/scripts/debug.pory"
	 setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 91 "data/scripts/debug.pory"
	 setflag FLAG_RECEIVED_MYSTIC_TICKET
# 92 "data/scripts/debug.pory"
	 giveitem ITEM_AURORA_TICKET
# 93 "data/scripts/debug.pory"
	 setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 94 "data/scripts/debug.pory"
	 setflag FLAG_RECEIVED_AURORA_TICKET
# 95 "data/scripts/debug.pory"
	 setflag FLAG_BADGE06_GET @ Badge for flying filed move
# 96 "data/scripts/debug.pory"
	closemessage
# 97 "data/scripts/debug.pory"
	release
# 98 "data/scripts/debug.pory"
	end
# 99 "data/scripts/debug.pory"

# 100 "data/scripts/debug.pory"
Debug_Script_1::
# 101 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 102 "data/scripts/debug.pory"
    setflag FLAG_SYS_POKEMON_GET
# 103 "data/scripts/debug.pory"
    setflag FLAG_SYS_POKENAV_GET
# 104 "data/scripts/debug.pory"
	setflag FLAG_MENU_DEXRELATED
# 105 "data/scripts/debug.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 106 "data/scripts/debug.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 107 "data/scripts/debug.pory"
	setflag FLAG_ENABLED_PC
# 108 "data/scripts/debug.pory"
	releaseall
# 109 "data/scripts/debug.pory"
	end
# 110 "data/scripts/debug.pory"

# 111 "data/scripts/debug.pory"
Debug_Script_2::
# 112 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 113 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 114 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 115 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 116 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 117 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 118 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 119 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 120 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 121 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 122 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 123 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 124 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 125 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 126 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 127 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 128 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 129 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 130 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 131 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 132 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 133 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 134 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 135 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 136 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 137 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 138 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 139 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 140 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 141 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 142 "data/scripts/debug.pory"
	end
# 143 "data/scripts/debug.pory"

# 144 "data/scripts/debug.pory"
Debug_Script_2B::
# 145 "data/scripts/debug.pory"
	clearflag FLAG_SHINY_CREATION
# 146 "data/scripts/debug.pory"
	end
# 147 "data/scripts/debug.pory"

# 148 "data/scripts/debug.pory"
Debug_Script_4::
# 149 "data/scripts/debug.pory"
	end
# 150 "data/scripts/debug.pory"

# 151 "data/scripts/debug.pory"
Debug_Script_5::
# 152 "data/scripts/debug.pory"
	end
# 153 "data/scripts/debug.pory"

# 154 "data/scripts/debug.pory"
Debug_Script_6::
# 155 "data/scripts/debug.pory"
	end
# 156 "data/scripts/debug.pory"

# 157 "data/scripts/debug.pory"
Debug_Script_7::
# 158 "data/scripts/debug.pory"
	end
# 159 "data/scripts/debug.pory"

# 160 "data/scripts/debug.pory"
Debug_Script_8::
# 161 "data/scripts/debug.pory"
	end

Debug_Script_3_Text_0:
# 4 "data/scripts/debug.pory"
	.string "Cambiarás tu apariencia. Elige color de\n"
	.string "piel$"

Debug_Script_3_Text_1:
# 5 "data/scripts/debug.pory"
	.string "Original$"

Debug_Script_3_Text_2:
# 5 "data/scripts/debug.pory"
	.string "Blanca$"

Debug_Script_3_Text_3:
# 5 "data/scripts/debug.pory"
	.string "Clara$"

Debug_Script_3_Text_4:
# 5 "data/scripts/debug.pory"
	.string "Media$"

Debug_Script_3_Text_5:
# 5 "data/scripts/debug.pory"
	.string "Marrón$"

Debug_Script_3_Text_6:
# 5 "data/scripts/debug.pory"
	.string "Oscura$"

Debug_Script_3_Text_7:
# 9 "data/scripts/debug.pory"
	.string "{STR_VAR_1} {STR_VAR_2}. Elige\n"
	.string "color de ropa principal$"

Debug_Script_3_Text_8:
# 10 "data/scripts/debug.pory"
	.string "Roja$"

Debug_Script_3_Text_9:
# 10 "data/scripts/debug.pory"
	.string "Naranja$"

Debug_Script_3_Text_10:
# 10 "data/scripts/debug.pory"
	.string "Amarilla$"

Debug_Script_3_Text_11:
# 10 "data/scripts/debug.pory"
	.string "Verde$"

Debug_Script_3_Text_12:
# 10 "data/scripts/debug.pory"
	.string "Cyan$"

Debug_Script_3_Text_13:
# 10 "data/scripts/debug.pory"
	.string "Azul$"

Debug_Script_3_Text_14:
# 10 "data/scripts/debug.pory"
	.string "Violeta$"

Debug_Script_3_Text_15:
# 10 "data/scripts/debug.pory"
	.string "Rosa$"

Debug_Script_3_Text_16:
# 18 "data/scripts/debug.pory"
	.string "{STR_VAR_1} {STR_VAR_2}. Elige\n"
	.string "color de accesorios 1$"

Debug_Script_3_Text_17:
# 27 "data/scripts/debug.pory"
	.string "{STR_VAR_1} {STR_VAR_2}. Elige\n"
	.string "color de accesorios 2$"

Debug_Script_3_Text_18:
# 28 "data/scripts/debug.pory"
	.string "Cristal$"

Debug_Script_3_Text_19:
# 36 "data/scripts/debug.pory"
	.string "{STR_VAR_1} {STR_VAR_2}.\n"
	.string "Gracias.$"
