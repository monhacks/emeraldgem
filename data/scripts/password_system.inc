Password1::
	lockall
	playfanfare MUS_OBTAIN_ITEM
    msgbox Password1_Text, 2
	release
    end

Password2::
	lockall
	playfanfare MUS_OBTAIN_ITEM
    msgbox Password2_Text, 2
	release
	end

Password3::
	lockall
	playfanfare MUS_OBTAIN_ITEM
    msgbox Password3_Text, 2
	release
	end

PasswordMuchos::
	lockall
	playfanfare MUS_OBTAIN_ITEM
    msgbox PasswordMuchos_Text, 2
	waitmessage
	release
	end
PasswordFallo::
	lockall
	playse SE_FAILURE
    msgbox PasswordIncorrecta_Text, 2
	waitmessage
	release
	end

PasswordEvento1::
	lockall
	msgbox TextoEvento1
	setflag FLAG_EVENTOMISTERIOSO1
	releaseall
	return

PasswordAsh::
	lockall
	setflag FLAG_ASHS_POKEMON
	givecustommon SPECIES_PIKACHU_ALOLA_CAP, 85, ITEM_PIKASHUNIUM_Z, ITEM_POKE_BALL, NATURE_BRAVE, 1, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_ELECTROWEB, FALSE;
	givecustommon SPECIES_ROWLET_ASH, 85, ITEM_EVERSTONE, ITEM_POKE_BALL, NATURE_JOLLY, 2, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_RAZOR_LEAF, MOVE_SEED_BOMB, MOVE_BRAVE_BIRD, MOVE_FEATHER_DANCE, FALSE;
	givecustommon SPECIES_LYCANROC_DUSK, 85, ITEM_LYCANIUM_Z, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_STONE_EDGE, MOVE_ACCELEROCK, MOVE_CRUNCH, MOVE_COUNTER, FALSE;
	givecustommon SPECIES_INCINEROAR, 85, ITEM_FIRIUM_Z, ITEM_POKE_BALL, NATURE_RASH, 1, 4, 252, 0, 0, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_DARKEST_LARIAT, MOVE_FIRE_FANG, MOVE_FIRE_BLAST, MOVE_REVENGE, FALSE;
	givecustommon SPECIES_NAGANADEL, 85, ITEM_ELECTRIUM_Z, ITEM_BEAST_BALL, NATURE_NAIVE, 1, 0, 252, 0, 252, 4, 0, 31, 31, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_X_SCISSOR, MOVE_SLUDGE_BOMB, MOVE_DRAGON_PULSE, FALSE;
	givecustommon SPECIES_MELMETAL, 85, ITEM_ELECTRIUM_Z, ITEM_POKE_BALL, NATURE_BRAVE, 1, 4, 252, 252, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_DOUBLE_IRON_BASH, MOVE_FLASH_CANNON, MOVE_ICE_PUNCH, FALSE;
	playfanfare MUS_OBTAIN_TMHM
	msgbox PasswordAsh_Text
	clearflag FLAG_ASHS_POKEMON	
	releaseall
	end


TextoEvento1:
	.string "¡Oh, algo te indica que algo cambió en la\n"
	.string "Ruta 101!\p"
	.string "¡Ve para ahí!$"
 
 
Password1_Text::
	.string "¡Te han enviado un Regalo Misterioso!\p¡Recibiste {STR_VAR_1}!.$"
Password2_Text::
	.string "¡Te han enviado un Regalo Misterioso!\p¡Recibiste {STR_VAR_1}\ny {STR_VAR_2}!$"
Password3_Text::
	.string "¡Te han enviado un Regalo Misterioso!\p¡Recibiste {STR_VAR_1}, \n{STR_VAR_2} y {STR_VAR_3}!$"
PasswordMuchos_Text::
	.string "¡Te han enviado un Regalo Misterioso!\n¡Recibiste muchas cosas!$"
PasswordRecibiste_Text::
	.string "¡Te han enviado un Regalo Misterioso!$"
PasswordIncorrecta_Text::
	.string "Contraseña incorrecta.$"
PasswordAsh_Text::
	.string "¡Te han enviado un Regalo Misterioso!\p¡Oh!\n¡Parece que proviene del Anime!\p¡Ahora tienes los Pokémon que Ash\nKetchum usó en la Región {STR_VAR_1}!$"


