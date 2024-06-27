# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE, 1
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_RIVAL, 3
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CYNDAQUIL, 4
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_TOTODILE, 5
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CHIKORITA, 6
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Birch
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon2
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_DEFAULT
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_1
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE SIDE_QUEST_1
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_BUFFER_QUEST_NAME SIDE_QUEST_1
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message MisionObtenida
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Birch
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_EsUnaMision, MSGBOX_DEFAULT
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
MisionObtenida:
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡La misión {COLOR LIGHT_RED SHADOW RED}“{STR_VAR_1}”{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "ha sido desbloqueada!$"
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_EsUnaMision:
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Acabo de darte una {COLOR BLUE}Misión{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\n"
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Si la cumples, obtendrás una\l"
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}recompensa{COLOR DARK_GRAY SHADOW LIGHT_GRAY}, que dependerá\l"
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de la {COLOR LIGHT_RED SHADOW RED}dificultad de la misión{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\p"
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Esta vez, la misión es ir a buscar a\n"
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} en la Ruta 103.$"
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_2
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1:
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_2:
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5:
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_0, MSGBOX_AUTOCLOSE
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 120
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_1, MSGBOX_AUTOCLOSE
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_0:
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿El Profe…? No está aquí, se fue a\n"
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "hacer trabajo de campo. ¡Oh! ¡Déjame\l"
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "explicarte qué es eso!\p"
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pues verás, el trabajo de campo es\n"
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "cuando………………\n"
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "………………………$"
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_1:
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Y eso es todo! ¡Gracias por escuchar!$"
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2:
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡El Profe aprecia mucho la ayuda de\n"
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}, aunque no lo demuestre!$"
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpicshiny SPECIES_CYNDAQUIL, 10, 3, 2
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpicshiny SPECIES_TOTODILE, 10, 3, 1
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpicshiny SPECIES_CHIKORITA, 10, 3, 0
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TOTODILE
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Birch
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Birch
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Birch
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 5
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_2
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_5
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_6
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_8
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_11
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_QUEST_MENU_ACTIVE
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLED_PC
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Birch
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox TeHeDadoMas, MSGBOX_DEFAULT
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Rival
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
TeHeDadoMas:
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Te he dado algunas\n"
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "misiones más, {PLAYER}, ¡Estoy seguro\l"
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que podrás completarlas!\p"
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Una vez lo hagas, ¡puedes volver\n"
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "conmigo para recompensarte y darte\l"
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "otras!$"
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 30
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Rival
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 30
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	namebox Rival
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidenamebox
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_QUEST_MENU_ACTIVE
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLED_PC
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE SIDE_QUEST_3  
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_Book_ReRead
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_3
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Descubrire_Verdad, MSGBOX_SIGN
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book_ReRead:
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookNotTooHardToRead, MSGBOX_SIGN
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookNotTooHardToRead:
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El libro… Ya no es difícil de leer.\p"
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "“Querido diario, un Pokémon que\n"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "cambiaba de forma atacó la ciudad.\l"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Cómo se veía realmente?\p"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "No pude decifrarlo. Pero con ayuda de\n"
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Alex, Dia, Norman y de Carlos, logramos\l"
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "derrotale. Aún desconozco qué Pokémon\l"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "era, pero sospecho que era\l"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "proveniente de otra región…\p"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ellos dicen que es mejor así, pero yo\n"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "no estoy de acuerdo. Dedicaré mi vida\l"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a ello si hace falta, pero encontraré\l"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a ese Pokémon y lo estudiaré.\l"
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Esta… Es la motivación que me\l"
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "faltaba para hacerlo…\p"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Seré un Profesor Pokémon.”\p"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Eso… Es lo que decía…$"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Descubrire_Verdad:
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … … … … …\n"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … … … … …\l"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … … … … …\p"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Descubriré la verdad.$"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Así que, {PLAYER}, veo que sabes\n"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tanto sobre los Pokémon, que\l"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que {COLOR BLUE}puedes saber sus movimientos a\l"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "primera vista{COLOR DARK_GRAY}…\p"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pues, gracias a eso, ¡Te regalaré el\n"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon que atrapaste antes!$"
# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon2:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡{PLAYER} receivió un {COLOR LIGHT_RED SHADOW RED}{STR_VAR_1}{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de manos del Profesor!$"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Sabes? {RIVAL} está en la Ruta 103,\n"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "estudiando a todos los Pokémon\l"
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "nuevos que aparecieron allí.\l"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Espero que tengan una batalla!$"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿{RIVAL}?\p"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Está en casa, creo.$"
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡{PLAYER}! ¡Escuché que\n"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "venciste el equipo de {RIVAL}…!\p"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡IMPRESIONANTE!\n"
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} me ha estado ayudando a\l"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "investigar, y ¡Aún con su\l"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "experiencia le has ganado! ¡JA!\p"
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Me sorprendes, {PLAYER}, así que,\n"
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "toma esto.$"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡{PLAYER} recibió la {COLOR GREEN}Pokédex{COLOR DARK_GRAY}!$"
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Tengo algo que decirte, {PLAYER}.\p"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Muchos Pokémon han estado {COLOR BLUE}migrando\n"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a Hoenn{COLOR DARK_GRAY}. Y estoy investigando\l"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "la razón. Pero necesito su ayuda.\p"
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Por eso, {PLAYER} y {RIVAL}, sus Pokédex\n"
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tienen acceso al {COLOR LIGHT_RED SHADOW RED}Modo Nacional{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\p"
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Si me ayudan, los recompensaré.\p"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Además! ¡Por cumplir la misión que\n"
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "te di antes, ten esta recompensa!$"
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Profe Birch: ¡Ve!\n"
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡A la aventura!$"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}\n"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Eh!\p"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}…{PAUSE 15} Bien-{PAUSE 10} ¡bien hecho!\p"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ya…{PAUSE 15} Ya eres mejor que…{PAUSE 15} Eh, nada.\n"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Toma estas Pokéball. Te ayudarán.$"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}\n"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ah, {PLAYER}, adelántate…\l"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yo…{PAUSE 10}…{PAUSE 10}…{PAUSE 10} Te alcanzaré luego…$"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que carajos.$"
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿No tienes nada mejor que hacer?$"
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que mierda.$"
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "…$"
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Una… ¿Máquina?\n"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Me pregunto qué hace.$"
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Es un PC. Mejor lo dejo así.$"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hay muchísimos libros.$"
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Es… Un libro difícil de leer…\p"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "“Querido diario, un ?ok???n que\n"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "?????aba ?e ?or?? atacó el pueblo.\l"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Cómo se ve?a r?almen?e?\p"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "No pude decifrarlo. Pero con ayuda de\n"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Al??, ?a?, Nor??? y de Ca??o?, logramos\l"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "derrotale. Aún desconozco qué P???m??\l"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "era, pero sos??cho qu? er?\l"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "prov???ente de ???? r???ó?…\p"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ell?s d???n ?u? e? m?j?? ???………………”\p"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El resto de el libro es indescifrable.$"
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 1017 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 1018 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 1027 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1028 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1029 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1031 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1033 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1034 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1035 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1038 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1039 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1040 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1044 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"
