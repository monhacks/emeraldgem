# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
.set LOCALID_WALLY, 8
# 3 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 4 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 5 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 6 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 7 "data/maps/FortreeCity/scripts.pory"

# 8 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 9 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 10 "data/maps/FortreeCity/scripts.pory"
	end
# 11 "data/maps/FortreeCity/scripts.pory"

# 12 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 13 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 14 "data/maps/FortreeCity/scripts.pory"
	end
# 15 "data/maps/FortreeCity/scripts.pory"

# 16 "data/maps/FortreeCity/scripts.pory"

# 17 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Trigger_Wally::
# 18 "data/maps/FortreeCity/scripts.pory"
	lockall
# 19 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_HIDE_WALLY_DEWFORD_TOWN
# 20 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_HIDE_WALLY_RUSTBORO
# 21 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_HIDE_WALLY_111
# 22 "data/maps/FortreeCity/scripts.pory"
	namebox Unknown
# 23 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Trigger_Wally_Text_0
# 24 "data/maps/FortreeCity/scripts.pory"
	hidenamebox
# 25 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 26 "data/maps/FortreeCity/scripts.pory"
	addobject LOCALID_WALLY
# 27 "data/maps/FortreeCity/scripts.pory"
	playse SE_PIN
# 28 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 29 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 30 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 31 "data/maps/FortreeCity/scripts.pory"
	delay 16
# 32 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_WALLY, FortreeCity_Movement_WallyApproach
# 33 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/FortreeCity/scripts.pory"
	namebox Wally
# 35 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_WALLY_QUEST_SEEN, FortreeCity_Trigger_Wally_2
# 36 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Trigger_Wally_Text_2
# 37 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Trigger_Wally_1:
# 38 "data/maps/FortreeCity/scripts.pory"
	hidenamebox
# 39 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 40 "data/maps/FortreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY2, FortreeCity_Trigger_Wally_Text_3
# 41 "data/maps/FortreeCity/scripts.pory"
	namebox Wally
# 42 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Trigger_Wally_Text_4
# 43 "data/maps/FortreeCity/scripts.pory"
	hidenamebox
# 44 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 45 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_WALLY, FortreeCity_Movement_WallyLeave
# 46 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/FortreeCity/scripts.pory"
	removeobject LOCALID_WALLY
# 48 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_FORTREE_CITY_STATE, 1
# 49 "data/maps/FortreeCity/scripts.pory"
	releaseall
# 50 "data/maps/FortreeCity/scripts.pory"
	return
# 51 "data/maps/FortreeCity/scripts.pory"

# 52 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Trigger_Wally_2:
# 53 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Trigger_Wally_Text_1
# 54 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_Trigger_Wally_1
# 55 "data/maps/FortreeCity/scripts.pory"

# 56 "data/maps/FortreeCity/scripts.pory"

# 57 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_WallyApproach:
# 58 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 59 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 60 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 61 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 62 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 63 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 64 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 65 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 66 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 67 "data/maps/FortreeCity/scripts.pory"
	step_end
# 68 "data/maps/FortreeCity/scripts.pory"

# 69 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_WallyLeave:
# 70 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 71 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 72 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 73 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 74 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 75 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 76 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 77 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 78 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 79 "data/maps/FortreeCity/scripts.pory"
	step_end
# 80 "data/maps/FortreeCity/scripts.pory"

# 81 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Trigger_Wally_Text_0:
# 82 "data/maps/FortreeCity/scripts.pory"
	.string "¡Oh, {PLAYER}!$"
# 83 "data/maps/FortreeCity/scripts.pory"

# 84 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Trigger_Wally_Text_1:
# 85 "data/maps/FortreeCity/scripts.pory"
	.string "Desde la última vez que nos vimos, he\n"
# 86 "data/maps/FortreeCity/scripts.pory"
	.string "progresado mucho, {PLAYER}.\p"
# 87 "data/maps/FortreeCity/scripts.pory"
	.string "Flannery me ha ayudado a entrenar, y\n"
# 88 "data/maps/FortreeCity/scripts.pory"
	.string "con sus consejos, tu ayuda y apoyo, he\l"
# 89 "data/maps/FortreeCity/scripts.pory"
	.string "logrado derrotar incluso a Norman. Te\l"
# 90 "data/maps/FortreeCity/scripts.pory"
	.string "estoy alcanzando, {PLAYER}.\p"
# 91 "data/maps/FortreeCity/scripts.pory"
	.string "Tengo un equipo fuerte, ¿Sabes?, uno\n"
# 92 "data/maps/FortreeCity/scripts.pory"
	.string "que ha logrado sobreponerse a todo.\p"
# 93 "data/maps/FortreeCity/scripts.pory"
	.string "Entonces, {PLAYER}, me anima decir,\n"
# 94 "data/maps/FortreeCity/scripts.pory"
	.string "¡Te desafío a una Batalla Pokémon!$"
# 95 "data/maps/FortreeCity/scripts.pory"

# 96 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Trigger_Wally_Text_2:
# 97 "data/maps/FortreeCity/scripts.pory"
	.string "No nos vemos desde hace mucho,\n"
# 98 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER}, pero desde entonces he\l"
# 99 "data/maps/FortreeCity/scripts.pory"
	.string "progresado mucho.\p"
# 100 "data/maps/FortreeCity/scripts.pory"
	.string "Cada Líder de Gimnasio que has\n"
# 101 "data/maps/FortreeCity/scripts.pory"
	.string "conocido hasta ahora, los he derrotado\l"
# 102 "data/maps/FortreeCity/scripts.pory"
	.string "todos.\p"
# 103 "data/maps/FortreeCity/scripts.pory"
	.string "Tengo un equipo fuerte, {PLAYER}, uno\n"
# 104 "data/maps/FortreeCity/scripts.pory"
	.string "que ha logrado sobreponerse a todo lo\l"
# 105 "data/maps/FortreeCity/scripts.pory"
	.string "que he enfrentado hasta el momento.\p"
# 106 "data/maps/FortreeCity/scripts.pory"
	.string "Entonces, {PLAYER}, me anima decir,\n"
# 107 "data/maps/FortreeCity/scripts.pory"
	.string "¡Te desafío a una Batalla Pokémon!$"
# 108 "data/maps/FortreeCity/scripts.pory"

# 109 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Trigger_Wally_Text_3:
# 110 "data/maps/FortreeCity/scripts.pory"
	.string "... He vuelto a perder...\p¡Pero gracias a tí, estoy\naprendiendo cada día más!$"
# 111 "data/maps/FortreeCity/scripts.pory"

# 112 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Trigger_Wally_Text_4:
# 113 "data/maps/FortreeCity/scripts.pory"
	.string "Incluso aunque haya sido derrotado,\n"
# 114 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER}, sé que estoy pudiendo\l"
# 115 "data/maps/FortreeCity/scripts.pory"
	.string "mejorar cada día. {PAUSE 20}-COF, COF-{PAUSE 20}... Mhhh.{PAUSE 10}.{PAUSE 10}.\p"
# 116 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER}, prepárate. ¡La próxima vez\n"
# 117 "data/maps/FortreeCity/scripts.pory"
	.string "que nos veamos, me habré hecho más\l"
# 118 "data/maps/FortreeCity/scripts.pory"
	.string "fuerte! ¡Mis Pokémon habrán alcanzado\l"
# 119 "data/maps/FortreeCity/scripts.pory"
	.string "su máxima etapa y poder!$"
# 120 "data/maps/FortreeCity/scripts.pory"

# 121 "data/maps/FortreeCity/scripts.pory"

# 122 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 123 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 124 "data/maps/FortreeCity/scripts.pory"
	end
# 125 "data/maps/FortreeCity/scripts.pory"

# 126 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 127 "data/maps/FortreeCity/scripts.pory"
	lock
# 128 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 129 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 130 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 131 "data/maps/FortreeCity/scripts.pory"
	release
# 132 "data/maps/FortreeCity/scripts.pory"
	end
# 133 "data/maps/FortreeCity/scripts.pory"

# 134 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 135 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 136 "data/maps/FortreeCity/scripts.pory"
	release
# 137 "data/maps/FortreeCity/scripts.pory"
	end
# 138 "data/maps/FortreeCity/scripts.pory"

# 139 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 140 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 141 "data/maps/FortreeCity/scripts.pory"
	end
# 142 "data/maps/FortreeCity/scripts.pory"

# 143 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 144 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 145 "data/maps/FortreeCity/scripts.pory"
	end
# 146 "data/maps/FortreeCity/scripts.pory"

# 147 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 148 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 149 "data/maps/FortreeCity/scripts.pory"
	end
# 150 "data/maps/FortreeCity/scripts.pory"

# 151 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 152 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 153 "data/maps/FortreeCity/scripts.pory"
	end
# 154 "data/maps/FortreeCity/scripts.pory"

# 155 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 156 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 157 "data/maps/FortreeCity/scripts.pory"
	end
# 158 "data/maps/FortreeCity/scripts.pory"

# 159 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 160 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 161 "data/maps/FortreeCity/scripts.pory"
	end
# 162 "data/maps/FortreeCity/scripts.pory"

# 163 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 164 "data/maps/FortreeCity/scripts.pory"
	lock
# 165 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 166 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 167 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 168 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 169 "data/maps/FortreeCity/scripts.pory"
	release
# 170 "data/maps/FortreeCity/scripts.pory"
	end
# 171 "data/maps/FortreeCity/scripts.pory"

# 172 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 173 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 174 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 175 "data/maps/FortreeCity/scripts.pory"
	release
# 176 "data/maps/FortreeCity/scripts.pory"
	end
# 177 "data/maps/FortreeCity/scripts.pory"

# 178 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 179 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 180 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 181 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 182 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 183 "data/maps/FortreeCity/scripts.pory"
	waitse
# 184 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 185 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 186 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 187 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 188 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 189 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 190 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 191 "data/maps/FortreeCity/scripts.pory"
	release
# 192 "data/maps/FortreeCity/scripts.pory"
	end
# 193 "data/maps/FortreeCity/scripts.pory"

# 194 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 195 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 196 "data/maps/FortreeCity/scripts.pory"
	step_end
# 197 "data/maps/FortreeCity/scripts.pory"

# 198 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 199 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 200 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 201 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 202 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 203 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 204 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 205 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 206 "data/maps/FortreeCity/scripts.pory"

# 207 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 208 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 209 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 210 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 211 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 212 "data/maps/FortreeCity/scripts.pory"

# 213 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 214 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 215 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 216 "data/maps/FortreeCity/scripts.pory"

# 217 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 218 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 219 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 220 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 221 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 222 "data/maps/FortreeCity/scripts.pory"

# 223 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 224 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 225 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 226 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 227 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 228 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 229 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 230 "data/maps/FortreeCity/scripts.pory"

# 231 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 232 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 233 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 234 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 235 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 236 "data/maps/FortreeCity/scripts.pory"

# 237 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 238 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 239 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 240 "data/maps/FortreeCity/scripts.pory"

# 241 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 242 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 243 "data/maps/FortreeCity/scripts.pory"

# 244 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 245 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 246 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 247 "data/maps/FortreeCity/scripts.pory"

# 248 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 249 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 250 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 251 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 252 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 253 "data/maps/FortreeCity/scripts.pory"

# 254 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 255 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 256 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 257 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 258 "data/maps/FortreeCity/scripts.pory"

# 259 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 260 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 261 "data/maps/FortreeCity/scripts.pory"
	.string "LEADER: WINONA\p"
# 262 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 263 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"
