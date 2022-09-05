GraniteCave_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_SetFlashLevel
	.byte 0


GraniteCave_B2F_EventScript_BlueRock2::
	goto_if_unset FLAG_BLUE_STONES_2, GraniteCave_B2F_EventScript_BlueRock2_1
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_2
	release
	end

GraniteCave_B2F_EventScript_BlueRock2_1:
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_0
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
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
	case 0, GraniteCave_B2F_EventScript_BlueRock2_6
	case 1, GraniteCave_B2F_EventScript_BlueRock2_7
	case 2, GraniteCave_B2F_EventScript_BlueRock2_8
	case 3, GraniteCave_B2F_EventScript_BlueRock2_9
	case 4, GraniteCave_B2F_EventScript_BlueRock2_10
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock2_4:
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_2
	setflag FLAG_BLUE_STONES_2
	release
	end

GraniteCave_B2F_EventScript_BlueRock2_6:
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4

GraniteCave_B2F_EventScript_BlueRock2_7:
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4

GraniteCave_B2F_EventScript_BlueRock2_8:
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4

GraniteCave_B2F_EventScript_BlueRock2_9:
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4

GraniteCave_B2F_EventScript_BlueRock2_10:
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4


GraniteCave_B2F_EventScript_BlueRock3::
	goto_if_unset FLAG_BLUE_STONES_3, GraniteCave_B2F_EventScript_BlueRock3_1
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_1
	release
	end

GraniteCave_B2F_EventScript_BlueRock3_1:
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_0
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
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
	case 0, GraniteCave_B2F_EventScript_BlueRock3_6
	case 1, GraniteCave_B2F_EventScript_BlueRock3_7
	case 2, GraniteCave_B2F_EventScript_BlueRock3_8
	case 3, GraniteCave_B2F_EventScript_BlueRock3_9
	case 4, GraniteCave_B2F_EventScript_BlueRock3_10
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock3_4:
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_0
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
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
	case 0, GraniteCave_B2F_EventScript_BlueRock3_14
	case 1, GraniteCave_B2F_EventScript_BlueRock3_15
	case 2, GraniteCave_B2F_EventScript_BlueRock3_16
	case 3, GraniteCave_B2F_EventScript_BlueRock3_17
	case 4, GraniteCave_B2F_EventScript_BlueRock3_18
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock3_12:
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_1
	setflag FLAG_BLUE_STONES_3
	release
	end

GraniteCave_B2F_EventScript_BlueRock3_6:
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_7:
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_8:
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_9:
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_10:
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_14:
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12

GraniteCave_B2F_EventScript_BlueRock3_15:
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12

GraniteCave_B2F_EventScript_BlueRock3_16:
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12

GraniteCave_B2F_EventScript_BlueRock3_17:
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12

GraniteCave_B2F_EventScript_BlueRock3_18:
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12


GraniteCave_B2F_EventScript_BlueRock4::
	goto_if_unset FLAG_BLUE_STONES_4, GraniteCave_B2F_EventScript_BlueRock4_1
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_1
	release
	end

GraniteCave_B2F_EventScript_BlueRock4_1:
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_0
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
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
	case 0, GraniteCave_B2F_EventScript_BlueRock4_6
	case 1, GraniteCave_B2F_EventScript_BlueRock4_7
	case 2, GraniteCave_B2F_EventScript_BlueRock4_8
	case 3, GraniteCave_B2F_EventScript_BlueRock4_9
	case 4, GraniteCave_B2F_EventScript_BlueRock4_10
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock4_4:
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_0
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
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
	case 0, GraniteCave_B2F_EventScript_BlueRock4_14
	case 1, GraniteCave_B2F_EventScript_BlueRock4_15
	case 2, GraniteCave_B2F_EventScript_BlueRock4_16
	case 3, GraniteCave_B2F_EventScript_BlueRock4_17
	case 4, GraniteCave_B2F_EventScript_BlueRock4_18
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock4_12:
	delay 16
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_1
	setflag FLAG_BLUE_STONES_4
	release
	end

GraniteCave_B2F_EventScript_BlueRock4_6:
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_7:
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_8:
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_9:
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_10:
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_14:
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12

GraniteCave_B2F_EventScript_BlueRock4_15:
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12

GraniteCave_B2F_EventScript_BlueRock4_16:
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12

GraniteCave_B2F_EventScript_BlueRock4_17:
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12

GraniteCave_B2F_EventScript_BlueRock4_18:
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12


GraniteCave_B2F_EventScript_BlueRock2_Text_0:
	.string "... ¿Oh?\n"
	.string "¡Mira, hay una piedra evolutiva aquí!$"

GraniteCave_B2F_EventScript_BlueRock2_Text_1:
	.string ".... ¡MMMMGGGGHHH!$"

GraniteCave_B2F_EventScript_BlueRock2_Text_2:
	.string "Parece que otra piedra evolutiva se\n"
	.string "está formando debajo muy lentamente...\p"
	.string "¡Habrá que volver mañana!$"

GraniteCave_B2F_EventScript_BlueRock3_Text_0:
	.string "... Momento...\p"
	.string "¡Parece que aquí se forman dos piedras\n"
	.string "evolutivas!$"

GraniteCave_B2F_EventScript_BlueRock3_Text_1:
	.string "Parece que otras piedras evolutivas se\n"
	.string "están formando debajo muy\l"
	.string "lentamente...\p"
	.string "¡Habrá que volver mañana!$"
