LittlerootTown_MLMHouse_MapScripts::
	.byte 0


MLMHouse_EventScript_FatMan::
	questmenu QUEST_MENU_CHECK_UNLOCKED SIDE_QUEST_3
	lockall
	faceplayer
	namebox Alex
	compare VAR_RESULT, TRUE
	goto_if_eq MLMHouse_EventScript_FatMan_2
	msgbox MLMHouse_EventScript_FatMan_Text_5
MLMHouse_EventScript_FatMan_1:
	hidenamebox
	releaseall
	return

MLMHouse_EventScript_FatMan_2:
	compare VAR_MISTERIO, 3
	goto_if_ge MLMHouse_EventScript_FatMan_5
	goto_if_unset FLAG_ALEX, MLMHouse_EventScript_FatMan_11
	msgbox MLMHouse_EventScript_FatMan_Text_3
	goto MLMHouse_EventScript_FatMan_1

MLMHouse_EventScript_FatMan_5:
	questmenu QUEST_MENU_CHECK_COMPLETE SIDE_QUEST_3
	compare VAR_RESULT, TRUE
	goto_if_eq MLMHouse_EventScript_FatMan_9
MLMHouse_EventScript_FatMan_8:
	goto_if_unset FLAG_ALEX, MLMHouse_EventScript_FatMan_14
	msgbox MLMHouse_EventScript_FatMan_Text_3
	goto MLMHouse_EventScript_FatMan_1

MLMHouse_EventScript_FatMan_9:
	msgbox MLMHouse_EventScript_FatMan_Text_0
	goto MLMHouse_EventScript_FatMan_8

MLMHouse_EventScript_FatMan_11:
	msgbox MLMHouse_EventScript_FatMan_Text_4
	addvar VAR_MISTERIO, 1
	setflag FLAG_ALEX
	goto MLMHouse_EventScript_FatMan_1

MLMHouse_EventScript_FatMan_14:
	msgbox MLMHouse_EventScript_FatMan_Text_1
	msgbox MLMHouse_EventScript_FatMan_Text_2
	addvar VAR_MISTERIO, 1
	setflag FLAG_ALEX
	goto MLMHouse_EventScript_FatMan_1


MLMHouse_EventScript_Daughter::
	lockall
	faceplayer
	namebox Esmeralda
	msgbox MLMHouse_EventScript_Daughter_Text_0
	hidenamebox
	releaseall
	return


MLMHouse_EventScript_Chimecho::
	lockall
	faceplayer
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
	msgbox MLMHouse_EventScript_Chimecho_Text_0
	releaseall
	return


MLMHouse_EventScript_FatMan_Text_0:
	.string "¡Hola, {PLAYER}!\p"
	.string "Entonces… ¿Era un {COLOR RED}Zoroark{COLOR DARK_GRAY}?\p"
	.string "Nunca había escuchado hablar de ese\n"
	.string "Pokémon…$"

MLMHouse_EventScript_FatMan_Text_1:
	.string "¡Hola, {PLAYER}! ¿Cómo está todo el\n"
	.string "tema de la…?\p"
	.string "… … … … … … … …\p"
	.string "Ya veo… Encontraste un libro que habla\n"
	.string "de aquel día…\p"
	.string "Eres un{A} niñ{OA} inteligente, ¿Lo sabías,\n"
	.string "{PLAYER}?\l"
	.string "Estoy orgulloso de la persona en la que\l"
	.string "te has convertido.\p"
	.string "Pues… Mucho no puedo decirte acerca de\n"
	.string "eso, pero puedo decirte que lo que\l"
	.string "atacó la Villa era un {COLOR RED}Pokémon sin forma{COLOR DARK_GRAY},\l"
	.string "que logramos derrotar con la ayuda de\l"
	.string "nuestros Pokémon.\p"
	.string "… … … … … … … … … … … …\p"
	.string "Mucho yo… No sé sobre Pokémon de otras\n"
	.string "regiones, pero sí que se… Que si le\l"
	.string "preguntas a otra gente sobre esto,\l"
	.string "podrán darte más información.$"

MLMHouse_EventScript_FatMan_Text_2:
	.string "Creo… Que es hora que hables con el\n"
	.string "Profesor Birch sobre esto…\p"
	.string "Porque puedo ver que tú serás capaz de\n"
	.string "resolver este miterio…$"

MLMHouse_EventScript_FatMan_Text_3:
	.string "… … … … … … … … … … … …\p"
	.string "Mucho yo… No sé sobre Pokémon de otras\n"
	.string "regiones, pero sí que se… Que si le\l"
	.string "preguntas a otra gente sobre esto,\l"
	.string "podrán darte más información.$"

MLMHouse_EventScript_FatMan_Text_4:
	.string "¡Hola, {PLAYER}! ¿Cómo está todo el\n"
	.string "tema de la…?\p"
	.string "… … … … … … … …\p"
	.string "Ya veo… Encontraste un libro que habla\n"
	.string "de aquel día…\p"
	.string "Pues… Mucho no puedo decirte acerca de\n"
	.string "eso, pero puedo decirte que lo que\l"
	.string "atacó la Villa era un {COLOR RED}Pokémon sin forma{COLOR DARK_GRAY},\l"
	.string "que logramos derrotar con la ayuda de\l"
	.string "nuestros Pokémon.\p"
	.string "… … … … … … … … … … … …\p"
	.string "Mucho yo… No sé sobre Pokémon de otras\n"
	.string "regiones, pero sí que se… Que si le\l"
	.string "preguntas a otra gente sobre esto,\l"
	.string "podrán darte más información.$"

MLMHouse_EventScript_FatMan_Text_5:
	.string "¡Hola, {PLAYER}! ¿Cómo está todo el\n"
	.string "tema de la mudanza?\p"
	.string "Es bueno ver a tu Madre de vuelta en\n"
	.string "Hoenn, tus padres, mi marido y yo hemos\l"
	.string "tenido muchos felices momentos\l"
	.string "juntos, ¡Éramos los mejores amigos!\p"
	.string "De hecho, solíamos tener algo que\n"
	.string "representaba nuestra amistad, y me\l"
	.string "pregunto si aún lo tiene ella…$"

MLMHouse_EventScript_Daughter_Text_0:
	.string "¡Hola! ¡Encantada!\p"
	.string "¿Ya has conocido a los Chimecho de mis\n"
	.string "papás? ¡Los han tenido desde que eran\l"
	.string "Chingling!\p"
	.string "Me pregunto… ¿Porqué ambos tienen\n"
	.string "uno?\l"
	.string "Quizás… ¡Fue una declaración de amor!\l"
	.string "¿O quizás de lealtad?\p"
	.string "¡AH, ME INTRIGA LA RESPUESTA!$"

MLMHouse_EventScript_Chimecho_Text_0:
	.string "¡Chimecho!$"
