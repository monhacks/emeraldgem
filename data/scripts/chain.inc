ChainNumber::
	lockall
    buffernumberstring 0, VAR_CHAIN
    msgbox TextoCool, 2
	release
    end


ChainBroke::
	lockall
	buffernumberstring 0, VAR_CHAIN
    msgbox TextoCool2, 2
	release
	end
 
EventScript_OpenRegidragoDoor::
	lockall
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 2
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox Text_OpenRegidragoDoor, MSGBOX_DEFAULT
	releaseall
	end
	
EventScript_ActuallyOpenRegidragoDoor::
	lockall
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 5
	setvar VAR_0x8007, 4
	special ShakeCamera
	waitstate
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 7
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	setmetatile 3, 2, 0x3A7, FALSE
	setmetatile 3, 1, 0x39F, TRUE
	setmetatile 2, 1, 0x39E, TRUE
	setmetatile 2, 2, 0x3A6, TRUE
	setmetatile 4, 1, 0x3A0, TRUE
	setmetatile 4, 2, 0x3A1, TRUE
	special DrawWholeMapView
	msgbox Text_ActuallyOpenRegidragoDoor, MSGBOX_DEFAULT
	setflag FLAG_REGIDRAGO_DOOR_UNLOCKED
	releaseall
	end

EventScript_FreeRegidrago::
	lockall
	release
	end


Text_ActuallyOpenRegidragoDoor:
	.string "¡Se ha abierto la puerta!$"

Text_OpenRegidragoDoor:
	.string "Parece que los mensajes en\nla pared han cambiado.$" 

TextoCool2::
	.string "Cadena rota por {STR_VAR_2}.$"
TextoCool::
    .string "Cadena: {STR_VAR_1}, de {STR_VAR_2}.$"
 
AddChain::
    addvar VAR_CHAIN, 1
    end

