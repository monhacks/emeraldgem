SlateportCity_Harbor_MapScripts::
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_SLATEPORT_HARBOR_STATE, 1
	goto_if_eq SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm 4, 12, 13
# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	goto SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
	return


SlateportCity_Harbor_EventScript_AquaEscapeTrigger1::
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 29 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
	return


SlateportCity_Harbor_EventScript_AquaEscapeTrigger2::
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
	return


SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_0, MSGBOX_INTERRUPT
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Unknown
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_1
# 49 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadeoutbgm 1
# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_2
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Aqua
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_3, MSGBOX_INTERRUPT
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_4
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_5
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Unknown
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_6
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject 11
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Unknown
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_7
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 11, SlateportCity_Harbor_Movement_DeltaEnter
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_8
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Delta
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_9, MSGBOX_INTERRUPT
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_10
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq SlateportCity_Harbor_EventScript_AquaEscapeScene_2
SlateportCity_Harbor_EventScript_AquaEscapeScene_1:
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject 12
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxy 12, 8, 12
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject 12
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_11
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Unknown
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_12
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_THUNDER
# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 2
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitse
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_FAINT
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitse
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject 12
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm 12, 23, 0
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject 9
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject 10
# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_13
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportCity_Harbor_Movement_CameraPan
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 8
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_14
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Winona
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_15
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_16
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 9, SlateportCity_Harbor_Movement_WinonaDown
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 10, SlateportCity_Harbor_Movement_WinonaDown
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportCity_Harbor_Movement_CameraDown
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Winona
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_17
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 9, SlateportCity_Harbor_Movement_JumpDown
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 4
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 1
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject 10
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_BALL
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 1
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_18
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Winona
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_19, MSGBOX_INTERRUPT
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 2
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8005, 2
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8006, 5
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8007, 4
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
	special ShakeCamera
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Winona
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_20
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 165 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Winona
# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_21
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 9, SlateportCity_Harbor_Movement_WinonaLeave
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_22
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Aqua
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_23
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_DELTA
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject 11
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject 9
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 8, SlateportCity_Harbor_Movement_SubmarineExit
# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject 8
# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Archie
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_24
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject 7
# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject 6
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxy 4, 7, 12
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadedefaultbgm
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Stern
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_25
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Player
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_26
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Stern
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_27, MSGBOX_INTERRUPT
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_28
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Player
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_29
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	special RemoveCameraObject
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNTS_BLOCKING_ENTRANCE
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_AQUA_HIDEOUT_SET_DELTA_DIVISION
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm 4
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
	end

SlateportCity_Harbor_EventScript_AquaEscapeScene_2:
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_JumpLeft
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_1


# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_DeltaEnter:
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_up
	step_end

# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_WinonaDown:
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
	step_end

# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_CameraDown:
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
	step_end

# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_JumpLeft:
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
	face_right
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock_facing_direction
# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_left
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
	unlock_facing_direction
	step_end

# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_CameraPan:
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
	step_end

# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_JumpDown:
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
	enable_jump_landing_ground_effect
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_down
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
	disable_jump_landing_ground_effect
	step_end

# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerLeave:
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
	step_end

# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
	step_end

# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_WinonaLeave:
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_up
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
	enable_jump_landing_ground_effect
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 278 "data/maps/SlateportCity_Harbor/scripts.pory"

# 279 "data/maps/SlateportCity_Harbor/scripts.pory"

# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_AskForTicket
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"

# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 294 "data/maps/SlateportCity_Harbor/scripts.pory"

# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"

# 304 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 311 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"

# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 317 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"

# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 321 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 328 "data/maps/SlateportCity_Harbor/scripts.pory"

# 329 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"

# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 341 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"

# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 347 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerryNorth
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerryEast
# 353 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"

# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"

# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"

# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 371 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"

# 374 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"

# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 382 "data/maps/SlateportCity_Harbor/scripts.pory"

# 383 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 386 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_0x8004, 2, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather  @ Defeated both
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"

# 395 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 399 "data/maps/SlateportCity_Harbor/scripts.pory"

# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 401 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"

# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"

# 408 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 412 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_SLATEPORT_HARBOR_STATE, 2, SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 415 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 417 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"

# 421 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 422 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Stern
# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 427 "data/maps/SlateportCity_Harbor/scripts.pory"

# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
	namebox Stern
# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
	hidenamebox
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"

# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 436 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SlateportCity_Harbor_EventScript_TradedScanner
# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 443 "data/maps/SlateportCity_Harbor/scripts.pory"

# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"

# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH, 2
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE, 2
# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"

# 460 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 461 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 465 "data/maps/SlateportCity_Harbor/scripts.pory"

# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable:
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "available at present…$"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"

# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket:
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 475 "data/maps/SlateportCity_Harbor/scripts.pory"

# 476 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket:
# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 481 "data/maps/SlateportCity_Harbor/scripts.pory"

# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo:
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 484 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"

# 487 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime:
# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"

# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs:
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 492 "data/maps/SlateportCity_Harbor/scripts.pory"

# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs:
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 495 "data/maps/SlateportCity_Harbor/scripts.pory"

# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry:
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"

# 500 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo:
# 501 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 502 "data/maps/SlateportCity_Harbor/scripts.pory"

# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday:
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 508 "data/maps/SlateportCity_Harbor/scripts.pory"

# 509 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather:
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 511 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the WEATHER INSTITUTE.\p"
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 516 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the WEATHER INSTITUTE\n"
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 518 "data/maps/SlateportCity_Harbor/scripts.pory"

# 519 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe:
# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\n"
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ocean floor exploration.\p"
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But the sub's too small for me.\p"
# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "If I squeezed in, there wouldn't be\n"
# 524 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "any room for the CAPTAIN…$"
# 525 "data/maps/SlateportCity_Harbor/scripts.pory"

# 526 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum:
# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Those thugs…\p"
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They're the same lot who tried to rob\n"
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the DEVON GOODS at the MUSEUM.$"
# 530 "data/maps/SlateportCity_Harbor/scripts.pory"

# 531 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive:
# 532 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¿Ah, que se fueron sin ti…?\p¡Ja! ¡Ahora sabes qué se siente!\pPero sin Buceo, ¡No podrás\nllegar a ellos!$"
# 533 "data/maps/SlateportCity_Harbor/scripts.pory"

# 534 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry:
# 535 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\n"
# 536 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MR. BRINEY came to our SHIPYARD.\p"
# 537 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 538 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 539 "data/maps/SlateportCity_Harbor/scripts.pory"

# 540 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry:
# 541 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\p"
# 542 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 543 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. TIDAL!\p"
# 544 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 545 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend MR. BRINEY.\p"
# 546 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 547 "data/maps/SlateportCity_Harbor/scripts.pory"

# 548 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner:
# 549 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh?\n"
# 550 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 551 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a SCANNER! That would sure\n"
# 552 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 553 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 554 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SCANNER for something?\p"
# 555 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a DEEPSEATOOTH or\n"
# 556 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a DEEPSEASCALE that I have?$"
# 557 "data/maps/SlateportCity_Harbor/scripts.pory"

# 558 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow:
# 559 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Are you certain?\n"
# 560 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 561 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 562 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your SCANNER, let me know.$"
# 563 "data/maps/SlateportCity_Harbor/scripts.pory"

# 564 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth:
# 565 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 566 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEATOOTH?$"
# 567 "data/maps/SlateportCity_Harbor/scripts.pory"

# 568 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale:
# 569 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 570 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEASCALE?$"
# 571 "data/maps/SlateportCity_Harbor/scripts.pory"

# 572 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant:
# 573 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"
# 574 "data/maps/SlateportCity_Harbor/scripts.pory"

# 575 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern:
# 576 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\n"
# 577 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN.$"
# 578 "data/maps/SlateportCity_Harbor/scripts.pory"

# 579 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch:
# 580 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\n"
# 581 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_0:
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Increíble, {PLAYER}!\n"
	.string "Así que nos has seguido desde el Monte\l"
	.string "Pyre hasta aquí, ¿Eh?\p"
	.string "Me impresiona tu dedicación, pero es en\n"
	.string "vano. Porque, con este Submarino y el\l"
	.string "Orbe Asul en nuestro poder, ¡Despertaré\l"
	.string "al Pokémon Ancestral, {COLOR BLUE}Kyogre{COLOR DARK_GRAY}!\p"
	.string "No es tarde aún para unírtenos,\n"
	.string "¿Sabes?\l"
	.string "Pero si sigues empeñad{OA} en detenernos,\l"
	.string "{PAUSE 15}estaré en nuestra-{PAUSE 20}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_1:
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡J-Jefe!\n"
	.string "¡El Submarino no responde!\l"
	.string "¡Alguien metió mano en los controles!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_2:
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¿¡QUÉ!?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_3:
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡D-{PAUSE 5}Deben ser esos idiotas!{PAUSE 15}\n"
	.string "Los que vimos en el Instituto\l"
	.string "Meteorológ-{PAUSE 25}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_4:
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡AH!{PAUSE 15}\n"
	.string "¡O-{PAUSE 5}O-{PAUSE 5}Osea, quiero decir, es{EA} idiota {PAUSE 15}-- en\l"
	.string "singular --{PAUSE 15} que vimos en el Insituto\l"
	.string "Meteorológico! ¡{PLAYER}, creo que\l"
	.string "es!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_5:
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "....................\n"
	.string ".............\p"
	.string "¿Hay algo que no me estés contanto,\n"
	.string "Recluta?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_6:
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Meh. Así que este es el Gran Archie,\n"
	.string "¿Eh?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_7:
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Tomar control de este Submarino fue\n"
	.string "extremadamente fácil, sobretodo\l"
	.string "después de robarles información en ese\l"
	.string "Instituto.\p"
	.string "Parece ser que usted no estaba al\n"
	.string "tanto, qué buenos resultaron ser sus\l"
	.string "Reclutas.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_8:
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ese... Ese uniforme...\p"
	.string "¡Es del Equipo Delta!\p"
	.string "¿Siguen bajo operaciones?\n"
	.string "¡Dismantelamos el Equipo hace 10 años!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_9:
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ah, sí, bajo orden suya y de Maxie.\p"
	.string "Apuesto que apenas pueden verse a los\n"
	.string "ojos después de tal fr-{PAUSE 20}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_10:
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Ahórratelo!\n"
	.string "¡No vuelvas a hablar así de Maxie y yo!\p"
	.string "¡Y no creas que te dejaré arruinar\n"
	.string "nuestros planes ni una ves más!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_11:
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Sharpedo, {PAUSE 15}{COLOR BLUE SHADOW LIGHT_BLUE}Mega Evoluciona{COLOR DARK_GRAY SHADOW LIGHT_GRAY}!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_12:
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Trueno{COLOR DARK_GRAY}.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_13:
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Tú... Así que nunca disolviste el Equipo,\n"
	.string "¿Eh...?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_14:
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¿... Winona?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_15:
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Puedo sentir que no estás impresionado,\n"
	.string "Archie. ¿Será que te lo veías venir?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_16:
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "No necesito el viento o los pajaritos\n"
	.string "para imaginarlo, Winona.\p"
	.string "No eres la clase de marinera que se\n"
	.string "rinde al perder su primer barco.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_17:
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Ja, ja ja ja!\p"
	.string "Eres el mismo de siempre, amigo. Me\n"
	.string "alegra, significa que entenderás mis\l"
	.string "motivos.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_18:
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Los entiendo, y es por eso que no\n"
	.string "comprendo tu posición.\p"
	.string "Estás en contra tanto del Equipo Magma,\n"
	.string "como de nostros.\p"
	.string "¿Porqué?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_19:
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Si pudieras sentirlo,{PAUSE 15} {COLOR BLUE}el dolor del\n"
	.string "mundo{COLOR DARK_GRAY}{PAUSE 30}...\p"
	.string "Entenderías porq-{PAUSE 30}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_20:
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡MGAAAAAAAAAAAH!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_21:
# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Agh!\n"
	.string "Mhh... {PAUSE 15}Ah...\l"
	.string "Está... {PAUSE 15}Empeorando...\p"
	.string "Bueno, Archie, perdón tener que irme tan\n"
	.string "rápido. ¿Nos vemos en Lilycove?\p"
	.string "Ah, y, Stern, muchas gracias por el\n"
	.string "Submarino.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_22:
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Lilycove!\n"
	.string "¡Rápido, Recluta, avísale a los chicos\l"
	.string "que se preparen en la Base!\p"
	.string "¡Emergencia Nivel Zafiro Alfa!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_23:
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Entendido!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_24:
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Bueno, {PLAYER}, nuestro combate\n"
	.string "tendrá que esperar. Estaré en Lilycove,\l"
	.string "y, si necesitas algo, intentaré acudir\l"
	.string "cuanto la situación mejore, ¿Ok?\p"
	.string "Cuídate, {PLAYER}, puedo sentir que\n"
	.string "se viene una tormenta.\p"
	.string "Ah, y, Stern, ya hablaremos sobre tu\n"
	.string "parte en todo esto en cuanto todo\l"
	.string "mejore, ¿Entendido?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_25:
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Ah, {PLAYER}, hay que hacer algo!\p"
	.string "¡Mi... Mi Submarino, hay que recuperarlo!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_26:
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR BLUE}(¿Por usted, que ha estado trabajando\n"
	.string "para el Equipo Aqua?)\p"
	.string "(Ojalá pierda su trabajo.){COLOR DARK_GRAY}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_27:
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Eh... {PAUSE 20}N-no hablo...{PAUSE 20} Lengua de señas-{PAUSE 30}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_28:
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡E-EY! ¡Ese gesto es de muy mala\n"
	.string "educación!\p"
	.string "P-pero, ¡No importa qué pienses de mí!\p"
	.string "¡Cosas horribles pueden pasar si\n"
	.string "despiertan a Kyogre!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_29:
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "...\n"
	.string "{COLOR BLUE}(Si no tengo de otra...){COLOR DARK_GRAY}$"
