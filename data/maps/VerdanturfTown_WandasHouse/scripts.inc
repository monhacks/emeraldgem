VerdanturfTown_WandasHouse_MapScripts::
	.byte 0


VerdanturfTown_WandasHouse_EventScript_Wally::
	lock
	faceplayer
	namebox Wally
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_Wally_2
	goto_if_set FLAG_BADGE03_GET, VerdanturfTown_WandasHouse_EventScript_Wally_5
	msgbox VerdanturfTown_WandasHouse_EventScript_Wally_Text_3
	hidenamebox
	closemessage
	setflag FLAG_WALLY_SPEECH
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wally_2:
	goto_if_set FLAG_BADGE03_GET, VerdanturfTown_WandasHouse_EventScript_Wally_8
	msgbox VerdanturfTown_WandasHouse_EventScript_Wally_Text_1
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wally_5:
	msgbox VerdanturfTown_WandasHouse_EventScript_Wally_Text_2
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wally_8:
	msgbox VerdanturfTown_WandasHouse_EventScript_Wally_Text_0
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysUncle::
	lock
	faceplayer
	namebox TioWally
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncle_2
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncle_5
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_2
	closemessage
	hidenamebox
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncle_2:
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_0
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncle_5:
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_1
	release
	end


VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
	namebox Riley
	msgbox VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_0
	closemessage
	hidenamebox
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 0
	playse SE_CONTEST_HEART
	applymovement VAR_LAST_TALKED, Common_Movement_Heart
	waitmovement 0
	namebox Riley
	msgbox VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_1
	closemessage
	hidenamebox
	playse SE_CONTEST_HEART
	applymovement 6, Common_Movement_Heart
	waitmovement 0
	namebox Camilo
	msgbox VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_2
	closemessage
	hidenamebox
	release
	end


VerdanturfTown_WandasHouse_EventScript_Wanda::
	lock
	faceplayer
	namebox Wanda
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_Wanda_2
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_Wanda_5
	hidenamebox
	closemessage
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wanda_2:
	msgbox VerdanturfTown_WandasHouse_EventScript_Wanda_Text_0
	hidenamebox
	closemessage
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wanda_5:
	msgbox VerdanturfTown_WandasHouse_EventScript_Wanda_Text_1
	hidenamebox
	closemessage
	playse SE_CONTEST_HEART
	applymovement VAR_LAST_TALKED, Common_Movement_Heart
	waitmovement 0
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysAunt::
	lock
	faceplayer
	namebox TiaWally
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAunt_2
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAunt_5
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAunt_8
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_3
VerdanturfTown_WandasHouse_EventScript_WallysAunt_7:
	hidenamebox
	closemessage
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_2:
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_0
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_5:
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_1
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_8:
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_2
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_7


VerdanturfTown_WandasHouse_EventScript_Camilo::
	lock
	faceplayer
	namebox Camilo
	checkitem ITEM_TM45
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_WandasHouse_EventScript_Camilo_2
	msgbox VerdanturfTown_WandasHouse_EventScript_Camilo_Text_1
	hidenamebox
	giveitem ITEM_TM45
	giveitem ITEM_TM48
	namebox Camilo
	msgbox VerdanturfTown_WandasHouse_EventScript_Camilo_Text_2
	msgbox VerdanturfTown_WandasHouse_EventScript_Camilo_Text_3
	playse SE_CONTEST_HEART
	applymovement VAR_LAST_TALKED, Common_Movement_Heart
	waitmovement 0
	hidenamebox
	closemessage
	release
	end

VerdanturfTown_WandasHouse_EventScript_Camilo_2:
	msgbox VerdanturfTown_WandasHouse_EventScript_Camilo_Text_0
	hidenamebox
	closemessage
	playse SE_CONTEST_HEART
	applymovement VAR_LAST_TALKED, Common_Movement_Heart
	waitmovement 0
	release
	end


VerdanturfTown_WandasHouse_EventScript_Wally_Text_0:
	.string "$"

VerdanturfTown_WandasHouse_EventScript_Wally_Text_1:
	.string "Voy a alcanzarte, {PLAYER}. La\n"
	.string "próxima vez que nos enfrentemos, seré\l"
	.string "mucho más fuerte.$"

VerdanturfTown_WandasHouse_EventScript_Wally_Text_2:
	.string "Estoy planeando hacer algo. Algo que me\n"
	.string "hará ser mucho más fuerte, {PLAYER},\l"
	.string "pero no voy a decirte qué es.\p"
	.string "Parece que eres mucho más fuerte, ¿no?\p"
	.string "Pues verás que cuando logre lo que\n"
	.string "estoy pensando, te lograré sobrepasar.$"

VerdanturfTown_WandasHouse_EventScript_Wally_Text_3:
	.string "{PLAYER}…\p"
	.string "Me… Me habías vencido, pero…\l"
	.string "No creo estar tan afectado como lo\l"
	.string "estaba antes.\p"
	.string "De hecho, creo que esa derrota es lo que\n"
	.string "necesitaba.\p"
	.string "Ahora podré mejorar realmente, y podré\n"
	.string "esforzarme diez veces más que antes.\p"
	.string "Voy a alcanzarte, {PLAYER}. La\n"
	.string "próxima vez que nos enfrentemos, seré\l"
	.string "mucho más fuerte.$"

VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_0:
	.string "¿Así que Wally ha logrado, sólo por su\n"
	.string "propia voluntad y determinación, llegar\l"
	.string "a la Liga Pokémon?\p"
	.string "Y yo que le decía que no estaba listo\n"
	.string "para afrontar el {COLOR BLUE}Desafío de los\l"
	.string "Gimnasios{COLOR DARK_GRAY}, pero lo completó todo.\p"
	.string "Estoy sorprendido, tomando en cuenta\n"
	.string "que es hijo de mi hermanito menor.\p"
	.string "¡Estoy muy orgulloso de él!$"

VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_1:
	.string "No puedo creer que se haya ido…\p"
	.string "¡Wally, ¿Dónde estás, mi chiquitín?!\p"
	.string "Argh, ¿¡CÓMO PUDE PERDERLO DE VISTA!?$"

VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_2:
	.string "¿Wally?\n"
	.string "Ah, está en el cuarto de al lado.\p"
	.string "Su condición ha mejorado bastante,\n"
	.string "gracias a lo limpio que es el aire por\l"
	.string "aquí.\p"
	.string "Pero quizá, y sólo quizá, sea la\n"
	.string "influencia de sus Pokémon la que le\l"
	.string "está dando esperanza y vitalidad…$"

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_0:
	.string "¡ROAR!\n"
	.string "¡Soy yo, Riley, el tipo que ayudaste en\l"
	.string "el túnel!\p"
	.string "Estuve hablando con mi novia, y resulta\n"
	.string "que a ella también le gusta el hombre\l"
	.string "que encontré en el túnel.\p"
	.string "¡Ahora somos novios los tres!\p"
	.string "¿¡No es eso genial!?\p"
	.string "¡ROOOAARRR!$"

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_1:
	.string "¡Mi lindo, lindo novio!\n"
	.string "¡Qué lindo es mi novio!$"

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_2:
	.string "¡A-ay, basta, Riley, que me sonrojo!$"

VerdanturfTown_WandasHouse_EventScript_Wanda_Text_0:
	.string "No te preocupes, Wally está bien.\p"
	.string "Me dijo que se iba a ir a Dewford para\n"
	.string "empezar su {COLOR BLUE}Desafío de los Gimnasios{COLOR DARK_GRAY}.$"

VerdanturfTown_WandasHouse_EventScript_Wanda_Text_1:
	.string "¡Ah! Tú debes de ser {PLAYER}.\p"
	.string "Wally no para de hablar de tí y lo mucho\n"
	.string "que te admira, soy Wanda, su prima.\p"
	.string "Y te debo un agradecimiento, porque\n"
	.string "gracias a tí, no sólo puedo ahora ver a\l"
	.string "mi novio cuando quiera, ¡Si no que\l"
	.string "conocí a otro hombre hermoso con el\l"
	.string "que salir!\p"
	.string "Amo mucho a mis dos novios, ¡Y es que\n"
	.string "cómo no amarlos, sólo míralos,\l"
	.string "musculosos, tiernos y graciosos!\p"
	.string "¡Son los mejores!$"

VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_0:
	.string "¿¡QUE WALLY ESTABA EN EVERGRANDE!?\p"
	.string "¡Sus padres estarían sorprendidísimos,\n"
	.string "nunca se habrían imaginado tal hazaña!$"

VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_1:
	.string "Ay, Arceus mío…\p"
	.string "Me voy a comprar al Centro Pokémon, y\n"
	.string "cuando vuelvo, el nuevo novio de mi hija\l"
	.string "me dice que Wally no está y todos están\l"
	.string "fuera buscándolo.\p"
	.string "Si algo le llegase a pasar… ¡No podría\n"
	.string "ver a sus padres a la cara nunca más!$"

VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_2:
	.string "¡Es increíble!\p"
	.string "El novio de mi hija cavó la mayor parte\n"
	.string "del Túnel Rusturf por su cuenta, ¡Sin\l"
	.string "máquinas ni nada!\p"
	.string "No sólo eso, si no que mi hija es tan\n"
	.string "encantadora que hasta se consiguió\l"
	.string "otro novio.\p"
	.string "¿Hay algún límite para lo que mi hija\n"
	.string "pueda lograr?$"

VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_3:
	.string "El novio de mi hija es un constructor\n"
	.string "reconocido por su amabilidad y gran\l"
	.string "habilidad natural de liderazgo. ¡Y mi\l"
	.string "hija lo encantó con su ternura!\p"
	.string "¿Hay algún límite para lo que mi hija\n"
	.string "pueda lograr?$"

VerdanturfTown_WandasHouse_EventScript_Camilo_Text_0:
	.string "Muchas gracias, {PLAYER}, por\n"
	.string "ayudarme a dejar el Team Aqua.\p"
	.string "Desde que lo hice, ¡Mi vida ha mejorado!\p"
	.string "Ahora tengo un hermosísimo novio y una\n"
	.string "hermosa novia, ¡Y los amo tanto!$"

VerdanturfTown_WandasHouse_EventScript_Camilo_Text_1:
	.string "H-hola, {PLAYER}, ¿No?\p"
	.string "Realmente lamento todo lo que hice…\p"
	.string "Dejé el Team Aqua hace un rato, y el\n"
	.string "Ex-Jefecito me dio una remuneración\l"
	.string "por mis\p"
	.string "servicios, aunque tambien me dijo que el\n"
	.string "Team Aqua no era un grupo de ladrones,\l"
	.string "si no que esa era una imagen pública.\p"
	.string "Pero desde que dejé el Team Aqua, ¡Mi\n"
	.string "vida ha mejorado!\p"
	.string "Ahora tengo un hermosísimo novio y una\n"
	.string "hermosa novia, ¡Y los amo tanto!\p"
	.string "De todo corazón, {PLAYER}, gracias\n"
	.string "por todo.\p"
	.string "Deberías tener esto como\n"
	.string "agradecimiento.$"

VerdanturfTown_WandasHouse_EventScript_Camilo_Text_2:
	.string "Es la MT 45 Atracción.\n"
	.string "Debes saber que ahora, se ha\l"
	.string "descubierto que Pokémon de cualquier\l"
	.string "género pueden enamorarse con este\l"
	.string "moviminto,\l"
	.string "incluso si es un Pokémon macho con otro\l"
	.string "Pokémon macho, ¡Funcionará de la misma\l"
	.string "forma!\p"
	.string "¡Es como mi novio, mi novia y yo, a los\n"
	.string "tres nos gustan tanto chicas como\l"
	.string "chicos!$"

VerdanturfTown_WandasHouse_EventScript_Camilo_Text_3:
	.string "También, te di la MT 48 Voz Cautivadora.\n"
	.string "Golpea a ambos oponentes y hace más\l"
	.string "daño si los rivales están enamorados\l"
	.string "del usuario.\p"
	.string "¡Las voces cautivadoras de mi novio y mi\n"
	.string "novia siempre hacen que mi corazoncito\l"
	.string "bisexual salte de amor!$"
