.set LOCALID_WALLY, 2
.set LOCALID_BOY, 3
.set LOCALID_WALLYS_DAD, 5
.set LOCALID_GYM_BOY, 8
.set LOCALID_SCOTT, 9

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

PetalburgCity_OnTransition:
	setflag FLAG_VISITED_PETALBURG_CITY
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
	end

PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
	return

PetalburgCity_EventScript_DisableMapNameAndMusic::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_FOLLOW_ME
	return

PetalburgCity_EventScript_SetGymDoorsUnlocked::
	setvar VAR_PETALBURG_GYM_STATE, 7
	return

PetalburgCity_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0

PetalburgCity_EventScript_WallyTutorial::
	lockall
	special SavePlayerParty
	special PutZigzagoonInPlayerParty
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
	waitmovement 0
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	closemessage
	delay 60
	msgbox Route102_Text_UnRalts, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	delay 60
	msgbox Route102_Text_PokeballVe, MSGBOX_DEFAULT
	playse SE_BALL_THROW
	waitse
	closemessage
	playse SE_BALL_OPEN
	delay 10
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	delay 60
	playse SE_BALL
	waitse
	delay 20
	playse SE_BALL
	waitse
	delay 20
	playse SE_BALL
	waitse
	delay 60
	playse SE_PIN
	waitse
	fadescreen FADE_FROM_BLACK
	playfanfare MUS_EVOLVED
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_PETALBURG_CITY_STATE, 3
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	special LoadPlayerParty
	setvar VAR_PETALBURG_GYM_STATE, 1
	warp MAP_PETALBURG_CITY_GYM, 4, 108
	waitstate
	releaseall
	end

Route102_Text_Sigsa:
	.string "¡ZIGZA!$"
Route102_Text_Ralts:
	.string "¡R-RALTS!$"
Route102_Text_UnRalts:
	.string "Wally: ¡WOW! ¡Un Ralts!\n"
	.string "Estos son raros, leí en un libro.\l"
	.string "Bueno, ahora es tiempo de atraparlo…\l"
	.string "Eh… ¿Cómo…?\p"
	.string "Em… Z-Zigzagon… ¡Tacleada!$"

Route102_Text_PokeballVe:
	.string "Wally: ¡Y-y-y-y ahora, eh…!\p"
	.string "¡POKÉBALL, CAPTÚRALO!$"

PetalburgCity_EventScript_WalkToWallyHouse::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
	waitmovement 0
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 5
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
	waitstate
	releaseall
	end

PetalburgCity_EventScript_Boy::
	lock
	faceplayer
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_WallysMom::
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end

PetalburgCity_Movement_WalkToWallyHousePlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHousePlayer:
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkToWallyHouseWallysDad:
	delay_8
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHouseWallysDad:
	walk_up
	set_invisible
	step_end

PetalburgCity_Movement_WallyTutorialPlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

PetalburgCity_Movement_WallyTutorialWally:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_Gentleman::
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_ShowGymToPlayer0::
	lockall
	setvar VAR_0x8008, 0
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer1::
	lockall
	setvar VAR_0x8008, 1
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer2::
	lockall
	setvar VAR_0x8008, 2
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer3::
	lockall
	setvar VAR_0x8008, 3
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer::
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_FOLLOW_ME, FALSE
	playse SE_PIN
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

PetalburgCity_EventScript_BoyApproachPlayer0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
	waitmovement 0
	return

@ Unused
PetalburgCity_Movement_Delay48::
	delay_16
	delay_16
	delay_16
	step_end

PetalburgCity_Movement_BoyApproachPlayer0:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyApproachPlayer1:
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_BoyApproachPlayer2:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_Movement_BoyApproachPlayer3:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_Movement_BoyWalkToGym0:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkAway:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWalkToGym0:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym1:
	delay_16
	delay_16
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_Scott0::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_SCOTT, 13, 10
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott1::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_SCOTT, 13, 11
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott2::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 2
	setobjectxy LOCALID_SCOTT, 13, 12
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott3::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 3
	setobjectxy LOCALID_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott::
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject LOCALID_SCOTT
	releaseall
	end

PetalburgCity_EventScript_ScottExit0::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit1::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit2::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit3::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
	waitmovement 0
	return

PetalburgCity_Movement_ScottStartWalkLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottApproachPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottExit0:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit0:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit1:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit2:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit3:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit3:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_EventScript_GymBoy::
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end

Petalburg_Leaf::
	lockall
	faceplayer
	goto_if_unset FLAG_DEFEATED_LEAF, Petalburg_Leaf_2
	namebox CampeonaLeaf
	msgbox Petalburg_Leaf_Text_3
	fadescreen FADE_TO_BLACK
	hidenamebox
	setflag FLAG_DEFEATED_LEAF
	removeobject 10
	delay 60
	fadescreen FADE_FROM_BLACK
Petalburg_Leaf_1:
	releaseall
	return

Petalburg_Leaf_2:
	namebox Unknown
	msgbox Petalburg_Leaf_Text_0
	hidenamebox
	namebox CampeonaLeaf
	msgbox Petalburg_Leaf_Text_02
	hidenamebox
	trainerbattle_no_intro TRAINER_LEAF, Leaf_Defeated_Message
	namebox Leaf
	msgbox Petalburg_Leaf_Text_1
	hidenamebox
	giveitem ITEM_CHERISH_BALL, 30
	namebox Leaf
	msgbox Petalburg_Leaf_Text_2
	fadescreen FADE_TO_BLACK
	hidenamebox
	closemessage
	setflag FLAG_DEFEATED_LEAF
	removeobject 10
	delay 60
	fadescreen FADE_FROM_BLACK
	goto Petalburg_Leaf_1


Petalburg_Leaf_Text_0:
	.string "¡AH!\n"
	.string "¡Me encontraste!\p"
	.string "¡P-por favor no me hagas nada! ¡S-solo\n"
	.string "estoy jugando con los Pokémon Bebé\l"
	.string "que aparecen acá!\p"
	.string "… … … … …\n"
	.string "Ah, que solo venías a explorar…\l"
	.string "Entiendo…\l"
	.string "Pues ya que me encontraste, déjame\l"
	.string "contarte algo, y escucha bien que es un\l"
	.string "secretito importantísimo que no debe\l"
	.string "saber nadie pero nadie nadie, ¿sí?\p"
	.string "Bueeeeno, pues…\n"
	.string "Yo…\l"
	.string "Soy {COLOR GREEN}Leaf{COLOR DARK_GRAY}, y soy una de las {COLOR GREEN}Campeonas de\l"
	.string "la Liga Añil de Kanto{COLOR DARK_GRAY} y me propuse a\l"
	.string "venir a Hoenn para investigar la\l"
	.string "migración de Pokémon, que parece estar\l"
	.string "relacionada al clima. ¿Y te digo otro\l"
	.string "secretito más, uno que aún más\l"
	.string "secretoso que el otro, y que nadie\l"
	.string "NADIE debe saber?$"
Petalburg_Leaf_Text_02:
	.string "Bueno, bueno ahorita te cuento…\n"
	.string "Hace poco volví a iniciar, con un Equipo\l"
	.string "Pokémon nuevo bien nuevecito… Una\l"
	.string "nueva aventura por la Región de Hoenn,\l"
	.string "para investigar qué está pasando…\p"
	.string "Y como veo que tienes potencial, voy a\n"
	.string "hacer una cosita muy cositezca…\l"
	.string "¡Vamos a tener una Batalla, y voy a\l"
	.string "ganarte, JA JA JA!$"

Petalburg_Leaf_Text_1:
	.string "¡AH!\n"
	.string "¡Me ganaste!\l"
	.string "¡INCREÍBLE!\p"
	.string "¡Eres un{A} Entrenador{A}\n"
	.string "poderosisimisimísim{OA} de l{OA}s que ganan\l"
	.string "batallas batallonezcas!\p"
	.string "Pero bueno, bueeno, me ganaste, así que\n"
	.string "tengo que decirte al menos una de las\l"
	.string "cosas que descubrí: {COLOR GREEN}Hoenn tiene una\l"
	.string "gran resistencia al cambio climático{COLOR DARK_GRAY},\l"
	.string "pero incluso con eso, el ser humano\l"
	.string "sigue logrando arruinar tanto las\l"
	.string "cosas, que está afectando incluso a\l"
	.string "Hoenn.\p"
	.string "Mi sospecha es que los Pokémon han\n"
	.string "venido a Hoenn en busca de un hogar\l"
	.string "más seguro, pero por ahora es solo una\l"
	.string "teoría teorizadora, nada más ni nada\l"
	.string "menos.\p"
	.string "… … … … …\n"
	.string "¡Ah!\l"
	.string "Se me olvidaba darte algo por vencer a\l"
	.string "una campeona campeonística como yo.$"

Petalburg_Leaf_Text_2:
	.string "Es una Gloria Ball, una Pokéball\n"
	.string "especial creada para conmemorar un\l"
	.string "evento importantísimo; y tiene la\l"
	.string "peculiar capacidad de atrapar a los\l"
	.string "Pokémon raros, de esos rarísimos que\l"
	.string "no se dejan atrapar ni con las Ultra\l"
	.string "Ball ni las Ocaso Ball.\p"
	.string "Úsala sabiamente, pues no sirve muy\n"
	.string "bien con Pokémon fáciles facilitos de\l"
	.string "atrapar, solo con los más caprichosos.\p"
	.string "Bueeeeno, ya no te detengo más. ¡Sigue\n"
	.string "adelante! ¡Nos vemos!$"

Petalburg_Leaf_Text_3:
	.string "¿¿¿QUE HAGO ACÁ NO SE SUPONE QUE\n"
	.string "ESTÉ ACÁ QUE???$"
	
Leaf_Defeated_Message:
	.string "¡AH! ¡WOW!\p"
	.string "Los Entrenadores en Hoenn\n"
	.string "no dejan nada que desear!$"

PetalburgCity_Text_WhereIsWally:
	.string "¿A dónde se ha ido Wally?\p"
	.string "Tenemos que irnos a la\n"
	.string "Ciudad Verdantuff pronto…$"

PetalburgCity_Text_AreYouRookieTrainer:
	.string "¡Holis! ¿Será que eres…\n"
	.string "Un{A} novat{OA}?\p"
	.string "¡Pues ven aquí!$"

PetalburgCity_Text_ThisIsPetalburgGym:
	.string "Este es el Gimnasio Petalburg.$"

PetalburgCity_Text_ThisIsGymSign:
	.string "¡Buena suerte!$"

PetalburgCity_Text_WaterReflection:
	.string "Reflejada es,\n"
	.string "mi cara en el agua,\l"
	.string "melacólica.\p"
	.string "¿Y tu cara, cuál\n"
	.string "emoción reflejará?\l"
	.string "¿Será que lo sabrás?$"

PetalburgCity_Text_FullPartyExplanation:
	.string "El PC es maravilloso.\n"
	.string "Ojalá tuviera más espacio…$"

PetalburgCity_Text_GymSign:
	.string "Gimnasio Pokémon de Petalburg\n"
	.string "Líder: Norman\l"
	.string "“¡El hombre que persigue el poder!”$"

PetalburgCity_Text_CitySign:
	.string "{COLOR RED}CIUDAD PETALBURG{COLOR DARK_GRAY}\n"
	.string "“Donde las personas viven en armonía\l"
	.string "con la naturaleza”$"


PetalburgCity_Text_WallyHouseSign:
	.string "Casa de Wally$"

PetalburgCity_Text_AreYouATrainer:
	.string "Hola, dime, ¿Eres un{A} Entrenador{A}?$"

PetalburgCity_Text_WellMaybeNot:
	.string "Quizás no… Algo me dice, en la forma en\n"
	.string "la que te vistes… Que, o bien eres un{A}\l"
	.string "novat{OA}, o sólamente eres un{A} niñ{OA}\l"
	.string "ordinari{OA}…$"


PetalburgCity_Text_ImLookingForTalentedTrainers:
	.string "Verás, estoy en busca de Entrenadores\n"
	.string "poderosos para {COLOR BLUE}un proyecto especial{COLOR DARK_GRAY}\l"
	.string "en el que estoy trabajando…$"
	
