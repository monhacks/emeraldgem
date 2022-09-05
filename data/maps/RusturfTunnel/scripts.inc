RusturfTunnel_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_RUSTURF_TUNNEL_STATE, 2
	goto_if_eq RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxyperm 7, 13, 4
	setobjectxyperm 6, 13, 5
	return

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
	.2byte 0


RusturfTunnel_EventScript_Wanda::
	lock
	faceplayer
	msgbox RusturfTunnel_EventScript_Wanda_Text_0
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


RusturfTunnel_EventScript_WandasBoyfriend::
	lock
	faceplayer
	msgbox RusturfTunnel_EventScript_WandasBoyfriend_Text_0
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


RusturfTunnel_EventScript_ClearTunnelScene::
	lockall
	switch VAR_TEMP_1
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_3
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_4
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_5
RusturfTunnel_EventScript_ClearTunnelScene_1:
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
	namebox Riley
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_0
	hidenamebox
	switch VAR_TEMP_1
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_8
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_8
RusturfTunnel_EventScript_ClearTunnelScene_6:
	giveitem ITEM_AGGRONITE
	namebox Riley
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_1
	setflag FLAG_RECEIVED_HM04
	closemessage
	hidenamebox
	switch VAR_TEMP_1
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_11
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_12
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_13
RusturfTunnel_EventScript_ClearTunnelScene_9:
	namebox Riley
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_2
	hidenamebox
	namebox Wanda
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_3
	hidenamebox
	namebox Riley
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_4
	hidenamebox
	namebox Wanda
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_5
	hidenamebox
	switch VAR_TEMP_1
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_16
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_17
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_17
RusturfTunnel_EventScript_ClearTunnelScene_14:
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
	releaseall
	end

RusturfTunnel_EventScript_ClearTunnelScene_3:
	call RusturfTunnel_EventScript_FaceWandasBoyfriend1
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_4:
	call RusturfTunnel_EventScript_FaceWandasBoyfriend2
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_5:
	call RusturfTunnel_EventScript_FaceWandasBoyfriend3
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_8:
	closemessage
	applymovement 1, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
	waitmovement 0
	goto RusturfTunnel_EventScript_ClearTunnelScene_6

RusturfTunnel_EventScript_ClearTunnelScene_11:
	call RusturfTunnel_EventScript_BoyfriendApproachWanda1
	goto RusturfTunnel_EventScript_ClearTunnelScene_9

RusturfTunnel_EventScript_ClearTunnelScene_12:
	call RusturfTunnel_EventScript_BoyfriendApproachWanda2
	goto RusturfTunnel_EventScript_ClearTunnelScene_9

RusturfTunnel_EventScript_ClearTunnelScene_13:
	call RusturfTunnel_EventScript_BoyfriendApproachWanda3
	goto RusturfTunnel_EventScript_ClearTunnelScene_9

RusturfTunnel_EventScript_ClearTunnelScene_16:
	call RusturfTunnel_EventScript_WandaAndBoyfriendExit1
	goto RusturfTunnel_EventScript_ClearTunnelScene_14

RusturfTunnel_EventScript_ClearTunnelScene_17:
	call RusturfTunnel_EventScript_WandaAndBoyfriendExit
	goto RusturfTunnel_EventScript_ClearTunnelScene_14


RusturfTunnel_EventScript_BoyfriendApproachWanda1::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
	applymovement 1, RusturfTunnel_Movement_BoyfriendApproachWanda1
	waitmovement 0
	return


RusturfTunnel_EventScript_BoyfriendApproachWanda2::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
	applymovement 1, RusturfTunnel_Movement_BoyfriendApproachWanda
	waitmovement 0
	applymovement 10, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return


RusturfTunnel_EventScript_BoyfriendApproachWanda3::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
	applymovement 1, RusturfTunnel_Movement_BoyfriendApproachWanda
	waitmovement 0
	applymovement 10, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return


RusturfTunnel_EventScript_FaceWandasBoyfriend1::
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return


RusturfTunnel_EventScript_FaceWandasBoyfriend2::
	applymovement 1, RusturfTunnel_Movement_BoyfriendFaceRight
	waitmovement 0
	return


RusturfTunnel_EventScript_FaceWandasBoyfriend3::
	return


RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
	closemessage
	applymovement 1, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
	waitmovement 0
	return


RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
	applymovement 10, RusturfTunnel_Movement_WandaExit1
	applymovement 1, RusturfTunnel_Movement_WandasBoyfriendExit1
	waitmovement 0
	removeobject 10
	removeobject 1
	playse SE_EXIT
	return


RusturfTunnel_EventScript_WandaAndBoyfriendExit::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
	applymovement 10, RusturfTunnel_Movement_WandaExit
	applymovement 1, RusturfTunnel_Movement_WandasBoyfriendExit
	waitmovement 0
	removeobject 10
	removeobject 1
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
	playse SE_EXIT
	return


RusturfTunnel_EventScript_WandasBoyfriendNotice::
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	return


RusturfTunnel_Movement_WandaExit1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_WandaExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_PlayerWatchWandaExit:
	delay_8
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_PlayerWatchBoyfriend1:
	walk_left
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_PlayerWatchBoyfriend:
	walk_right
	walk_in_place_faster_left
	step_end

RusturfTunnel_Movement_BoyfriendFaceRight:
	walk_up
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_WandasBoyfriendExit1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_WandasBoyfriendExit:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
	walk_right
	step_end

RusturfTunnel_Movement_BoyfriendApproachWanda1:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_fast_up
	walk_fast_right
	step_end

RusturfTunnel_Movement_BoyfriendApproachWanda:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_fast_right
	walk_in_place_faster_up
	step_end

RusturfTunnel_EventScript_TunnelBlockagePos1::
	setvar VAR_TEMP_1, 1
	end


RusturfTunnel_EventScript_TunnelBlockagePos2::
	setvar VAR_TEMP_1, 2
	end


RusturfTunnel_EventScript_TunnelBlockagePos3::
	setvar VAR_TEMP_1, 3
	end


RusturfTunnel_EventScript_Peeko::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox RusturfTunnel_EventScript_Peeko_Text_0
	waitmoncry
	release
	end


RusturfTunnel_EventScript_Grunt::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_0
	hidenamebox
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_1
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	setflag FLAG_STARTED_BOSS
	special TakeAwayItemsAndBerries
	special SavePlayerParty
	deletepokemon 1
	message RusturfTunnel_EventScript_Grunt_Text_2
	waitmessage
	closemessage
	applymovement 6, RusturfTunnel_Movement_GruntNervous
	waitmovement 0
	playbgm MUS_HELP, FALSE
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_3
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
	applymovement 6, RusturfTunnel_Movement_GruntEscape
	waitmovement 0
	namebox Unknown
	msgbox RusturfTunnel_EventScript_Grunt_Text_4
	closemessage
	addobject 5
	hidenamebox
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_5
	hidenamebox
	closemessage
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerPursue
	waitmovement 0
	applymovement 6, Common_Movement_FacePlayer
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_6
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat2
	savepartofteam
	special LoadPlayerParty
	loadpartofteam
	special GiveBackItemsAndBerries
	clearflag FLAG_STARTED_BOSS
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_7
	hidenamebox
	message RusturfTunnel_EventScript_Grunt_Text_8
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_9
	hidenamebox
	giveitem ITEM_DEVON_PARTS, 1
	closemessage
	applymovement 6, Common_Movement_FaceDown
	waitmovement 0
	delay 16
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_10
	hidenamebox
	applymovement 6, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 16
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_11
	hidenamebox
	closemessage
	delay 16
	applymovement 5, RusturfTunnel_Movement_BrineyMove
	waitmovement 0
	applymovement 6, RusturfTunnel_Movement_GruntRegrets
	waitmovement 0
	namebox Aqua
	msgbox RusturfTunnel_EventScript_Grunt_Text_12
	hidenamebox
	closemessage
	applymovement 6, RusturfTunnel_Movement_GruntExit
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
	playse SE_EXIT
	removeobject 6
	delay 50
	applymovement 7, RusturfTunnel_Movement_ApproachPeeko1
	waitmovement 0
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	waitmoncry
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	namebox Briney
	msgbox RusturfTunnel_EventScript_Grunt_Text_13
	hidenamebox
	applymovement 5, RusturfTunnel_Movement_BrineyApproachPeeko1
	waitmovement 0
	namebox Briney
	msgbox RusturfTunnel_EventScript_Grunt_Text_14
	hidenamebox
	applymovement 5, Common_Movement_FacePlayer
	waitmovement 0
	namebox Briney
	msgbox RusturfTunnel_EventScript_Grunt_Text_15
	closemessage
	hidenamebox
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	waitbuttonpress
	waitmoncry
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
	applymovement 5, RusturfTunnel_Movement_BrineyExit
	applymovement 7, RusturfTunnel_Movement_PeekoExit
	delay 64
	removeobject 5
	playse SE_EXIT
	delay 16
	playse SE_EXIT
	removeobject 7
	clearflag FLAG_DEVON_GOODS_STOLEN
	setflag FLAG_RECOVERED_DEVON_GOODS
	setvar VAR_RUSTBORO_CITY_STATE, 4
	setvar VAR_BRINEY_HOUSE_STATE, 1
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	release
	end


RusturfTunnel_Movement_ApproachPeeko1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_GruntExit:
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_GruntNervous:
	walk_in_place_fast_right
	delay_4
	walk_in_place_fast_left
	delay_4
	walk_in_place_fast_right
	delay_4
	walk_in_place_fast_left
	delay_16
	delay_8
	delay_4
	jump_in_place_left
	jump_in_place_left
	step_end

RusturfTunnel_Movement_PushPlayerAsideForGrunt:
	face_down
	lock_facing_direction
	walk_up
	unlock_facing_direction
	walk_in_place_faster_left
	step_end

RusturfTunnel_Movement_PlayerMoveAsideForBriney:
	walk_right
	walk_in_place_faster_down
	step_end

RusturfTunnel_Movement_GruntEscape:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

RusturfTunnel_Movement_PlayerPursue:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

RusturfTunnel_Movement_BrineyMove:
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

RusturfTunnel_Movement_GruntRegrets:
	walk_down
	delay_16
	delay_16
	walk_in_place_left
	step_end

RusturfTunnel_Movement_BrineyApproachPeeko1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_in_place_fast_up
	step_end

RusturfTunnel_Movement_BrineyExit:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_PeekoExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_EventScript_Mike::
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
	msgbox RusturfTunnel_EventScript_Mike_Text_0
	end


RusturfTunnel_EventScript_Wanda_Text_0:
	.string "Mi novio estaba cavando este túnel por\n"
	.string "su cuenta, pero hubo un derrumbe que\l"
	.string "lastimó sus manos y no puede seguir\l"
	.string "cavando.$"

RusturfTunnel_EventScript_WandasBoyfriend_Text_0:
	.string "¡ARGH! {PAUSE 2}¡ROAR!\p"
	.string "¡Ese lindo hombre me detuvo cuando\n"
	.string "estaba tan cerca………!\p"
	.string "Y ahora, un derrumbe me lastimó las\n"
	.string "manos.\p"
	.string "Quiero llegar con mi novia para hablarle\n"
	.string "de él.$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_0:
	.string "¡ROAR!\n"
	.string "E-eh, quiero decir, {PAUSE 2}¡wow!\p"
	.string "¡Destruíste esa roca que bloqueaba el\n"
	.string "camino! {PAUSE 2}¡Ni mis enormes músculos de\l"
	.string "constructor podían destruírla!\p"
	.string "Como agradecimiento de crear un atajo\n"
	.string "para ver a mi novia, ten esto.$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_1:
	.string "¡Es una Aggronita!\p"
	.string "Esa es una megapiedra que puede hacer\n"
	.string "{COLOR BLUE}megaevolucionar a un Aggron{COLOR DARK_GRAY}.\p"
	.string "¡Gracias a tí podré hablar y ver a mi\n"
	.string "novia cuando quiera!$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_2:
	.string "¡Amor! {PAUSE 2}¡Hola!\n"
	.string "Nnn… {PAUSE 2}¡ROOOAARR! {PAUSE 2}¡Estoy tan feliz!$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_3:
	.string "¡Oh, Riley, amor mío!\n"
	.string "Al fin nos vemos otra vez.$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_4:
	.string "¡Amorcito!\n"
	.string "La cosa más maravillosa ha pasado, no lo\l"
	.string "creerás.\p"
	.string "¡Alguien más ha reconocido el esfuerzo\n"
	.string "que hice para mantener estos músculos!$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_5:
	.string "¡Qué cosa tan maravillosa, mi amor!\p"
	.string "¡Podemos hablar más de esa persona en\n"
	.string "mi casa!\p"
	.string "Me gustaría conocer gente nueva que\n"
	.string "reconozca el trabajo duro.$"

RusturfTunnel_EventScript_Peeko_Text_0:
	.string "¡Pii pihyoh!$"

RusturfTunnel_EventScript_Grunt_Text_0:
	.string "¡Argh, este Peeko resultó ser una\n"
	.string "molestia!\p"
	.string "Me ordenaron robar las {COLOR BLUE}Partes{COLOR DARK_GRAY}, detener\n"
	.string "la construcción y escapar, pero ese\l"
	.string "tipo excavador me persiguió hasta que\l"
	.string "robé este Peeko y me burlé de sus\l"
	.string "músculos.\p"
	.string "………\p"
	.string "¿Sigues aquí?\n"
	.string "Entonces, {PAUSE 2}¡Peleemos!$"

RusturfTunnel_EventScript_Grunt_Text_1:
	.string "No comprendo.\p"
	.string "El {COLOR BLUE}Jefecito{COLOR DARK_GRAY} me dijo que sería tarea\n"
	.string "fácil, {PAUSE 2}¡Pero no lo es!\p"
	.string "¡ARGH! {PAUSE 2}¡ROAR!\p"
	.string "¡Tendré que hacer esto con trucos\n"
	.string "sucios!$"

RusturfTunnel_EventScript_Grunt_Text_2:
	.string "¡Te han robado la mochila!$"

RusturfTunnel_EventScript_Grunt_Text_3:
	.string "¡NO IMPORTA NADA, YO ME VOY!$"

RusturfTunnel_EventScript_Grunt_Text_4:
	.string "¡No te preocupes, yo lo detengo aquí!$"

RusturfTunnel_EventScript_Grunt_Text_5:
	.string "¡N-NO!\n"
	.string "¡ROAR!$"

RusturfTunnel_EventScript_Grunt_Text_6:
	.string "¡A-ARGH!\p"
	.string "¡Tch, acorralado!\p"
	.string "¡B-Bueno, si tanto quieren sus Partes,\n"
	.string "pelea de nuevo, cobarde!$"

RusturfTunnel_EventScript_Grunt_Text_7:
	.string "¡N-NO!\n"
	.string "¡No puede ser!\l"
	.string "¡ARGH! {PAUSE 2}¡Aquí tienes denuevo tus\l"
	.string "inútiles Pokémon!$"

RusturfTunnel_EventScript_Grunt_Text_8:
	.string "¡Te han devuelto la mochila!$"

RusturfTunnel_EventScript_Grunt_Text_9:
	.string "¡A-ARGH! {PAUSE 2}¡ROAR! {PAUSE 2}¡NOO!\p"
	.string "¡Tch, aquí tienen las partes!\n"
	.string "De todas formas, {PAUSE 2}¡Nuestro plan es\l"
	.string "infalible, mua ja ja!$"

RusturfTunnel_EventScript_Grunt_Text_10:
	.string "………\p"
	.string "Esta………\n"
	.string "No fue una experiencia que quiera que\l"
	.string "se repita.$"

RusturfTunnel_EventScript_Grunt_Text_11:
	.string "………\p"
	.string "A lo mejor………\n"
	.string "Ser un ladrón no sea lo mío.$"

RusturfTunnel_EventScript_Grunt_Text_12:
	.string "………\p"
	.string "Yo………\n"
	.string "Lo lamento, señor.\p"
	.string "No. Lo que hice no tiene perdón.\p"
	.string "………\p"
	.string "Debería disculparme con el hombre que\n"
	.string "insulté antes, y explicarle que… No era\l"
	.string "un insulto…$"

RusturfTunnel_EventScript_Grunt_Text_13:
	.string "¡P-Peeko!$"

RusturfTunnel_EventScript_Grunt_Text_14:
	.string "¡Oh, Peeko!\n"
	.string "¡Te extrañé tanto, mi chiquito!$"

RusturfTunnel_EventScript_Grunt_Text_15:
	.string "¡Muchísimas gracias!\n"
	.string "Peeko, vamos a casa.$"

RusturfTunnel_EventScript_Mike_Text_0:
	.string "¡Esta cueva es muy pequeña!$"

RusturfTunnel_Text_GruntDefeat2::
	.string "¡ARGH! {PAUSE 2}¡ROAR!\p¡DÉJAME GANARTE!$"

RusturfTunnel_Text_GruntDefeat::
	.string "¡ARGH! {PAUSE 2}¡ROAR!\p¿Porqué no pueden dejarme\nterminar esta misión?$"

RusturfTunnel_Text_MikeIntro::
	.string "Si un hombre que está en las montañas se llama montañero, {PAUSE 2}¿Porqué los Pokémon de montañas no se llaman montañokes?$"

RusturfTunnel_Text_MikeDefeat::
	.string "Mis montañokes………$"
