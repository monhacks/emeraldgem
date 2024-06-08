# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	namebox Marta
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_Text_1
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	namebox Rival
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer::
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer:
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs::
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit:
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs:
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Ves, amor?\p"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Nuestra casa es muy linda.$"
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon Movers hace todo el trabajo, Y\n"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "LIMPIAN, por un módico precio.\p"
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Tu cuarto está subiendo las escaleras,\n"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "amor, y Papá te compró un reloj muy\l"
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "bonito que deberías poner en hora.$"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Te dije que hicieras algo, ¿no?$"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}.\p"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "No te vas hasta que ajustes ese reloj.$"
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡{PLAYER}, {PLAYER}!\n"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡MIRA!$"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡ES EL GIMNAIO PETALBURG!\n"
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Una entrevista, además!$"
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "……………………………………………$"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡El amigo de la infancia de Papá vive\n"
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "acá!\p"
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Es un Profesor Pokémon, y me dijo\n"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "que te preguntara...\p"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Cuál es tu Región favorita?$"
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Hasta luego amor!$"
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Ya fuiste?$"
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Cómo va todo, amor?\n"
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Te ves cansad{OA}.\p"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Descansa un rato, amor,\n"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "y toma algo de paso.$"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Cuídate cariño!$"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡WOW! ¡Es la medalla de tu Papá!\p"
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Pues ahora tu señora madre te dará\n"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "algo también!$"
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Por favor, cuídate mucho, amor.$"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Qué es eso, amor? ¿Un Pokénav?\p"
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Entonces agrégame ahí, así te llamo\n"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "cada vez que te extraño!$"
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Añadiste a Mamá con muy pocas ganas…$"
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡VIIIIIGORR!$"
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh… Oth… VIGOROTH!$"
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Entrevistador: ¡Y bueno, aunque\n"
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "nervioso, ese fue Norman, el\l"
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Líder de Gimnasio!\p"
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ahora seguiremos con nuestra\n"
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "entrevista al nuevo donador de Devon,\l"
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "el señor -BZZT-$"
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hay una película en la tele.\p"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Un Zigzagoon y un Tailow Azul\n"
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "están peleando en el espacio…\p"
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … … … Mejor me voy…$"
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"
