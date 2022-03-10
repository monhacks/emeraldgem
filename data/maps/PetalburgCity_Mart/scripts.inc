PetalburgCity_Mart_MapScripts::
	.byte 0

PetalburgCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	setflag FLAG_BAYASMART
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	clearflag FLAG_BAYASMART
	release
	end

	.align 2
PetalburgCity_Mart_Pokemart_Basic:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_NONE
	release
	end

PetalburgCity_Mart_EventScript_ExpandedItems::
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PetalburgCity_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_NONE
	release
	end

PetalburgCity_Mart_EventScript_Woman::
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
	end

PetalburgCity_Mart_EventScript_Boy::
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
	end

PetalburgCity_Mart_EventScript_Man::
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
	end

PetalburgCity_Mart_Text_WeakWillGrowStronger:
	.string "La mayoría de las Tiendas Pokémon son\n"
	.string "parejas de casados que han abierto el\l"
	.string "establecimiento con sus propias manos.\p"
	.string "Uno vende objetos como Pokéballs y\n"
	.string "objetos curativos, mientras que otro\l"
	.string "vende objetos que se pueden equipar a\l"
	.string "tus Pokémon, como Bayas, Hierbas, ¡O\l"
	.string "incluso objetos para entrenarlos!$"

PetalburgCity_Mart_Text_RepelIsUseful:
	.string "La mayoría de las Tiendas Pokémon son\n"
	.string "parejas de casados que han abierto el\l"
	.string "establecimiento con sus propias manos.\p"
	.string "Uno vende objetos como Pokéballs y\n"
	.string "objetos curativos, mientras que otro\l"
	.string "vende objetos que se pueden equipar a\l"
	.string "tus Pokémon, como Bayas, Hierbas, ¡O\l"
	.string "incluso objetos para entrenarlos!$"

PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
	.string "Los objetos que encuentres en una\n"
	.string "Tienda cambiarán dependiendo de la\l"
	.string "cantidad de Medallas que poseas, pero\l"
	.string "también hay algunas Tiendas con cosas\l"
	.string "propias.$"


