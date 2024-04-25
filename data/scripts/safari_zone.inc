SafariZone_EventScript_OutOfBallsMidBattle::
	goto_if_eq VAR_SAFARI_ZONE_STATE, 4, MiniSafari_EventScript_OutOfBallsMidBattle
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	end

MiniSafari_EventScript_OutOfBallsMidBattle::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	setwarp MAP_MINI_SAFARI_MIDDLE, 2, 5
	end

SafariZone_EventScript_Exit::
	goto_if_eq VAR_SAFARI_ZONE_STATE, 4, MiniSafari_EventScript_Exit
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	waitstate
	end

MiniSafari_EventScript_Exit::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warp MAP_MINI_SAFARI_MIDDLE, 2, 5
	waitstate
	end

SafariZone_EventScript_RetirePrompt::
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire::
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

EventScript_PokeBlockFeeder::
	lockall
	special GetPokeblockFeederInFront
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPresent
	msgbox SafariZone_Text_PlacePokeblockOnFeeder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_ChoosePokeblock
	releaseall
	end

SafariZone_EventScript_ChoosePokeblock::
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseOnFeeder
	waitstate
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPlaced
	end

SafariZone_EventScript_PokeblockPlaced::
	message SafariZone_Text_PokeblockWasPlaced
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_EventScript_PokeblockPresent::
	message SafariZone_Text_PokeblockStillHere
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_Text_WouldYouLikeToExit:
	.string "Would you like to exit the SAFARI\n"
	.string "ZONE right now?$"

SafariZone_Text_TimesUp:
	.string "Ding-dong! Time's up!\n"
	.string "Your SAFARI Game is over.$"

SafariZone_Text_OutOfBalls:
	.string "You've run out of SAFARI BALLS.\n"
	.string "Your SAFARI Game is over.$"

SafariZone_Text_PlacePokeblockOnFeeder:
	.string "Would you like to place a {POKEBLOCK}\n"
	.string "on the {POKEBLOCK} FEEDER?$"

SafariZone_Text_PokeblockStillHere:
	.string "The {STR_VAR_1} you left\n"
	.string "before is still here.$"

SafariZone_Text_PokeblockWasPlaced:
	.string "The {STR_VAR_1} was placed\n"
	.string "on the {POKEBLOCK} FEEDER.$"

Route121_SafariZoneEntrance_Text_WelcomeToSafariZone:
	.string "Welcome to the SAFARI ZONE!\p"
	.string "Here, you may witness many kinds of\n"
	.string "POKéMON rarely seen in HOENN.\p"
	.string "And, you'll see them in their wild,\n"
	.string "untamed state in natural habitats.\p"
	.string "What's more, we've thrown open the\n"
	.string "gates to POKéMON TRAINERS.\p"
	.string "You're encouraged to catch POKéMON\n"
	.string "for keeps!\p"
	.string "Come in and enjoy the SAFARI ZONE!$"

Route121_SafariZoneEntrance_Text_WelcomeFirstTime:
	.string "¡Bienvenid{OA} a la Zona Safari!\p"
	.string "¿Necesitas que te explique el juego?$"

Route121_SafariZoneEntrance_Text_ComeInAndEnjoy:
	.string "¡Entra y disfuta el Juego del Safari!$"

Route121_SafariZoneEntrance_Text_FirstTimeInfo:
	.string "En la Zona Safari, tendrás sólo 50\n"
	.string "Safari Balls y 1500 pasos para atrapar\l"
	.string "tantos Pokémon como quieras. ¡Ojo! ¡No\l"
	.string "se puede combatir aquí!\p"
	.string "Para mejorar tus chances de atrapar\n"
	.string "Pokémon, acércate a ellos y dales\l"
	.string "PokéCubos. Eso hará que ganen algo de\l"
	.string "cariño, y quieran quedarse contigo.$"

Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay:
	.string "¡Todo lo que puedas\natrapar por sólo ¥500!\l"
	.string "¿Te gustaría jugar al Juego del Safari?$"

Route121_SafariZoneEntrance_Text_PlayAnotherTime:
	.string "Okay.\n"
	.string "¡Hasta la próxima!$"

Route121_SafariZoneEntrance_Text_NotEnoughMoney:
	.string "No tienes suficiente dinero.\n"
	.string "Disculpa.$"

Route121_SafariZoneEntrance_Text_ThatWillBe500Please:
	.string "Serían ¥500, por favor.$"

Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls:
	.string "Aquí tienes tus Safari Balls.$"

Route121_SafariZoneEntrance_Text_Received30SafariBalls:
	.string "¡{PLAYER} recibió 50 Safari Balls!$"

Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself:
	.string "Te avisaremos cuando tengas que\n"
	.string "volver, así que no te preocupes.\p"
	.string "¡Disfruta del juego hasta entonces!$"

Route121_SafariZoneEntrance_Text_PCIsFull:
	.string "¡Disculpa!\n"
	.string "Tu PC está lleno, no puedes entrar.$"

Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase:
	.string "¡Disculpa!\p"
	.string "Parece que no tienes un {COLOR RED}Tubo {POKEBLOCK}s{COLOR DARK_GRAY},\n"
	.string "pero en serio se recomienda tener uno\l"
	.string "para poder jugar. El {COLOR LIGHT_BLUE}Profesor Birch{COLOR DARK_GRAY} te\l"
	.string "estaba esperando en la Ruta 110 para\l"
	.string "darte uno, ¡Ve a buscarlo!$"

SafariZone_South_Text_StillHaveTimeExit:
	.string "Todavía tienes tiempo. ¿Aún así\n"
	.string "te quieres ir ahora?$"

SafariZone_South_Text_EnjoyTheRestOfYourAdventure:
	.string "¡Disfruta el resto de tu aventura!$"

SafariZone_South_Text_ExitEarlyThankYouForPlaying:
	.string "Okay.\p"
	.string "Tendré que quedarme con el resto de\n"
	.string "tus Safari Balls, si no te molesta.\p"
	.string "Gracias por jugar.\n"
	.string "¡Esperamos verte de nuevo!$"

SafariZone_South_Text_GoodLuck:
	.string "¡Buena suerte!\p"
	.string "Si necesitas algo, ¡No dudes\n"
	.string "en preguntarme, por favor!$"

SafariZone_South_Text_Boy:
	.string "Did you know?\p"
	.string "If you put a {POKEBLOCK} in that square box,\n"
	.string "POKéMON gather around.$"

SafariZone_South_Text_Man:
	.string "I want to keep going deeper, but I\n"
	.string "forgot to bring a BIKE.\p"
	.string "Something tells me that rare POKéMON\n"
	.string "live in the outlying areas.$"

SafariZone_Southwest_Text_Woman:
	.string "Sometimes, when I toss a {POKEBLOCK} at \n"
	.string "POKéMON, it gets ignored.\p"
	.string "Do POKéMON have likes and dislikes\n"
	.string "about what they eat?$"

SafariZone_Northwest_Text_Man:
	.string "Gasp… Gasp…\n"
	.string "I…made it out here…but…\p"
	.string "I'm exhausted… I don't have the\n"
	.string "energy to catch POKéMON…$"

SafariZone_North_Text_Fisherman:
	.string "I'm on a mission to find WATER POKéMON\n"
	.string "you don't see in HOENN.\p"
	.string "Do you have any idea where the lake is?$"

SafariZone_North_Text_Man:
	.string "I'm going to catch a lot of rare POKéMON\n"
	.string "here and trade them with my friends!$"

SafariZone_South_Text_Youngster:
	.string "I put a {POKEBLOCK} on the {POKEBLOCK} FEEDER.\n"
	.string "But it seems to have disappeared.\p"
	.string "I guess POKéMON must have eaten it\n"
	.string "without me noticing.$"

Route121_SafariZoneEntrance_Text_TrainerTip:
	.string "SAFARI ZONE TRAINER TIP!\p"
	.string "Throw {POKEBLOCK}S at wild POKéMON to make\n"
	.string "them less likely to flee.$"

SafariZone_Southwest_Text_RestHouseSign:
	.string "“Relieve your tired feet.”\n"
	.string "REST HOUSE$"

SafariZone_RestHouse_Text_Youngster:
	.string "I don't have any {POKEBLOCK}S, but I caught\n"
	.string "a good number of POKéMON.\p"
	.string "You can improve your chances of making\n"
	.string "a catch by getting closer to them\l"
	.string "before throwing a SAFARI BALL.$"

SafariZone_RestHouse_Text_PsychicM:
	.string "If you use {POKEBLOCK}S, wild POKéMON won't\n"
	.string "be so quick to run away.\p"
	.string "It's not much use to give {POKEBLOCK}S to\n"
	.string "POKéMON that don't flee easily.$"

SafariZone_RestHouse_Text_FatMan:
	.string "If you put a {POKEBLOCK} on the FEEDER,\n"
	.string "POKéMON are attracted to it.\p"
	.string "I think POKéMON with the same sort of\n"
	.string "nature are drawn by a certain {POKEBLOCK}.$"

SafariZone_South_Text_AreaOffLimits1:
	.string "This area is still under construction.\n"
	.string "It's off-limits, sorry!$"

SafariZone_Southeast_Text_ExpansionIsFinished:
	.string "The SAFARI ZONE's expansion project\n"
	.string "is finished now.\p"
	.string "We hope you will enjoy the new area.$"

SafariZone_South_Text_AreaOffLimits2:
	.string "This area is still under construction.\n"
	.string "It's off-limits, sorry!$"

SafariZone_Southeast_Text_LittleGirl:
	.string "Wow! Whee! I haven't seen any of\n"
	.string "these POKéMON before!$"

SafariZone_Southeast_Text_FatMan:
	.string "The POKéMON in this area are all\n"
	.string "new to me.\p"
	.string "And I'm allowed to catch these rare\n"
	.string "POKéMON! Too cool!$"

SafariZone_Southeast_Text_RichBoy:
	.string "The POKéMON around here seem to be\n"
	.string "from somewhere other than HOENN.$"

SafariZone_Northeast_Text_Boy:
	.string "I only have a couple SAFARI BALLS left.\p"
	.string "I'm having a hard time trying to\n"
	.string "decide what I should catch.$"

SafariZone_Northeast_Text_Woman:
	.string "I heard that you can see PIKACHU here.\n"
	.string "Where might one be?$"

SafariZone_Northeast_Text_Girl:
	.string "Oh, boo!\n"
	.string "I can't seem to catch anything!\p"
	.string "I'll end up wasting the admission\n"
	.string "price if I don't catch something!$"
