# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	namebox Marta
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_Text_1
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_Text_1:
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡AH! ¿QUIÉN ERES?\p"
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah, ya veo, eres {PLAYER}, {ELLA} hij{OA} de\n"
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Norman…\p"
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pues, nuestr{AO} hij{AO} vive arriba, ¡Ve a\n"
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "presentarte!$"
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	namebox Marta
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	namebox Rival
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer:
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs::
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit:
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs:
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mi esposo debe… UGH…\n"
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Debe estar en el campo\l"
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "estudiando alguna estupidez…\p"
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Que gran tipo, ¿no…?$"
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah, mi {RIVAL}, creo que está\n"
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "usando toda su concentración en su\l"
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "investigación como para notar tu\l"
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "llegada, {PLAYER}. Ve a buscarle.$"
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah, mi {RIVAL}, creo que está\n"
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "en la Ruta 103 estudiando Pokémon,\l"
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "así que deberías buscarle, {PLAYER}.\l"
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "No quiero que le gane el cansancio.$"
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Es INCREÍBLE que la gente viaje\n"
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "con Pokémon, pero JAMÁS deberían\l"
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "olvidarse de sus familias, {PLAYER}.\l"
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Tu padre y mi esposo lo hicieron cuando\l"
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "salieron de viaje, y ahora APENAS\l"
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "pueden concentrarse en sus esposas e\l"
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "hijos…\p"
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pero bueno…$"
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, tú eres… {PLAYER},\n"
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Qué haces en mi casa?\p"
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … … … … …\p"
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mhhh… Mi papá dijo que vendrías,\n"
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}, ¡Y que seamos amigos!\l"
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pero recién nos conocimos hoy,\l"
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Verdad?\p"
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "No tengo mucho tiempo de todas formas,\n"
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}, espero lo entiendas.$"
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Hoda, veshin{OA}!\p"
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Ya tienesh Pokémon?$"
