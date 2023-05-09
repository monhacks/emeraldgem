@ Sailing to and from Dewford uses local IDs from different maps
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
@ All of these local IDs are labeled here
.equ LOCALID_BRINEY_DEWFORD, 2
.equ LOCALID_BOAT_DEWFORD, 4

.equ LOCALID_BOAT_R109, 1
.equ LOCALID_BRINEY_R109, 2

.equ LOCALID_BOAT_R104, 7
.equ LOCALID_BRINEY_R104, 8
.equ LOCALID_GRUNT, 6
.equ LOCALID_WALLY, 7

DewfordTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DewfordTown_OnFrame
	.byte 0

DewfordTown_OnTransition:
	setflag FLAG_VISITED_DEWFORD_TOWN
	end

DewfordTown_OnFrame:
	map_script_2 VAR_DEWFORD_TOWN_STATE, 3, DewfordTown_OnFrameWally
	.2byte 0

DewfordTown_EventScript_Wally::
	goto_if_set FLAG_TEMP_1, DewfordTown_EventScript_Wally2
	lock
	faceplayer
	setflag FLAG_TEMP_1
	namebox Wally
	msgbox DewfordTown_EventScript_WallyHello, MSGBOX_DEFAULT
	hidenamebox
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
	waitmovement 0
	namebox Wally
	msgbox DewfordTown_EventScript_WallyBeginSpeech, MSGBOX_DEFAULT
	setflag FLAG_SPAWN_INVISIBLE
	setflag FLAG_REMOVE_WARP_FADE_OUT
	setvar VAR_PETALBURG_CITY_STATE, 6
	specialvar VAR_0x8004, GetPlayerFacingDirection
    warp MAP_PETALBURG_CITY, 15, 16
	hidenamebox
	closemessage
	end

DewfordTown_EventScript_Wally2::
	end

DewfordTown_OnFrameWally::
	lockall
	call Script_RemoveTint
	call_if_eq VAR_0x8004, DIR_EAST, DewfordTown_OnFrameWallyEast
	call_if_eq VAR_0x8004, DIR_WEST, DewfordTown_OnFrameWallyWest
	call_if_eq VAR_0x8004, DIR_NORTH, DewfordTown_OnFrameWallyNorth
	call_if_eq VAR_0x8004, DIR_SOUTH, DewfordTown_OnFrameWallySouth
	delay 16
	fadescreen FADE_FROM_BLACK
	delay 8
	namebox Wally
	msgbox DewfordTown_Text_WallyContinueSpeech, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox DewfordTown_Text_WallyContinueSpeech2
	closemessage
	hidenamebox
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_FaceUp
	waitmovement 0
	namebox Wally
	msgbox DewfordTown_Text_WallyDetermined
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
	waitmovement 0
	msgbox DewfordTown_Text_WallyLetsGo
	closemessage
	hidenamebox
	call_if_eq VAR_0x8004, DIR_WEST, DewfordTown_WallyGoToGymWest
	applymovement LOCALID_WALLY, DewfordTown_Movement_WallyGoToGym
	waitmovement 0
	setvar VAR_0x8004, 8
	setvar VAR_0x8005, 17
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_WALLY, DewfordTown_Movement_WallyGoToGym2
	waitmovement 0
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	namebox Wally
	msgbox DewfordTown_Text_WallyGym1
	playmoncry SPECIES_MEDITITE, CRY_MODE_NORMAL
	waitmoncry
	closemessage
	hidenamebox
	delay 8
	playse SE_NOT_EFFECTIVE
	waitse
	delay 12
	namebox Wally
	msgbox DewfordTown_Text_WallyGym2
	hidenamebox
	closemessage
	playse SE_M_SUPERSONIC
	waitse
	playse SE_SUPER_EFFECTIVE
	waitse
	playmoncry SPECIES_MEDITITE, CRY_MODE_FAINT
	waitmoncry
	delay 8
	playse SE_FAINT
	waitse
	namebox Wally
	msgbox DewfordTown_Text_WallyGym3
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	delay 50
	fadescreen FADE_FROM_BLACK
	delay 10
	namebox Wally
	msgbox DewfordTown_Text_WallyGymBattle
	hidenamebox
	closemessage
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
	waitmoncry
	delay 8
	playse SE_M_DETECT
	waitse
	namebox Wally
	msgbox DewfordTown_Text_WallyGymBattle2
	hidenamebox
	closemessage
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
	waitmoncry
	namebox Wally
	msgbox DewfordTown_Text_WallyGymBattle3
	hidenamebox
	closemessage
	delay 10
	playse SE_M_REFLECT
	waitse
	playse SE_M_BRICK_BREAK
	waitse
	delay 12
	playse SE_NOT_EFFECTIVE
	waitse
	delay 16
	playmoncry SPECIES_RALTS,CRY_MODE_NORMAL
	waitmoncry
	delay 30
	playmoncry SPECIES_KIRLIA,CRY_MODE_GROWL_1
	waitmoncry
	delay 30
	playfanfare MUS_EVOLVED
	waitfanfare
	delay 10
	namebox Wally
	msgbox DewfordTown_Text_WallyGymBattle4
	hidenamebox
	closemessage
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
	waitmoncry
	playse SE_M_SUPERSONIC
	waitse
	playse SE_SUPER_EFFECTIVE
	waitse
	playmoncry SPECIES_MAKUHITA, CRY_MODE_FAINT
	waitmoncry
	playse SE_FAINT
	waitse
	delay 20
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_WALLY, DewfordTown_Movement_WallyComeOut
	waitmovement 0
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	namebox Wally
	msgbox DewfordTown_Text_WallyAfter
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_WALLY_DEWFORD_TOWN
	removeobject LOCALID_WALLY
	delay 16
	fadescreen FADE_FROM_BLACK
	delay 8
	setvar VAR_DEWFORD_TOWN_STATE, 4
	releaseall
	end

DewfordTown_Movement_WallyComeOut::
	face_down
	set_visible
	walk_down
	walk_left
	face_player
	step_end

DewfordTown_WallyGoToGymWest::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerOutTheWay
	waitmovement 0
	return


DewfordTown_OnFrameWallyEast::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayer
	waitmovement 0
	return

DewfordTown_OnFrameWallyWest::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerWest
	waitmovement 0
	return

DewfordTown_OnFrameWallyNorth::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerNorth
	waitmovement 0
	return

DewfordTown_OnFrameWallySouth::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerSouth
	waitmovement 0
	return

DewfordTown_Text_WallyContinueSpeech::
	.string "Pero ahora.\nAhora voy a demostrarles que\lse equivocaban conmigo.\p"
	.string "…\n…\pO…\n¿…Sabes qué?\p"
	.string "¿A quién le importa lo\nque ellos piensan de mí?$"

DewfordTown_Text_WallyContinueSpeech2::
	.string "Claramente no les importa\nquién soy, o qué es lo que haga.\p"
	.string "Quizá… Sea mejor hacer este viaje\npor mí mismo, y no por otros.\p¿Eso… Eso suena bien, ¿no?\p"
	.string "Pero aún así… Me gustaría\nque estés aquí conmigo…$"

DewfordTown_Text_WallyDetermined::
	.string "…\p"
	.string "El {COLOR BLUE}Gimnasio Dewford{COLOR DARK_GRAY}…\p"
	.string "{COLOR GREEN}(Vamos Wally… ¡Tú puedes!){COLOR DARK_GRAY}\p"
	.string "El tipo de este Gimnasio es Lucha…\p"
	.string "Mi Ralts es tipo Psíquico Y Hada, así\n"
	.string "que debería ser relativamente fácil\l"
	.string "para él…$"

DewfordTown_Text_WallyLetsGo::
	.string "Bueno, Ralts… ¿Estás listo?\p"
	.string "¡Entonces vamos!$"

DewfordTown_Text_WallyGym1::
	.string "¡Wow! ¡En serio no puede verse nada!\p"
	.string "¿Cómo siquiera funcionan las luces en\n"
	.string "este Gimnasio? ¿Los Entrenadores acá\l"
	.string "pueden verme pero yo a ellos no?\p"
	.string "Eh- ¡No importa, Wally!\n"
	.string "¡Concéntrate!\p"
	.string "…\p"
	.string "¡AH!$"

DewfordTown_Text_WallyGym2::
	.string "G-gracias, Ralts, pensé que ese- COF,\n"
	.string "COF- Em… Ese Meditite iba a\l"
	.string "lastimarme…\p"
	.string "¡Pero ahora, Ralts, usa {COLOR LIGHT_RED}Brillo Mágico{COLOR DARK_GRAY}!$"

DewfordTown_Text_WallyGym3::
	.string "¡Bien hecho, Ralts!\n"
	.string "¡Eso fue increíble!\p"
	.string "Ahora… Yo estudié la arquitectura de\n"
	.string "este Gimnasio… El Líder debería\l"
	.string "estar…\l"
	.string "………\p"
	.string "¡Acá!\n"
	.string "¡Ja! ¡Lo sabía! ¡Vamos, Ralts!$"

DewfordTown_Text_WallyGymBattle::
	.string "Y ahora, Ralts… ¡¡Usa {COLOR LIGHT_RED}Campo Psíquico{COLOR DARK_GRAY}, y\n"
	.string "luego usa {COLOR LIGHT_RED}Confusión{COLOR DARK_GRAY}!!$"
DewfordTown_Text_WallyGymBattle2::
	.string "{COLOR RED}D-detección{COLOR DARK_GRAY}…\n"
	.string "Brawly leyó mi estrategia y reaccionó\l"
	.string "acorde…$"
DewfordTown_Text_WallyGymBattle3::
	.string "¡Cuidado, Ralts, esquiva eso!\p"
	.string "………\p"
	.string "¿E-eh?$"
DewfordTown_Text_WallyGymBattle4::
	.string "¡R-Ralts! ¡Evolucionaste a Kirlia!\n"
	.string "¡Estoy t-tan orgulloso de tí, Ra- Eh,\l"
	.string "Kirlia!\p"
	.string "-COF, COF, COF- Em… Ahora, ¡Usa {COLOR LIGHT_RED}Fuerza\n"
	.string "Expansiva{COLOR DARK_GRAY}!$"
DewfordTown_Text_WallyAfter::
	.string "¡G-gané, {PLAYER}, gané!\n"
	.string "¡Y Ralts evolucionó a Kirlia, también!\p"
	.string "Muchas gracias por estar ahí,\n"
	.string "{PLAYER}, sin tu apoyo, no habría\l"
	.string "podido hacer nada...\p"
	.string "Ahora, ¡Voy a continuar mejorando, y un\n"
	.string "día, voy a derrotarte en un combate,\l"
	.string "{PLAYER}!$"


DewfordTown_Movement_WallyGoToGym::
	walk_right
	walk_right
	face_up
	walk_in_place_up
	step_end

DewfordTown_Movement_WallyGoToGym2::
	walk_up
	set_invisible
	step_end

DewfordTown_Movement_PlayerOutTheWay::
	walk_down
	face_up
	step_end
DewfordTown_Movement_VisiblePlayer::
	face_right
	set_visible
	step_end

DewfordTown_Movement_VisiblePlayerWest::
	face_left
	set_visible
	step_end

DewfordTown_Movement_VisiblePlayerNorth::
	face_up
	set_visible
	step_end

DewfordTown_Movement_VisiblePlayerSouth::
	face_down
	set_visible
	step_end

DewfordTown_EventScript_Trigger::
	goto_if_ne VAR_DEWFORD_TOWN_STATE, 0, DewfordTown_EventScript_TriggerNada
	lockall
	playse SE_BALL_TRADE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GRUNT, Common_Movement_FacePlayer
	waitmovement 0
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerApproach1
	waitmovement 0
	delay 16
	applymovement LOCALID_GRUNT, DewfordTown_Movement_GruntEscapes
	waitmovement 0
	removeobject LOCALID_GRUNT
	setflag FLAG_DEWFORD_GRUNT
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerApproach2
	waitmovement 0
	namebox Player
	msgbox DewfordTown_EventScript_Trigger_Text_0
	hidenamebox
	setvar VAR_DEWFORD_TOWN_STATE, 1
	releaseall
	return
	end

DewfordTown_EventScript_Trigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox DewfordTown_EventScript_Trigger_Text_2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBackDown
	waitmovement 0
	releaseall
	end

DewfordTown_Movement_PlayerBackDown:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

DewfordTown_EventScript_Trigger_Text_2:
	.string "El Gimnasio está cerrado.$"
DewfordTown_EventScript_TriggerNada::
	releaseall
	end

DewfordTown_Movement_PlayerApproach1:
	walk_slow_left
	step_end

DewfordTown_Movement_GruntEscapes:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_16
	delay_16
	lock_facing_direction
	walk_slow_up
	walk_slow_up
	walk_slow_up
	unlock_facing_direction
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

DewfordTown_Movement_PlayerApproach2:
	walk_faster_left
	walk_faster_left
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

DewfordTown_EventScript_Trigger_Text_0:
	.string "(¿Q-qué fue eso…?)$"



DewfordTown_EventScript_Briney::
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
	message DewfordTown_Text_WhereAreWeBound
	waitmessage
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_EventScript_ChoosePetalburg
	case 1, DewfordTown_EventScript_ChooseSlateport
	case 2, DewfordTown_EventScript_CancelSailSelect
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
	end

DewfordTown_EventScript_ChoosePetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	release
	end

DewfordTown_EventScript_ChooseSlateport::
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToSlateport
	release
	end

DewfordTown_EventScript_CancelSailSelect::
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_EventScript_ReturnToPetalburgPrompt::
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailBackToPetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	end

DewfordTown_EventScript_Woman::
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
	end

DewfordTown_EventScript_TownSign::
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_GymSign::
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_HallSign::
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
	end

DewfordTown_EventScript_GiveOldRod::
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_NotGettingItchToFish::
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_HowsFishing::
	message DewfordTown_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
	end

DewfordTown_EventScript_FishingExcellent::
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_FishingNotSoGood::
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailToPetalburg::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	call Common_EventScript_StopBrineysBoatMusic
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	waitstate
	release
	end

DewfordTown_EventScript_SailToSlateport::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
	waitmovement 0
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
	waitmovement 0
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
	addobject LOCALID_BRINEY_R109
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	addobject LOCALID_BOAT_R109
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
	copyobjectxytoperm LOCALID_BRINEY_R109
	release
	end

DewfordTown_EventScript_LandedSlateportDeliverGoods::
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
	return

DewfordTown_EventScript_LandedSlateport::
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
	return

DewfordTown_Movement_SailToPetalburg:
	walk_up
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_SailToSlateport:
	walk_right
	walk_fast_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

DewfordTown_Movement_PlayerBoardBoat:
	walk_right
	walk_up
	step_end

DewfordTown_Movement_ExitBoatPetalburg:
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_ExitBoatSlateport:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

DewfordTown_Movement_BrineyBoardBoat:
	walk_up
	step_end

DewfordTown_Movement_BrineyExitBoat:
	walk_up
	walk_up
	step_end

DewfordTown_EventScript_TrendyPhraseBoy::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
	end

DewfordTown_EventScript_ConfirmTrendyPhrase::
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_RejectTrendyPhrase::
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
	end

DewfordTown_EventScript_GiveNewTrendyPhrase::
	incrementgamestat GAME_STAT_STARTED_TRENDS
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_CancelNewTrendyPhrase::
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_PhraseNotTrendyEnough::
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
	release
	end

DewfordTown_Text_TinyIslandCommunity:
	.string "Dewford es una pequeña comunidad.\pSi algo se pone de moda,\ntodos lo saben.$"

DewfordTown_Text_TownSign:
	.string "PUEBLO DEWFORD\n"
	.string "“Una islita en el mar azul.”$"

DewfordTown_Text_GymSign:
	.string "GIMNASIO DE PUEBLO DEWFORD\n"
	.string "Líder: Brawly\l"
	.string "“¡Una enorme ola de poder!”$"

DewfordTown_Text_HallSign:
	.string "SALÓN COMUNITARIO DEWFORD\n"
	.string "“¡Un lugar de encuentros!”$"

Route104_Text_LandedInDewfordDeliverLetter:
	.string "¡Ahoy, mariner{OA}!\n¡Esto es Dewford!\pAhora podrás entregar la carta.$"

DewfordTown_Text_SetSailBackToPetalburg:
	.string "¿Has terminado y quieres volver?$"

DewfordTown_Text_PetalburgWereSettingSail2:
	.string "¡A Petalburg entonces!$"

DewfordTown_Text_GoDeliverIllBeWaiting:
	.string "Ah, esperaré entonces.$"

DewfordTown_Text_BrineyLandedInDewford:
	.string "¡Ahoy!\n¡Llegamos!$"

DewfordTown_Text_WhereAreWeBound:
	.string "¡Ahoy! ¡Allá vamos!$"

DewfordTown_Text_PetalburgWereSettingSail:
	.string "¿A Petalburg?\n¡Vamos, Peeko, queridita!$"

DewfordTown_Text_SlateportWereSettingSail:
	.string "¿A Slaterport?\n¡Vamos, Peeko, queridita!$"

DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
	.string "¡Aquí esperaré!$"

DewfordTown_Text_GettingItchToFish:
	.string "¡Ah! ¡Quiero pescar!\p¿Tú no?$"

DewfordTown_Text_GiveYouOneOfMyRods:
	.string "¡Te escucho fuerte y claro!\p¡Toma esto, pequeñ{OA}!$"

DewfordTown_Text_ThrowInFishingAdvice:
	.string "¿Sabes?\pHe desarrollado una caña que puede\npescar Pokémon, ¡Sin necesidad\lde esperar tanto!$"

DewfordTown_Text_ThatsTooBadThen:
	.string "Qué mal.$"

DewfordTown_Text_HowsYourFishing:
	.string "¡Ey!\n"
	.string "¿Cómo va todo?$"

DewfordTown_Text_GreatHaulInSomeBigOnes:
	.string "¡Genial, atrapa unos grandes!$"

DewfordTown_Text_FishingAdvice:
	.string "Oh, bueno, ¡Ya irá mejor!$"

DewfordTown_Text_XIsTheBiggestHappeningThingRight:
	.string "Osea, está muy de moda eso de\n“{STR_VAR_1}”\p"
	.string "Obvio lo conoces, osea,\n"
	.string "“{STR_VAR_1}”…\l"
	.string "¡Todos hablan de eso!\n"
	.string "“{STR_VAR_1}”\l"
	.string "Es lo más, ¿no?$"

DewfordTown_Text_TellMeWhatsNewAndIn:
	.string "¿Qué?\n¿Ya pasó de moda?\pEntonces, ¿Qué es lo más?$"

DewfordTown_Text_OfCourseIKnowAboutThat:
	.string "¿“{STR_VAR_2}”?\p"
	.string "… …\p"
	.string "…Eh… ¡Sí! ¡Claro, claro!\n"
	.string "“{STR_VAR_2},” ¿No?\p"
	.string "Pfff, ¡Obvio!\n"
	.string "“{STR_VAR_2}”\pEs lo más.$"

DewfordTown_Text_XHuhIThinkYIsCool:
	.string "Mmmhhh…\n"
	.string "“{STR_VAR_2},” ¿No?\p"
	.string "Aunque pienso que\n"
	.string "“{STR_VAR_1}”\l"
	.string "es mucho mejor.$"

DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
	.string "Bueno, si hay otras\ntrends, dímelo, ¿Sí?$"

DewfordTown_Text_YeahDefinitionOfInRightNow:
	.string "¡Osea, obvio!\p"
	.string "“{STR_VAR_1}” es la\n"
	.string "definición de cool.$"

DewfordTown_EventScript_WallyHello:
	.string "¡O-oh!\n"
	.string "-COF COF-\l"
	.string "¡{PLAYER}!\p"
	.string "N-no sabía que vendrías…\n"
	.string "¡Pero que bien que estés aquí!$"

DewfordTown_EventScript_WallyBeginSpeech:
	.string "Sabes, tengo mucho miedo de comenzar mi\n"
	.string "{COLOR BLUE}Desafío de los Gimnasios{COLOR DARK_GRAY}, y n-no sé si\l"
	.string "sea algo en lo que pueda siquiera\l"
	.string "aspirar a ser bueno…\p"
	.string "Tengo miedo de fallar, y que todos se\n"
	.string "burlen de mí denuevo…$"
	
