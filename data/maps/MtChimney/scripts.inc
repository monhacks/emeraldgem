# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"
.set LOCALID_COURTNEY, 31
# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"

# 10 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 12 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 13 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 16 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 17 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_MT_CHIMNEY_STATE, 2, MtChimney_OnTransition_PrepareTeamMagmaCheating
# 18 "data/maps/MtChimney/scripts.pory"
	end
# 19 "data/maps/MtChimney/scripts.pory"

# 20 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 21 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 22 "data/maps/MtChimney/scripts.pory"
	end
# 23 "data/maps/MtChimney/scripts.pory"

# 24 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition_PrepareTeamMagmaCheating::
# 25 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 17, 30, 10
# 26 "data/maps/MtChimney/scripts.pory"
	addobject 17
# 27 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 15, 31, 6
# 28 "data/maps/MtChimney/scripts.pory"
	addobject 15
# 29 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 31 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 16, 31, 7
# 32 "data/maps/MtChimney/scripts.pory"
	addobject 16
# 33 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 13, 39, 0
# 34 "data/maps/MtChimney/scripts.pory"
	addobject 13
# 35 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 12, 39, 0
# 36 "data/maps/MtChimney/scripts.pory"
	addobject 12
# 37 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 29, 14
# 38 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 39 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 11, 29, 13
# 41 "data/maps/MtChimney/scripts.pory"
	addobject 11
# 42 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 43 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 14, 30, 11
# 44 "data/maps/MtChimney/scripts.pory"
	addobject 14
# 45 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 46 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 39, 0
# 47 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 39, 0
# 48 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MAGMA_GRUNT_1, 39, 0
# 49 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MAGMA_GRUNT_2, 39, 0
# 50 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 51 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 52 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 53 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 54 "data/maps/MtChimney/scripts.pory"
	return
# 55 "data/maps/MtChimney/scripts.pory"

# 56 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 57 "data/maps/MtChimney/scripts.pory"
	lock
# 58 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 59 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 60 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 61 "data/maps/MtChimney/scripts.pory"
	closemessage
# 62 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 63 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 64 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 65 "data/maps/MtChimney/scripts.pory"
	release
# 66 "data/maps/MtChimney/scripts.pory"
	end
# 67 "data/maps/MtChimney/scripts.pory"

# 68 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 69 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 70 "data/maps/MtChimney/scripts.pory"
	return
# 71 "data/maps/MtChimney/scripts.pory"

# 72 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 73 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 74 "data/maps/MtChimney/scripts.pory"
	return
# 75 "data/maps/MtChimney/scripts.pory"

# 76 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 77 "data/maps/MtChimney/scripts.pory"
	lockall
# 78 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 79 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 80 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 81 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 82 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 83 "data/maps/MtChimney/scripts.pory"
	closemessage
# 84 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 85 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 87 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 88 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 89 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 90 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 91 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 92 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 93 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 94 "data/maps/MtChimney/scripts.pory"
	closemessage
# 95 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 96 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 97 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 98 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 99 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceAwayPlayer
# 100 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtChimney/scripts.pory"
	delay 16
# 102 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 103 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 104 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 105 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 106 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma2, MSGBOX_DEFAULT
# 107 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 108 "data/maps/MtChimney/scripts.pory"
	closemessage
# 109 "data/maps/MtChimney/scripts.pory"
	delay 30
# 110 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 111 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 112 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 113 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 114 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_COURTNEY
# 115 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 116 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 117 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 11, 7
# 118 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MAXIE
# 119 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 120 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 121 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 122 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 123 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 124 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 125 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 126 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 127 "data/maps/MtChimney/scripts.pory"
	closemessage
# 128 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 129 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 130 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 131 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 132 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 133 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 134 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 135 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 136 "data/maps/MtChimney/scripts.pory"
	releaseall
# 137 "data/maps/MtChimney/scripts.pory"
	end
# 138 "data/maps/MtChimney/scripts.pory"

# 139 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 140 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieMaxieReunion
# 141 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 142 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 143 "data/maps/MtChimney/scripts.pory"
	return
# 144 "data/maps/MtChimney/scripts.pory"

# 145 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 146 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieMaxieReunion
# 147 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 148 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 149 "data/maps/MtChimney/scripts.pory"
	return
# 150 "data/maps/MtChimney/scripts.pory"

# 151 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 152 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 153 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 154 "data/maps/MtChimney/scripts.pory"
	return
# 155 "data/maps/MtChimney/scripts.pory"

# 156 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 157 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 158 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 159 "data/maps/MtChimney/scripts.pory"
	return
# 160 "data/maps/MtChimney/scripts.pory"

# 161 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieMaxieReunion::
# 162 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieGetToMaxie
# 163 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieGetToArchie
# 164 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_MaxieGetToArchie
# 165 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 166 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 167 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhatDoYouWant, MSGBOX_INTERRUPT
# 168 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 169 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieWhoDidThat
# 170 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 171 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhat
# 172 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 173 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieSomethingsUp
# 174 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 175 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieDelightful
# 176 "data/maps/MtChimney/scripts.pory"
	closemessage
# 177 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 178 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 179 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 180 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 181 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 182 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 183 "data/maps/MtChimney/scripts.pory"
	delay 16
# 184 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 185 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceDown
# 186 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 187 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 188 "data/maps/MtChimney/scripts.pory"
	delay 16
# 189 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 190 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhMaxie
# 191 "data/maps/MtChimney/scripts.pory"
	closemessage
# 192 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 193 "data/maps/MtChimney/scripts.pory"
	return
# 194 "data/maps/MtChimney/scripts.pory"

# 195 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieWhatDoYouWant:
# 196 "data/maps/MtChimney/scripts.pory"
	.string "Archie.\p"
# 197 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué es lo que quieres?\n"
# 198 "data/maps/MtChimney/scripts.pory"
	.string "¿Estás aquí para burlarte de mí, del\l"
# 199 "data/maps/MtChimney/scripts.pory"
	.string "fracaso de mi Equipo?\p"
# 200 "data/maps/MtChimney/scripts.pory"
	.string "Porque si es así, debo recordarte qu-{PAUSE 32}$"
# 201 "data/maps/MtChimney/scripts.pory"

# 202 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieWhoDidThat:
# 203 "data/maps/MtChimney/scripts.pory"
	.string "No hay tiempo para eso, bacalao. Tú no\n"
# 204 "data/maps/MtChimney/scripts.pory"
	.string "gastarías una oportunidad así\l"
# 205 "data/maps/MtChimney/scripts.pory"
	.string "esperando a que alguien te detenga.\l"
# 206 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué le pasó a esa máquina, y quién fue\l"
# 207 "data/maps/MtChimney/scripts.pory"
	.string "el filibustero que lo hizo?$"
# 208 "data/maps/MtChimney/scripts.pory"

# 209 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieWhat:
# 210 "data/maps/MtChimney/scripts.pory"
	.string "…{PAUSE 16}…{PAUSE 8}¿F…{PAUSE 16}Fili-qué?{PAUSE 16} ¿…Bacalao?\n"
# 211 "data/maps/MtChimney/scripts.pory"
	.string "En cualquier caso, no es algo que te\l"
# 212 "data/maps/MtChimney/scripts.pory"
	.string "incumba, idiota.\p"
# 213 "data/maps/MtChimney/scripts.pory"
	.string "A menos… ¿Acaso te ha estado pasando\n"
# 214 "data/maps/MtChimney/scripts.pory"
	.string "lo mismo?$"
# 215 "data/maps/MtChimney/scripts.pory"

# 216 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieSomethingsUp:
# 217 "data/maps/MtChimney/scripts.pory"
	.string "Aye, aye, atinaste, amigo.\n"
# 218 "data/maps/MtChimney/scripts.pory"
	.string "Algo en estas aguas huele mal, y parece\l"
# 219 "data/maps/MtChimney/scripts.pory"
	.string "que en tierra también, ¿eh?\p"
# 220 "data/maps/MtChimney/scripts.pory"
	.string "Creo que tenemos alguien en nuestras\n"
# 221 "data/maps/MtChimney/scripts.pory"
	.string "tripulaciones que nos están queriendo\l"
# 222 "data/maps/MtChimney/scripts.pory"
	.string "hundir, Maxie.$"
# 223 "data/maps/MtChimney/scripts.pory"

# 224 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDelightful:
# 225 "data/maps/MtChimney/scripts.pory"
	.string "¡Ja! ¡Jajajaja!\n"
# 226 "data/maps/MtChimney/scripts.pory"
	.string "Pues me deleita escuchar eso, ¿Sabes?\p"
# 227 "data/maps/MtChimney/scripts.pory"
	.string "Aunque signifique tener contratiempos,\n"
# 228 "data/maps/MtChimney/scripts.pory"
	.string "verte sufrir antes de hundirte es\l"
# 229 "data/maps/MtChimney/scripts.pory"
	.string "delicioso, Archie.\p"
# 230 "data/maps/MtChimney/scripts.pory"
	.string "Sólo espero poder unirme a la diversión\n"
# 231 "data/maps/MtChimney/scripts.pory"
	.string "antes de que toques fondo. Hasta luego,\l"
# 232 "data/maps/MtChimney/scripts.pory"
	.string "Archie.$"
# 233 "data/maps/MtChimney/scripts.pory"

# 234 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhMaxie:
# 235 "data/maps/MtChimney/scripts.pory"
	.string "Ah, mi Maxie…\n"
# 236 "data/maps/MtChimney/scripts.pory"
	.string "Siempre sintiéndose tan superior.\p"
# 237 "data/maps/MtChimney/scripts.pory"
	.string "Nunca cambies, Maxie.$"
# 238 "data/maps/MtChimney/scripts.pory"

# 239 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieGetToMaxie:
# 240 "data/maps/MtChimney/scripts.pory"
	walk_up
# 241 "data/maps/MtChimney/scripts.pory"
	walk_up
# 242 "data/maps/MtChimney/scripts.pory"
	walk_up
# 243 "data/maps/MtChimney/scripts.pory"
	step_end
# 244 "data/maps/MtChimney/scripts.pory"

# 245 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieGetToArchie:
# 246 "data/maps/MtChimney/scripts.pory"
	walk_left
# 247 "data/maps/MtChimney/scripts.pory"
	walk_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
# 249 "data/maps/MtChimney/scripts.pory"
	step_end
# 250 "data/maps/MtChimney/scripts.pory"

# 251 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 252 "data/maps/MtChimney/scripts.pory"
	lock
# 253 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 254 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 255 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 256 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 257 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 258 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 259 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 260 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 261 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 262 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 263 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 264 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 265 "data/maps/MtChimney/scripts.pory"
	release
# 266 "data/maps/MtChimney/scripts.pory"
	end
# 267 "data/maps/MtChimney/scripts.pory"

# 268 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 269 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 270 "data/maps/MtChimney/scripts.pory"
	@hidemoneybox
# 271 "data/maps/MtChimney/scripts.pory"
	release
# 272 "data/maps/MtChimney/scripts.pory"
	end
# 273 "data/maps/MtChimney/scripts.pory"

# 274 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 275 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 276 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 277 "data/maps/MtChimney/scripts.pory"
	return
# 278 "data/maps/MtChimney/scripts.pory"

# 279 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 280 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 281 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 282 "data/maps/MtChimney/scripts.pory"
	release
# 283 "data/maps/MtChimney/scripts.pory"
	end
# 284 "data/maps/MtChimney/scripts.pory"

# 285 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 286 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 287 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 288 "data/maps/MtChimney/scripts.pory"
	release
# 289 "data/maps/MtChimney/scripts.pory"
	end
# 290 "data/maps/MtChimney/scripts.pory"

# 291 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 292 "data/maps/MtChimney/scripts.pory"
	walk_up
# 293 "data/maps/MtChimney/scripts.pory"
	walk_up
# 294 "data/maps/MtChimney/scripts.pory"
	walk_up
# 295 "data/maps/MtChimney/scripts.pory"
	walk_right
# 296 "data/maps/MtChimney/scripts.pory"
	step_end
# 297 "data/maps/MtChimney/scripts.pory"

# 298 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 299 "data/maps/MtChimney/scripts.pory"
	walk_left
# 300 "data/maps/MtChimney/scripts.pory"
	walk_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_down
# 302 "data/maps/MtChimney/scripts.pory"
	walk_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_down
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	step_end
# 308 "data/maps/MtChimney/scripts.pory"

# 309 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 310 "data/maps/MtChimney/scripts.pory"
	walk_up
# 311 "data/maps/MtChimney/scripts.pory"
	walk_up
# 312 "data/maps/MtChimney/scripts.pory"
	walk_right
# 313 "data/maps/MtChimney/scripts.pory"
	walk_right
# 314 "data/maps/MtChimney/scripts.pory"
	step_end
# 315 "data/maps/MtChimney/scripts.pory"

# 316 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_down
# 320 "data/maps/MtChimney/scripts.pory"
	walk_down
# 321 "data/maps/MtChimney/scripts.pory"
	walk_down
# 322 "data/maps/MtChimney/scripts.pory"
	walk_down
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	step_end
# 327 "data/maps/MtChimney/scripts.pory"

# 328 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 329 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 330 "data/maps/MtChimney/scripts.pory"
	end
# 331 "data/maps/MtChimney/scripts.pory"

# 332 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 333 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 334 "data/maps/MtChimney/scripts.pory"
	end
# 335 "data/maps/MtChimney/scripts.pory"

# 336 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 337 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 338 "data/maps/MtChimney/scripts.pory"
	end
# 339 "data/maps/MtChimney/scripts.pory"

# 340 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger1::
# 341 "data/maps/MtChimney/scripts.pory"
	lockall
# 342 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 1
# 343 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 344 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 345 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 346 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 347 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 348 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 349 "data/maps/MtChimney/scripts.pory"
	playbgm TRAINER_ENCOUNTER_MUSIC_MAGMA, FALSE
# 350 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 351 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaIntro
# 352 "data/maps/MtChimney/scripts.pory"
	closemessage
# 353 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 354 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 355 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 356 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 357 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 358 "data/maps/MtChimney/scripts.pory"
	namebox Courtney
# 359 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyIntro
# 360 "data/maps/MtChimney/scripts.pory"
	closemessage
# 361 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 362 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkRight
# 363 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 364 "data/maps/MtChimney/scripts.pory"
	fadedefaultbgm
# 365 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 366 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieStop
# 367 "data/maps/MtChimney/scripts.pory"
	closemessage
# 368 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 369 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 11, 17
# 370 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_Trigger
# 371 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkLeft
# 372 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 373 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 374 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 375 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
# 376 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 377 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkLeft
# 378 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 379 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
# 380 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 381 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 382 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_PrepareMultiBattle
# 383 "data/maps/MtChimney/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyDefeat, TRAINER_ARCHIE_ALLY, TRAINER_BACK_PIC_RED
# 384 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 385 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, B_OUTCOME_LOST
# 386 "data/maps/MtChimney/scripts.pory"
    goto_if_eq MtChimney_EventScript_LostMultiBattle
# 387 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_TabithaCourtneyLost
# 388 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 389 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 390 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieYouCanDoIt
# 391 "data/maps/MtChimney/scripts.pory"
	releaseall
# 392 "data/maps/MtChimney/scripts.pory"
	end
# 393 "data/maps/MtChimney/scripts.pory"
	
# 394 "data/maps/MtChimney/scripts.pory"
	
# 395 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger2::
# 396 "data/maps/MtChimney/scripts.pory"
	lockall
# 397 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 1
# 398 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 399 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 400 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 401 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 402 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 403 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 404 "data/maps/MtChimney/scripts.pory"
	playbgm TRAINER_ENCOUNTER_MUSIC_MAGMA, FALSE
# 405 "data/maps/MtChimney/scripts.pory"
	namebox Courtney
# 406 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyIntro
# 407 "data/maps/MtChimney/scripts.pory"
	closemessage
# 408 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 409 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 410 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 411 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 412 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 413 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkLeft
# 414 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 415 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 416 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaIntro
# 417 "data/maps/MtChimney/scripts.pory"
	closemessage
# 418 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 419 "data/maps/MtChimney/scripts.pory"
	fadedefaultbgm
# 420 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 421 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieStop
# 422 "data/maps/MtChimney/scripts.pory"
	closemessage
# 423 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 424 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 17
# 425 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_Trigger
# 426 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkRight
# 427 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 428 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 429 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 430 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
# 431 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 432 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkRight
# 433 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 434 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
# 435 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 436 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 437 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_PrepareMultiBattle
# 438 "data/maps/MtChimney/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyDefeat, TRAINER_ARCHIE_ALLY, TRAINER_BACK_PIC_RED
# 439 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 440 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, B_OUTCOME_LOST
# 441 "data/maps/MtChimney/scripts.pory"
    goto_if_eq MtChimney_EventScript_LostMultiBattle
# 442 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_TabithaCourtneyLost
# 443 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 444 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 445 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieYouCanDoIt
# 446 "data/maps/MtChimney/scripts.pory"
	releaseall
# 447 "data/maps/MtChimney/scripts.pory"
	end
# 448 "data/maps/MtChimney/scripts.pory"

# 449 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaCourtneyLost::
# 450 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 451 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 452 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 453 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 454 "data/maps/MtChimney/scripts.pory"
	namebox Courtney
# 455 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle
# 456 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceUp
# 457 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 458 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 459 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle
# 460 "data/maps/MtChimney/scripts.pory"
	closemessage
# 461 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 462 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceDown
# 463 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 464 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 465 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaYouHaventSeen
# 466 "data/maps/MtChimney/scripts.pory"
	closemessage
# 467 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 468 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 469 "data/maps/MtChimney/scripts.pory"
	delay 16
# 470 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 39, 0
# 471 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 39, 0
# 472 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 473 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_COURTNEY
# 474 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 475 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 476 "data/maps/MtChimney/scripts.pory"
	delay 16
# 477 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FacePlayer
# 478 "data/maps/MtChimney/scripts.pory"
	return
# 479 "data/maps/MtChimney/scripts.pory"

# 480 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LostMultiBattle::
# 481 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 0
# 482 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 483 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 484 "data/maps/MtChimney/scripts.pory"
	releaseall
# 485 "data/maps/MtChimney/scripts.pory"
	end
# 486 "data/maps/MtChimney/scripts.pory"

# 487 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_PrepareMultiBattle::
# 488 "data/maps/MtChimney/scripts.pory"
    lockall
# 489 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 490 "data/maps/MtChimney/scripts.pory"
	msgbox PleasePick3Mons
# 491 "data/maps/MtChimney/scripts.pory"
	closemessage
# 492 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 493 "data/maps/MtChimney/scripts.pory"
    choose_mons
# 494 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, 0
# 495 "data/maps/MtChimney/scripts.pory"
    goto_if_eq script_NeedToChoose3ValidMons
# 496 "data/maps/MtChimney/scripts.pory"
    return
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
script_NeedToChoose3ValidMons::
# 499 "data/maps/MtChimney/scripts.pory"
	msgbox PleasePick3Mons
# 500 "data/maps/MtChimney/scripts.pory"
	closemessage
# 501 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 502 "data/maps/MtChimney/scripts.pory"
    choose_mons
# 503 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, 0
# 504 "data/maps/MtChimney/scripts.pory"
    goto_if_eq script_CancelBattle
# 505 "data/maps/MtChimney/scripts.pory"
    return
# 506 "data/maps/MtChimney/scripts.pory"

# 507 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieYouCanDoIt::
# 508 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 509 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieYouCanDoIt
# 510 "data/maps/MtChimney/scripts.pory"
	closemessage
# 511 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 512 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 513 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieWalkDown
# 514 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 515 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 2
# 516 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 517 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareTeamMagmaCheating
# 518 "data/maps/MtChimney/scripts.pory"
	special DrawWholeMapView
# 519 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 520 "data/maps/MtChimney/scripts.pory"
	return
# 521 "data/maps/MtChimney/scripts.pory"

# 522 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieWalkDown:
# 523 "data/maps/MtChimney/scripts.pory"
	walk_down
# 524 "data/maps/MtChimney/scripts.pory"
	walk_down
# 525 "data/maps/MtChimney/scripts.pory"
	walk_down
# 526 "data/maps/MtChimney/scripts.pory"
	walk_down
# 527 "data/maps/MtChimney/scripts.pory"
	walk_down
# 528 "data/maps/MtChimney/scripts.pory"
	walk_down
# 529 "data/maps/MtChimney/scripts.pory"
	step_end
# 530 "data/maps/MtChimney/scripts.pory"

# 531 "data/maps/MtChimney/scripts.pory"
PleasePick3Mons::
# 532 "data/maps/MtChimney/scripts.pory"
	.string "Deberás elegir 3 o\nmenos Pokémon.$"
# 533 "data/maps/MtChimney/scripts.pory"

# 534 "data/maps/MtChimney/scripts.pory"
script_CancelBattle::
# 535 "data/maps/MtChimney/scripts.pory"
    goto MtChimney_EventScript_PrepareMultiBattle
# 536 "data/maps/MtChimney/scripts.pory"
    return
# 537 "data/maps/MtChimney/scripts.pory"

# 538 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger::
# 539 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 540 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 541 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 542 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 543 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 544 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
# 545 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
# 546 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 547 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 548 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerDown
# 549 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 550 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 551 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 552 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 553 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieDontWorry
# 554 "data/maps/MtChimney/scripts.pory"
	closemessage
# 555 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 556 "data/maps/MtChimney/scripts.pory"
	return
# 557 "data/maps/MtChimney/scripts.pory"
	
# 558 "data/maps/MtChimney/scripts.pory"

# 559 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerDown:
# 560 "data/maps/MtChimney/scripts.pory"
	walk_up
# 561 "data/maps/MtChimney/scripts.pory"
	walk_up
# 562 "data/maps/MtChimney/scripts.pory"
	walk_up
# 563 "data/maps/MtChimney/scripts.pory"
	walk_up
# 564 "data/maps/MtChimney/scripts.pory"
	walk_up
# 565 "data/maps/MtChimney/scripts.pory"
	step_end
# 566 "data/maps/MtChimney/scripts.pory"

# 567 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 568 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 569 "data/maps/MtChimney/scripts.pory"
	end
# 570 "data/maps/MtChimney/scripts.pory"

# 571 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Courtney::
# 572 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 573 "data/maps/MtChimney/scripts.pory"
	end
# 574 "data/maps/MtChimney/scripts.pory"

# 575 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 576 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 577 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 578 "data/maps/MtChimney/scripts.pory"
	end
# 579 "data/maps/MtChimney/scripts.pory"

# 580 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 581 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 582 "data/maps/MtChimney/scripts.pory"
	end
# 583 "data/maps/MtChimney/scripts.pory"

# 584 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 585 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 586 "data/maps/MtChimney/scripts.pory"
	end
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 589 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 590 "data/maps/MtChimney/scripts.pory"
	end
# 591 "data/maps/MtChimney/scripts.pory"

# 592 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 593 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 594 "data/maps/MtChimney/scripts.pory"
	end
# 595 "data/maps/MtChimney/scripts.pory"

# 596 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 597 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 598 "data/maps/MtChimney/scripts.pory"
	end
# 599 "data/maps/MtChimney/scripts.pory"

# 600 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 601 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 602 "data/maps/MtChimney/scripts.pory"
	end
# 603 "data/maps/MtChimney/scripts.pory"

# 604 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Magcargo::
# 605 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_MAGCARGO, CRY_MODE_NORMAL
# 606 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Magcargo, MSGBOX_SIGN
# 607 "data/maps/MtChimney/scripts.pory"
	end
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Qwilfish::
# 610 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_QWILFISH, CRY_MODE_NORMAL
# 611 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Qwilfish, MSGBOX_SIGN
# 612 "data/maps/MtChimney/scripts.pory"
	end
# 613 "data/maps/MtChimney/scripts.pory"

# 614 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Krokorok::
# 615 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 616 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Krokorok, MSGBOX_SIGN
# 617 "data/maps/MtChimney/scripts.pory"
	end
# 618 "data/maps/MtChimney/scripts.pory"

# 619 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Pelipper::
# 620 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_PELIPPER, CRY_MODE_NORMAL
# 621 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Pelipper, MSGBOX_SIGN
# 622 "data/maps/MtChimney/scripts.pory"
	end
# 623 "data/maps/MtChimney/scripts.pory"

# 624 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sharpedo::
# 625 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 626 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Sharpedo, MSGBOX_SIGN
# 627 "data/maps/MtChimney/scripts.pory"
	end
# 628 "data/maps/MtChimney/scripts.pory"

# 629 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Poochyena::
# 630 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 631 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Poochyena, MSGBOX_SIGN
# 632 "data/maps/MtChimney/scripts.pory"
	end
# 633 "data/maps/MtChimney/scripts.pory"

# 634 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 635 "data/maps/MtChimney/scripts.pory"
	lockall
# 636 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 637 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 638 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 639 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 640 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 641 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 642 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 643 "data/maps/MtChimney/scripts.pory"
	releaseall
# 644 "data/maps/MtChimney/scripts.pory"
	end
# 645 "data/maps/MtChimney/scripts.pory"

# 646 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 647 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 648 "data/maps/MtChimney/scripts.pory"
	releaseall
# 649 "data/maps/MtChimney/scripts.pory"
	end
# 650 "data/maps/MtChimney/scripts.pory"

# 651 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 652 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 653 "data/maps/MtChimney/scripts.pory"
	releaseall
# 654 "data/maps/MtChimney/scripts.pory"
	end
# 655 "data/maps/MtChimney/scripts.pory"

# 656 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 657 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 658 "data/maps/MtChimney/scripts.pory"
	releaseall
# 659 "data/maps/MtChimney/scripts.pory"
	end
# 660 "data/maps/MtChimney/scripts.pory"

# 661 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 662 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 663 "data/maps/MtChimney/scripts.pory"
	end
# 664 "data/maps/MtChimney/scripts.pory"

# 665 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 666 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 667 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 668 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 669 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 670 "data/maps/MtChimney/scripts.pory"
	release
# 671 "data/maps/MtChimney/scripts.pory"
	end
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 674 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 675 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 676 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 677 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 678 "data/maps/MtChimney/scripts.pory"
	release
# 679 "data/maps/MtChimney/scripts.pory"
	end
# 680 "data/maps/MtChimney/scripts.pory"

# 681 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 682 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 683 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 684 "data/maps/MtChimney/scripts.pory"
	end
# 685 "data/maps/MtChimney/scripts.pory"

# 686 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 687 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 688 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 689 "data/maps/MtChimney/scripts.pory"
	end
# 690 "data/maps/MtChimney/scripts.pory"

# 691 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 692 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 693 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 694 "data/maps/MtChimney/scripts.pory"
	end
# 695 "data/maps/MtChimney/scripts.pory"

# 696 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 697 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 698 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 699 "data/maps/MtChimney/scripts.pory"
	end
# 700 "data/maps/MtChimney/scripts.pory"

# 701 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 702 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 703 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 704 "data/maps/MtChimney/scripts.pory"
	end
# 705 "data/maps/MtChimney/scripts.pory"

# 706 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 707 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 708 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 709 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 710 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 711 "data/maps/MtChimney/scripts.pory"
	release
# 712 "data/maps/MtChimney/scripts.pory"
	end
# 713 "data/maps/MtChimney/scripts.pory"

# 714 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 715 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 716 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 717 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 718 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 719 "data/maps/MtChimney/scripts.pory"
	release
# 720 "data/maps/MtChimney/scripts.pory"
	end
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 723 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 724 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 725 "data/maps/MtChimney/scripts.pory"
	end
# 726 "data/maps/MtChimney/scripts.pory"

# 727 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieYouCanDoIt:
# 728 "data/maps/MtChimney/scripts.pory"
	.string "Ahora, {PLAYER}, voy a continuar a\n"
# 729 "data/maps/MtChimney/scripts.pory"
	.string "ayudar a mis Reclutas a combatir al\l"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "Equipo Magma. Están atacándolos en\l"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "grupo ahora y realmente me están\l"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "cansando con su cobardía.\p"
# 733 "data/maps/MtChimney/scripts.pory"
	.string "¡Tú puedes derrotar a {COLOR RED}Maxie{COLOR DARK_GRAY}!\n"
# 734 "data/maps/MtChimney/scripts.pory"
	.string "No te preocupes, que no es alguien que\l"
# 735 "data/maps/MtChimney/scripts.pory"
	.string "pueda preparar un “Plan B”.\p"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "Créeme…\p"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "Bueno, sigue adelante, niñ{OA}, venceremos\n"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "al Equipo Magma juntos.$"
# 739 "data/maps/MtChimney/scripts.pory"

# 740 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 741 "data/maps/MtChimney/scripts.pory"
	.string "¿¡Qué!?\n"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "El {COLOR RED}Meteorito{COLOR DARK_GRAY}…\l"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "Ha sido desconectado de la fuente de\l"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "poder…\p"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "Pero si llegamos antes que ese Archie…\n"
# 746 "data/maps/MtChimney/scripts.pory"
	.string "¡Y-Y que todo el Equipo Aqua también!\l¿Quién pudo ser?\pSanto Arceus, tendría que haber traído a\nmis Pokémon más fuertes…$"
# 747 "data/maps/MtChimney/scripts.pory"

# 748 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 749 "data/maps/MtChimney/scripts.pory"
	.string "Un{A} niñ{OA}… ¡¿Qué estás haciendo aquí!?\p"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "Creí que Tabitha y Courtney serían\n"
# 751 "data/maps/MtChimney/scripts.pory"
	.string "defensa suficiente… Apuesto a que ese\l"
# 752 "data/maps/MtChimney/scripts.pory"
	.string "Archie te ha ayudado…\p"
# 753 "data/maps/MtChimney/scripts.pory"
	.string "Pero eso es lo de menos. El {COLOR LIGHT_RED SHADOW RED}Equipo Magma{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "y yo, {COLOR RED}su Líder Maxie{COLOR DARK_GRAY}, tenemos objetivos\l"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "tan grandes que este mero contratiempo\l"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "no significa nada.\p"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "La juventud es el futuro, ¿Sabes?\n"
# 758 "data/maps/MtChimney/scripts.pory"
	.string "Por ese motivo, debo educarte.\p"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "Al derrotarte, reactivaré la máquina, y\n"
# 760 "data/maps/MtChimney/scripts.pory"
	.string "con ella formaré una {COLOR RED}Piedra Activadora{COLOR DARK_GRAY}\l"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "con el poder suficiente para controlar\l"
# 762 "data/maps/MtChimney/scripts.pory"
	.string "al {COLOR LIGHT_RED SHADOW RED}Legendario Durmiente del Magma{COLOR DARK_GRAY SHADOW LIGHT_GRAY}…\l"
# 763 "data/maps/MtChimney/scripts.pory"
	.string "Entonces, ¡Podremos cumplir nuestro\l"
# 764 "data/maps/MtChimney/scripts.pory"
	.string "objetivo!\p¿Que cuál es, preguntas? No, eso es\n"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "para la siguiente clase.\p"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "Y ahora, como es debido, déjame darte\n"
# 767 "data/maps/MtChimney/scripts.pory"
	.string "un examen que se quemará en tu\l"
# 768 "data/maps/MtChimney/scripts.pory"
	.string "memoria.$"
# 769 "data/maps/MtChimney/scripts.pory"

# 770 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 771 "data/maps/MtChimney/scripts.pory"
	.string "¡¿Qué?!\p"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "¡¿Me han derrotado, al gran Maxie!?$"
# 773 "data/maps/MtChimney/scripts.pory"

# 774 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 775 "data/maps/MtChimney/scripts.pory"
	.string "¿¡C-cómo!?\n"
# 776 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué quieres decir con eso?\p"
# 777 "data/maps/MtChimney/scripts.pory"
	.string "… … … No importa, estaré ahí en un\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "minuto.\p"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Supongo… Que tendremos que proceder\n"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "con el Plan de Emergencia…\l"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "No creí que llegara a esto.\p"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "No falles con esto, ¿Entiendes?$"
# 783 "data/maps/MtChimney/scripts.pory"

# 784 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma2:
# 785 "data/maps/MtChimney/scripts.pory"
	.string "Lo siento, niñ{OA}, pero los adultos tenemos\n"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "cosas por hacer. La próxima vez que nos\l"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "veamos, no me contendré.$"
# 788 "data/maps/MtChimney/scripts.pory"

# 789 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 790 "data/maps/MtChimney/scripts.pory"
	.string "Veo que nuestros Reclutas no poseen\nsuficiente poder para derrotar\la un{A} simple niñ{OA}.\p"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "Pero llegas tarde, ¿No lo ves?\p"
# 792 "data/maps/MtChimney/scripts.pory"
	.string "¡Nuestro Jefe liberará el poder\ndel Meteorito!$"
# 793 "data/maps/MtChimney/scripts.pory"

# 794 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 795 "data/maps/MtChimney/scripts.pory"
	.string "Equipo… Aqua…$"
# 796 "data/maps/MtChimney/scripts.pory"

# 797 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 798 "data/maps/MtChimney/scripts.pory"
	.string "¡Jefe, es tu oportunidad!$"
# 799 "data/maps/MtChimney/scripts.pory"

# 800 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyIntro:
# 801 "data/maps/MtChimney/scripts.pory"
	.string "Intrus{OA}… Rango de visión…\n"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "Analizando…\p"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "… … …\p"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "Procediendo… Protocolo B…$"
# 805 "data/maps/MtChimney/scripts.pory"

# 806 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyDefeat:
# 807 "data/maps/MtChimney/scripts.pory"
	.string "Interesante…$"
# 808 "data/maps/MtChimney/scripts.pory"

# 809 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyPostBattle:
# 810 "data/maps/MtChimney/scripts.pory"
	.string "Maxie… Lo siento tanto…\n"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "No pude… Detener…$"
# 812 "data/maps/MtChimney/scripts.pory"

# 813 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieStop:
# 814 "data/maps/MtChimney/scripts.pory"
	.string "¿Atacando a un{A} niñ{OA} indefens{OA}?\p"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Compórtense como los adultos que son.$"
# 816 "data/maps/MtChimney/scripts.pory"

# 817 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontWorry:
# 818 "data/maps/MtChimney/scripts.pory"
	.string "No te preocupes, {PLAYER}, estamos en\n"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "esta misión para detener al Equipo\l"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "Magma juntos. No dejaré que te ataquen\l"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "entre dos de esa manera, ¡Ni yo que soy\l"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "un pirata haría trucos tan sucios!\p"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "Principalmente porque no los necesito…$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaYouHaventSeen:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "¡N-{PAUSE 8}n-{PAUSE 16}n-{PAUSE 32}NO ES\n"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "LO Ú-{PAUSE 16}ÚLTIMO QUE VERÁN DE MÍ!\l"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "¡Muajajaja!$"
# 829 "data/maps/MtChimney/scripts.pory"

# 830 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 831 "data/maps/MtChimney/scripts.pory"
	.string "¡Nos del Equipo Magma estamos haciendo\n"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "lo posible para mejorar la vida de los\l"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "humanos!\p"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "Todos serán felices si ganamos.$"
# 835 "data/maps/MtChimney/scripts.pory"

# 836 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 837 "data/maps/MtChimney/scripts.pory"
	.string "¿¡CÓMO QUE PERDÍ!?$"
# 838 "data/maps/MtChimney/scripts.pory"

# 839 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 840 "data/maps/MtChimney/scripts.pory"
	.string "Nuestro Jefe siempre dice que todos\n"
# 841 "data/maps/MtChimney/scripts.pory"
	.string "serán felices si él gana, pero… ¿Porqué\l"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "entonces somos tan odiados?$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "Si hubiera más tierra, ¡Podría comprarme\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "mi propia casa!\p"
# 847 "data/maps/MtChimney/scripts.pory"
	.string "Supongo que aún así habría que\n"
# 848 "data/maps/MtChimney/scripts.pory"
	.string "comprarla, y seguro seguría siendo\l"
# 849 "data/maps/MtChimney/scripts.pory"
	.string "carísima…$"
# 850 "data/maps/MtChimney/scripts.pory"

# 851 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 852 "data/maps/MtChimney/scripts.pory"
	.string "¿Es la falta de tierra el motivo de la\n"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "falta de casas para la gente?$"
# 854 "data/maps/MtChimney/scripts.pory"

# 855 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 856 "data/maps/MtChimney/scripts.pory"
	.string "Creo que el verdadero enemigo aquí es\n"
# 857 "data/maps/MtChimney/scripts.pory"
	.string "el capitalismo, ¿No?\p"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "¿Será que puedo convencer al Jefe de\n"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "usar el poder que quiere reunir para\l"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "expandir el comunismo?$"
# 861 "data/maps/MtChimney/scripts.pory"

# 862 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 863 "data/maps/MtChimney/scripts.pory"
	.string "Estos del Equipo Aqua, siempre\n"
# 864 "data/maps/MtChimney/scripts.pory"
	.string "persiguiéndonos…\p"
# 865 "data/maps/MtChimney/scripts.pory"
	.string "¡¿Tan enamorados de nosotros están?!$"
# 866 "data/maps/MtChimney/scripts.pory"

# 867 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 868 "data/maps/MtChimney/scripts.pory"
	.string "Quiero un helado.$"
# 869 "data/maps/MtChimney/scripts.pory"

# 870 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 871 "data/maps/MtChimney/scripts.pory"
	.string "No me gustan estos trajes… ¡Hace que\n"
# 872 "data/maps/MtChimney/scripts.pory"
	.string "todos nos veamos iguales! ¡Me hace\l"
# 873 "data/maps/MtChimney/scripts.pory"
	.string "morirme de calor!$"
# 874 "data/maps/MtChimney/scripts.pory"

# 875 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 876 "data/maps/MtChimney/scripts.pory"
	.string "Son el Equipo Aqua… Somos el Equipo\n"
# 877 "data/maps/MtChimney/scripts.pory"
	.string "Magma… ¡Eligieron un nombre tan\l"
# 878 "data/maps/MtChimney/scripts.pory"
	.string "parecido para confundirme a mí!$"
# 879 "data/maps/MtChimney/scripts.pory"

# 880 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 881 "data/maps/MtChimney/scripts.pory"
	.string "¡Sí! ¡Acábalos!$"
# 882 "data/maps/MtChimney/scripts.pory"

# 883 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 884 "data/maps/MtChimney/scripts.pory"
	.string "¡Sí! ¡Magma!$"
# 885 "data/maps/MtChimney/scripts.pory"

# 886 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Sharpedo:
# 887 "data/maps/MtChimney/scripts.pory"
	.string "¡SHAR! ¡SHAAARRRGGGHHH!$"
# 888 "data/maps/MtChimney/scripts.pory"

# 889 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 890 "data/maps/MtChimney/scripts.pory"
	.string "¡Sabía que vendrías, {PLAYER}!\p"
# 891 "data/maps/MtChimney/scripts.pory"
	.string "¡Grrr! Tengo que ir a derrotar a Maxie, si\n"
# 892 "data/maps/MtChimney/scripts.pory"
	.string "logra encender esa máquina, ¡El volcán\l"
# 893 "data/maps/MtChimney/scripts.pory"
	.string "hará erupción!$"
# 894 "data/maps/MtChimney/scripts.pory"

# 895 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 896 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, odio tener que pedirle esto\n"
# 897 "data/maps/MtChimney/scripts.pory"
	.string "a un{A} niñ{OA}, pero necesito que vayas a\l"
# 898 "data/maps/MtChimney/scripts.pory"
	.string "derrotar a Maxie por mí, ¿Lo harías?$"
# 899 "data/maps/MtChimney/scripts.pory"

# 900 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 901 "data/maps/MtChimney/scripts.pory"
	.string "¡{PLAYER}!\p"
# 902 "data/maps/MtChimney/scripts.pory"
	.string "¡Ja ja ja! ¡Sabía que podías hacerlo!\l"
# 903 "data/maps/MtChimney/scripts.pory"
	.string "… … … …\l"
# 904 "data/maps/MtChimney/scripts.pory"
	.string "Ah, ¿Eso?\p"
# 905 "data/maps/MtChimney/scripts.pory"
	.string "¡No te preocupes, cosa de adultos!\n"
# 906 "data/maps/MtChimney/scripts.pory"
	.string "Pero lo que quiero saber es… ¿De qué\l"
# 907 "data/maps/MtChimney/scripts.pory"
	.string "lado estás, niñ{OA}?\l"
# 908 "data/maps/MtChimney/scripts.pory"
	.string "¡Ah, no importa, siempre y cuando nos\l"
# 909 "data/maps/MtChimney/scripts.pory"
	.string "ayudes a derrotar a esos idiotas!\p"
# 910 "data/maps/MtChimney/scripts.pory"
	.string "Espero nos volvamos a ver pronto,\n"
# 911 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}.$"
# 912 "data/maps/MtChimney/scripts.pory"

# 913 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 914 "data/maps/MtChimney/scripts.pory"
	.string "Maldita sea… ¡El Equipo Magma\n"
# 915 "data/maps/MtChimney/scripts.pory"
	.string "nos supera en número, no\lpodemos contra ellos así!$"
# 916 "data/maps/MtChimney/scripts.pory"

# 917 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 918 "data/maps/MtChimney/scripts.pory"
	.string "¡Pero si expanden la tierra,\n"
# 919 "data/maps/MtChimney/scripts.pory"
	.string "matarán a los Pokémon del océano!$"
# 920 "data/maps/MtChimney/scripts.pory"

# 921 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 922 "data/maps/MtChimney/scripts.pory"
	.string "Son el Equipo Magma… Somos el Equipo\n"
# 923 "data/maps/MtChimney/scripts.pory"
	.string "Aqua… ¡Eligieron un nombre tan\l"
# 924 "data/maps/MtChimney/scripts.pory"
	.string "parecido para confundirme a mí!$"
# 925 "data/maps/MtChimney/scripts.pory"

# 926 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Poochyena:
# 927 "data/maps/MtChimney/scripts.pory"
	.string "¡Pochyyyyy!$"
# 928 "data/maps/MtChimney/scripts.pory"

# 929 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Magcargo:
# 930 "data/maps/MtChimney/scripts.pory"
	.string "¡Mmmmmaaaagggg!$"
# 931 "data/maps/MtChimney/scripts.pory"

# 932 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Qwilfish:
# 933 "data/maps/MtChimney/scripts.pory"
	.string "¡Qwil! ¡Qwiiil!$"
# 934 "data/maps/MtChimney/scripts.pory"

# 935 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Krokorok:
# 936 "data/maps/MtChimney/scripts.pory"
	.string "¡Krookoroook!$"
# 937 "data/maps/MtChimney/scripts.pory"

# 938 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Pelipper:
# 939 "data/maps/MtChimney/scripts.pory"
	.string "¡Peeeeliiiii!$"
# 940 "data/maps/MtChimney/scripts.pory"

# 941 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 942 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 943 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 944 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 945 "data/maps/MtChimney/scripts.pory"

# 946 "data/maps/MtChimney/scripts.pory"

# 947 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 948 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 949 "data/maps/MtChimney/scripts.pory"

# 950 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 951 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 952 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 953 "data/maps/MtChimney/scripts.pory"

# 954 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 955 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 956 "data/maps/MtChimney/scripts.pory"

# 957 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 958 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 959 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 960 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 961 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 962 "data/maps/MtChimney/scripts.pory"

# 963 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 964 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 965 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 966 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 967 "data/maps/MtChimney/scripts.pory"

# 968 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 969 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 970 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 971 "data/maps/MtChimney/scripts.pory"

# 972 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 973 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 974 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 975 "data/maps/MtChimney/scripts.pory"

# 976 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 977 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 978 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 979 "data/maps/MtChimney/scripts.pory"

# 980 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 981 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 982 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 983 "data/maps/MtChimney/scripts.pory"

# 984 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 985 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 986 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 987 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 988 "data/maps/MtChimney/scripts.pory"

# 989 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 990 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 991 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 992 "data/maps/MtChimney/scripts.pory"

# 993 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 994 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 995 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 996 "data/maps/MtChimney/scripts.pory"

# 997 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 998 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 999 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 1000 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 1001 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 1002 "data/maps/MtChimney/scripts.pory"

# 1003 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 1004 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 1005 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 1006 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 1007 "data/maps/MtChimney/scripts.pory"

# 1008 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 1009 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1010 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1011 "data/maps/MtChimney/scripts.pory"

# 1012 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 1013 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 1014 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 1015 "data/maps/MtChimney/scripts.pory"

# 1016 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 1017 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 1018 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 1019 "data/maps/MtChimney/scripts.pory"

# 1020 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 1021 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 1022 "data/maps/MtChimney/scripts.pory"

# 1023 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 1024 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 1025 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 1026 "data/maps/MtChimney/scripts.pory"

# 1027 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 1028 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 1029 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 1030 "data/maps/MtChimney/scripts.pory"

# 1031 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 1032 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 1033 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 1034 "data/maps/MtChimney/scripts.pory"

# 1035 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 1036 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 1037 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 1038 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 1039 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 1040 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 1041 "data/maps/MtChimney/scripts.pory"

# 1042 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 1043 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 1044 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 1045 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 1046 "data/maps/MtChimney/scripts.pory"

# 1047 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 1048 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 1049 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 1050 "data/maps/MtChimney/scripts.pory"

# 1051 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 1052 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 1053 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 1054 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 1055 "data/maps/MtChimney/scripts.pory"

# 1056 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 1057 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 1058 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 1059 "data/maps/MtChimney/scripts.pory"

# 1060 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 1061 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 1062 "data/maps/MtChimney/scripts.pory"

# 1063 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 1064 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 1065 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 1066 "data/maps/MtChimney/scripts.pory"

# 1067 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 1068 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 1069 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 1070 "data/maps/MtChimney/scripts.pory"

# 1071 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 1072 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 1073 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 1074 "data/maps/MtChimney/scripts.pory"

# 1075 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 1076 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 1077 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 1078 "data/maps/MtChimney/scripts.pory"

# 1079 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 1080 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 1081 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
