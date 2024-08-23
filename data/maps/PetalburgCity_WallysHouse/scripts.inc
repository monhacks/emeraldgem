# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHM03Surf
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHM03Surf::
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox PapaWally
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM03
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM03
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox PapaWally
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_HIDE_WALLY_DEWFORD_TOWN, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewford
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM03, PetalburgCity_WallysHouse_EventScript_ReceievedHM03Surf
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox PapaWally
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewford::
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox PapaWally
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyCantGoDewford, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHM03Surf::
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox PapaWally
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox PapaWally
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox PapaWally
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_HIDE_WALLY_DEWFORD_TOWN, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewfordMom
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM03, PetalburgCity_WallysHouse_EventScript_ReceivedHM03Surf
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox MamaWally
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewfordMom::
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox MamaWally
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyCanDoAnything, MSGBOX_DEFAULT
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHM03Surf::
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	namebox MamaWally
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	hidenamebox
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyCanDoAnything:
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Entonces… Tenía razón. Wally pudo\n"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "ganarle a Brawly.\p"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Junto con sus Pokémon, seguro fue\n"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "tarea fácil para él, pero al mismo\l"
# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "tiempo, estoy preocupada por su asma…\p"
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Quisás… Estar con los Pokémon pueda\n"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "hacer mejorar su condición…\l"
# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Quiero que lo sigas cuidando, que le\l"
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "sigas ayudando, y que lo sigas\l"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "alentando a que siga sus sueños.$"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyCantGoDewford:
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¿Pueblo Dewford?\p"
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Pues sí, quizá fue a comprar algo con la\n"
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "familia, aunque raro se me hace que no\l"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "dijeran nada. Supongo que su condición\l"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "está tan mejorada que viajar en barco\l"
# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "no hizo que se desmayara.\p"
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Pero, ¿Batalla de Gimnasio?\n"
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Nah, Wally no puede mantenerse en pie\l"
# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "durante un Combate Pokémon.$"
# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Eres…\n"
# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ah, debes ser {PLAYER}, ¿no?\p"
# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Pues debo agradecerte, porque Wally se\n"
# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "ha encariñado mucho contigo, ¡Se\l"
# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "emociona tanto al hablar de ti, ja ja!\l"
# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Deberías ver el brillo en sus ojitos\l"
# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "cuando te menciona alguien de la\l"
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "familia. Eres realmente especial en su\l"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "vida, {PLAYER}, por favor, cuídalo\l"
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "mucho, ¿Sí?\p"
# 138 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Él siempre está enfermo, tosiendo\n"
# 139 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "mucho, y no ayuda que su asma empeore\l"
# 140 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "en lugares que no tienen el aire tan\l"
# 141 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "limpio, como aquí. Por eso, lo hemos\l"
# 142 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "enviado a Verdanturf, donde el aire\l"
# 143 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "limpio lo ayuda a respirar mejor…\p"
# 144 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}…\n"
# 145 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Le importas muchísimo a Wally, así que,\l"
# 146 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "cuídate mucho, ¿Sí?\l"
# 147 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "No podría soportar que les pasara algo\l"
# 148 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "a alguno de los dos…$"
# 149 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 150 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 151 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 152 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¿Cómo estará Wally…?\n"
# 153 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Espero que esté tomando sus pastillas\l"
# 154 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "y usando regularmente su inhalador…$"
# 155 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 156 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 157 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 158 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¡{PLAYER}! Disculpa por haberte\n"
# 159 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "traído acá de esa forma, pero tengo\l"
# 160 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "que agradecerte por haber ayudado a\l"
# 161 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally.\p"
# 162 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Desde que tiene un Pokémon, ha estado\n"
# 163 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "actuando mucho más energético… Mucho\l"
# 164 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "más saludable…\p"
# 165 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Gracias también por sacarle ese sueño\n"
# 166 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "estúpido de batallar con Pokémon, él\l"
# 167 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "sabe que no puede por su asma y sus\l"
# 168 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "enfermedades constantes…\p"
# 169 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "No, disculpa, no es un sueño estúpido,\n"
# 170 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}, amaría verlo feliz siendo\l"
# 171 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "un Entrenador, pero ese sueño no es\l"
# 172 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "muy realista, ¿No te parece?\p"
# 173 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Pero bueno, ¡Toma esto!$"
# 174 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 175 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 176 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Creo que ya sabes lo que hace, ¿No?$"
# 177 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 178 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 179 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally viene a visitarnos, y estoy\n"
# 180 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "emocionado por eso.\p"
# 181 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Extraño a mi hijo demasiado, verlo\n"
# 182 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "emocionarse por sus intereses, como\l"
# 183 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "los Pokémon, el aprendizaje, pero\l"
# 184 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "también tú, {PLAYER}, ¡No puedo\l"
# 185 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "esperar a verlo otra vez!$"
# 186 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 187 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 188 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¿Cómo? ¿Que viste a Wally en la Ciudad\n"
# 189 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Evergrande?\p"
# 190 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Que broma tan mala, {PLAYER}, Wally\n"
# 191 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "sigue tranqui en la casa de sus\l"
# 192 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "familiares en Verdanturf. Ni a\l"
# 193 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "visitarnos vino.$"
# 194 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 195 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 196 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally estaba TAN, TAN contento cuando\n"
# 197 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "nos dijo que est{EA} increíble y asombros{OA}\l"
# 198 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "chic{OA} le ayudó a capturar un Pokémon…\p"
# 199 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "No le había visto así de contento en\n"
# 200 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "muchísimo tiempo…\l"
# 201 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Creo que realmente te aprecia,\l"
# 202 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}.$"
# 203 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 204 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 205 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "No le digas a mi esposo, pero… Wally se\n"
# 206 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "fue de Verdanturf hace un tiempo… Y\l"
# 207 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "quería pedirte que POR FAVOR, lo cuides\l"
# 208 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "mucho. Wally es muy frágil, y no podría\l"
# 209 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "soportar que algo le pasara…\l"
# 210 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Así que quería que lo acompañes en\l"
# 211 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "esta aventura suya, para guiarle y\l"
# 212 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "apoyarle cuando te necesite, para que\l"
# 213 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "vea que si alguien que él quiere tanto\l"
# 214 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "confía en él, podrá comenzar a confiar\l"
# 215 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "en sus propias capacidades también…$"
