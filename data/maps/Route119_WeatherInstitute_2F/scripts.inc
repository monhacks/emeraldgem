# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_2, 2
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SHELLY, 3
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SCIENTIST, 5
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_3, 7
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_4, 8
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_DELTA_DIVISION_GRUNT_A, 9
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_DELTA_DIVISION_GRUNT_B, 10
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition:
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 1, 6
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 4, 6
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 2, 2
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly::
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lockall
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_0
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_1, MSGBOX_INTERRUPT
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_DELTA_DIVISION_GRUNT_A, Common_Movement_WalkInPlaceDown
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_2
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_DELTA_DIVISION_GRUNT_B, Common_Movement_WalkInPlaceRight
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_3
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_4, MSGBOX_INTERRUPT
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_5, MSGBOX_INTERRUPT
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_DELTA_DIVISION_GRUNT_B, Common_Movement_WalkInPlaceUp
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_6
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_7, MSGBOX_INTERRUPT
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_8
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_9
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_10, MSGBOX_INTERRUPT
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_11
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_12, MSGBOX_INTERRUPT
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_13
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_14
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_15
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_16
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Unknown
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_17
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_DELTA_DIVISION_GRUNT_A, 19, 0
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_DELTA_DIVISION_GRUNT_B, 19, 0
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_GRUNT_1, 5, 6
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_GRUNT_2, 6, 6
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	turnobject LOCALID_GRUNT_1, DIR_WEST
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	turnobject LOCALID_GRUNT_2, DIR_WEST
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerOutOfTheWay
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_18
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Aqua
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_19
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Aqua
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_20
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_21
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceRight
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_22
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Aqua
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_23
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Route119_WeatherInstitute_2F_Movement_ShellyAttacks
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_24
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Aqua
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_25
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsHack
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsHack
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_no_whiteout_continue_script TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_2
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_1
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_1:
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsBack
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsBack
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Aqua
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_2
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceUp
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_3
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceDown
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_4
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_SHELLY
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_DELTA_DIVISION_GRUNT_A
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_DELTA_DIVISION_GRUNT_B
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_SCIENTIST, 1, 6
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SCIENTIST
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	releaseall
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_2:
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	namebox Shelly
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidenamebox
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_1
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerOutOfTheWay:
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	face_up
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShellyAttacks:
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay:
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	face_down
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntsHack:
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntsBack:
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_0:
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Quiénes son ustedes?\n"
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Qué están haciendo aquí?\p"
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Acaso saben en lo que se están\n"
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "metiendo al interponerse conmigo,\l"
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}, la {COLOR BLUE}Comandante del Equipo Aqua{COLOR DARK_GRAY}?$"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_1:
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Salgan de nuestro camino si no quieren\n"
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "ser aplastados!\l"
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Nuestra racha de victorias es muestra\l"
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "de las pocas posibilidades que tienen!$"
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_2:
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Acábala, ¿Quieres?$"
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_3:
# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Dalo por hecho.$"
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_4:
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿¡C-cómo se atreven!?\n"
# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Nadie dudará jamás del Equipo Aqu-{PAUSE 16} $"
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_5:
# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "P-{PAUSE 16}pero... ¿¡CÓMO!?\n"
# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Todos mis Pokémon... Derrotados por\l"
# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "sólo uno de los suyos!\p"
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Pagarán por est-{PAUSE 16}  $"
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_6:
# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hemos terminado aquí.\p"
# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Tenemos la {COLOR BLUE}información necesaria{COLOR DARK_GRAY}.$"
# 329 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 330 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_7:
# 331 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Si me interrumpen una ves m-{PAUSE 16}!$"
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 333 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_8:
# 334 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Concuerdo. Regresemos a la base e\n"
# 335 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "infomémosle de lo ocurrido.$"
# 336 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 337 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_9:
# 338 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Me harté!\p"
# 339 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No soportaré que manchen el honor del\n"
# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Equipo Aqua!$"
# 341 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 342 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_10:
# 343 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ah. Supongo que tendré que acabarte\n"
# 344 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "de nuevo.\p"
# 345 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Usa {COLOR GREEN}Gigadr{COLOR DARK_GRAY}-{PAUSE 8} $"
# 346 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 347 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_11:
# 348 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Frilish, usa {COLOR BLUE}Mismodestino{COLOR DARK_GRAY}!$"
# 349 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 350 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_12:
# 351 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hmmm... Interesante. Acabemos con esto,\n"
# 352 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR BLUE}Alt{COLOR DARK_GRAY}-{PAUSE 8} $"
# 353 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 354 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_13:
# 355 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡{COLOR BLUE}Rayo de Hielo{COLOR DARK_GRAY}!$"
# 356 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 357 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_14:
# 358 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡SUFICIENTE!$"
# 359 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 360 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_15:
# 361 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Derrotada... ¿De nuevo?$"
# 362 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 363 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_16:
# 364 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Seguir entreteniéndonos con estos\n"
# 365 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "criminales sería una pérdida de tiempo.\p"
# 366 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Creí que esta sería más fuerte, pero\n"
# 367 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "apenas consiguió derrotar a dos de mis\l"
# 368 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Pokémon.$"
# 369 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 370 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_17:
# 371 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Vámonos. No necesitamos seguir\n"
# 372 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "aplastando su espíritu.\p"
# 373 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Aunque admito que es entretenido.$"
# 374 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 375 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_18:
# 376 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "...{PAUSE 16}...{PAUSE 16}...{PAUSE 16}$"
# 377 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 378 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_19:
# 379 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Comandante Shelly!\p"
# 380 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Está bien?$"
# 381 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 382 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_20:
# 383 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Queríamos ayudar, pero est{EA} niñ{OA} derrotó\n"
# 384 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "a nuestros Pokémon fuertes. ¿Qué\l"
# 385 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "vamos a hacer ahora?$"
# 386 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 387 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_21:
# 388 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "...{PAUSE 16}...{PAUSE 16}...{PAUSE 16}\p"
# 389 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "La recuperaremos.$"
# 390 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 391 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_22:
# 392 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No importa quiénes ellos se crean que\n"
# 393 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "son!\p"
# 394 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No importa que nos hayan derrotado!\p"
# 395 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "La información no se puede borrar.\n"
# 396 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Sigue en el servidor de este lugar, y\l"
# 397 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "van a recuperarla.\p"
# 398 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Y no se preocupen, que tengo\n"
# 399 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "suficientes Objetos como para curar a\l"
# 400 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "mis Pokémon y derrotar a est{EA} inútil\l"
# 401 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Entrenador{A} que tantos problemas les\l"
# 402 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "dio a ustedes.$"
# 403 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 404 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_23:
# 405 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Vamos, Comandante!\p"
# 406 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Usted puede!$"
# 407 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 408 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_24:
# 409 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "De mientras, encárgense ustedes de\n"
# 410 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recuperar la información.\p"
# 411 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Todo lo necesario está en el Pendrive\n"
# 412 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que les di.$"
# 413 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 414 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_25:
# 415 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Si, Comandante!$"
# 416 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 417 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0:
# 418 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ah!\p"
# 419 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Es impresionante el poder que tienes...\n"
# 420 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Pero no importa, pues el poder de\l"
# 421 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR BLUE}nuestro Líder{COLOR DARK_GRAY} es incluso más grande!$"
# 422 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 423 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_1:
# 424 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "La derrota que sufrí te hiso confiarte,\n"
# 425 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿No es así?\p"
# 426 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Pues que sirva de testamento del poder\n"
# 427 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que posee el Equipo Aqua!\p"
# 428 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR BLUE}Nuestro Líder{COLOR DARK_GRAY} podría barrer el piso él\n"
# 429 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "sólo aunque el {COLOR BLUE}Comandante Matt y yo\l"
# 430 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "luchemos juntos en su contra{COLOR DARK_GRAY}.\p"
# 431 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Que sirva también de aviso para que no\n"
# 432 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "te metas con esa pandilla de idiotas\l"
# 433 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que me derrotaron... ¡O podría no volver\l"
# 434 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "a disfrutar de aplastarte!$"
# 435 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 436 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_2:
# 437 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Todo listo, ¡La información es nuestra,\n"
# 438 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "señorita!$"
# 439 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 440 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_3:
# 441 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Perfecto.$"
# 442 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 443 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_4:
# 444 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Como verás, tus acciones aquí, las\n"
# 445 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "veces que has derrotado a miembros de\l"
# 446 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "nuestro equipo, han sido todas en vano,\l"
# 447 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "pues hemos terminado exitosamente las\l"
# 448 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "primeras dos fases.\p"
# 449 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Aunque tengo mis dudas con respecto a\n"
# 450 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "nuestros métodos y objetivos, ¡Mi\l"
# 451 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "lealtad es mucho más fuerte!\p"
# 452 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahora, equipo, ¡Vayamos al Monte Pyre a\n"
# 453 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "detener al Equipo Magma como\l"
# 454 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "acordamos!$"
# 455 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 456 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 457 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon
# 458 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	showmonpicshiny SPECIES_CASTFORM, 10, 3, 0
# 459 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ExplainCastform, MSGBOX_YESNO
# 460 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_RejectCastform
# 461 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 462 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidemonpic
# 463 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CASTFORM
# 464 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM, 30, ITEM_DAMP_ROCK
# 465 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 466 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 467 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 468 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 469 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 470 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_RejectCastform::
# 471 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 472 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidemonpic
# 473 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_RejectedCastform
# 474 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	releaseall
# 475 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 476 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 477 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_RejectedCastform:
# 478 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No te preocupes!\p¡Seguiré aquí si lo quieres!$"
# 479 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 480 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 481 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 482 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 483 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 484 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 485 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 486 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 487 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 488 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 489 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 490 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 491 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 492 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 493 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 494 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 495 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 496 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 497 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 498 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 499 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 500 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 501 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 502 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 503 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 504 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 505 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 506 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 507 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM
# 508 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 509 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 510 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 511 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 512 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 513 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 514 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 515 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 516 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 517 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 518 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 519 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 520 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 521 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 522 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 523 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 524 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 525 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 526 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 527 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 528 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 529 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 530 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 531 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 532 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 533 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 534 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 535 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 536 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 537 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 538 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 539 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 540 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 541 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 542 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 543 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 544 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 545 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 546 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 547 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 548 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 549 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 550 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 551 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 552 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 553 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 554 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 555 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 556 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 557 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 558 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 559 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 560 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 561 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 562 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 563 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 564 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 565 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 566 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 567 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 568 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 569 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 570 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 571 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 572 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 573 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 574 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 575 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 576 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 577 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 578 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_up
# 579 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_up
# 580 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_up
# 581 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 582 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 583 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 584 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 585 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 586 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 587 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 588 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 589 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 590 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 591 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 592 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 593 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 594 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 595 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 596 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 597 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Intro:
# 598 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The INSTITUTE created a type of\n"
# 599 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "POKéMON that has something to do with\l"
# 600 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the weather. We're here to take them!$"
# 601 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 602 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
# 603 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 604 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 605 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
# 606 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "If the POKéMON they made here can\n"
# 607 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "control the weather freely, then we of\l"
# 608 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM AQUA definitely need it!$"
# 609 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 610 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro:
# 611 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're TEAM AQUA!\n"
# 612 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We appear wherever anything rare is\l"
# 613 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "found!$"
# 614 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 615 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 616 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"
# 617 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 618 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
# 619 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
# 620 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM AQUA are working towards!\l"
# 621 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You stay out of our way!$"
# 622 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 623 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro:
# 624 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
# 625 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "weather POKéMON, too?\p"
# 626 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That's a no-no!\n"
# 627 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We were here to get it first!$"
# 628 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 629 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 630 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my POKéMON?$"
# 631 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 632 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
# 633 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
# 634 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we want…\p"
# 635 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we really want isn't here…\n"
# 636 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ihihihihi…$"
# 637 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 638 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro:
# 639 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Te arrepentirás de haber derrotado\n"
# 640 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "a nuestros Reclutas!\p"
# 641 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Prepárate para ahogarte con\nel tsunami de mi poder!$"
# 642 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 643 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat:
# 644 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿¡Q-qué!?\n"
# 645 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ja, tu poder es asqueroso!$"
# 646 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 647 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
# 648 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have TEAM MAGMA\n"
# 649 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "blunder about, but now there's you!\p"
# 650 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What makes you want to sniff around\n"
# 651 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in our business, anyway?$"
# 652 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 653 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 654 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 655 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A TEAM MAGMA mob just passed\n"
# 656 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the WEATHER INSTITUTE.\p"
# 657 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 658 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "MT. PYRE!$"
# 659 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 660 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 661 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
# 662 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!\n"
# 663 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have to hurry to MT. PYRE, too!\p"
# 664 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 665 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM MAGMA, just you wait!$"
# 666 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 667 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
# 668 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
# 669 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks to you, we're safe!\p"
# 670 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It might be an odd way of thanking you,\n"
# 671 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "but take this POKéMON.$"
# 672 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 673 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ExplainCastform:
# 674 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Es un Castform!\pSolía ser bastante débil, pero las\namables personas que detuvieron\lal Equipo Aqua lo modificaron genéticamente.\p¡Ahora es increíblemente rápido!\p¿Lo quieres, no?$"
# 675 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 676 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 677 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 678 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 679 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this POKéMON.$"
# 680 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 681 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 682 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"
# 683 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 684 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 685 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ese Pokémon puede usar Meteorobola,\n"
# 686 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que cambia el clima, (y su tipo)\l"
# 687 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "dependiendo del Objeto que tenga\l"
# 688 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "equipado, ¡Es muy fuerte!.$"
# 689 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 690 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
# 691 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
# 692 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "years, but it's ridiculous to think that\l"
# 693 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "humans can freely change the weather.$"
# 694 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 695 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 696 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 697 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 698 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 699 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 700 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 701 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 702 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 703 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 704 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 705 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 706 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 707 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 708 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 709 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 710 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 711 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 712 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 713 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 714 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 715 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"
