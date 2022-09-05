GraniteCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_SetFlashLevel
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
	.byte 0


GraniteCave_B1F_SetHoleWarp::
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_GRANITE_CAVE_B2F
	end


GraniteCave_SetFlashLevel::
	setflashlevel 1
	call CaveHole_FixCrackedGround
	end


GraniteCave_B1F_EventScript_RedRock2::
	goto_if_unset FLAG_RED_STONES_2, GraniteCave_B1F_EventScript_RedRock2_1
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_2
	release
	end

GraniteCave_B1F_EventScript_RedRock2_1:
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_0
	delay 16
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_1
	closemessage
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 2
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	delay 30
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	random 4
	switch VAR_RESULT
	case 0, GraniteCave_B1F_EventScript_RedRock2_6
	case 1, GraniteCave_B1F_EventScript_RedRock2_7
	case 2, GraniteCave_B1F_EventScript_RedRock2_8
	case 3, GraniteCave_B1F_EventScript_RedRock2_9
	case 4, GraniteCave_B1F_EventScript_RedRock2_10
	giveitem ITEM_FIRE_STONE, 1
GraniteCave_B1F_EventScript_RedRock2_4:
	delay 16
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_2
	setflag FLAG_RED_STONES_2
	release
	end

GraniteCave_B1F_EventScript_RedRock2_6:
	giveitem ITEM_FIRE_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4

GraniteCave_B1F_EventScript_RedRock2_7:
	giveitem ITEM_THUNDER_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4

GraniteCave_B1F_EventScript_RedRock2_8:
	giveitem ITEM_SUN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4

GraniteCave_B1F_EventScript_RedRock2_9:
	giveitem ITEM_SHINY_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4

GraniteCave_B1F_EventScript_RedRock2_10:
	giveitem ITEM_DAWN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4


GraniteCave_B1F_EventScript_RedRock3::
	goto_if_unset FLAG_RED_STONES_3, GraniteCave_B1F_EventScript_RedRock3_1
	msgbox GraniteCave_B1F_EventScript_RedRock3_Text_1
	release
	end

GraniteCave_B1F_EventScript_RedRock3_1:
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_0
	delay 16
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_1
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 2
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	closemessage
	delay 30
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	random 4
	switch VAR_RESULT
	case 0, GraniteCave_B1F_EventScript_RedRock3_6
	case 1, GraniteCave_B1F_EventScript_RedRock3_7
	case 2, GraniteCave_B1F_EventScript_RedRock3_8
	case 3, GraniteCave_B1F_EventScript_RedRock3_9
	case 4, GraniteCave_B1F_EventScript_RedRock3_10
	giveitem ITEM_FIRE_STONE, 1
GraniteCave_B1F_EventScript_RedRock3_4:
	delay 16
	msgbox GraniteCave_B1F_EventScript_RedRock3_Text_0
	delay 16
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_1
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 5
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	closemessage
	delay 30
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	random 4
	switch VAR_RESULT
	case 0, GraniteCave_B1F_EventScript_RedRock3_14
	case 1, GraniteCave_B1F_EventScript_RedRock3_15
	case 2, GraniteCave_B1F_EventScript_RedRock3_16
	case 3, GraniteCave_B1F_EventScript_RedRock3_17
	case 4, GraniteCave_B1F_EventScript_RedRock3_18
	giveitem ITEM_FIRE_STONE, 1
GraniteCave_B1F_EventScript_RedRock3_12:
	delay 16
	msgbox GraniteCave_B1F_EventScript_RedRock3_Text_1
	setflag FLAG_RED_STONES_3
	release
	end

GraniteCave_B1F_EventScript_RedRock3_6:
	giveitem ITEM_FIRE_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_7:
	giveitem ITEM_THUNDER_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_8:
	giveitem ITEM_SUN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_9:
	giveitem ITEM_SHINY_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_10:
	giveitem ITEM_DAWN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_14:
	giveitem ITEM_FIRE_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12

GraniteCave_B1F_EventScript_RedRock3_15:
	giveitem ITEM_THUNDER_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12

GraniteCave_B1F_EventScript_RedRock3_16:
	giveitem ITEM_SUN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12

GraniteCave_B1F_EventScript_RedRock3_17:
	giveitem ITEM_SHINY_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12

GraniteCave_B1F_EventScript_RedRock3_18:
	giveitem ITEM_DAWN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12


GraniteCave_B1F_EventScript_RedRock2_Text_0:
	.string "... ¿Oh?\n"
	.string "¡Mira, hay una piedra evolutiva aquí!$"

GraniteCave_B1F_EventScript_RedRock2_Text_1:
	.string ".... ¡MMMMGGGGHHH!$"

GraniteCave_B1F_EventScript_RedRock2_Text_2:
	.string "Parece que otra piedra evolutiva se\n"
	.string "está formando debajo muy lentamente...\p"
	.string "¡Habrá que volver mañana!$"

GraniteCave_B1F_EventScript_RedRock3_Text_0:
	.string "... Momento...\p"
	.string "¡Parece que aquí se forman dos piedras\n"
	.string "evolutivas!$"

GraniteCave_B1F_EventScript_RedRock3_Text_1:
	.string "Parece que otras piedras evolutivas se\n"
	.string "están formando debajo muy\l"
	.string "lentamente...\p"
	.string "¡Habrá que volver mañana!$"
