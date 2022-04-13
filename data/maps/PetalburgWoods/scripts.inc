.set LOCALID_GRUNT, 3
.set LOCALID_DEVON_EMPLOYEE, 4

PetalburgWoods_MapScripts::
	.byte 0

PetalburgWoods_EventScript_DevonResearcherLeft::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	namebox Archie
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	hidenamebox
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
	waitmovement 0
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherCenter::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerCenter
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherCenter
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerCenter
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
	waitmovement 0
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherRight::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherIntro::
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
	waitmovement 0
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_DevonResearcherPostBattle::
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
	waitmovement 0
	removeobject LOCALID_GRUNT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_BagFull::
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_DevonResearcherFinish::
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
	waitmovement 0
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_RemoveDevonResearcher::
	removeobject LOCALID_DEVON_EMPLOYEE
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_Movement_DevonResearcherLookAround:
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	face_right
	delay_16
	delay_8
	face_up
	delay_16
	step_end

PetalburgWoods_Movement_DevonResearcherExitLeft:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
	delay_16
	face_player
	walk_up
	walk_right
	walk_right
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
	delay_16
	face_player
	walk_down
	walk_right
	walk_right
	step_end
PetalburgWoods_Movement_DevonResearcherApproachPlayerCenter:
	delay_16
	face_player
	walk_right
	walk_right
	step_end

PetalburgWoods_Movement_DevonResearcherExitRight:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

PetalburgWoods_Movement_WatchResearcherLeave:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_in_place_faster_left
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerCenter:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_in_place_faster_left
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_in_place_faster_left
	step_end

PetalburgWoods_Movement_DevonResearcherStartExit:
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

PetalburgWoods_Movement_AquaApproachResearcherLeft:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	step_end

PetalburgWoods_Movement_AquaBackOff:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

PetalburgWoods_Movement_AquaRunAway:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachResearcherRight:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end

PetalburgWoods_Movement_AquaApproachResearcherCenter:
	walk_fast_right
	walk_fast_right
	step_end

PetalburgWoods_Movement_AquaEntrance:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

PetalburgWoods_Movement_AquaApproachPlayer:
	walk_right
	step_end

PetalburgWoods_EventScript_Boy1::
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Boy2::
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Girl::
	lockall
	faceplayer
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	pokemart PetalburgWoods_SpecialMart
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
	releaseall
	end

.align 2
PetalburgWoods_SpecialMart:
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_CHARCOAL
    .2byte ITEM_BLACK_BELT
    .2byte ITEM_HARD_STONE
    .2byte ITEM_DRAGON_FANG
    .2byte ITEM_SILK_SCARF
    .2byte ITEM_MAGNET
    .2byte ITEM_NEVER_MELT_ICE
    .2byte ITEM_POISON_BARB
    .2byte ITEM_SHARP_BEAK
    .2byte ITEM_SOFT_SAND
    .2byte ITEM_TWISTED_SPOON
    .2byte ITEM_SILVER_POWDER
    .2byte ITEM_SPELL_TAG
    .2byte ITEM_BLACK_GLASSES
    .2byte ITEM_METAL_COAT
	.2byte ITEM_NONE
	release
	end

PetalburgWoods_EventScript_ExplainMiracleSeed::
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_Sign1::
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Sign2::
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James::
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
	setvar VAR_0x8004, TRAINER_JAMES_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_TryRegisterJames::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
	release
	end

PetalburgWoods_EventScript_RegisterJames::
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_TryRegisterJames2::
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_RegisterJames2::
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_JamesRematch::
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_Text_NotAOneToBeFound:
	.string "Mmhhh…\n"
	.string "No hay ni uno…$"

PetalburgWoods_Text_HaveYouSeenShroomish:
	.string "¡Hola! ¿Has visto al Pokémon\n"
	.string "“Shroomish” por aquí?\p"
	.string "¡Amo a ese Pokémon!\n"
	.string "¡Oh, y escuché que “Morellul” suele\l"
	.string "aparecer de noche!$"

PetalburgWoods_Text_IWasGoingToAmbushYou:
	.string "¿Porqué estás escapando de mí?\n"
	.string "¡Ya dame los {COLOR BLUE}Planos{COLOR DARK_GRAY} y déjame terminar\l"
	.string "esta misión!$"

PetalburgWoods_Text_HandOverThosePapers:
	.string "¿Así que es eso, eh? ¿La gran\n"
	.string "corporación Devon se arrepintió?\p"
	.string "¡No me importa, ya dame esos Planos!$"

PetalburgWoods_Text_YouHaveToHelpMe:
	.string "¡AAAAAAHHHHH!\p"
	.string "¡T-T-TU ERES ENTRENADOR{A}, ¿NO?!\n"
	.string "PUES SIRVE DE ALGO Y AYÚDAME.$"

PetalburgWoods_Text_NoOneCrossesTeamAqua:
	.string "Ojojojojo, ¿Así que vas a protegerlo,\n"
	.string "no? ¡Pues déjame decirte que eso no\l"
	.string "funcionará con el poderoso {COLOR LIGHT_BLUE}{SHADOW BLUE}Equipo\l"
	.string "Aqua{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

PetalburgWoods_Text_YoureKiddingMe:
	.string "¡I-imposible!\n"
	.string "¡Eres fuerte!$"

PetalburgWoods_Text_YouveGotSomeNerve:
	.string "¡ARGH!\n"
	.string "¡Eres un{A} estúpid{OA} por meterte con el\l"
	.string "grandioso Equipo Aqua!\l"
	.string "No sólo soy yo en esta organización!\l"
	.string "¡Somos cientos, CIENTOS!\p"
	.string "Pero no importa, después de todo, no es\n"
	.string "lo único que el Equipo Aqua encargó en\l"
	.string "Rustboro………$"

PetalburgWoods_Text_ThatWasAwfullyClose:
	.string "Fiu…\n"
	.string "Eso estuvo demasiado cerca…\l"
	.string "¡Pero bueno, gracias de todas formas!\p"
	.string "Aunque… Me preocupa lo que dijo\n"
	.string "respecto a que tienen algo en\l"
	.string "Rustboro…\p"
	.string "¡Ya me encargaré de eso luego, ahora\n"
	.string "ten esta Superball!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
	.string "…………………………………$"

PetalburgWoods_Text_ICantBeWastingTime:
	.string "¡AAAAHHHHHHH CRISIIIISSSS!\n"
	.string "¡DEBO CUIDARLAS O SERÁN ROBADAS!$"

PetalburgWoods_Text_YoureLoadedWithItems:
	.string "De alguna forma no tienes espacio.$"

PetalburgWoods_Text_GoBugPokemonTeam:
	.string "¡AL ESCONDERME EN EL ARBOL,\n"
	.string "PUDE ATRAPAR MUCHOS BICHOS!\p"
	.string "¡GO, GO, GO!\n"
	.string "¡MI MONOTYPE BICHO!$"

PetalburgWoods_Text_ICouldntWin:
	.string "Incluso con tantos,\n"
	.string "no pude ganar…$"

PetalburgWoods_Text_ImOutOfPokeBalls:
	.string "Pokéballs. Necesito.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
	.string "Si llevas tus Pokémon al colegio,\n"
	.string "¡Te harás muy popular!$"

PetalburgWoods_Text_CantBePopularIfILose:
	.string "Pero si pierdo me odiarán.$"

PetalburgWoods_Text_PeopleRespectYou:
	.string "Si tienes un tipo Bicho grande,\n"
	.string "la gente se interesará en ti.\p"
	.string "Al menos eso dijo mi papá.$"

PetalburgWoods_Text_IWantRematch1:
	.string "¡QUIERO LA REVANCHA!\p"
	.string "¡TE DIRÉ CUANDO HAYAN CRECIDO!$"

PetalburgWoods_Text_IWantRematch2:
	.string "¡QUIERO LA REVANCHA!\p"
	.string "¡TE DIRÉ CUANDO HAYAN CRECIDO!$"

PetalburgWoods_Text_MyPokemonHaveGrown:
	.string "Mis Bichos ahora son grandes.\n"
	.string "Todo-digo todas me amarán.$"

PetalburgWoods_Text_CantBePopularIfLose:
	.string "Mis bichos no fueron lo\n"
	.string "suficientemente fuertes para\l"
	.string "impresionarte.$"

PetalburgWoods_Text_IveBeenTrainingHard:
	.string "Los Pokémon fuertes impresionan\n"
	.string "a los-las chicas, ¿no?\l"
	.string "Entrené mucho para eso.$"

PetalburgWoods_Text_StayOutOfTallGrass:
	.string "¡Che, vos!\n"
	.string "¿Están bien tus Pokes?\p"
	.string "Si no es asi, esquivá el pasto.$"

PetalburgWoods_Text_HiddenItemsExplanation:
	.string "Aveces, hay Pokémon raros\n"
	.string "que aparecen al {COLOR RED}encadenar{COLOR DARK_GRAY}\l"
	.string "Pokemon salvajes.\p"
	.string "Por ejemplo, estoy buscando un Phantum.$"

PetalburgWoods_Text_TryUsingThisItem:
	.string "¡Ah, genial!\n"
	.string "¡Es la {COLOR GREEN}Medalla de Rustboro{COLOR DARK_GRAY}!\p"
	.string "¡Esta es una tienda especial!$"

PetalburgWoods_Text_MiracleSeedExplanation:
	.string "¡Vuelva pronto!$"

PetalburgWoods_Text_TrainerTipsExperience:
	.string "¡PISTAS PARA ENTRENADORES!\p"
	.string "¡No subestimes el poder de los Pokémon\n"
	.string "de Tipo Bicho! ¡Algunos pueden ponerte\l"
	.string "las cosas muy difíciles con sus\l"
	.string "combinaciones de tipo!$"

PetalburgWoods_Text_TrainerTipsPP:
	.string "¡PISTAS PARA ENTRENADORES!\p"
	.string "Si estás buscando la {COLOR RED}versión\n"
	.string "Shiny{COLOR DARK_GRAY} de un Pokémon, puedes vencerlo o\l"
	.string "capturarlo una y otra, y otra vez hasta\l"
	.string "formar una {COLOR RED}cadena{COLOR DARK_GRAY}, que se mantendrá\l"
	.string "hasta que escapes del Pokémon\l"
	.string "encadenado, o hasta que\l"
	.string "derrotes/captures al Pokémon\l"
	.string "incorrecto. ¡Y no te preocupes!\l"
	.string "Mientras más avances en la cdena, más\l"
	.string "fácil será encontrarlo.$"

