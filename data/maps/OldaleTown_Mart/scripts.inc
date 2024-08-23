# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 25 "data/maps/OldaleTown_Mart/scripts.pory"

# 26 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart 0
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 31 "data/maps/OldaleTown_Mart/scripts.pory"

# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 42 "data/maps/OldaleTown_Mart/scripts.pory"

# 43 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 46 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 50 "data/maps/OldaleTown_Mart/scripts.pory"

# 51 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 55 "data/maps/OldaleTown_Mart/scripts.pory"

# 56 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 59 "data/maps/OldaleTown_Mart/scripts.pory"

# 60 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "La mayoría de las Tiendas Pokémon\n"
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "eran parejas de casados que habían\l"
# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "abierto el establecimiento con sus\l"
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "propias manos. Este es el último.\p"
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Uno vende objetos como Pokéballs y\n"
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "objetos curativos, mientras que otro\l"
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "vende objetos que sirven para\l"
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "atrapar y entrenar a tus Pokémon.\l"
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "¡Ahora están en el Centro Pokémon!$"
# 70 "data/maps/OldaleTown_Mart/scripts.pory"

# 71 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "¿Sabías que esta es la última\ntienda de Hoenn, sin contar el\lCentro Comercial?\p"
# 73 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Esto es debido a que las Tiendas\ny los Centros Pokémon se han\lcombinado en uno solo.$"
# 74 "data/maps/OldaleTown_Mart/scripts.pory"

# 75 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Los objetos que encuentres en una\n"
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Centro o Tienda cambiarán por la\l"
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "cantidad de Medallas que poseas, ¡Pero\l"
# 79 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "escuché que hay una Floristería con\l"
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "bayas, y cambian sus reservas también!$"
