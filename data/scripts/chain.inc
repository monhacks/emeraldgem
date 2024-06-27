ChainNumber::
    end


ChainBroke::
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

Text_DisplayChainBroke::
	.string "Cadena rota por {STR_VAR_2}.$"
Text_DisplayChain::
    .string "Cadena: {STR_VAR_1}, de {STR_VAR_2}.$"

Text_PokemonWereBurnt::
    .string "¡Tus Pokémon han sido quemados por\nlas arenas ardientes!$"

Text_PokemonProtectedTeam::
    .string "¡{STR_VAR_1} protegió el equipo!$"
 
PokemonBurnt::
	lockall
	playse SE_M_EMBER
	waitse
	message Text_PokemonWereBurnt
	waitmessage
	delay 24
	releaseall
	end

PokemonProtected::
	lockall
	message Text_PokemonProtectedTeam
	waitmessage
	delay 24
	releaseall
	end
