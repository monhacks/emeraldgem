MagmaHideout_4F_EventScript_Winona::
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Tabitha
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_0
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_1
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 4
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 4
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 6
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 4
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_2
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_3, MSGBOX_INTERRUPT
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_4
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_5
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_6, MSGBOX_INTERRUPT
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_7
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_le MagmaHideout_4F_EventScript_Winona_1
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_gt MagmaHideout_4F_EventScript_Winona_2
	return

MagmaHideout_4F_EventScript_Winona_1:
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_8, MSGBOX_YESNO
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MagmaHideout_4F_EventScript_Winona_5
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_EVIL_TEAM_SIDE, 4
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_AgainstWinona
	return

MagmaHideout_4F_EventScript_Winona_2:
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_9, MSGBOX_YESNO
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MagmaHideout_4F_EventScript_Winona_8
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_AgainstWinona
	return

MagmaHideout_4F_EventScript_Winona_5:
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_AgainstWinona
	return

MagmaHideout_4F_EventScript_Winona_8:
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_EVIL_TEAM_SIDE, 1
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_AgainstWinona
	return


MagmaHideout_4F_EventScript_AgainstWinona::
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	subvar VAR_EVIL_TEAM_SIDE, 1
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_whiteout_continue_script TRAINER_WINONA_AQUA_HIDEOUT, MagmaHideout_4F_EventScript_AgainstWinona_Text_0, MagmaHideout_4F_EventScript_AgainstWinona_Text_1, MagmaHideout_4F_EventScript_WinonaDefeated
	return


MagmaHideout_4F_EventScript_DoGroudonAwakening::
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 0
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 7
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject 1
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 1, MagmaHideout_4F_Movement_GroudonApproach
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 1, MagmaHideout_4F_Movement_GroudonExit
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 1
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, MagmaHideout_4F_Movement_MaxieLookAround
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, MagmaHideout_4F_Movement_MaxieLookAround
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, MagmaHideout_4F_Movement_MaxieLookAround
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_0
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_1
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_2
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_3
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_4
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	return


MagmaHideout_4F_EventScript_WinonaDefeated::
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_WinonaDefeated_Text_0
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanToMaxie
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_DoGroudonAwakening
	return


# 150 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PanToMaxie:
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_northeast
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
	step_end

# 155 "data/maps/MagmaHideout_4F/scripts.pory"

# 156 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_1, 2
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_2, 3
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_3, 4
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_TABITHA, 5
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_MAXIE, 6
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON_SLEEPING, 7
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_WINONA, 7
# 164 "data/maps/MagmaHideout_4F/scripts.pory"

# 165 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 167 "data/maps/MagmaHideout_4F/scripts.pory"

# 168 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 208 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 209 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 236 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 239 "data/maps/MagmaHideout_4F/scripts.pory"

# 240 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 241 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 242 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 251 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 252 "data/maps/MagmaHideout_4F/scripts.pory"

# 253 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 254 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 257 "data/maps/MagmaHideout_4F/scripts.pory"

# 258 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 261 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 262 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 264 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 267 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 268 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 269 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 270 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 271 "data/maps/MagmaHideout_4F/scripts.pory"

# 272 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 273 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 274 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 276 "data/maps/MagmaHideout_4F/scripts.pory"

# 277 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 278 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 281 "data/maps/MagmaHideout_4F/scripts.pory"

# 282 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 283 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 284 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 286 "data/maps/MagmaHideout_4F/scripts.pory"

# 287 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 288 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 289 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 291 "data/maps/MagmaHideout_4F/scripts.pory"

# 292 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 293 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about GROUDON!$"
# 298 "data/maps/MagmaHideout_4F/scripts.pory"

# 299 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 300 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 302 "data/maps/MagmaHideout_4F/scripts.pory"

# 303 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"
# 305 "data/maps/MagmaHideout_4F/scripts.pory"

# 306 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 310 "data/maps/MagmaHideout_4F/scripts.pory"

# 311 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 314 "data/maps/MagmaHideout_4F/scripts.pory"

# 315 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 316 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 318 "data/maps/MagmaHideout_4F/scripts.pory"

# 319 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 322 "data/maps/MagmaHideout_4F/scripts.pory"

# 323 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 325 "data/maps/MagmaHideout_4F/scripts.pory"

# 326 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"
# 328 "data/maps/MagmaHideout_4F/scripts.pory"

# 329 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 338 "data/maps/MagmaHideout_4F/scripts.pory"

# 339 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 340 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 342 "data/maps/MagmaHideout_4F/scripts.pory"

# 343 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 345 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 346 "data/maps/MagmaHideout_4F/scripts.pory"

# 347 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON…\p"
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This BLUE ORB is what you sought.\n"
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 353 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the BLUE ORB.\n"
# 354 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 355 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 356 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 357 "data/maps/MagmaHideout_4F/scripts.pory"

# 358 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 359 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON!\n"
# 360 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 361 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the BLUE ORB the key?\p"
# 362 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 364 "data/maps/MagmaHideout_4F/scripts.pory"

# 365 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 366 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
# 367 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 368 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 369 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 370 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 371 "data/maps/MagmaHideout_4F/scripts.pory"

# 372 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 373 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 374 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "POKéMON?$"
# 375 "data/maps/MagmaHideout_4F/scripts.pory"

# 376 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 377 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why GROUDON fled…\p"
# 379 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 380 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 381 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 382 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 383 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 384 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 385 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With GROUDON gone, there is no longer\n"
# 386 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 387 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after GROUDON, so this\n"
# 388 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"

MagmaHideout_4F_EventScript_Winona_Text_0:
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Jefe! ¡Es ella!\p"
	.string "La líder de la División Delta!$"

MagmaHideout_4F_EventScript_Winona_Text_1:
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hola, Maxie, ¡Tanto tiempo!\n"
	.string "Sé lo de tú y Archie... Lo lamento mucho,\l"
	.string "eran tan unidos.$"

MagmaHideout_4F_EventScript_Winona_Text_2:
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡MGAAAAAAAAAAAH!$"

MagmaHideout_4F_EventScript_Winona_Text_3:
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Winona! ¿Estás-{PAUSE 30}$"

MagmaHideout_4F_EventScript_Winona_Text_4:
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ugh- ¿¡Podrías decirle a tu estúpido\n"
	.string "Admin que salga del camino y poder\l"
	.string "tener una conversación normal!?$"

MagmaHideout_4F_EventScript_Winona_Text_5:
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Está... {PAUSE 30}Empeorando aún más... {PAUSE 30}{COLOR BLUE}el dolor del\n"
	.string "mundo{COLOR DARK_GRAY}...{PAUSE 30}\p"
	.string "... ... ...\p"
	.string "Discúlpame por eso, Maxie. Este dolor\n"
	.string "que siento, el que siente la\l"
	.string "naturaleza... Me arruina...$"

MagmaHideout_4F_EventScript_Winona_Text_6:
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Winona...{PAUSE 30}\p"
	.string "Detén esta locura, y descansa. No\n"
	.string "puedes seguir así...\p"
	.string "Y no te preocupes, este “dolor del\n"
	.string "mundo,” yo lo detendré.\p"
	.string "Sólo déjame despertar a Groudon,\n"
	.string "y-{PAUSE 30}$"

MagmaHideout_4F_EventScript_Winona_Text_7:
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡NO!\p"
	.string "¡Tus soluciones no han funcionado\n"
	.string "jamás, ¿Qué te hace pensar que\l"
	.string "funcionarán ahora, Maxie?\p"
	.string "¿No estás satisfecho con los problemas\n"
	.string "que causaste en ese entonces?$"

MagmaHideout_4F_EventScript_Winona_Text_8:
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Parece que están por combatir. ¿Deseas\n"
	.string "ayudar al Equipo Magma?$"

MagmaHideout_4F_EventScript_Winona_Text_9:
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Parece que están por combatir. ¿Deseas\n"
	.string "ayudar a la División Delta?$"

MagmaHideout_4F_EventScript_AgainstWinona_Text_0:
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tú eres {PLAYER}, ¿No?\pAquí no soy la Líder del Gimnasio, y no\nvoy a jugar limpio.$"

MagmaHideout_4F_EventScript_AgainstWinona_Text_1:
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡AAAHHH! ¡Mi cabesa!$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_0:
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡¿Porqué lo hiciste?!\n"
	.string "¿No sabes lo que acabas de desatar en\l"
	.string "Hooenn?\p"
	.string "¿Has olvidado lo que pasó la última vez?$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_1:
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Lo recuerdo. Y es por eso mismo que lo\n"
	.string "hice. Ahora, tengo el Orbe Rojo en mi\l"
	.string "poder.\p"
	.string "Groudon sucumbirá a él y recobrará su\n"
	.string "poder primigenio.\p"
	.string "Con ese poder, daré a la humaniidad más\n"
	.string "espacio en tierra firme para que se\l"
	.string "desarrolle y encontrar una solución a\l"
	.string "nuestro problema.$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_2:
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡IDIOTA!\n"
	.string "¡El poder del Orbe hace a Groudon\l"
	.string "imposible de controlar!\p"
	.string "Yo iba a usar el Orbe para potenciar una\n"
	.string "máquina, una capaz de modificar nuestra\l"
	.string "realidad...\p"
	.string "Una con el poder de arreglarlo todo... ¡Y\n"
	.string "LO ARRUINASTE!$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_3:
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wow, esta no es la calmada y calculadora\n"
	.string "Winona que conozco. Parece que tus\l"
	.string "locuras con la naturaleza al fin te\l"
	.string "están afectando.\p"
	.string "Pero...\p"
	.string "¡¿Qué dijiste!? ¿Modificar la realidad?\n"
	.string "¿Es eso siquiera posible?$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_4:
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Sí, la máquina, la Flora Bismuto, ya ha\n"
	.string "modificado la realidad.\p"
	.string "Pero necesitaba más poder. Ahora,\n"
	.string "tendré que ir a robar el Orbe Azul, Y\l"
	.string "lidiar con Groudon, todo gracias a tu\l"
	.string "ignorancia.$"

MagmaHideout_4F_EventScript_WinonaDefeated_Text_0:
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "UGHHH... El dolor sigue fuerte...\p"
	.string "¿Porqué... te has entrometido?\p"
	.string "Acaso...$"
