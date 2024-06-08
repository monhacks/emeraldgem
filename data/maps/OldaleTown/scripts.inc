# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 3 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 4 "data/maps/OldaleTown/scripts.pory"

# 5 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 6 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 7 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown/scripts.pory"

# 9 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 10 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 11 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 12 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 13 "data/maps/OldaleTown/scripts.pory"
	end
# 14 "data/maps/OldaleTown/scripts.pory"

# 15 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 16 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 17 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 18 "data/maps/OldaleTown/scripts.pory"
	return
# 19 "data/maps/OldaleTown/scripts.pory"

# 20 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 21 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 4, 13
# 22 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 23 "data/maps/OldaleTown/scripts.pory"
	return
# 24 "data/maps/OldaleTown/scripts.pory"

# 25 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 26 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 27 "data/maps/OldaleTown/scripts.pory"
	end
# 28 "data/maps/OldaleTown/scripts.pory"

# 29 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 30 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 31 "data/maps/OldaleTown/scripts.pory"
	end
# 32 "data/maps/OldaleTown/scripts.pory"

# 33 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 34 "data/maps/OldaleTown/scripts.pory"
	lock
# 35 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 36 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 37 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 38 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 39 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 40 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 41 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_GoToMartSouth
# 42 "data/maps/OldaleTown/scripts.pory"
	end
# 43 "data/maps/OldaleTown/scripts.pory"

# 44 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 45 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 46 "data/maps/OldaleTown/scripts.pory"
	end
# 47 "data/maps/OldaleTown/scripts.pory"

# 48 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 49 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 50 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 51 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 52 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 53 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 54 "data/maps/OldaleTown/scripts.pory"
	release
# 55 "data/maps/OldaleTown/scripts.pory"
	end
# 56 "data/maps/OldaleTown/scripts.pory"

# 57 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 58 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 59 "data/maps/OldaleTown/scripts.pory"
	release
# 60 "data/maps/OldaleTown/scripts.pory"
	end
# 61 "data/maps/OldaleTown/scripts.pory"

# 62 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 63 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 64 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/OldaleTown/scripts.pory"
	release
# 66 "data/maps/OldaleTown/scripts.pory"
	end
# 67 "data/maps/OldaleTown/scripts.pory"

# 68 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 69 "data/maps/OldaleTown/scripts.pory"
	lock
# 70 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 71 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 72 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 73 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 74 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 75 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 76 "data/maps/OldaleTown/scripts.pory"
	release
# 77 "data/maps/OldaleTown/scripts.pory"
	end
# 78 "data/maps/OldaleTown/scripts.pory"

# 79 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 80 "data/maps/OldaleTown/scripts.pory"
	lockall
# 81 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FacePlayer
# 82 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 84 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 85 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceLeft
# 86 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 87 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 89 "data/maps/OldaleTown/scripts.pory"
	end
# 90 "data/maps/OldaleTown/scripts.pory"

# 91 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 92 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 93 "data/maps/OldaleTown/scripts.pory"
	release
# 94 "data/maps/OldaleTown/scripts.pory"
	end
# 95 "data/maps/OldaleTown/scripts.pory"

# 96 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 97 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 99 "data/maps/OldaleTown/scripts.pory"
	step_end
# 100 "data/maps/OldaleTown/scripts.pory"

# 101 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 102 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 104 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 105 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 106 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 107 "data/maps/OldaleTown/scripts.pory"
	step_end
# 108 "data/maps/OldaleTown/scripts.pory"

# 109 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 112 "data/maps/OldaleTown/scripts.pory"
	step_end
# 113 "data/maps/OldaleTown/scripts.pory"

# 114 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 115 "data/maps/OldaleTown/scripts.pory"
	.string "Quiero entrenar a mis Pokémon\n"
# 116 "data/maps/OldaleTown/scripts.pory"
	.string "un poquito más rápido…\p"
# 117 "data/maps/OldaleTown/scripts.pory"
	.string "Estoy cambiando las opciones a\n"
# 118 "data/maps/OldaleTown/scripts.pory"
	.string "“Modo Entrenamiento”.$"
# 119 "data/maps/OldaleTown/scripts.pory"

# 120 "data/maps/OldaleTown/scripts.pory"

# 121 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 122 "data/maps/OldaleTown/scripts.pory"
	.string "¡Hola! ¡Trabajo en una Tienda Pokémon, y\n"
# 123 "data/maps/OldaleTown/scripts.pory"
	.string "me gustaría darte esto!$"
# 124 "data/maps/OldaleTown/scripts.pory"

# 125 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 126 "data/maps/OldaleTown/scripts.pory"
	.string "¡Es una Poción de cortesía!\p"
# 127 "data/maps/OldaleTown/scripts.pory"
	.string "Espero que eso haga que quieras\n"
# 128 "data/maps/OldaleTown/scripts.pory"
	.string "comprar en nuestra tienda.$"
# 129 "data/maps/OldaleTown/scripts.pory"

# 130 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 131 "data/maps/OldaleTown/scripts.pory"
	.string "¡NOOOOOO! ¡BASTA!\p"
# 132 "data/maps/OldaleTown/scripts.pory"
	.string "¡ESTAMOS INVESTIGANDO POKÉMON QUE HAN\n"
# 133 "data/maps/OldaleTown/scripts.pory"
	.string "MIGRADO RECIENTEMENTE A HOENN! ¡Vas a\l"
# 134 "data/maps/OldaleTown/scripts.pory"
	.string "arruinar todo si pasas!$"
# 135 "data/maps/OldaleTown/scripts.pory"

# 136 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "¡Vas a arruinar\n"
# 138 "data/maps/OldaleTown/scripts.pory"
	.string "todo si pasas!$"
# 139 "data/maps/OldaleTown/scripts.pory"

# 140 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 141 "data/maps/OldaleTown/scripts.pory"
	.string "Pues… Sólo era un Ralts…$"
# 142 "data/maps/OldaleTown/scripts.pory"

# 143 "data/maps/OldaleTown/scripts.pory"

# 144 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 145 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GREEN SHADOW GREEN} PUEBLO OLDALE\n"
# 146 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR DARK_GRAY SHADOW LIGHT_GRAY} “Donde nunca pasa nada.”$"
