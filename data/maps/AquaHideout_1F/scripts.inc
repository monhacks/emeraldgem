AquaHideout_1F_MapScripts::
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AquaHideout_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 1
	goto_if_ge AquaHideout_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AquaHideout_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	return

AquaHideout_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	setobjectxyperm 3, 23, 2
	goto AquaHideout_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


AquaHideout_1F_EventScript_HideoutEntranceGrunts::
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 17 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 18 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 19 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Aqua
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_HideoutEntranceGrunts_2
# 27 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_HideoutEntranceGrunts_3
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_6
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_7
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_8
AquaHideout_1F_EventScript_HideoutEntranceGrunts_1:
# 39 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 41 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 42 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Aqua
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_9
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 46 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 47 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunts_2:
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_0
# 24 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_1, MSGBOX_INTERRUPT
# 25 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_2
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunts_1

AquaHideout_1F_EventScript_HideoutEntranceGrunts_3:
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_3
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_4
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_5
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunts_1


AquaHideout_1F_EventScript_Grunt1::
# 52 "data/maps/AquaHideout_1F/scripts.pory"
	lockall
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 54 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Aqua
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_Grunt1_Text_0, MSGBOX_YESNO
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AquaHideout_1F_EventScript_Grunt1_2
AquaHideout_1F_EventScript_Grunt1_1:
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Aqua
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_Grunt1_Text_4
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 89 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	releaseall
	return

AquaHideout_1F_EventScript_Grunt1_2:
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	checkitem ITEM_REVIVE
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AquaHideout_1F_EventScript_Grunt1_5
AquaHideout_1F_EventScript_Grunt1_4:
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	checkitem ITEM_REVIVAL_HERB
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AquaHideout_1F_EventScript_Grunt1_8
AquaHideout_1F_EventScript_Grunt1_7:
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	checkitem ITEM_MAX_REVIVE
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AquaHideout_1F_EventScript_Grunt1_10
	goto AquaHideout_1F_EventScript_Grunt1_1

AquaHideout_1F_EventScript_Grunt1_5:
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	removeitem ITEM_REVIVE
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/AquaHideout_1F/scripts.pory"
	message AquaHideout_1F_EventScript_Grunt1_Text_1
# 63 "data/maps/AquaHideout_1F/scripts.pory"
	waitfanfare
# 64 "data/maps/AquaHideout_1F/scripts.pory"
	waitmessage
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_Grunt1Helped
	goto AquaHideout_1F_EventScript_Grunt1_4

AquaHideout_1F_EventScript_Grunt1_8:
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	removeitem ITEM_REVIVAL_HERB
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	message AquaHideout_1F_EventScript_Grunt1_Text_2
# 72 "data/maps/AquaHideout_1F/scripts.pory"
	waitfanfare
# 73 "data/maps/AquaHideout_1F/scripts.pory"
	waitmessage
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_Grunt1Helped
	goto AquaHideout_1F_EventScript_Grunt1_7

AquaHideout_1F_EventScript_Grunt1_10:
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	removeitem ITEM_MAX_REVIVE
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/AquaHideout_1F/scripts.pory"
	message AquaHideout_1F_EventScript_Grunt1_Text_3
# 81 "data/maps/AquaHideout_1F/scripts.pory"
	waitfanfare
# 82 "data/maps/AquaHideout_1F/scripts.pory"
	waitmessage
# 83 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_Grunt1Helped
	goto AquaHideout_1F_EventScript_Grunt1_1


AquaHideout_1F_EventScript_Grunt1Helped::
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_Grunt1Helped_Text_0
# 95 "data/maps/AquaHideout_1F/scripts.pory"
	waitmessage
# 96 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 98 "data/maps/AquaHideout_1F/scripts.pory"
	addvar VAR_WISHES_FUFILLED, 1
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 100 "data/maps/AquaHideout_1F/scripts.pory"
	delay 16
# 101 "data/maps/AquaHideout_1F/scripts.pory"
	removeobject 3
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HELPED_AQUA_GRUNT
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 104 "data/maps/AquaHideout_1F/scripts.pory"
	delay 16
# 105 "data/maps/AquaHideout_1F/scripts.pory"
	call Script_Wishes
# 106 "data/maps/AquaHideout_1F/scripts.pory"
	releaseall
	end


AquaHideout_1F_TriggerLeft::
# 112 "data/maps/AquaHideout_1F/scripts.pory"
	lockall
# 113 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_AQUA_HIDEOUT_STATE, 2
# 114 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_Triggers
	return


AquaHideout_1F_TriggerRight::
# 117 "data/maps/AquaHideout_1F/scripts.pory"
	lockall
# 118 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_AQUA_HIDEOUT_STATE, 3
# 119 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_Triggers
	return


AquaHideout_1F_Triggers::
# 122 "data/maps/AquaHideout_1F/scripts.pory"
	lockall
# 123 "data/maps/AquaHideout_1F/scripts.pory"
	special SpawnCameraObject
# 124 "data/maps/AquaHideout_1F/scripts.pory"
	addobject 3
# 125 "data/maps/AquaHideout_1F/scripts.pory"
	addobject 4
# 126 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 2
	goto_if_eq AquaHideout_1F_Triggers_2
# 130 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AquaHideout_1F_Movement_PanRight
AquaHideout_1F_Triggers_1:
# 132 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 133 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Delta
# 134 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Triggers_Text_0
# 135 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 136 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 137 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 138 "data/maps/AquaHideout_1F/scripts.pory"
	playse SE_PIN
# 139 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 3, AquaHideout_1F_Movement_GetOut
# 141 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 4, AquaHideout_1F_Movement_DeltaLeave
# 142 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 143 "data/maps/AquaHideout_1F/scripts.pory"
	removeobject 4
# 144 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_DELTA_GRUNT_AQUA_HIDEOUT
# 145 "data/maps/AquaHideout_1F/scripts.pory"
	setobjectxyperm 3, 23, 2
# 146 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 2
	goto_if_eq AquaHideout_1F_Triggers_6
# 150 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AquaHideout_1F_Movement_PanRightDown
AquaHideout_1F_Triggers_5:
# 152 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/AquaHideout_1F/scripts.pory"
	special RemoveCameraObject
# 154 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_AQUA_HIDEOUT_STATE, 2
# 155 "data/maps/AquaHideout_1F/scripts.pory"
	releaseall
	return

AquaHideout_1F_Triggers_2:
# 127 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AquaHideout_1F_Movement_PanLeft
	goto AquaHideout_1F_Triggers_1

AquaHideout_1F_Triggers_6:
# 147 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AquaHideout_1F_Movement_PanLeftDown
	goto AquaHideout_1F_Triggers_5


# 158 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PanLeft:
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 162 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PanLeftDown:
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 166 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PanRight:
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 170 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PanRightDown:
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 174 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_DeltaLeave:
# 175 "data/maps/AquaHideout_1F/scripts.pory"
	delay_8
# 176 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 177 "data/maps/AquaHideout_1F/scripts.pory"
	delay_8
# 178 "data/maps/AquaHideout_1F/scripts.pory"
	set_invisible
	step_end

# 181 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_GetOut:
# 182 "data/maps/AquaHideout_1F/scripts.pory"
	walk_right
# 183 "data/maps/AquaHideout_1F/scripts.pory"
	face_right
# 184 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 185 "data/maps/AquaHideout_1F/scripts.pory"
	face_down
	step_end

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_0:
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Escuchaste lo que el Jefe está\n"
	.string "haciendo en Ciudad Slateport?$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_1:
# 24 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Sí! Está yendo a buscar el Submarino...\n"
	.string "Espera a ver la cara del público cuando\l"
	.string "se enteren para quién Devon ha-{PAUSE 20}$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_2:
# 25 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Calla, calla! ¿Quién sabe si alguien nos\n"
	.string "está escuchando?$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_3:
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Te enteraste?\n"
	.string "¡El Equipo Magma está siendo acorralado\l"
	.string "en su Base Secreta!\p"
	.string "Deberíamos intentar proteger mejor la\n"
	.string "nuestra, que muy Secreta no es...$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_4:
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Escuché que es otro Equipo como\n"
	.string "nostros... Uno que ha estado atacando a\l"
	.string "tanto Aqua como Magma...\p"
	.string "Escuché que Shelly los vio, pero que les\n"
	.string "dijo a los Reclutas que los vieron que\l"
	.string "cerraran la boca...$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_5:
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡No seas tonto!\n"
	.string "Nuestros Admins nunca se dejarían\l"
	.string "vencer por idiotas así, ¡Nunca!$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_6:
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Escuchaste lo que el Jefe está\n"
	.string "haciendo en la Ruta 122?$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_7:
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Sí!\n"
	.string "Por lo que escuché, está intentando\l"
	.string "robar un Orbe, pero creo que... ¿Están\l"
	.string "siendo ayudados por el Equipo Magma?$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_8:
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡No seas tonto!\n"
	.string "Nuestro Jefe nunca se juntaría con el\l"
	.string "idiota de Maxie, ¡Ya no más, al menos!$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_9:
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡E-ey! ¿Estabas escuchando lo que\n"
	.string "decíamos?$"

AquaHideout_1F_EventScript_Grunt1_Text_0:
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	.string "M-mis pobres Pokémon...\n"
	.string "Estos desgraciados los dejaron muy\l"
	.string "lastimados...\p"
	.string "E-estoy tan preocupado por ellos, te\n"
	.string "prometo que no te haré nada si me\l"
	.string "ayudas...\p"
	.string "¿Podrías darme algún Revivir para\n"
	.string "curarlos?$"

AquaHideout_1F_EventScript_Grunt1_Text_1:
# 62 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Le diste un Revivir al Recluta!$"

AquaHideout_1F_EventScript_Grunt1_Text_2:
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Le diste una Hierba Revivir al Recluta!$"

AquaHideout_1F_EventScript_Grunt1_Text_3:
# 80 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Le diste un Maxi Revivir al Recluta!$"

AquaHideout_1F_EventScript_Grunt1_Text_4:
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Oh... Está bien...\n"
	.string "M-mis pobres Pokémon..$"

AquaHideout_1F_EventScript_Grunt1Helped_Text_0:
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡M-muchas gracias!\n"
	.string "Ahora podré ir a un Centro Pokémon...$"

AquaHideout_1F_Triggers_Text_0:
# 134 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ahora, sal de mi camino.\n"
	.string "O tendré que usar medidas más\l"
	.string "drásticas que derrotar a tus Pokémon.$"
