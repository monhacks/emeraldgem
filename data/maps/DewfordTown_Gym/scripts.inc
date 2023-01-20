DewfordTown_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
	.byte 0

DewfordTown_Gym_OnTransition:
	call DewfordTown_Gym_EventScript_SetFlashLevel
	end

DewfordTown_Gym_EventScript_SetFlashLevel::
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
	goto DewfordTown_Gym_EventScript_SetFlashLevel1

DewfordTown_Gym_EventScript_SetLightsOn::
	setflashlevel 0
	return

@ Brightest
DewfordTown_Gym_EventScript_SetFlashLevel1::
	setflashlevel 1
	return

DewfordTown_Gym_EventScript_SetFlashLevel2::
	setflashlevel 2
	return

DewfordTown_Gym_EventScript_SetFlashLevel3::
	setflashlevel 3
	return

DewfordTown_Gym_EventScript_SetFlashLevel4::
	setflashlevel 4
	return

DewfordTown_Gym_EventScript_SetFlashLevel5::
	setflashlevel 5
	return

DewfordTown_Gym_EventScript_SetFlashLevel6::
	setflashlevel 6
	return

@ Darkest
DewfordTown_Gym_EventScript_SetFlashLevel7::
	setflashlevel 7
	return

DewfordTown_Gym_EventScript_BrightenRoom::
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	nop1
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers

DewfordTown_Gym_EventScript_NoLightChange::
	return

@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
	playse SE_SWITCH
	animateflash 6
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
	playse SE_SWITCH
	animateflash 5
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
	playse SE_SWITCH
	animateflash 4
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
	playse SE_SWITCH
	animateflash 3
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
	playse SE_SWITCH
	animateflash 2
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
	playse SE_SWITCH
	animateflash 1
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
	playse SE_SWITCH
	animateflash 0
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckJocelyn::
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLaura::
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckBrenden::
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckCristian::
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLilith::
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_StopCountingTrainers::
	return

DewfordTown_Gym_EventScript_Brawly::
	lockall
	faceplayer
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_Rematch
	setflag FLAG_STARTED_BOSS
	special SavePlayerParty
	deletepokemon 1
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM08, DewfordTown_Gym_EventScript_GiveBulkUp2
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_Brawly_Rematch::
	lockall
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_Brawly_Rematch_2
	switch VAR_BRAWLY_REMATCH
	case 0, DewfordTown_Gym_EventScript_Brawly_Rematch_2
	case 1, DewfordTown_Gym_EventScript_Brawly_Rematch_3
	case 2, DewfordTown_Gym_EventScript_Brawly_Rematch_4
	case 3, DewfordTown_Gym_EventScript_Brawly_Rematch_5
	case 4, DewfordTown_Gym_EventScript_Brawly_Rematch_6
	case 5, DewfordTown_Gym_EventScript_Brawly_Rematch_7
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	setvar VAR_BRAWLY_REMATCH, 1
	release
	end


DewfordTown_Gym_EventScript_Brawly_Rematch_2:
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_Brawly_Rematch_3:
	setflag FLAG_STARTED_BOSS
	special SavePlayerParty
	deletepokemon 4
	trainerbattle_double TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyIntro2, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough , DewfordTown_Gym_EventScript_BrawlyDefeated2
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
	return

DewfordTown_Gym_EventScript_Brawly_Rematch_4:
	setflag FLAG_STARTED_BOSS
	special SavePlayerParty
	deletepokemon 2
	trainerbattle_double TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyIntro3, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated2
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
	return

DewfordTown_Gym_EventScript_Brawly_Rematch_5:
	setflag FLAG_STARTED_BOSS
	special SavePlayerParty
	deletepokemon 4
	trainerbattle_double TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyIntro4, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated31
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
	return

DewfordTown_Gym_EventScript_Brawly_Rematch_6:
	setflag FLAG_STARTED_BOSS
	special SavePlayerParty
	deletepokemon 4
	trainerbattle_double TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyIntro5, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated3
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
	return

DewfordTown_Gym_EventScript_Brawly_Rematch_7:
	setflag FLAG_STARTED_BOSS
	special TakeAwayItemsAndBerries
	trainerbattle_double TRAINER_BRAWLY_6, DewfordTown_Gym_Text_BrawlyIntro6, DewfordTown_Gym_Text_BrawlyDefeat3, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated4
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
	return

DewfordTown_Gym_Text_BrawlyIntro2:
	.string "¡Hell yes!\n¡He estado entrenando\larduamente para este momento!\p¡Luchemos 4vs4!\p¡Ahora presenciarás el poder\nabrumador del Líder surfista!$"

DewfordTown_Gym_Text_BrawlyIntro3:
	.string "¡Hell yes!\n¡He ido al fondo del océano,\la prepararme para este momento!\p¡Two versus Four, let's go!\p¡Ahora presenciarás el poder abrumador\nde quien ha visto el océano!$"

DewfordTown_Gym_Text_BrawlyIntro4:
	.string "¡Wooohhh!\n¡Let's go, bro, four versus six!\p¡Luchemos con el poder abismal\nque mi cuerpo posee!$"

DewfordTown_Gym_Text_BrawlyIntro5:
	.string "¡Wooohhh!\n¡Luchar junto a tí sigue\lsiendo el mejor entrenamiento\lque haya tenido!\p¡La fuerza de mis Pokémon\nte hará naufragar!$"

DewfordTown_Gym_Text_BrawlyIntro6:
	.string "¡Fuck yeah!\p¡Arrasemos con todo lo\nque exista con una ola\labismal de poder Tipo Lucha!\p¡Batallemos, seis contra seis,\nsin objetos, nada!\p¡Verás el tsunami que causa mi poder!$"

DewfordTown_Gym_Text_BrawlyDefeat2:
	.string "¡Aún después de tan duro\nentrenamiento, mi poder sigue sin\lcompararse al tuyo!$"

DewfordTown_Gym_Text_BrawlyDefeat3:
	.string "¡Yeah!\n¡Fuck yeah!\p¡Tal poder me ha empapado!\n¡Luchar contigo es lo mejor!$"

DewfordTown_Gym_Text_BrawlyPostBattle2:
	.string "¡Tu poder no parece tener límites,\namig{OA}, eres increíble!\l¡Aquí algo para que me recuerdes!\p¡Para la próxima no me contendré!$"

DewfordTown_Gym_Text_BrawlyPostBattle3:
	.string "¡Incluso con tales limitaciones,\nme ganaste de nuevo!\p¡You rock, dude, you really do!\n¡Por eso, aquí tienes esto!$"

DewfordTown_Gym_Text_BrawlyPostBattle4:
	.string "¡Nunca he tenido tal batalla!\p¡You fucking rule, dude!\nDéjame darte algo a cambio de\ltal batalla.$"

DewfordTown_Gym_Text_BrawlyPostBattle5:
	.string "¡Son puntos de batalla!\p¡Cámbialos por genialidades en\nel Frente Batalla.\p¡Ojalá nos veamos de nuevo!$"


DewfordTown_Gym_EventScript_BrawlyDefeated2::
	savepartofteam
	special LoadPlayerParty
	loadpartofteam
	addvar VAR_BRAWLY_REMATCH, 1
	clearflag FLAG_DEFEATED_DEWFORD_GYM
	clearflag FLAG_STARTED_BOSS
	message RecoveredPokemon
	waitmessage
	delay 32
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle2
	giveitem ITEM_TM93
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated3::
	savepartofteam
	special LoadPlayerParty
	loadpartofteam
	addvar VAR_BRAWLY_REMATCH, 1
	message RecoveredPokemon
	waitmessage
	delay 32
	clearflag FLAG_DEFEATED_DEWFORD_GYM
	clearflag FLAG_STARTED_BOSS
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle3
	giveitem ITEM_TM60
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated31::
	savepartofteam
	special LoadPlayerParty
	loadpartofteam
	setvar VAR_BRAWLY_REMATCH, 10
	message RecoveredPokemon
	waitmessage
	delay 32
	clearflag FLAG_DEFEATED_DEWFORD_GYM
	clearflag FLAG_STARTED_BOSS
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle3
	giveitem ITEM_TM60
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated4::
	setvar VAR_BRAWLY_REMATCH, 10
	special GiveBackItemsAndBerries
	clearflag FLAG_DEFEATED_DEWFORD_GYM
	clearflag FLAG_STARTED_BOSS
	message RecoveredItems
	waitmessage
	closemessage
	delay 64
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle4
	special ShowBattlePointsWindow
	delay 64
	setvar VAR_0x8004, 2000
	special GiveFrontierBattlePoints
	special UpdateBattlePointsWindow
	playse SE_SHOP
	waitse
	delay 120
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle5
	special CloseBattlePointsWindow
	closemessage
	release
	end

DewfordTown_Gym_EventScript_BrawlyNotEnough::
	savepartofteam
	special LoadPlayerParty
	loadpartofteam
	special GiveBackItemsAndBerries
	clearflag FLAG_DEFEATED_DEWFORD_GYM
	clearflag FLAG_STARTED_BOSS
	msgbox DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated::
	savepartofteam
	special LoadPlayerParty
	loadpartofteam
	clearflag FLAG_STARTED_BOSS
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	call DewfordTown_Gym_EventScript_GiveBulkUp
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	release
	end

DewfordTown_Gym_EventScript_GiveBulkUp::
	giveitem ITEM_TM08
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM08
	return

DewfordTown_Gym_EventScript_GiveBulkUp2:
	giveitem ITEM_TM08
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM08
	release
	end

DewfordTown_Gym_EventScript_BrawlyRematch::
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_TakaoBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_JocelynBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LauraBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_BrendenBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_CristianBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LilithBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string "¡Hola, {PLAYER}!\pComo sabrás, cada Gimnasio tiene un\nrequisito o condición para\lpoder ser enfrentado.\p"
	.string "Este no es la excepción.\pLa condición que has de cumplir\naquí es simple:\l{COLOR BLUE}Derrota al Líder del Gimnasio usando\lsólo el primer Pokémon de tu Equipo{COLOR DARK_GRAY}.\p"
	.string "No hay otra restricción, se te permite\nusar cuantos objetos quieras.\lIncluso, ¡Curaré a tus Pokémon ahora\lpara que no te preocupes por eso!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "¡Buena suerte, Joven Promesa!$"

DewfordTown_Gym_Text_TakaoIntro:
	.string "Might is right!\n"
	.string "Come on!$"

DewfordTown_Gym_Text_TakaoDefeat:
	.string "Not enough power…$"

DewfordTown_Gym_Text_TakaoPostBattle:
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

DewfordTown_Gym_Text_JocelynIntro:
	.string "There's no need for BRAWLY to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

DewfordTown_Gym_Text_JocelynDefeat:
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle:
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a GYM LEADER…\p"
	.string "No, I'll become the POKéMON LEAGUE\n"
	.string "CHAMPION!$"

DewfordTown_Gym_Text_LauraIntro:
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

DewfordTown_Gym_Text_LauraDefeat:
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle:
	.string "I battle in the dark to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see BRAWLY's face…$"

DewfordTown_Gym_Text_LilithIntro:
	.string "Ufufu…\n"
	.string "Are you stumbling around in the dark?$"

DewfordTown_Gym_Text_LilithDefeat:
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle:
	.string "You deserve to stay lost and end up\n"
	.string "back at the entrance again!$"

DewfordTown_Gym_Text_BrendenIntro:
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

DewfordTown_Gym_Text_BrendenDefeat:
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

DewfordTown_Gym_Text_BrendenPostBattle:
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our GYM LEADER.$"

DewfordTown_Gym_Text_CristianIntro:
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

DewfordTown_Gym_Text_CristianDefeat:
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

DewfordTown_Gym_Text_CristianPostBattle:
	.string "You win!\n"
	.string "Go after that BADGE!$"

DewfordTown_Gym_Text_BrawlyIntro:
	.string "¡Soy Brawly!\n"
	.string "¡El Líder surfista de Dewford!\p"
	.string "En estos lares, cientos de olas\n"
	.string "han fortalecido mi cuerpo y mente,\l"
	.string "¡Hasta niveles inimaginables!\p"
	.string "Así que si quieres vencerme, ¡Tendrás\n"
	.string "que vencerme usando sólo a tu\lcompañero más querido,\ligual que Makuhita y yo en las olas!$"

DewfordTown_Gym_Text_BrawlyDefeat:
	.string "¡Yeah! ¡No me esperaba un poder\n"
	.string "de salpicadura tan abrumador!\p"
	.string "¡Hell yeah!\p"
	.string "¡Mereces esta Medalla!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge:
	.string "{PLAYER} recibió la Medalla Puño.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
	.string "La Medalla Puño te permitirá entrenar\na Pokémon de hasta nivel 30.\pAdemás, déjame darte esta MT.$"

DewfordTown_Gym_Text_ExplainBulkUp:
	.string "Esa MT contiene el movimiento\nCorpulencia, que sube Ataque y Defensa.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly:
	.string "¡Brawly se registró en el PokéNav!$"

DewfordTown_Gym_Text_BrawlyPostBattle:
	.string "¡Puedo verte convirtiéndote\nen lo más grande!\p¡No habrá ola que no puedas montar!$"

DewfordTown_Gym_Text_GymStatue:
	.string "GIMNASIO DE CIUDAD DEWFORD\pEntrenadores reconocidos:\nLeaf\l{RIVAL}$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string "GIMNASIO DE CIUDAD DEWFORD\pEntrenadores reconocidos:\nLeaf\l{RIVAL}\l{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch:
	.string "Una nueva era de olas se avecina,\n¡Hora de demostrarme qué\ntan buen{A} surfista eres!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat:
	.string "¡Hell yeah!\n"
	.string "¡Sigues mejorando!$"

DewfordTown_Gym_Text_BrawlyPostRematch:
	.string "Las batallas son complicadas,\ny profundas, ¡Tanto como el mar!\p¡Amaría ver el fondo del océano\ny entender a los Pokémon de allí!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
	.string "Una ola se lleva la arena, pero,\nal final, siempre vuelve a la orilla.\p"
	.string "Una realidad que el mar me enseñó,\npero una batalla 2vs1 es injusta,\l¡Vuelve con dos compañeros,\ly surfearemos juntos el mar\lde la vida, yeah!$"
