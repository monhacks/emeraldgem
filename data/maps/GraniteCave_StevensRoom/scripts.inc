.set LOCALID_STEVEN, 1

GraniteCave_StevensRoom_MapScripts::
	 map_script MAP_SCRIPT_ON_LOAD, GraniteCave_StevensRoom_CoverItAll 
	.byte 0

GraniteCave_StevensRoom_CoverItAll::
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_StevensRoom_UnCoverItAll
	setmetatile 14, 9, METATILE_Cave_Mountain_BottomMid, TRUE
	setmetatile 15, 9, METATILE_Cave_Mountain_BottomMid, TRUE
	setmetatile 16, 9, METATILE_Cave_Mountain_BottomMid, TRUE
	setmetatile 14, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 15, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 16, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	special DrawWholeMapView
	release
	end

GraniteCave_StevensRoom_UnCoverItAll::
	setmetatile 14, 9, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
	setmetatile 15, 9, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
	setmetatile 16, 9, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
	setmetatile 14, 10, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
	setmetatile 15, 10, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
	setmetatile 16, 10, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
	special DrawWholeMapView
	release
	end

GraniteCave_Braille_1::
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_Braille_1_Done
	braillemsgbox GraniteCave_Braille_1Text
	goto GraniteCave_Braille_Check
	release
	end

GraniteCave_Braille_2::
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_Braille_1_Done
	braillemsgbox GraniteCave_Braille_2Text
	goto GraniteCave_Braille_Check
	release
	end

GraniteCave_Braille_Check::
	setvar 0x8005, SPECIES_REGICE
	special CheckSpecies
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_Braille_None
	setvar 0x8005, SPECIES_REGIROCK
	special CheckSpecies
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_Braille_None
	setvar 0x8005, SPECIES_REGISTEEL
	special CheckSpecies
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_Braille_None
	setvar 0x8005, SPECIES_REGIDRAGO
	special CheckSpecies
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_Braille_None
	setvar 0x8005, SPECIES_REGIELEKI
	special CheckSpecies
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_Braille_None
	setvar VAR_0x8004, 2 
	setvar VAR_0x8005, 2 
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 4
	special ShakeCamera
	waitstate
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	setvar VAR_0x8004, 4
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, 6
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	delay 30
	setvar VAR_0x8004, 6
	setvar VAR_0x8005, 6
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 2
	special ShakeCamera
	waitstate
	delay 30
	playse SE_DOOR
	setmetatile 14, 9, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
	setmetatile 15, 9, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
	setmetatile 16, 9, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
	setmetatile 14, 10, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
	setmetatile 15, 10, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
	setmetatile 16, 10, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
	special DrawWholeMapView
	setflag FLAG_REGIGIGAS_UNLOCKED
	message GraniteCave_StevensRoom_Text_Done
	delay 35
	closemessage
	release
	end

GraniteCave_Braille_1_Done::
	msgbox GraniteCave_StevensRoom_Text_Done
	release
	end

GraniteCave_StevensRoom_Text_Done:
	.string "¡Una puerta se abrió!$"

GraniteCave_Braille_None::
	release
	end

GraniteCave_StevensRoom_EventScript_Steven::
	lock
	faceplayer
	namebox Unknown
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
	namebox Steven
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe2, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	setvar VAR_0x8004, ITEM_LETTER
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_DELIVERED_STEVEN_LETTER
	namebox Steven
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
	hidenamebox
	closemessage
	giveitem ITEM_TM47
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
	namebox Steven
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	namebox Steven
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	playse SE_EXIT
	removeobject LOCALID_STEVEN
	release
	end

GraniteCave_StevensRoom_EventScript_StevenExitNorth::
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitSouth::
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_BagFull::
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
	return

GraniteCave_StevensRoom_Movement_StevenExit:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

GraniteCave_StevensRoom_Movement_StevenExitSouth:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
	.string "Ah, ¡Hola, mi nombre es {COLOR BLUE}Steven{COLOR DARK_GRAY}.$"

GraniteCave_StevensRoom_Text_ImStevenLetterForMe2:
	.string "Me interesa la geología, y la historia\n"
	.string "que Hoenn tiene para contar, por eso\l"
	.string "vine a esta cueva.\p"
	.string "Estas rocas aquí datan de hace más de\n"
	.string "10.000 años, y parecen estar llenas de\l"
	.string "algún tipo de energía de gran poder.\p"
	.string "Ah, ¿Una carta para mí?\p"
	.string "Ja, ¿Porqué lo dices así? Parece que me\n"
	.string "estuvieras callando.\p"
	.string "¡Pero gracias por traerla!$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis:
	.string "¡Voy a darte esta MT como\n"
	.string "agradecimiento!$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
	.string "Creo que sería útil mantener el\n"
	.string "contacto, así que voy a registrarme en\l"
	.string "tu PokéNav.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_RegisteredSteven:
	.string "Steven se registró en tu\n"
	.string "POKéNAV, por algún motivo.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
	.string "Ahora debería irme.$"

GraniteCave_StevensRoom_Text_OhBagIsFull:
	.string "Oh, your BAG is full…\n"
	.string "That's too bad, then.$"
