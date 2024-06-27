MagmaHideout_3F_1R_MapScripts::
# 6 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MagmaHideout_3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	compare VAR_MAGMA_HIDEOUT_STATE, 1
	goto_if_eq MagmaHideout_3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MagmaHideout_3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	call MagmaHideout_3F_1R_EventScripts_PrepareMagmaWin
	return


MagmaHideout_3F_1R_EventScripts_PrepareMagmaWin::
# 15 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	setobjectxyperm 1, 7, 17
# 16 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 17 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	setobjectxyperm 3, 8, 16
# 18 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 19 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	setobjectxyperm 4, 8, 17
# 20 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	return


MagmaHideout_3F_1R_EventScript_Grunt9::
# 24 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	lockall
# 25 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Magma
# 26 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScript_Grunt9_Text_0
# 27 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	hidenamebox
# 28 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	closemessage
# 29 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	releaseall
	return


MagmaHideout_3F_1R_EventScript_Grunt16::
# 33 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	lockall
# 34 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Magma
# 35 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScript_Grunt16_Text_0
# 36 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	hidenamebox
# 37 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	closemessage
# 38 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	releaseall
	return


MagmaHideout_3F_1R_EventScripts_Trigger::
# 42 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	special SpawnCameraObject
# 43 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	lockall
# 44 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_3F_1R_Movement_PanToDrama
# 45 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	waitmovement 0
# 46 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Magma
# 47 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScripts_Trigger_Text_0
# 48 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Delta
# 49 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScripts_Trigger_Text_1
# 50 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	waitmovement 0
# 52 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Magma
# 53 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScripts_Trigger_Text_2
# 54 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	hidenamebox
# 55 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	closemessage
# 67 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement 4, MagmaHideout_3F_1R_Movement_DeltaTryToGetAway1
# 68 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement 1, MagmaHideout_3F_1R_Movement_Grunt1Stop
# 69 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement 3, MagmaHideout_3F_1R_Movement_Grunt2Stop
# 70 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	waitmovement 0
# 71 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Delta
# 72 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScripts_Trigger_Text_3
# 73 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Magma
# 74 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScripts_Trigger_Text_4
# 75 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Delta
# 76 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScripts_Trigger_Text_5, MSGBOX_INTERRUPT
# 77 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	hidenamebox
# 78 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	closemessage
# 79 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement 4, MagmaHideout_3F_1R_Movement_DeltaTryToGetAway2
# 80 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement 1, MagmaHideout_3F_1R_Movement_Grunt1Stop2
# 81 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement 3, MagmaHideout_3F_1R_Movement_Grunt2Stop2
# 82 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	waitmovement 0
# 83 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	namebox Delta
# 84 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_EventScripts_Trigger_Text_6
# 85 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	hidenamebox
# 86 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	closemessage
# 87 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	call MagmaHideout_3F_1R_EventScripts_PrepareMagmaWin
# 88 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_3F_1R_Movement_PanFromDrama
# 89 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	waitmovement 0
# 90 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	special RemoveCameraObject
# 91 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	releaseall
	end


# 95 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Movement_PanToDrama:
# 96 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_left
# 96 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_left
# 96 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_left
# 96 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_left
# 96 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_left
# 96 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_left
# 97 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_up
	step_end

# 100 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Movement_PanFromDrama:
# 101 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_right
# 101 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_right
# 101 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_right
# 101 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_right
# 101 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_right
# 101 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_right
# 102 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_down
	step_end

# 105 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Movement_DeltaTryToGetAway1:
# 106 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_fast_up
# 106 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_fast_up
# 106 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_fast_up
	step_end

# 109 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Movement_Grunt1Stop:
# 110 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_faster_left
# 111 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_faster_up
# 111 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_faster_up
# 111 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_faster_up
# 111 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_faster_up
# 112 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

# 116 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Movement_Grunt2Stop:
# 117 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_fast_up
# 117 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_fast_up
# 117 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_fast_up
	step_end

# 120 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Movement_DeltaTryToGetAway2:
# 121 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	delay_8
# 122 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	lock_facing_direction
# 123 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_slow_right
# 124 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	unlock_facing_direction
# 125 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_in_place_up
# 126 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_in_place_left
	step_end

# 129 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Movement_Grunt1Stop2:
# 130 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_in_place_down
	step_end

# 133 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Movement_Grunt2Stop2:
# 134 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_slow_up
# 135 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	walk_in_place_right
	step_end

MagmaHideout_3F_1R_EventScript_Grunt9_Text_0:
# 26 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "¿Un{A} intrus{OA}? ¡Vete de aquí!$"

MagmaHideout_3F_1R_EventScript_Grunt16_Text_0:
# 35 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "¿No tan fuertes por sí solos, eh?$"

MagmaHideout_3F_1R_EventScripts_Trigger_Text_0:
# 47 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "¡No vas a pasar! ¡Nuestros compañeros\n"
	.string "ya han detenido a tus amigos, y\l"
	.string "nosotros te detendremos a tí!$"

MagmaHideout_3F_1R_EventScripts_Trigger_Text_1:
# 49 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Dejen de molestar. Necesitamos ese\n"
	.string "Orbe Rojo que tienen. Entrégenoslo y\l"
	.string "los dejaremos traquilos.$"

MagmaHideout_3F_1R_EventScripts_Trigger_Text_2:
# 53 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "¡Silencio! ¡No intentes nada!$"

MagmaHideout_3F_1R_EventScripts_Trigger_Text_3:
# 72 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Hmmm... Jugaré con ustedes un rato.\p"
	.string "Ve, niñ{OA}, continúa con tu misión.$"

MagmaHideout_3F_1R_EventScripts_Trigger_Text_4:
# 74 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "No te hagas la lista. Un empujón, y la\n"
	.string "División Delta deberá encontrar una\l"
	.string "nueva miembro.$"

MagmaHideout_3F_1R_EventScripts_Trigger_Text_5:
# 76 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Las amenasas vacías no te llevarán a-{PAUSE 20}$"

MagmaHideout_3F_1R_EventScripts_Trigger_Text_6:
# 84 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "...$"
