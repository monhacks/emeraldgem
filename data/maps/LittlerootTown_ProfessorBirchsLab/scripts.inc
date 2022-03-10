.set LOCALID_AIDE, 1
.set LOCALID_BIRCH, 2
.set LOCALID_RIVAL, 3
.set LOCALID_BALL_CYNDAQUIL, 4
.set LOCALID_BALL_TOTODILE, 5
.set LOCALID_BALL_CHIKORITA, 6

LittlerootTown_ProfessorBirchsLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
	.byte 0

	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
	@ 1: Beat Elite Four, Dex upgrade ready
	@ 2: Received National Dex
	@ 3: Left lab after receiving National Dex
	@ 4: Entered lab after catching all Hoenn mons
	@ 5: Birch told player to choose Johto starter
	@ 6: Chose Johto starter

	@ State descriptions for VAR_BIRCH_LAB_STATE
	@ 1: Never occurs
	@ 2: Chose starter
	@ 3: Received starter in lab
	@ 4: Defeated rival on Route 103
	@ 5: Received pokedex

LittlerootTown_ProfessorBirchsLab_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call ProfBirch_EventScript_UpdateLocation
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
	end

LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
	specialvar VAR_RESULT, HasAllHoennMons
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
	setobjectxyperm LOCALID_RIVAL, 5, 10
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout

LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
	setobjectxyperm LOCALID_RIVAL, 5, 10
	end

LittlerootTown_ProfessorBirchsLab_OnWarp:
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
	.2byte 0

LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	addobject LOCALID_BIRCH
	addobject LOCALID_RIVAL
	turnobject LOCALID_RIVAL, DIR_NORTH
	setobjectxy LOCALID_RIVAL, 5, 5
	turnobject LOCALID_BIRCH, DIR_SOUTH
	setobjectxy LOCALID_BIRCH, 6, 4
	turnobject LOCALID_AIDE, DIR_EAST
	setobjectxy LOCALID_AIDE, 10, 10
	end

LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
	addobject LOCALID_RIVAL
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
	addobject LOCALID_BALL_CYNDAQUIL
	addobject LOCALID_BALL_TOTODILE
	addobject LOCALID_BALL_CHIKORITA
	addobject LOCALID_RIVAL
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
	turnobject LOCALID_BIRCH, DIR_SOUTH
	setobjectxy LOCALID_BIRCH, 6, 4
	turnobject LOCALID_RIVAL, DIR_EAST
	setobjectxy LOCALID_RIVAL, 5, 5
	end

LittlerootTown_ProfessorBirchsLab_OnFrame:
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
	.2byte 0

@ The starter is technically given prior to this on Route 101 by special ChooseStarter
@ This is just where the game tells you its yours and lets you nickname it
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
	lockall
	bufferleadmonspeciesname STR_VAR_1
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
	end

LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_DEFAULT
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_1
	setflag FLAG_SYS_QUEST_MENU_GET
	playfanfare MUS_OBTAIN_ITEM
	questmenu QUEST_MENU_SET_ACTIVE SIDE_QUEST_1
	questmenu QUEST_MENU_BUFFER_QUEST_NAME SIDE_QUEST_1
	setflag FLAG_OMNIJUMP_UPGRADE
	message MisionObtenida
	waitfanfare
	msgbox LittlerootTown_EsUnaMision, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_ROUTE_101_BOY
	setvar VAR_BIRCH_LAB_STATE, 3
	releaseall
	end
MisionObtenida:
	.string "¡La misión {COLOR LIGHT_RED SHADOW RED}“{STR_VAR_1}”{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
	.string "ha sido desbloqueada!$"

LittlerootTown_EsUnaMision:
	.string "Profe Birch: Acabo de darte una {COLOR BLUE}Misión{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\n"
	.string "Las misiones son objetivos que las\l"
	.string "personas en Hoenn te darán, y que, al\l"
	.string "cumplirse, te regalarán una\l"
	.string "{COLOR LIGHT_RED SHADOW RED}recompensa{COLOR DARK_GRAY SHADOW LIGHT_GRAY}, que será más grande o más\l"
	.string "pequeña dependiendo de la {COLOR LIGHT_RED SHADOW RED}dificultad{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\p"
	.string "Esta vez, la misión es ir a buscar a\n"
	.string "{RIVAL} en la Ruta 103.\p"
	.string "Podrás revisarlas en el Menú Start.$"

LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_ROUTE_101_BOY
	setvar VAR_BIRCH_LAB_STATE, 3
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
	waitmovement 0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
	end

LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
	lockall
	delay 30
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
	waitmovement 0
	delay 20
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 20
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
	playse SE_PC_ON
	waitse
	delay 20
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
	waitmessage
	waitfanfare
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
	closemessage
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
	closemessage
	return

LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_in_place_faster_down
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end


LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
	lockall
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_2
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2
	releaseall
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1:
	setflag FLAG_BIRCH_AIDE_MET
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_2:
	goto_if_unset FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2
	releaseall
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5:
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_0, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	closemessage
	delay 120
	fadescreen FADE_FROM_BLACK
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_1, MSGBOX_AUTOCLOSE
	releaseall
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_0:
	.string "¿El Profe…? No está aquí, se fue a\n"
	.string "hacer trabajo de campo. ¡Oh! ¡Déjame\l"
	.string "explicarte qué es eso!\p"
	.string "Pues verás, el trabajo de campo es\n"
	.string "cuando………………\n"
	.string "………………………\l"
	.string "$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_1:
	.string "¡Y eso es todo! ¡Gracias por escuchar!$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2:
	.string "¡El Profe aprecia mucho la ayuda de\n"
	.string "{RIVAL}, aunque no lo demuestre!$"


LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
	release
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
	release
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
	release
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
	end

LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
	givemon SPECIES_CYNDAQUIL, 5, ITEM_NONE
	goto_if_eq VAR_RESULT, 0, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
	goto_if_eq VAR_RESULT, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BALL_CYNDAQUIL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BALL_CYNDAQUIL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
	end

LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	setvar VAR_TEMP_1, SPECIES_TOTODILE
	givemon SPECIES_TOTODILE, 5, ITEM_NONE
	goto_if_eq VAR_RESULT, 0, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
	goto_if_eq VAR_RESULT, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BALL_TOTODILE
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BALL_TOTODILE
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
	end

LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
	givemon SPECIES_CHIKORITA, 5, ITEM_NONE
	goto_if_eq VAR_RESULT, 0, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
	goto_if_eq VAR_RESULT, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BALL_CHIKORITA
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BALL_CHIKORITA
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
	waitmessage
	waitfanfare
	return

LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
	lock
	faceplayer
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
	end

LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
	release
	end

EventScript_RegisterProfBirch::
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	setvar VAR_REGISTER_BIRCH_STATE, 2
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
	giveitem ITEM_ORAN_BERRY, 5
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_2
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_5
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_6
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_8
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_11
	msgbox TeHeDadoMas, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
	setvar VAR_BIRCH_LAB_STATE, 5
	setflag FLAG_ADVENTURE_STARTED
	setvar VAR_OLDALE_TOWN_STATE, 1
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
	releaseall
	end

TeHeDadoMas:
	.string "Profe Birch: Te he dado algunas\n"
	.string "misiones más, {PLAYER}, ¡Estoy seguro\l"
	.string "que podrás completarlas!\p"
	.string "Una vez lo hagas, ¡puedes volver\n"
	.string "conmigo para recompensarte y darte\l"
	.string "otras!$"

LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 30
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
	setvar VAR_RESULT, 1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	special EnableNationalPokedex
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
	walk_down
	walk_in_place_faster_left
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
	lock
	faceplayer
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_PC::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Book::
	questmenu QUEST_MENU_CHECK_COMPLETE SIDE_QUEST_3  
	goto_if_eq VAR_RESULT, TRUE, 
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_3
	msgbox Descubrire_Verdad, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Book_ReRead:
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookNotTooHardToRead, MSGBOX_SIGN
	end
LittlerootTown_ProfessorBirchsLab_Text_BookNotTooHardToRead:
	.string "El libro… Ya no es difícil de leer.\p"
	.string "“Querido diario, un Pokémon que\n"
	.string "cambiaba de forma atacó la ciudad.\l"
	.string "¿Cómo se veía realmente?\p"
	.string "No pude decifrarlo. Pero con ayuda de\n"
	.string "Alex, Dai, Norman y de Carlos, logramos\l"
	.string "derrotale. Aún desconozco qué Pokémon\l"
	.string "era, pero sospecho que era\l"
	.string "proveniente de otra región…\p"
	.string "Ellos dicen que es mejor así, pero yo\n"
	.string "no estoy de acuerdo. Dedicaré mi vida\l"
	.string "a ello si hace falta, pero encontraré\l"
	.string "a ese Pokémon y lo estudiaré.\l"
	.string "Esta… Es la motivación que me\l"
	.string "faltaba para hacerlo…\p"
	.string "Seré un Profesor Pokemon.”\p"
	.string "Eso… Es lo que decía…$"
Descubrire_Verdad:
	.string "… … … … … … … … …\n"
	.string "… … … … … … … … …\l"
	.string "… … … … … … … … …\p"
	.string "Descubriré la verdad.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
	lockall
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
	waitmessage
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
	.string "Hunh? PROF. BIRCH?\p"
	.string "The PROF's away on fieldwork.\n"
	.string "Ergo, he isn't here.\p"
	.string "Oh, let me explain what fieldwork is.\p"
	.string "It is to study things in the natural\n"
	.string "environment, like fields and mountains,\l"
	.string "instead of a laboratory.\p"
	.string "The PROF isn't one for doing desk work.\n"
	.string "He's the type of person who would\l"
	.string "rather go outside and experience\l"
	.string "things than read about them here.$"

LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
	.string "The PROF isn't one for doing desk work.\n"
	.string "He's the type of person who would\l"
	.string "rather go outside and experience\l"
	.string "things than read about them here.$"

LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
	.string "PROF. BIRCH is studying the habitats\n"
	.string "and distribution of POKéMON.\p"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
	.string "There's a lot of love there.$"

LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
	.string "Profe Birch: Así que, {PLAYER}, veo\n"
	.string "que lo que tu padre dice de tí es\l"
	.string "cierto… Tienes la inusual capacidad de\l"
	.string "{COLOR BLUE}saber los movimientos de los Pokémon a\l"
	.string "primera vista{COLOR DARK_GRAY}, algo que nunca había\l"
	.string "visto en otra persona…\p"
	.string "Pues, gracias a eso, ¡Te regalaré el\n"
	.string "Pokémon que atrapaste antes!\p"
	.string "¡{PLAYER} receivió un {COLOR LIGHT_RED SHADOW RED}{STR_VAR_1}{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
	.string "de manos del Profesor!$"

LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
	.string "PROF. BIRCH: While you're at it, why not\n"
	.string "give a nickname to that {STR_VAR_1}?$"

LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
	.string "Profe Birch: Entonces, {PLAYER}, tú y\n"
	.string "tu {STR_VAR_1} parecen muy unidos,\l"
	.string "¡Incluso aunque se conocieran hoy!\p"
	.string "{RIVAL} está estudiando en la Ruta\n"
	.string "103, quiere atrapar a todos los\l"
	.string "Pokémon nuevos que aparecieron allí.\l"
	.string "¡Te contaré más detalles de eso luego!$"

LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
	.string "PROF. BIRCH: Great!\n"
	.string "{RIVAL} should be happy, too.\p"
	.string "Get {RIVAL} to teach you what it\n"
	.string "means to be a TRAINER.$"

LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
	.string "PROF. BIRCH: Oh, don't be that way.\n"
	.string "You should go meet my kid.$"

LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
	.string "Profe Birch: ¿{RIVAL}?\p"
	.string "Está en su casa, creo.\p"
	.string "O quizá no…$"

LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
	.string "Profe Birch: ¡{PLAYER}! ¡Escuché que\n"
	.string "venciste el equipo de {RIVAL}…!\p"
	.string "¡IMPRESIONANTE!\n"
	.string "{RIVAL} me ha estado ayudando a \l"
	.string "investigar, y ¡Aún con su\l"
	.string "experiencia le has ganado! ¡JA!\p"
	.string "Me sorprendes, {PLAYER}, así que,\n"
	.string "toma esto.$"

LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
	.string "¡{PLAYER} recibió la {COLOR GREEN}Pokédex{COLOR DARK_GRAY}!$"

LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
	.string "Profe Birch: Pues ahora te explicaré lo\n"
	.string "que te prometí, {PLAYER}.\p"
	.string "Muchos Pokémon han estado {COLOR BLUE}migrando\n"
	.string "misteriosamente a Hoenn{COLOR DARK_GRAY}. Y yo estoy\l"
	.string "intentando investigar la razón.\p"
	.string "Por esa razón, {PLAYER}, tu Pokédex\n"
	.string "tiene acceso al {COLOR LIGHT_RED SHADOW RED}Modo Nacional{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\l"
	.string "Necesito tu ayuda, y la de {RIVAL},\l"
	.string "para cumplir esta misión. Deberás\l"
	.string "atrapar Pokémon, rellenar la Pokédex y\l"
	.string "viajar por toda Hoenn, conociendo\l"
	.string "personas, Pokémon y distintas formas\l"
	.string "de ver el mundo. Cuando lo hagas, te\l"
	.string "recompensaré enormemente.\p"
	.string "¡Además! ¡Aquí quienes una recompensa\n"
	.string "por la misión que te di antes!$"

LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
	.string "Profe Birch: ¡Ve!\n"
	.string "¡A la aventura!$"

LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
	.string "{RIVAL}: ..........\n"
	.string "¡Eh!\p"
	.string "{PLAYER}... Bien- ¡bien hecho!\p"
	.string "Creo que deberías tener esto para...\n"
	.string "ayudar en la investigación.$"

LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
	.string "{RIVAL}: Ayudar a mi padre es algo\n"
	.string "muy importante para mi… No quiero que\l"
	.string "te-\l"
	.string "… Lastimes… Sí, eso.$"

LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
	.string "que carajos.$"

LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
	.string "¿No tienes nada mejor que hacer?$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
	.string "{RIVAL}: ..........\n"
	.string "¡Ah, si!\p"
	.string "... Em... Buen... ¿traba...jo?\p"
	.string "Creo que deberías tener esto para...\n"
	.string "ayudar...me... en la investigación.$"

LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
	.string "{RIVAL}: Ayudar a mi padre es algo\n"
	.string "muy importante para mi… No te quiero\l"
	.string "metiéndote en-\l"
	.string "problemas. Sí, no te metas en\l"
	.string "problemas…$"


LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
	.string "que mierda.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
	.string "{RIVAL}:…$"

LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
	.string "Una… ¿Máquina?\n"
	.string "Me pregunto qué hace.$"

LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
	.string "Es un PC. Mejor lo dejo así.$"

LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
	.string "Hay muchísimos libros.$"

LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
	.string "Es… Un libro difícil de leer…\p"
	.string "“Querido diario, un ?ok???n que\n"
	.string "?????aba ?e ?or?? atacó la ciudad.\l"
	.string "¿Cómo se ve?a r?almen?e?\p"
	.string "No pude decifrarlo. Pero con ayuda de\n"
	.string "Al??, ?a?, Nor??? y de Ca??o?, logramos\l"
	.string "derrotale. Aún desconozco qué P???m??\l"
	.string "era, pero sos??cho qu? er?\l"
	.string "prov???ente de ???? r???ó?…\p"
	.string "Ell?s d???n ?u? e? m?j?? ???………………”\p"
	.string "El resto de el libro es indescifrable.$"

LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
	.string "PROF. BIRCH: Now…\p"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
	.string "of you help me study POKéMON.\p"
	.string "Thanks to your help, new facts\n"
	.string "are coming to light.\p"
	.string "It appears that in the HOENN region,\n"
	.string "there are also POKéMON from other\l"
	.string "regions.\p"
	.string "It goes to show how rich and varied\n"
	.string "the natural environments of HOENN\l"
	.string "happen to be.\p"
	.string "That's why I think it's necessary for\n"
	.string "me to upgrade your POKéDEX to\l"
	.string "the NATIONAL Mode.\p"
	.string "Here, let me see your POKéDEX units.$"

LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
	.string "MAY: Eheheh!\p"
	.string "It's so cool that even my POKéDEX\n"
	.string "is getting updated!\p"
	.string "It's because you went out and caught\n"
	.string "so many POKéMON, {PLAYER}{KUN}!$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
	.string "BRENDAN: I went out all over HOENN\n"
	.string "and checked out POKéMON.\p"
	.string "You can thank me for getting\n"
	.string "the NATIONAL Mode POKéDEX.\p"
	.string "Yep, you're lucky, {PLAYER}!$"

LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
	.string "PROF. BIRCH: Okay, all done!$"

LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
	.string "{PLAYER}'s POKéDEX was upgraded\n"
	.string "to the NATIONAL Mode!$"

LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
	.string "PROF. BIRCH: But listen.\n"
	.string "You've become the CHAMPION,\l"
	.string "but your POKéMON journey isn't over.\p"
	.string "There is no end to the road\n"
	.string "that is POKéMON.\p"
	.string "Somewhere, there is a grassy patch\n"
	.string "that's waiting for you!$"

LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
	.string "MAY: I think I'll take a short break\n"
	.string "from fieldwork.\p"
	.string "I think I'll help the PROF here for\n"
	.string "a while.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
	.string "BRENDAN: For the time being,\n"
	.string "I'm taking a break from fieldwork.\p"
	.string "I'll be helping out the PROF here\n"
	.string "for a while.$"

LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
	.string "Let's have a look at your POKéDEX.\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Yes, there's no doubt about it.\p"
	.string "You really have completed the HOENN\n"
	.string "region's POKéDEX.\p"
	.string "That's more than just impressive.\p"
	.string "I have a gift for you.\p"
	.string "Consider it my show of appreciation\n"
	.string "for the fantastic work you've done.\p"
	.string "My gift is a rare POKéMON only found\n"
	.string "in another region!\p"
	.string "You can have any one of these\n"
	.string "three POKéMON!$"

LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
	.string "PROF. BIRCH: These are rare POKéMON\n"
	.string "only found in another region!\p"
	.string "You can have any one of these\n"
	.string "three POKéMON!$"

LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
	.string "PROF. BIRCH: The FIRE POKéMON\n"
	.string "CYNDAQUIL caught your eye!\p"
	.string "You're as sharp as ever!\p"
	.string "So the CYNDAQUIL is your choice?$"

LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
	.string "PROF. BIRCH: The WATER POKéMON\n"
	.string "TOTODILE is your choice!\p"
	.string "You know how to pick a good one.\p"
	.string "So, you'll take the TOTODILE?$"

LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
	.string "PROF. BIRCH: The GRASS POKéMON\n"
	.string "CHIKORITA is your choice!\p"
	.string "You sure know what you're doing.\p"
	.string "So, you'll take the CHIKORITA?$"

LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
	.string "PROF. BIRCH: Take your time before\n"
	.string "you decide.\p"
	.string "They're all invaluable POKéMON.$"

@ Unused
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
	.string "PROF. BIRCH: I see!\n"
	.string "You picked a fine POKéMON!$"

LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from PROF. BIRCH!$"

@ Unused
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
	.string "Want to give a nickname to\n"
	.string "the {STR_VAR_1} you received?$"

LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
	.string "You've completed the HOENN POKéDEX,\l"
	.string "but your POKéMON journey isn't over.\p"
	.string "There is no end to the road\n"
	.string "that is POKéMON.\p"
	.string "Somewhere, there is a grassy patch\n"
	.string "that's waiting for you!$"

LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
	.string "You received the promised POKéMON.\n"
	.string "Better leave the others alone.$"

@ Unused
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
	.string "Oh, you don't have any room for\n"
	.string "this POKéMON.$"

LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
	.string "MAY: {PLAYER}{KUN}, after this…\n"
	.string "What are you going to do?\p"
	.string "Are you going to keep battling\n"
	.string "and sharpening your skills?\p"
	.string "Or are you going to try filling\n"
	.string "the NATIONAL POKéDEX?\p"
	.string "I'm staying here to help the PROF.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
	.string "BRENDAN: Rather than collecting\n"
	.string "POKéMON, I prefer slowly and \l"
	.string "steadily raising the one I chose.$"

LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
	.string "Have you gone to that place,\l"
	.string "the BATTLE FRONTIER?$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
	.string "BRENDAN: Hey, {PLAYER}!\n"
	.string "Have you gone out to that place,\l"
	.string "the BATTLE FRONTIER?$"

LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
	.string "It's me, SCOTT.\p"
	.string "I'm aboard the S.S. TIDAL now.\n"
	.string "It feels great to be on the sea!\p"
	.string "By the way…\p"
	.string "There's this place that I'd like to\n"
	.string "invite you to for a visit.\p"
	.string "If you're interested, board a ferry\n"
	.string "at either SLATEPORT or LILYCOVE.\p"
	.string "I'll fill you in on the details when\n"
	.string "we meet. I'll be waiting!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"
