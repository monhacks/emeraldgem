AquaHideout_1F_MapScripts::
	.byte 0


AquaHideout_1F_TriggerLeft::
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	lockall
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_AQUA_HIDEOUT_STATE, 2
# 11 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_Triggers
	return


AquaHideout_1F_TriggerRight::
# 14 "data/maps/AquaHideout_1F/scripts.pory"
	lockall
# 15 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_AQUA_HIDEOUT_STATE, 3
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_Triggers
	return


AquaHideout_1F_Triggers::
# 19 "data/maps/AquaHideout_1F/scripts.pory"
	lockall
# 20 "data/maps/AquaHideout_1F/scripts.pory"
	special SpawnCameraObject
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	addobject 3
# 22 "data/maps/AquaHideout_1F/scripts.pory"
	addobject 4
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 2
	goto_if_eq AquaHideout_1F_Triggers_2
# 27 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AquaHideout_1F_Movement_PanRight
AquaHideout_1F_Triggers_1:
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Delta
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Triggers_Text_0
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 33 "data/maps/AquaHideout_1F/scripts.pory"
	playse SE_PIN
# 34 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 3, AquaHideout_1F_Movement_GetOut
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 4, AquaHideout_1F_Movement_DeltaLeave
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/AquaHideout_1F/scripts.pory"
	removeobject 4
# 39 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_DELTA_GRUNT_AQUA_HIDEOUT
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 2
	goto_if_eq AquaHideout_1F_Triggers_6
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AquaHideout_1F_Movement_PanRightDown
AquaHideout_1F_Triggers_5:
# 46 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/AquaHideout_1F/scripts.pory"
	special RemoveCameraObject
# 48 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_AQUA_HIDEOUT_STATE, 2
# 49 "data/maps/AquaHideout_1F/scripts.pory"
	releaseall
	return

AquaHideout_1F_Triggers_2:
# 24 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AquaHideout_1F_Movement_PanLeft
	goto AquaHideout_1F_Triggers_1

AquaHideout_1F_Triggers_6:
# 41 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AquaHideout_1F_Movement_PanLeftDown
	goto AquaHideout_1F_Triggers_5


# 52 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PanLeft:
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 56 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PanLeftDown:
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 60 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PanRight:
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_northeast
	step_end

# 64 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PanRightDown:
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	walk_diag_southwest
	step_end

# 68 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_DeltaLeave:
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	delay_8
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	delay_8
# 72 "data/maps/AquaHideout_1F/scripts.pory"
	set_invisible
	step_end

# 75 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_GetOut:
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	walk_right
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	face_right
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	face_down
	step_end

AquaHideout_1F_EventScript_HideoutEntranceGrunts::
# 83 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 84 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 85 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Aqua
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_HideoutEntranceGrunts_2
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_HideoutEntranceGrunts_3
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_6, MSGBOX_DEFAULT
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_7, MSGBOX_DEFAULT
# 104 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_8, MSGBOX_DEFAULT
AquaHideout_1F_EventScript_HideoutEntranceGrunts_1:
# 106 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 107 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 109 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 110 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Aqua
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_9
# 112 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 113 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 114 "data/maps/AquaHideout_1F/scripts.pory"
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunts_2:
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_0, MSGBOX_DEFAULT
# 91 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_1, MSGBOX_INTERRUPT
# 92 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_2, MSGBOX_DEFAULT
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunts_1

AquaHideout_1F_EventScript_HideoutEntranceGrunts_3:
# 96 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_3, MSGBOX_DEFAULT
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_4, MSGBOX_DEFAULT
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_5, MSGBOX_DEFAULT
	goto AquaHideout_1F_EventScript_HideoutEntranceGrunts_1


AquaHideout_1F_EventScript_Grunt1::
# 119 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_HELPED_AQUA_GRUNT, AquaHideout_1F_EventScript_Grunt1_1
	return

AquaHideout_1F_EventScript_Grunt1_1:
# 120 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Aqua
# 121 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_Grunt1_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AquaHideout_1F_EventScript_Grunt1_4
AquaHideout_1F_EventScript_Grunt1_3:
# 149 "data/maps/AquaHideout_1F/scripts.pory"
	namebox Aqua
# 150 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_Grunt1_Text_4, MSGBOX_DEFAULT
# 151 "data/maps/AquaHideout_1F/scripts.pory"
	releaseall
	return

AquaHideout_1F_EventScript_Grunt1_4:
# 123 "data/maps/AquaHideout_1F/scripts.pory"
	hidenamebox
# 124 "data/maps/AquaHideout_1F/scripts.pory"
	checkitem ITEM_REVIVE
# 125 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AquaHideout_1F_EventScript_Grunt1_7
AquaHideout_1F_EventScript_Grunt1_6:
# 132 "data/maps/AquaHideout_1F/scripts.pory"
	checkitem ITEM_REVIVAL_HERB
# 133 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AquaHideout_1F_EventScript_Grunt1_10
AquaHideout_1F_EventScript_Grunt1_9:
# 140 "data/maps/AquaHideout_1F/scripts.pory"
	checkitem ITEM_MAX_REVIVE
# 141 "data/maps/AquaHideout_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AquaHideout_1F_EventScript_Grunt1_12
	goto AquaHideout_1F_EventScript_Grunt1_3

AquaHideout_1F_EventScript_Grunt1_7:
# 126 "data/maps/AquaHideout_1F/scripts.pory"
	removeitem ITEM_REVIVE
# 127 "data/maps/AquaHideout_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/AquaHideout_1F/scripts.pory"
	message AquaHideout_1F_EventScript_Grunt1_Text_1
# 129 "data/maps/AquaHideout_1F/scripts.pory"
	waitmessage
# 130 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_Grunt1Helped
	goto AquaHideout_1F_EventScript_Grunt1_6

AquaHideout_1F_EventScript_Grunt1_10:
# 134 "data/maps/AquaHideout_1F/scripts.pory"
	removeitem ITEM_REVIVAL_HERB
# 135 "data/maps/AquaHideout_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 136 "data/maps/AquaHideout_1F/scripts.pory"
	message AquaHideout_1F_EventScript_Grunt1_Text_2
# 137 "data/maps/AquaHideout_1F/scripts.pory"
	waitmessage
# 138 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_Grunt1Helped
	goto AquaHideout_1F_EventScript_Grunt1_9

AquaHideout_1F_EventScript_Grunt1_12:
# 142 "data/maps/AquaHideout_1F/scripts.pory"
	removeitem ITEM_MAX_REVIVE
# 143 "data/maps/AquaHideout_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/AquaHideout_1F/scripts.pory"
	message AquaHideout_1F_EventScript_Grunt1_Text_3
# 145 "data/maps/AquaHideout_1F/scripts.pory"
	waitmessage
# 146 "data/maps/AquaHideout_1F/scripts.pory"
	goto AquaHideout_1F_EventScript_Grunt1Helped
	goto AquaHideout_1F_EventScript_Grunt1_3


AquaHideout_1F_EventScript_Grunt1Helped::
# 155 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_EventScript_Grunt1Helped_Text_0
# 156 "data/maps/AquaHideout_1F/scripts.pory"
	waitmessage
# 157 "data/maps/AquaHideout_1F/scripts.pory"
	addvar VAR_WISHES_FUFILLED, 1
# 158 "data/maps/AquaHideout_1F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	delay 16
# 160 "data/maps/AquaHideout_1F/scripts.pory"
	removeobject 3
# 161 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HELPED_AQUA_GRUNT
# 162 "data/maps/AquaHideout_1F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	delay 16
# 164 "data/maps/AquaHideout_1F/scripts.pory"
	call Script_Wishes
# 165 "data/maps/AquaHideout_1F/scripts.pory"
	releaseall
	end


AquaHideout_1F_Triggers_Text_0:
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ahora, sal de mi camino.\n"
	.string "O tendré que usar medidas más\l"
	.string "drásticas que derrotar a tus Pokémon.$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_0:
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Escuchaste lo que el Jefe está haciendo en Ciudad Slateport?$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_1:
# 91 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Sí! Está yendo a buscar el Submarino...\nEspera a ver la cara del público cuando\lse enteren para quién Devon ha-{PAUSE 20} $"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_2:
# 92 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Calla, calla! ¿Quién sabe si alguien nos está escuchando?$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_3:
# 96 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Te enteraste?\n¡El Equipo Magma está siendo acorralado en su Base Secreta!\pDeberíamos intentar proteger mejor la nuestra, que muy Secreta no es...$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_4:
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Escuché que es otro Equipo como nostros... Uno que ha estado atacando a tanto Aqua como Magma...\p"
	.string "Escuché que Shelly los vio, pero que les dijo a los Reclutas que los vieron que cerraran la boca...$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_5:
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡No seas tonto!\nNuestros Admins nunca se dejarían vencer por idiotas así, ¡Nunca!$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_6:
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Escuchaste lo que el Jefe está haciendo en la Ruta 122?$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_7:
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Sí!\nPor lo que escuché, está intentando robar un Orbe, pero creo que... ¿Están siendo ayudados por el Equipo Magma?$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_8:
# 104 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡No seas tonto!\nNuestro Jefe nunca se juntaría con el idiota de Maxie, ¡Ya no más, al menos!$"

AquaHideout_1F_EventScript_HideoutEntranceGrunts_Text_9:
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡E-ey! ¿Estabas escuchando lo que decíamos?$"

AquaHideout_1F_EventScript_Grunt1_Text_0:
# 121 "data/maps/AquaHideout_1F/scripts.pory"
	.string "M-mis pobres Pokémon...\n"
	.string "Estos desgraciados los dejaron muy\l"
	.string "lastimados...\p"
	.string "E-estoy tan preocupado por ellos, te\n"
	.string "prometo que no te haré nada si me\l"
	.string "ayudas...\p"
	.string "¿Podrías darme algún Revivir para\n"
	.string "curarlos?$"

AquaHideout_1F_EventScript_Grunt1_Text_1:
# 128 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Le diste un Revivir al Recluta!$"

AquaHideout_1F_EventScript_Grunt1_Text_2:
# 136 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Le diste una Hierba Revivir al Recluta!$"

AquaHideout_1F_EventScript_Grunt1_Text_3:
# 144 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Le diste un Maxi Revivir al Recluta!$"

AquaHideout_1F_EventScript_Grunt1_Text_4:
# 150 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Oh... Está bien...\n"
	.string "M-mis pobres Pokémon..$"

AquaHideout_1F_EventScript_Grunt1Helped_Text_0:
# 155 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡M-muchas gracias!\n"
	.string "Ahora podré ir a un Centro Pokémon...$"
