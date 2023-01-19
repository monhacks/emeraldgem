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
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
	setvar VAR_0x8004, ITEM_LETTER
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_DELIVERED_STEVEN_LETTER
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM47
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
	closemessage
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
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitSouth::
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
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
	walk_up
	walk_up
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
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
	.string "My name is STEVEN.\p"
	.string "I'm interested in rare stones,\n"
	.string "so I travel here and there.\p"
	.string "Oh?\n"
	.string "A LETTER for me?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis:
	.string "STEVEN: Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…\n"
	.string "I'll give you this TM.\p"
	.string "It contains my favorite move,\n"
	.string "STEEL WING.$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
	.string "STEVEN: Your POKéMON appear quite\n"
	.string "capable.\p"
	.string "If you keep training, you could even\n"
	.string "become the CHAMPION of the POKéMON\l"
	.string "LEAGUE one day. That's what I think.\p"
	.string "I know, since we've gotten to know each\n"
	.string "other, let's register one another in\l"
	.string "our POKéNAVS.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_RegisteredSteven:
	.string "Registered STEVEN\n"
	.string "in the POKéNAV.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
	.string "Now, I've got to hurry along.$"

GraniteCave_StevensRoom_Text_OhBagIsFull:
	.string "Oh, your BAG is full…\n"
	.string "That's too bad, then.$"

