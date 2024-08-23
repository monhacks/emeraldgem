# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_COLE, 2
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_GERALD, 3
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_AXLE, 4
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_DANIELLE, 5
# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_Gym_1F_OnFrame
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnFrame:
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 5, LavaridgeTown_Gym_1F_EventScript_WallyEvent
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.2byte 0
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEventSetUp::
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent::
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WALLY_QUEST_SEEN
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectxy 1, 12, 11
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	fadeoutbgm 1
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 24
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_0
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 16
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playse SE_PIN
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_1
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playse SE_PIN
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 24
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playbgm MUS_END, FALSE
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Wally
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_2
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 24
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Wally
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_3
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 16
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_4
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 16
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_5
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Wally
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_6
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_7
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_8
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playse SE_BALL_TRADE
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 7, Common_Movement_QuestionMark
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Wally
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_9
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_10
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	savebgm MUS_DUMMY
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	fadedefaultbgm
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Wally
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_11
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_12
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 16
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_WALLY_LAVARIDGE
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_WALLY_FORTREE
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	removeobject 7
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 24
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 1, LavaridgeGym_Movement_FlanneryAproachesPlayer
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_13
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement 1, LavaridgeGym_Movement_FlanneryBackOnGym
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_14
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_LAVARIDGE_TOWN_STATE, 1
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checkitem ITEM_TM50
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_MEGA_RING
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainMegaRing, MSGBOX_DEFAULT
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveMegaStone
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStone::
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	switch VAR_STARTER_REGION
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 1, LavaridgeTown_Gym_1F_EventScript_GiveMegaStoneKanto
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 8, LavaridgeTown_Gym_1F_EventScript_GiveMegaStoneGalar
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	switch VAR_STARTER_MON
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 0, LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_2
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 1, LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_3
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 2, LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_4
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStoneKanto:
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	switch VAR_STARTER_MON
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 0, LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_5
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 1, LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_6
# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 2, LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_7
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStoneGalar:
# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_GIGANTAMAX_STONE, 1
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_2:
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_3:
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_4:
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_5:
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_6:
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveMegaStone_7:
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM50
# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM50
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	namebox Flannery
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	hidenamebox
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_COLE, LOCALID_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	switch VAR_LAST_TALKED
# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 4, LavaridgeTown_Gym_1F_EventScript_MoveUp4
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 5, LavaridgeTown_Gym_1F_EventScript_MoveUp5
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_EventScript_CheckTrainerScript2
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript2::
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_MoveUp4::
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, LavaridgeTown_Gym_1F_Movement_Up
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 3, 9
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_EventScript_CheckTrainerScript2
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_MoveUp5::
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, LavaridgeTown_Gym_1F_Movement_Up
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmovement 0
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectxyperm VAR_LAST_TALKED, 5, 1
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_EventScript_CheckTrainerScript2
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Movement_Up::
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	walk_up
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	face_down
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	step_end
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_AXLE, LOCALID_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_KEEGAN, LOCALID_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_double TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_NotEnough,LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleText::
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_NotEnough::
# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_DANIELLE, LOCALID_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_DanielleText
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_GERALD, LOCALID_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JACE, LOCALID_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JEFF, LOCALID_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_ELI, LOCALID_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeGym_Movement_FlanneryAproachesPlayer:
# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	walk_right
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	step_end
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeGym_Movement_FlanneryBackOnGym:
# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	walk_up
# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	walk_up
# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	walk_in_place_down
# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	step_end
# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_0:
# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿Estás bien, {PLAYER}?\n"
# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Tuvieron suerte que estuviera cerca\l"
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "para ayudarte a traer a {COLOR GREEN}Wally{COLOR DARK_GRAY} hasta\l"
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "aquí...\p"
# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "... ... ...\n"
# 415 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "... ... ...\p"
# 416 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ya veo, me alegra que estés bien.\p"
# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Entonces, ¿Wally estaba entrenando en\n"
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "la Ruta 111?\l"
# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No veo qué tiene de malo...$"
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_1:
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿¡Wally tiene {COLOR RED}asma{COLOR DARK_GRAY}!?\p"
# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿¡P-pero qué hacía entonces en la Ruta\n"
# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "111!? ¡Esa Ruta está en una {COLOR RED}Tormenta\l"
# 425 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de Arena constante{COLOR DARK_GRAY}!\p"
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Quiero decir, entiendo el desafiarse,\n"
# 427 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "pero...$"
# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 429 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_2:
# 430 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}... {PAUSE 20} ¿Er-{PAUSE 15} eres tú?\p"
# 431 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿Q-{PAUSE 20}qué pasó...?$"
# 432 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 433 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_3:
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "O-{PAUSE 15}oh...{PAUSE 15}\n"
# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Creo...{PAUSE 15} Que me sobrepasé, ¿no?\p"
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Tan típico de mí... No puedo soportar ni\n"
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "un poquito de arena... Si no puedo hacer\l"
# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ni eso,\l"
# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿Cómo espero ser un Entrenador?\l"
# 440 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿Cómo espero poder ser alguien...?$"
# 441 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_4:
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Wally, eso no está bien.$"
# 444 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 445 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_5:
# 446 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Todos tenemos límites, todos tenemos\n"
# 447 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "áreas en donde flaqueamos y donde nos\l"
# 448 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "cuesta más que otros mejorar.\p"
# 449 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Tienes asma, y no hay nada de malo con\n"
# 450 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "eso, si te cuidas, no va a detenerte de\l"
# 451 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ser un Entrenador poderoso.\p"
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Después de todo, {COLOR RED}no me detiene a mí{COLOR DARK_GRAY}, ¿O\n"
# 453 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "sí?$"
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 455 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_6:
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿Tienes... {PAUSE 10}Asma también?\n"
# 457 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pero... No parece afectarte, nunca te he\l"
# 458 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "visto agitada o sin aliento...$"
# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_7:
# 461 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Eso es porque sé cuidarme, Wally.\p"
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "He tenido esta condición toda mi vida, y\n"
# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "he sentido lo mismo que tú. Querer\l"
# 464 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "'Desafiarme,' querer 'Sobrepasarme,'\l"
# 465 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "para poder ser tan buena como los\l"
# 466 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "demás.\p"
# 467 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pero eso no me causó ningún bien.\n"
# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me lastimó, me causó dolor. Y eso sólo\l"
# 469 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "empeoraba.\p"
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No fue hasta que aprendí que está bien\n"
# 471 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "tener límites, que pude comenzar a ser\l"
# 472 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "yo misma más, a realmente mejorar, a mi\l"
# 473 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "propio ritmo, con mis propios métodos.\p"
# 474 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Y mírame ahora, soy la {COLOR RED}Líder de Gimnasio{COLOR DARK_GRAY}\n"
# 475 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de Lavaridge.\p"
# 476 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Así que, por favor, Wally. No cometas los\n"
# 477 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "mismos errores que yo.$"
# 478 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 479 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_8:
# 480 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Flannery le ha dado un inhalador a\n"
# 481 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Wally!$"
# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 483 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_9:
# 484 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Esto... ¿Qué es?$"
# 485 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 486 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_10:
# 487 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Es un inhalador. Te ayudará a mejorar tu\n"
# 488 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "condición cuando te sientas mal, y si\l"
# 489 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "vas a una clínica, podrán darte\l"
# 490 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "indicaciones sobre qué dosis tendrías\l"
# 491 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "que tomar y a qué horas.\p"
# 492 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Si eres responsable, deberías\n"
# 493 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "mayormente estar bien.$"
# 494 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 495 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_11:
# 496 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Gracias... Gracias, Flannery.\p"
# 497 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "-COF, COF- Em...{PAUSE 10} Creo que descansaré un\n"
# 498 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "tiempo, pero seguiré entrenando, y me\l"
# 499 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "haré lo suficientemente poderoso como\l"
# 500 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "para derrotarte, Flannery.\p"
# 501 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Cuando los necesite, tomaré descansos.\n"
# 502 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pero cuando esté listo, ¡Espero estés\l"
# 503 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "preparada para perder!$"
# 504 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 505 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_12:
# 506 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Esa es la actitud, Wally!\n"
# 507 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Creo en tí, que llegarás más lejos que\l"
# 508 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "nadie!$"
# 509 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 510 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_13:
# 511 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Por favor, {PLAYER}, asegúrate de\n"
# 512 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "estar ahí para Wally si te necesita.\p"
# 513 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Estará bien, por lo que no necesitas\n"
# 514 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "'Cuidarle.'\l"
# 515 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Sólo te pido que estés a su lado, y que\l"
# 516 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "seas su amig{OA}, ¿Está bien?$"
# 517 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 518 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_14:
# 519 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Ahora, {PLAYER}, sigue mejorando!\p"
# 520 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Conociendo nuevas personas y\n"
# 521 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "rompiendo tus fronteras!\p"
# 522 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Con cuidado, para no sobrepasarte,\n"
# 523 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Pero con constancia, para cada día\l"
# 524 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ser mejor de lo que eras ayer!$"
# 525 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 526 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 527 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ah, ¿Como estás, Joven Promesa\n"
# 528 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}?\p"
# 529 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Algo que debes saber de este Gimnasio,\n"
# 530 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "es que, aparte de no poder usar el\l"
# 531 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Sistema de Almacenamiento Pokémon...\l"
# 532 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡No tiene una Regla Especial!\p"
# 533 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Sin embargo, cuando pises uno de esos\n"
# 534 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "pozos de arena... ¡Existe la posibilidad\l"
# 535 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de que alguno de tus Pokémon resulte\l"
# 536 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "quemado, si no es que todos!\p"
# 537 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Y hay algunos Entrenadores están\n"
# 538 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "esperando que te pase eso para\l"
# 539 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "atacarte en las peores condiciones!\p"
# 540 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Espero hayas traído Antiquemar!$"
# 541 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 542 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 543 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Espero verte pronto!$"
# 544 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 545 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 546 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Auauauauauauuu!\n"
# 547 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Ay, la arena estaba caliente!$"
# 548 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 549 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 550 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No vale, me cegó mi sudor…$"
# 551 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 552 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 553 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Supuestamente, esconderse\n"
# 554 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "en esta arena caliente mejora\l"
# 555 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "la circulación.\p"
# 556 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Es muy efectivo para liberar\n"
# 557 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "el dolor articular!$"
# 558 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 559 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 560 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Estoy intentando desestresarme.\n"
# 561 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡No me arruines eso!$"
# 562 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 563 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 564 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flannery seguramente va a\n"
# 565 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "quemarte por completo, ¡No\l"
# 566 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "puedo esperar a que eso pase!$"
# 567 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 568 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 569 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ahhh… Ufff…\p"
# 570 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Acabaste conmigo…$"
# 571 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 572 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 573 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Debes estarte cansando, ¿no?.\n"
# 574 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Que lástima que no estés\l"
# 575 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "acostumbrad{OA} a el calor de\l"
# 576 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "esta arena, o no te quemaría.\p"
# 577 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Por eso mismo, ganaré!$"
# 578 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 579 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 580 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"
# 581 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 582 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 583 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
# 584 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But our LEADER FLANNERY is strong.\p"
# 585 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you don't watch yourself, you'll be\n"
# 586 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "burned seriously.$"
# 587 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 588 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 589 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your POKéMON withstand\n"
# 590 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392-degree heat?$"
# 591 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 592 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 593 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"
# 594 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 595 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 596 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
# 597 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392 degrees.\p"
# 598 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your POKéMON beat me, so they should\n"
# 599 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "easily survive in magma.$"
# 600 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 601 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 602 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
# 603 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, I'll battle with you.$"
# 604 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 605 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 606 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"
# 607 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 608 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 609 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
# 610 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "TRAINER just like FLANNERY.$"
# 611 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 612 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 613 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 614 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 615 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 616 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 617 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
# 618 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "clutched by ice…$"
# 619 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 620 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 621 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 622 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 623 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our LEADER.$"
# 624 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 625 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 626 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
# 627 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "They flare in anticipation of my win!$"
# 628 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 629 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 630 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"
# 631 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 632 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 633 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
# 634 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I can walk on hot coals barefoot!\p"
# 635 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "…Don't even think about trying it!$"
# 636 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 637 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 638 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
# 639 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I especially love volcanoes.$"
# 640 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 641 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 642 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 643 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 644 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 645 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 646 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 647 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of FLANNERY's power.\p"
# 648 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 649 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 650 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 651 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Bienvenid{AO}… No, espera, no eres-\p"
# 652 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Entrenador{A} inútil, ¿Cómo osas\n"
# 653 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "molestar a-?\p"
# 654 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No, olvida todo eso, eh…\p"
# 655 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Soy Flannery, la Líder de Gimnasio!\p"
# 656 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Em…\n"
# 657 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "He tenido el puesto por poco tiempo,\l"
# 658 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Y aún así, mi poder es inconmesurable!\p"
# 659 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Prepárate a ser quemad{OA} por\nel poder que mi bisabuelo me otorgó!$"
# 660 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 661 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 662 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "-COF, COF-\n Em…\l"
# 663 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Supongo que me sobrepasé un poco\lpor accidente…\p"
# 664 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Creí ya haber aprendido esa\n"
# 665 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "lección, pero ser una nueva\lLíder me puso mucha presión y\lsupongo que lo olvidé:\p"
# 666 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Tengo que ir a mi propio ritmo,\n"
# 667 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "para no sobrepasarme, y ser fiel\l"
# 668 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "a mí misma. Gracias por recordármelo.\p"
# 669 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Como recompensa, ten esto.$"
# 670 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 671 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 672 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} recibió la Medalla Calor\n"
# 673 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de Flannery.$"
# 674 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 675 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 676 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Con esa Medalla, Pokémon de hasta\n"
# 677 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "nivel 40 te escucharán y obedecerán\l"
# 678 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "sin problema alguno.\p"
# 679 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Y también podrás usar la MO Fuerza.\p"
# 680 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Sin embargo, ¡No es todo lo que\n"
# 681 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "te daré como recompensa!$"
# 682 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 683 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 684 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Es la MT 50 Sofoco.\p"
# 685 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Es un poderoso movimiento que\nbaja tu Ataque Especial al usarlo.\p"
# 686 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pero basta ya de todas esas\n"
# 687 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "formalidades, la verdadera\l"
# 688 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "recompensa que te daré es esta.$"
# 689 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 690 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainMegaRing:
# 691 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Es una Mega Pulsera!\p"
# 692 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Con ella, podrás acceder a la\npoderosísima Mega Evolución de\lla que ya fuiste testigo con\lmi Mega-Camerupt.\p"
# 693 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Para poder usarla, requieres un\n"
# 694 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pokémon capaz de Megaevolucionar,\l"
# 695 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "y su respectiva Mega-Piedra.\pMira, te daré esta para que pruebes\nlas Megaevoluciones ahora.$"
# 696 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 697 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 698 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Después de todas esas explicaciones,\n"
# 699 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "registraste a Flannery en el PokéNav.$"
# 700 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 701 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 702 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Tu poder me recuerda a alguien…\p"
# 703 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Ah! ¡Que cabeza la mía!\n"
# 704 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Batallas como tu padre, Norman!$"
# 705 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 706 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 707 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Gimnasio Pokémon de Lavaridge\p"
# 708 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Entrenadores Certificados:\n"
# 709 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Leaf$"
# 710 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 711 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 712 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Gimnasio Pokémon de Lavaridge\p"
# 713 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Entrenadores Certificados:\n"
# 714 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Leaf\l{PLAYER}$"
# 715 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 716 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 717 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 718 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 719 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 720 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 721 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 722 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 723 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 724 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 725 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 726 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 727 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 728 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 729 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 730 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: I lost the match,\n"
# 731 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 732 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 733 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 734 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 735 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 736 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 737 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 738 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 739 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 740 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 741 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 742 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 743 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 744 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 745 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one POKéMON\n"
# 746 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 747 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 748 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two POKéMON.$"
