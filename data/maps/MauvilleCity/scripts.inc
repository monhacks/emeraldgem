# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 4 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 7 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 8 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 9 "data/maps/MauvilleCity/scripts.pory"

# 10 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 11 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 12 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 13 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 14 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 15 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 16 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 17 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM24_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 18 "data/maps/MauvilleCity/scripts.pory"
	end
# 19 "data/maps/MauvilleCity/scripts.pory"

# 20 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 21 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 22 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 23 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 24 "data/maps/MauvilleCity/scripts.pory"
	return
# 25 "data/maps/MauvilleCity/scripts.pory"

# 26 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 27 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 28 "data/maps/MauvilleCity/scripts.pory"
	end
# 29 "data/maps/MauvilleCity/scripts.pory"

# 30 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 31 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 32 "data/maps/MauvilleCity/scripts.pory"
	end
# 33 "data/maps/MauvilleCity/scripts.pory"

# 34 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 35 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 36 "data/maps/MauvilleCity/scripts.pory"
	end
# 37 "data/maps/MauvilleCity/scripts.pory"

# 38 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 39 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 40 "data/maps/MauvilleCity/scripts.pory"
	end
# 41 "data/maps/MauvilleCity/scripts.pory"

# 42 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 43 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 44 "data/maps/MauvilleCity/scripts.pory"
	end
# 45 "data/maps/MauvilleCity/scripts.pory"

# 46 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 47 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 48 "data/maps/MauvilleCity/scripts.pory"
	end
# 49 "data/maps/MauvilleCity/scripts.pory"

# 50 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 51 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 52 "data/maps/MauvilleCity/scripts.pory"
	end
# 53 "data/maps/MauvilleCity/scripts.pory"

# 54 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 55 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 56 "data/maps/MauvilleCity/scripts.pory"
	end
# 57 "data/maps/MauvilleCity/scripts.pory"

# 58 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 59 "data/maps/MauvilleCity/scripts.pory"
	lock
# 60 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 61 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 62 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 63 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 64 "data/maps/MauvilleCity/scripts.pory"
	release
# 65 "data/maps/MauvilleCity/scripts.pory"
	end
# 66 "data/maps/MauvilleCity/scripts.pory"

# 67 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 68 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 69 "data/maps/MauvilleCity/scripts.pory"
	release
# 70 "data/maps/MauvilleCity/scripts.pory"
	end
# 71 "data/maps/MauvilleCity/scripts.pory"

# 72 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 73 "data/maps/MauvilleCity/scripts.pory"
	lock
# 74 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 75 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 76 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 77 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 78 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 79 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 80 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 81 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/MauvilleCity/scripts.pory"
	release
# 83 "data/maps/MauvilleCity/scripts.pory"
	end
# 84 "data/maps/MauvilleCity/scripts.pory"

# 85 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 86 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 87 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 88 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 89 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 90 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 91 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/MauvilleCity/scripts.pory"
	release
# 93 "data/maps/MauvilleCity/scripts.pory"
	end
# 94 "data/maps/MauvilleCity/scripts.pory"

# 95 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 96 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 97 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 98 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 101 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 102 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 103 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 104 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 105 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 106 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 107 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 108 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 109 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 111 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 112 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 114 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 116 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 117 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 118 "data/maps/MauvilleCity/scripts.pory"
	end
# 119 "data/maps/MauvilleCity/scripts.pory"

# 120 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 121 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 122 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 123 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 124 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 125 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 126 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 127 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 128 "data/maps/MauvilleCity/scripts.pory"
	end
# 129 "data/maps/MauvilleCity/scripts.pory"

# 130 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 131 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 132 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 134 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 136 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 138 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 139 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyNoNeedTo, MSGBOX_DEFAULT
# 140 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 141 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 142 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallysUncleItsOkay, MSGBOX_DEFAULT
# 143 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 144 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 145 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 146 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/MauvilleCity/scripts.pory"
	delay 36
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 150 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 151 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 152 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 153 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 154 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 155 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 156 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 157 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 158 "data/maps/MauvilleCity/scripts.pory"
	end
# 159 "data/maps/MauvilleCity/scripts.pory"

# 160 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 161 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 162 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 163 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 164 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 165 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 167 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 168 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 169 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyNoNeedTo, MSGBOX_DEFAULT
# 170 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 171 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 172 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallysUncleItsOkay, MSGBOX_DEFAULT
# 173 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 174 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 175 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 176 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 177 "data/maps/MauvilleCity/scripts.pory"
	delay 36
# 178 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 179 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 180 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 181 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 182 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 183 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 184 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 185 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 186 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 187 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 188 "data/maps/MauvilleCity/scripts.pory"
	end
# 189 "data/maps/MauvilleCity/scripts.pory"

# 190 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 191 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 192 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 193 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 194 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 195 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 196 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 197 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 198 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 199 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 200 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 201 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 202 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 203 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 204 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 205 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 206 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 207 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 208 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 209 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 210 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 211 "data/maps/MauvilleCity/scripts.pory"
	end
# 212 "data/maps/MauvilleCity/scripts.pory"

# 213 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 214 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 215 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 216 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/MauvilleCity/scripts.pory"
	return
# 218 "data/maps/MauvilleCity/scripts.pory"

# 219 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 220 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 221 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 222 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 223 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/MauvilleCity/scripts.pory"
	return
# 225 "data/maps/MauvilleCity/scripts.pory"

# 226 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 227 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 228 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 229 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 230 "data/maps/MauvilleCity/scripts.pory"
	return
# 231 "data/maps/MauvilleCity/scripts.pory"

# 232 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 233 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 234 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 235 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/MauvilleCity/scripts.pory"
	return
# 237 "data/maps/MauvilleCity/scripts.pory"

# 238 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 239 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 240 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 241 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 242 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 243 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 244 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 245 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 246 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 247 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 248 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 249 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 251 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 252 "data/maps/MauvilleCity/scripts.pory"
	return
# 253 "data/maps/MauvilleCity/scripts.pory"

# 254 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 255 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 256 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 257 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 258 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 259 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 260 "data/maps/MauvilleCity/scripts.pory"
	release
# 261 "data/maps/MauvilleCity/scripts.pory"
	end
# 262 "data/maps/MauvilleCity/scripts.pory"

# 263 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 264 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 265 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 266 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 267 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 268 "data/maps/MauvilleCity/scripts.pory"
	end
# 269 "data/maps/MauvilleCity/scripts.pory"

# 270 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 274 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 275 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 276 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 277 "data/maps/MauvilleCity/scripts.pory"

# 278 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 279 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 280 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 281 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 282 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 283 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 284 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 285 "data/maps/MauvilleCity/scripts.pory"

# 286 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 287 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 288 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 289 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 290 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 292 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 293 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 294 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 295 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 298 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 299 "data/maps/MauvilleCity/scripts.pory"

# 300 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 301 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 302 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 304 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 305 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 306 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 307 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 308 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 310 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 311 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 312 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 313 "data/maps/MauvilleCity/scripts.pory"

# 314 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 315 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 316 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 317 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 318 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 319 "data/maps/MauvilleCity/scripts.pory"

# 320 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 321 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 322 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 323 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 325 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 326 "data/maps/MauvilleCity/scripts.pory"

# 327 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 328 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 329 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 331 "data/maps/MauvilleCity/scripts.pory"

# 332 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 333 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 334 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 336 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 337 "data/maps/MauvilleCity/scripts.pory"

# 338 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 339 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 341 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 342 "data/maps/MauvilleCity/scripts.pory"

# 343 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 344 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 347 "data/maps/MauvilleCity/scripts.pory"

# 348 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 354 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 355 "data/maps/MauvilleCity/scripts.pory"

# 356 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 358 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 362 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 363 "data/maps/MauvilleCity/scripts.pory"

# 364 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 365 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 366 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 367 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 369 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 370 "data/maps/MauvilleCity/scripts.pory"

# 371 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 375 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 376 "data/maps/MauvilleCity/scripts.pory"

# 377 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 380 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 381 "data/maps/MauvilleCity/scripts.pory"

# 382 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 391 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 392 "data/maps/MauvilleCity/scripts.pory"

# 393 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 404 "data/maps/MauvilleCity/scripts.pory"

# 405 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 417 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 418 "data/maps/MauvilleCity/scripts.pory"

# 419 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 420 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 422 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 425 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 426 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 427 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 429 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 430 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 431 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 432 "data/maps/MauvilleCity/scripts.pory"

# 433 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 434 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 435 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 436 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 437 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 438 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 439 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 440 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 441 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 442 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 443 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 444 "data/maps/MauvilleCity/scripts.pory"

# 445 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 447 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 448 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 449 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 450 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 451 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 453 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 454 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 455 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 456 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 457 "data/maps/MauvilleCity/scripts.pory"

# 458 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 459 "data/maps/MauvilleCity/scripts.pory"
	lock
# 460 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 461 "data/maps/MauvilleCity/scripts.pory"
	checkitem ITEM_TM55
# 462 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_EventScript_ReceivedThunderbolt
# 463 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 464 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 465 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 466 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 467 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 468 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 469 "data/maps/MauvilleCity/scripts.pory"
	release
# 470 "data/maps/MauvilleCity/scripts.pory"
	end
# 471 "data/maps/MauvilleCity/scripts.pory"

# 472 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 473 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 474 "data/maps/MauvilleCity/scripts.pory"
	release
# 475 "data/maps/MauvilleCity/scripts.pory"
	end
# 476 "data/maps/MauvilleCity/scripts.pory"

# 477 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 478 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 479 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM55
# 480 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 481 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 482 "data/maps/MauvilleCity/scripts.pory"
	release
# 483 "data/maps/MauvilleCity/scripts.pory"
	end
# 484 "data/maps/MauvilleCity/scripts.pory"

# 485 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 486 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 487 "data/maps/MauvilleCity/scripts.pory"
	release
# 488 "data/maps/MauvilleCity/scripts.pory"
	end
# 489 "data/maps/MauvilleCity/scripts.pory"

# 490 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 491 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 492 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 493 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 494 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 495 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 496 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 497 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 498 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 499 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 500 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 501 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 502 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 503 "data/maps/MauvilleCity/scripts.pory"
	end
# 504 "data/maps/MauvilleCity/scripts.pory"

# 505 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "Mi Wally se emociona mucho, gracias a\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "los Pokémon.\p"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "Me parece que es mucha emoción…$"
# 509 "data/maps/MauvilleCity/scripts.pory"

# 510 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ay, porfa, Tío, déjame tomar el {COLOR BLUE}Desafío\n"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "de los Gimnasios{COLOR DARK_GRAY}, ya soy muy fuerte!\p"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ralts y yo aprendimos técnicas súper\n"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "fuertes!$"
# 515 "data/maps/MauvilleCity/scripts.pory"

# 516 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally, Wally, tranquilo.\p"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "¿No te estás precipitando?{PAUSE 2} Entiendo\n"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "que se hayan fortalecido, pero los\l"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR BLUE}Líderes de Gimnasio{COLOR DARK_GRAY} son MUY fuertes…$"
# 521 "data/maps/MauvilleCity/scripts.pory"

# 522 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "¡No me estoy precipitando, Tío!\p"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "Si Ralts me ayuda, {PAUSE 5}¡Podré vencer a\n"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "cualquier rival!$"
# 526 "data/maps/MauvilleCity/scripts.pory"

# 527 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "Ah, {PAUSE 2}¡{PLAYER}, {PLAYER}!\p"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Hace tanto que no te veo, amig{OA}!\p"
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "¡{PLAYER}, {PLAYER}, quiero\n"
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "mostrarte lo fuerte que me he vuelto!\l"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "Mi Ralts hasta ha aprendido muchos\l"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "ataques nuevos, {PLAYER}.\p"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "¿Te gustaría combatir conmigo,\n"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, por favor?$"
# 536 "data/maps/MauvilleCity/scripts.pory"

# 537 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "Pero… {PAUSE 5}Pero si no combatimos, mi Tío no\n"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "me dejará combatir en los Gimnasios…$"
# 540 "data/maps/MauvilleCity/scripts.pory"

# 541 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, {PAUSE 2}¿Verdad?\p"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally te admira muchísimo, y no querrá\n"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "irse de aquí hasta que tengan una\l"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "batalla, así que, por favor, por su bien\l"
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "y por el mío, {PAUSE 2}¿Podrías hacerlo?$"
# 547 "data/maps/MauvilleCity/scripts.pory"

# 548 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Porfa, {PLAYER}cit{OA}, porfa!$"
# 550 "data/maps/MauvilleCity/scripts.pory"

# 551 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "Gracias, muchas gracias.\p"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "-inhala-, -suspira-… Entonces…\p"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "¡{PLAYER}, t-{PAUSE 1}te desafío a una Batalla\n"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "Pokémon!$"
# 556 "data/maps/MauvilleCity/scripts.pory"

# 557 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: … {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "Perdí…\pY en frente de {PLAYER}…$"
# 561 "data/maps/MauvilleCity/scripts.pory"

# 562 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "T-{PAUSE 2}tío… {PAUSE 5}Q-{PAUSE 2}quiero… Ir a Verdanturf…\p"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … …$"
# 565 "data/maps/MauvilleCity/scripts.pory"

# 566 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "G-{PAUSE 2}gr…{PAUSE 2}gra…{PAUSE 2}g{PAUSE 1}r{PAUSE 1}a{PAUSE 1}c{PAUSE 1}i{PAUSE 1}a{PAUSE 1}s{PAUSE 1}, {PLAYER}…\p"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "Y-{PAUSE 2}yo… {PAUSE 5}R-{PAUSE 2}realme… {PAUSE 5}…{PAUSE 1}…{PAUSE 1}…{PAUSE 1}… {PAUSE 5}A{PAUSE 1}pre{PAUSE 1}c{PAUSE 1}i{PAUSE 1}o\n"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "que… {PAUSE 5}T{PAUSE 1}e h{PAUSE 1}a{PAUSE 1}{PAUSE 1}yas tomado el t{PAUSE 1}i{PAUSE 1}e{PAUSE 1}m{PAUSE 1}{PAUSE 1}po de\l"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "enseñarme que ser Entrenador se trata\l"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "de mucho más que subir unos niveles…\p"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "Necesito…\n"
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "… {PAUSE 5}…\l"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "… {PAUSE 5}Talento, {PAUSE 2}¿N{PAUSE 2}o{PAUSE 1} es así?$"
# 576 "data/maps/MauvilleCity/scripts.pory"

# 577 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "¿Ves, Wally? Estás equivocándote.\p"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "No seas tan duro contigo mismo, te dije\n"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "que ser Entrenador era una mala idea.\p"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "Siempre estás enfermo, y no quiero que\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "seguir fallando te lastime todavía más.\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "Deja esta locura de ser Entrenador,\n"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally. No todos podemos con lo que\l"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "requiere ser como {PLAYER}.$"
# 586 "data/maps/MauvilleCity/scripts.pory"
	
# 587 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyNoNeedTo:
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "Iré solo a Verdanturf.\pNecesito pensar, Tío.$"
# 589 "data/maps/MauvilleCity/scripts.pory"

# 590 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallysUncleItsOkay:
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "Está bien, Wally.\nCuídate mucho.$"
# 592 "data/maps/MauvilleCity/scripts.pory"

# 593 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "… {PAUSE 5}Creo… {PAUSE 5}Que eso fue demasiado,\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, realmente has aplastado su\l"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "espíritu totalmente… Esto es lo que temía.\p"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\n"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "Espero que esto al menos le ayude a despertarse.\n"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "Lo que hiciste… Estuvo bien.\p"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "Ahora dejará esto de lado, y la derrota\nno lo lastimará más. Gracias, {PLAYER}.$"
# 603 "data/maps/MauvilleCity/scripts.pory"

# 604 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … {PAUSE 2}¡Biip!\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: ¡H-{PAUSE 2}hola, {PLAYER}!\p"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "Q-{PAUSE 2}quería decirte que mi Tío me compró\n"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "un PokéNav.\p"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "Ahora podré hablar contigo un poco más\n"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "seguido.\p"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "C-{PAUSE 2}c-{PAUSE 2}c-{PAUSE 2}c-{PAUSE 2}claro, s-{PAUSE 2}si eso n-{PAUSE 2}no te parece\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "m-{PAUSE 2}molesto…\p"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "…\p"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "¿Te parece bien?\n"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Genial!\p"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Hablamos luego, {PLAYER}!\p"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … {PAUSE 2}¡Click!$"
# 620 "data/maps/MauvilleCity/scripts.pory"

# 621 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "Has añadido a Wally\n"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "al PokéNav.$"
# 624 "data/maps/MauvilleCity/scripts.pory"

# 625 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "Batallas como esa que acabo de ver,\n"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "donde ambos Entrenadores dejan\l"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "sentimentalismos de lado y no se\l"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "contienen… {PAUSE 2}¡Yeah! {PAUSE 2}¡Esas son verdaderas\l"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "Batallas Pokémon!\p"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "Ese que se fue recién, {PAUSE 2}¿Son amigos, no?\p"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "Poder ver tal demostración de\n"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "poder, tal diferencia de fuerzas,\p"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Eso le ayudará a él a convertirse\n"
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "en alguien capaz de vencer a\l"
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "cualquier rival!\p¡Ese tipo que lo desanimó no sabe la\nsorpresa que le espera!$"
# 637 "data/maps/MauvilleCity/scripts.pory"

# 638 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "Ah, {PAUSE 2}¡{PLAYER}!\p"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Que alegría verte aquí!\n"
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Hasta se ve que estás hechando\l"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "chispas, BUAJAJAJAJA!\p"
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Mira, mira, {PLAYER}, necesito que me\n"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "hagas un favor.\p"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "Hace tiempo, creé un lugar llamado\n"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "Nueva Mauville, pero por alguna razón,\l"
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "el generador ha vuelto a encenderse…\l"
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Y eso molesta a los Pokémon salvajes,\l"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "podría sobrecargarlos y causar\l"
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "aprietos!\p"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "Necesito que vayas ahí y apagues el\n"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "generador. No puedo hacerlo yo porque\l"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "mis piernas ya no son lo que eran…\l"
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "Así que toma estas Llaves, y apaga ese\l"
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "generador por mí,{PAUSE 2} ¿Okay?$"
# 656 "data/maps/MauvilleCity/scripts.pory"

# 657 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ah, y no te preocupes!\n"
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "Ese lugar es inseguro, pero no mortal.\l"
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "Estarás bien, {PAUSE 2}¡No es como si un humano\l"
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "pudiera sobrecargarse de electricidad\l"
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "como un Voltorb, BUAJAJAJAJA!$"
# 663 "data/maps/MauvilleCity/scripts.pory"

# 664 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "¡BUAJAJAJAJA!\p"
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Sabía que podrías!\p"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ahora, ten esta MT.\n"
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "Contiene el movimiento Rayo Carga, que\l"
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "subirá tu Ataque Especial en un nivel\l"
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "después de usarse, {PAUSE 2}¿Muy útil, no?\p"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Se podría decir que cargas con un arma\n"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "ahora, BUAJAJAJAJAJA!$"
# 673 "data/maps/MauvilleCity/scripts.pory"

# 674 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Se podría decir que cargas con un arma\n"
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "ahora, BUAJAJAJAJAJA!$"
# 677 "data/maps/MauvilleCity/scripts.pory"

# 678 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 679 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 680 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 681 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 682 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 683 "data/maps/MauvilleCity/scripts.pory"

# 684 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 685 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 686 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 688 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 689 "data/maps/MauvilleCity/scripts.pory"

# 690 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 691 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 692 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 693 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 694 "data/maps/MauvilleCity/scripts.pory"

# 695 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 696 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 697 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 698 "data/maps/MauvilleCity/scripts.pory"

# 699 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 700 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 701 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 702 "data/maps/MauvilleCity/scripts.pory"

# 703 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 704 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 705 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 706 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 707 "data/maps/MauvilleCity/scripts.pory"

# 708 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 709 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 710 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 711 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 712 "data/maps/MauvilleCity/scripts.pory"

# 713 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 714 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 715 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 716 "data/maps/MauvilleCity/scripts.pory"

# 717 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 718 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 719 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 720 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 721 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 722 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 723 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 724 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 725 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 726 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 727 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 728 "data/maps/MauvilleCity/scripts.pory"

# 729 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 730 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
