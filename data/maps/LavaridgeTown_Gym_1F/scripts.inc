.set LOCALID_COLE, 2
.set LOCALID_GERALD, 3
.set LOCALID_AXLE, 4
.set LOCALID_DANIELLE, 5

LavaridgeTown_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_Gym_1F_OnFrame
	.byte 0

LavaridgeTown_Gym_1F_OnTransition:
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
	end

LavaridgeTown_Gym_1F_OnFrame:
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 5, LavaridgeTown_Gym_1F_EventScript_WallyEvent
	.2byte 0

LavaridgeTown_Gym_1F_EventScript_WallyEventSetUp::
	return

LavaridgeTown_Gym_1F_EventScript_WallyEvent::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setobjectxy 1, 12, 11
	applymovement 1, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	fadeoutbgm 1
	fadescreen FADE_FROM_BLACK
	delay 24
	namebox Flannery
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	delay 16
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	namebox Flannery
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_1
	hidenamebox
	closemessage
	applymovement 7, Common_Movement_FaceRight
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 24
	playbgm MUS_END, FALSE
	namebox Wally
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_2
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	delay 24
	namebox Wally
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_3
	hidenamebox
	closemessage
	delay 16
	applymovement 1, Common_Movement_WalkInPlaceRight
	waitmovement 0
	namebox Flannery
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_4
	delay 16
	applymovement 7, Common_Movement_FaceLeft
	waitmovement 0
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_5
	hidenamebox
	closemessage
	namebox Wally
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_6
	hidenamebox
	closemessage
	namebox Flannery
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_7
	hidenamebox
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceRight
	waitmovement 0
	playfanfare MUS_OBTAIN_ITEM
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_8
	waitfanfare
	closemessage
	playse SE_BALL_TRADE
	applymovement 7, Common_Movement_QuestionMark
	waitmovement 0
	namebox Wally
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_9
	hidenamebox
	closemessage
	namebox Flannery
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_10
	closemessage
	hidenamebox
	savebgm MUS_DUMMY
	fadedefaultbgm
	namebox Wally
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_11
	hidenamebox
	closemessage
	namebox Flannery
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_12
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	delay 16
	setflag FLAG_HIDE_WALLY_LAVARIDGE
	removeobject 7
	fadescreen FADE_FROM_BLACK
	delay 24
	applymovement 1, LavaridgeGym_Movement_FlanneryAproachesPlayer
	waitmovement 0
	namebox Flannery
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_13
	closemessage
	hidenamebox
	applymovement 1, LavaridgeGym_Movement_FlanneryBackOnGym
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	namebox Flannery
	msgbox LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_14
	closemessage
	hidenamebox
	addvar VAR_LAVARIDGE_TOWN_STATE, 1
	releaseall
	return


@ Unclear where/if these temp vars are getting checked
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
	setvar VAR_TEMP_B, 0
	setvar VAR_TEMP_C, 0
	setvar VAR_TEMP_D, 0
	setvar VAR_TEMP_E, 0
	setvar VAR_TEMP_F, 0
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
	setvar VAR_TEMP_B, 1
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
	setvar VAR_TEMP_C, 1
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
	setvar VAR_TEMP_D, 1
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
	setvar VAR_TEMP_E, 1
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
	return

LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
	return

LavaridgeTown_Gym_1F_EventScript_Flannery::
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
	goto_if_unset FLAG_RECEIVED_TM50, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
	giveitem ITEM_TM50
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM50
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
	giveitem ITEM_TM50
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM50
	return

LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Cole::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_COLE, LOCALID_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_EventScript_CheckTrainerScript::
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	switch VAR_LAST_TALKED
	case 4, LavaridgeTown_Gym_1F_EventScript_MoveUp4
	case 5, LavaridgeTown_Gym_1F_EventScript_MoveUp5
	goto LavaridgeTown_Gym_EventScript_CheckTrainerScript2
	
LavaridgeTown_Gym_EventScript_CheckTrainerScript2::
	release
	special ShouldTryGetTrainerScript
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
	end

LavaridgeTown_Gym_1F_EventScript_MoveUp4::
	applymovement VAR_LAST_TALKED, LavaridgeTown_Gym_1F_Movement_Up
	waitmovement 0
	setobjectxyperm VAR_LAST_TALKED, 3, 9
	goto LavaridgeTown_Gym_EventScript_CheckTrainerScript2

LavaridgeTown_Gym_1F_EventScript_MoveUp5::
	applymovement VAR_LAST_TALKED, LavaridgeTown_Gym_1F_Movement_Up
	waitmovement 0
	setobjectxyperm VAR_LAST_TALKED, 5, 1
	goto LavaridgeTown_Gym_EventScript_CheckTrainerScript2

LavaridgeTown_Gym_1F_Movement_Up::
	walk_up
	face_down
	step_end

LavaridgeTown_Gym_1F_EventScript_Axle::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_AXLE, LOCALID_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Keegan::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_KEEGAN, LOCALID_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Danielle::
	trainerbattle_double TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_NotEnough,LavaridgeTown_Gym_EventScript_CheckTrainerScript
LavaridgeTown_Gym_1F_EventScript_DanielleText::
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_EventScript_NotEnough::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_DANIELLE, LOCALID_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	goto LavaridgeTown_Gym_1F_EventScript_DanielleText

LavaridgeTown_Gym_1F_EventScript_Gerald::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_GERALD, LOCALID_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jace::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JACE, LOCALID_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jeff::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JEFF, LOCALID_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Eli::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_ELI, LOCALID_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_GymStatue::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end


LavaridgeGym_Movement_FlanneryAproachesPlayer:
	walk_right
	step_end

LavaridgeGym_Movement_FlanneryBackOnGym:
	walk_up
	walk_up
	walk_in_place_down
	step_end

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_0:
	.string "¿Estás bien, {PLAYER}?\n"
	.string "Tuvieron suerte que estuviera cerca\l"
	.string "para ayudarte a traer a {COLOR GREEN}Wally{COLOR DARK_GRAY} hasta\l"
	.string "aquí...\p"
	.string "... ... ...\n"
	.string "... ... ...\p"
	.string "Ya veo, me alegra que estés bien.\p"
	.string "Entonces, ¿Wally estaba entrenando en\n"
	.string "la Ruta 111?\l"
	.string "No veo qué tiene de malo...$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_1:
	.string "¿¡Wally tiene {COLOR RED}asma{COLOR DARK_GRAY}!?\p"
	.string "¿¡P-pero qué hacía entonces en la Ruta\n"
	.string "111!? ¡Esa Ruta está en una {COLOR RED}Tormenta\l"
	.string "de Arena constante{COLOR DARK_GRAY}!\p"
	.string "Quiero decir, entiendo el desafiarse,\n"
	.string "pero...$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_2:
	.string "{PLAYER}... {PAUSE 20} ¿Er-{PAUSE 15} eres tú?\p"
	.string "¿Q-{PAUSE 20}qué pasó...?$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_3:
	.string "O-{PAUSE 15}oh...{PAUSE 15}\n"
	.string "Creo...{PAUSE 15} Que me sobrepasé, ¿no?\p"
	.string "Tan típico de mí... No puedo soportar ni\n"
	.string "un poquito de arena... Si no puedo hacer\l"
	.string "ni eso,\l"
	.string "¿Cómo espero ser un Entrenador?\l"
	.string "¿Cómo espero poder ser alguien...?$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_4:
	.string "Wally, eso no está bien.$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_5:
	.string "Todos tenemos límites, todos tenemos\n"
	.string "áreas en donde flaqueamos y donde nos\l"
	.string "cuesta más que otros mejorar.\p"
	.string "Tienes asma, y no hay nada de malo con\n"
	.string "eso, si te cuidas, no va a detenerte de\l"
	.string "ser un Entrenador poderoso.\p"
	.string "Después de todo, {COLOR RED}no me detiene a mí{COLOR DARK_GRAY}, ¿O\n"
	.string "sí?$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_6:
	.string "¿Tienes... {PAUSE 10}Asma también?\n"
	.string "Pero... No parece afectarte, nunca te he\l"
	.string "visto agitada o sin aliento...$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_7:
	.string "Eso es porque sé cuidarme, Wally.\p"
	.string "He tenido esta condición toda mi vida, y\n"
	.string "he sentido lo mismo que tú. Querer\l"
	.string "'Desafiarme,' querer 'Sobrepasarme,'\l"
	.string "para poder ser tan buena como los\l"
	.string "demás.\p"
	.string "Pero eso no me causó ningún bien.\n"
	.string "Me lastimó, me causó dolor. Y eso sólo\l"
	.string "empeoraba.\p"
	.string "No fue hasta que aprendí que está bien\n"
	.string "tener límites, que pude comensar a ser\l"
	.string "yo misma más, a realmente mejorar, a mi\l"
	.string "propio ritmo, con mis propios métodos.\p"
	.string "Y mírame ahora, soy la {COLOR RED}Líder de Gimnasio{COLOR DARK_GRAY}\n"
	.string "de Lavaridge.\p"
	.string "Así que, por favor, Wally. No cometas los\n"
	.string "mismos errores que yo.$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_8:
	.string "¡Flannery le ha dado un inhalador a\n"
	.string "Wally!$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_9:
	.string "Esto... ¿Qué es?$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_10:
	.string "Es un inhalador. Te ayudará a mejorar tu\n"
	.string "condición cuando te sientas mal, y si\l"
	.string "vas a una clínica, podrán darte\l"
	.string "indicaciones sobre qué dosis tendrías\l"
	.string "que tomar y a qué horas.\p"
	.string "Si eres responsable, deberías\n"
	.string "mayormente estar bien.$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_11:
	.string "Gracias... Gracias, Flannery.\p"
	.string "-COF, COF- Em...{PAUSE 10} Creo que descansaré un\n"
	.string "tiempo, pero seguiré entrenando, y me\l"
	.string "haré lo suficientemente poderoso como\l"
	.string "para derrotarte, Flannery.\p"
	.string "Cuando los necesite, tomaré descansos.\n"
	.string "Pero cuando esté listo, ¡Espero estés\l"
	.string "preparada para perder!$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_12:
	.string "¡Esa es la actitud, Wally!\n"
	.string "¡Creo en tí, que llegarás más lejos que\l"
	.string "nadie!$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_13:
	.string "Por favor, {PLAYER}, asegúrate de\n"
	.string "estar ahí para Wally si te necesita.\p"
	.string "Estará bien, por lo que no necesitas\n"
	.string "'Cuidarle.'\l"
	.string "Sólo te pido que estés a su lado, y que\l"
	.string "seas su amig{OA}, ¿Está bien?$"

LavaridgeTown_Gym_1F_EventScript_WallyEvent_Text_14:
	.string "¡Ahora, {PLAYER}, sigue mejorando!\p"
	.string "¡Conociendo nuevas personas y\n"
	.string "rompiendo tus fronteras!\p"
	.string "Con cuidado, para no sobrepasarte,\n"
	.string "¡Pero con constancia, para cada día\l"
	.string "ser mejor de lo que eras ayer!$"

LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
	.string "Ah, ¿Como estás, Joven Promesa\n"
	.string "{PLAYER}?\p"
	.string "Algo que debes saber de este Gimnasio,\n"
	.string "es que, aparte de no poder usar el\l"
	.string "Sistema de Almacenamiento Pokémon...\l"
	.string "¡No tiene una Regla Especial!\p"
	.string "Sin embargo, cuando pises uno de esos\n"
	.string "posos de arena... ¡Existe la posibilidad\l"
	.string "de que alguno de tus Pokémon resulte\l"
	.string "quemado, si no es que todos!\p"
	.string "¡Y hay algunos Entrenadores están\n"
	.string "esperando que te pase eso para\l"
	.string "atacarte en las peores condiciones!\p"
	.string "¡Espero hayas traído Antiquemar!$"

LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
	.string "¡Espero verte pronto!$"

LavaridgeTown_Gym_1F_Text_ColeIntro:
	.string "¡Auauauauauauuu!\n"
	.string "¡Ay, la arena estaba caliente!$"

LavaridgeTown_Gym_1F_Text_ColeDefeat:
	.string "No vale, me cegó mi sudor…$"

LavaridgeTown_Gym_1F_Text_ColePostBattle:
	.string "Supuestamente, esconderse\n"
	.string "en esta arena caliente mejora\l"
	.string "la circulación.\p"
	.string "¡Es muy efectivo para liberar\n"
	.string "el dolor articular!$"

LavaridgeTown_Gym_1F_Text_AxleIntro:
	.string "Estoy intentando desestresarme.\n"
	.string "¡No me arruines eso!$"

LavaridgeTown_Gym_1F_Text_AxleDefeat:
	.string "Flannery seguramente va a\n"
	.string "quemarte por completo, ¡No\l"
	.string "puedo esperar a que eso pase!$"

LavaridgeTown_Gym_1F_Text_AxlePostBattle:
	.string "Ahhh… Ufff…\p"
	.string "Acabaste conmigo…$"

LavaridgeTown_Gym_B1F_Text_KeeganIntro:
	.string "Debes estarte cansando, ¿no?.\n"
	.string "Que lástima que no estés\l"
	.string "acostumbrad{OA} a el calor de\l"
	.string "esta arena, o no te quemaría.\p"
	.string "¡Por eso mismo, ganaré!$"

LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
	.string "Play with fire, and be burned…$"

LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
	.string "Your skill is real…\n"
	.string "But our LEADER FLANNERY is strong.\p"
	.string "If you don't watch yourself, you'll be\n"
	.string "burned seriously.$"

LavaridgeTown_Gym_1F_Text_GeraldIntro:
	.string "Can your POKéMON withstand\n"
	.string "392-degree heat?$"

LavaridgeTown_Gym_1F_Text_GeraldDefeat:
	.string "It didn't burn hotly enough…$"

LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
	.string "The temperature of magma is\n"
	.string "392 degrees.\p"
	.string "Your POKéMON beat me, so they should\n"
	.string "easily survive in magma.$"

LavaridgeTown_Gym_1F_Text_DanielleIntro:
	.string "Um…\n"
	.string "Okay, I'll battle with you.$"

LavaridgeTown_Gym_1F_Text_DanielleDefeat:
	.string "Oh, but you're too strong.$"

LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
	.string "I'm going to be a pretty and strong\n"
	.string "TRAINER just like FLANNERY.$"

LavaridgeTown_Gym_B1F_Text_JaceIntro:
	.string "Come on, get with it!\n"
	.string "Let's go before my feelings cool!$"

LavaridgeTown_Gym_B1F_Text_JaceDefeat:
	.string "It's so hot, and yet my heart is\n"
	.string "clutched by ice…$"

LavaridgeTown_Gym_B1F_Text_JacePostBattle:
	.string "The way the battling spirit burns\n"
	.string "within you, you may stand a chance\l"
	.string "against our LEADER.$"

LavaridgeTown_Gym_B1F_Text_JeffIntro:
	.string "See how the flames blaze wildly?\n"
	.string "They flare in anticipation of my win!$"

LavaridgeTown_Gym_B1F_Text_JeffDefeat:
	.string "Something didn't go right.$"

LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
	.string "Well, so what? I say so what?\n"
	.string "I can walk on hot coals barefoot!\p"
	.string "…Don't even think about trying it!$"

LavaridgeTown_Gym_B1F_Text_EliIntro:
	.string "As much as I love mountains,\n"
	.string "I especially love volcanoes.$"

LavaridgeTown_Gym_B1F_Text_EliDefeat:
	.string "Well, it seems to me I lost without\n"
	.string "ever being in control.$"

LavaridgeTown_Gym_B1F_Text_EliPostBattle:
	.string "I stay here because I became a fan\n"
	.string "of FLANNERY's power.\p"
	.string "Hehehehe.$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro:
	.string "Welcome… No, wait.\p"
	.string "Puny TRAINER, how good to see you've\n"
	.string "made it here!\p"
	.string "I have been entrusted with the…\n"
	.string "No, wait.\p"
	.string "I am FLANNERY, and I'm the GYM\n"
	.string "LEADER here!\p"
	.string "Uh…\n"
	.string "Dare not underestimate me, though\l"
	.string "I have been LEADER only a short time!\p"
	.string "With skills inherited from my grand-\n"
	.string "father, I shall, uh…demonstrate the\l"
	.string "hot moves we have honed on this land!$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
	.string "Oh…\n"
	.string "I guess I was trying too hard…\p"
	.string "I… I've only recently become\n"
	.string "a GYM LEADER.\p"
	.string "I tried too hard to be someone\n"
	.string "I'm not.\p"
	.string "I have to do things my natural way. If\n"
	.string "I don't, my POKéMON will be confused.\p"
	.string "Thanks for teaching me that.\n"
	.string "For that, you deserve this.$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
	.string "{PLAYER} received the HEAT BADGE\n"
	.string "from FLANNERY.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
	.string "If you have a HEAT BADGE, all POKéMON\n"
	.string "up to Level 50, even those you get in\l"
	.string "trades from other people, will obey\l"
	.string "you completely.\p"
	.string "And, it lets POKéMON use the HM move\n"
	.string "STRENGTH outside of battle.\p"
	.string "This is a token of my appreciation.\n"
	.string "Don't be shy about taking it!$"

LavaridgeTown_Gym_1F_Text_ExplainOverheat:
	.string "That TM50 contains OVERHEAT.\p"
	.string "That move inflicts serious damage on\n"
	.string "the opponent.\p"
	.string "But it also sharply cuts the SP. ATK\n"
	.string "of the POKéMON using it. It might not\l"
	.string "be suitable for longer battles.$"

LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
	.string "Registered GYM LEADER FLANNERY\n"
	.string "in the POKéNAV.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
	.string "Your power reminds me of someone…\p"
	.string "Oh! I know! You battle like NORMAN,\n"
	.string "the GYM LEADER of PETALBURG.$"

LavaridgeTown_Gym_1F_Text_GymStatue:
	.string "LAVARIDGE TOWN POKéMON GYM$"

LavaridgeTown_Gym_1F_Text_GymStatueCertified:
	.string "LAVARIDGE TOWN POKéMON GYM\p"
	.string "FLANNERY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
	.string "FLANNERY: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love POKéMON.\n"
	.string "I love to battle.\l"
	.string "And… I love this GYM!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
	.string "Whew!\n"
	.string "On the verge of eruption!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
	.string "FLANNERY: I lost the match,\n"
	.string "but I'm completely satisfied.\p"
	.string "It's not often I get to enjoy a battle\n"
	.string "this heated.\p"
	.string "Let's have another one like this\n"
	.string "again sometime!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
	.string "FLANNERY: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love POKéMON.\n"
	.string "I love to battle.\l"
	.string "And… I love this GYM!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!\p"
	.string "Oh, wait. Do you only have one POKéMON\n"
	.string "that can battle?\p"
	.string "I hate to say this, but when you come\n"
	.string "see me, bring at least two POKéMON.$"
