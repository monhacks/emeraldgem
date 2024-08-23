# 93 "data/maps/OldaleTown/scripts.pory"

# 94 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 95 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 96 "data/maps/OldaleTown/scripts.pory"

# 97 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 98 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 99 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 100 "data/maps/OldaleTown/scripts.pory"

# 101 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 102 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 103 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 104 "data/maps/OldaleTown/scripts.pory"
	end
# 105 "data/maps/OldaleTown/scripts.pory"

# 106 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 107 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 4, 13
# 108 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 109 "data/maps/OldaleTown/scripts.pory"
	return
# 110 "data/maps/OldaleTown/scripts.pory"

# 111 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 112 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 113 "data/maps/OldaleTown/scripts.pory"
	end
# 114 "data/maps/OldaleTown/scripts.pory"

# 115 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 116 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 117 "data/maps/OldaleTown/scripts.pory"
	end
# 118 "data/maps/OldaleTown/scripts.pory"

# 119 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 120 "data/maps/OldaleTown/scripts.pory"
	lock
# 121 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 122 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 123 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 124 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 125 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 126 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 127 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_GoToMartSouth
# 128 "data/maps/OldaleTown/scripts.pory"
	end
# 129 "data/maps/OldaleTown/scripts.pory"

# 130 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 131 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 132 "data/maps/OldaleTown/scripts.pory"
	end
# 133 "data/maps/OldaleTown/scripts.pory"

# 134 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 135 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 136 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 137 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 138 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 139 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 140 "data/maps/OldaleTown/scripts.pory"
	release
# 141 "data/maps/OldaleTown/scripts.pory"
	end
# 142 "data/maps/OldaleTown/scripts.pory"

# 143 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 144 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 145 "data/maps/OldaleTown/scripts.pory"
	release
# 146 "data/maps/OldaleTown/scripts.pory"
	end
# 147 "data/maps/OldaleTown/scripts.pory"

# 148 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 149 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 150 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 151 "data/maps/OldaleTown/scripts.pory"
	release
# 152 "data/maps/OldaleTown/scripts.pory"
	end
# 153 "data/maps/OldaleTown/scripts.pory"

# 154 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 155 "data/maps/OldaleTown/scripts.pory"
	lock
# 156 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 157 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 158 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 159 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 160 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 161 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/OldaleTown/scripts.pory"
	release
# 163 "data/maps/OldaleTown/scripts.pory"
	end
# 164 "data/maps/OldaleTown/scripts.pory"

# 165 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 166 "data/maps/OldaleTown/scripts.pory"
	lockall
# 167 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FacePlayer
# 168 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 170 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 171 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceLeft
# 172 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 173 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 175 "data/maps/OldaleTown/scripts.pory"
	end
# 176 "data/maps/OldaleTown/scripts.pory"

# 177 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 178 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 179 "data/maps/OldaleTown/scripts.pory"
	release
# 180 "data/maps/OldaleTown/scripts.pory"
	end
# 181 "data/maps/OldaleTown/scripts.pory"

# 182 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 183 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 185 "data/maps/OldaleTown/scripts.pory"
	step_end
# 186 "data/maps/OldaleTown/scripts.pory"

# 187 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 190 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 192 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 193 "data/maps/OldaleTown/scripts.pory"
	step_end
# 194 "data/maps/OldaleTown/scripts.pory"

# 195 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 197 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 198 "data/maps/OldaleTown/scripts.pory"
	step_end

OldaleTown_Text_SavingMyProgress::
# 2 "data/maps/OldaleTown/scripts.pory"
	.string "Quiero entrenar a mis Pokémon\n"
	.string "un poquito más rápido…\p"
	.string "Estoy cambiando las opciones a\n"
	.string "“Modo Entrenamiento”.$"

OldaleTown_Text_IWorkAtPokemonMart::
# 19 "data/maps/OldaleTown/scripts.pory"
	.string "¡Hola! ¡Trabajo en la última Tienda\n"
	.string "Pokémon, y\n"
	.string "me gustaría darte esto!$"

OldaleTown_Text_PotionExplanation::
# 30 "data/maps/OldaleTown/scripts.pory"
	.string "¡Es una Poción de cortesía!\p"
	.string "Espero que eso haga que quieras\n"
	.string "comprar en nuestra tienda.$"

OldaleTown_Text_WaitDontComeInHere::
# 44 "data/maps/OldaleTown/scripts.pory"
	.string "¡NOOOOOO! ¡BASTA!\p"
	.string "¡¡Vas a arruinar todo si pasas!$"

OldaleTown_Text_DiscoveredFootprints::
# 56 "data/maps/OldaleTown/scripts.pory"
	.string "¡Vas a arruinar\n"
	.string "todo si pasas!$"

OldaleTown_Text_FinishedSketchingFootprints::
# 68 "data/maps/OldaleTown/scripts.pory"
	.string "Pues… Sólo era un Ralts…$"

OldaleTown_Text_TownSign::
# 80 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GREEN SHADOW GREEN} PUEBLO OLDALE\n"
	.string "{COLOR DARK_GRAY SHADOW LIGHT_GRAY} “En contacto con nuestras\l"
	.string "tradiciones.”$"
