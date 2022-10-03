GraniteCave_SecretRoom1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_SecretRoom1_Rocks
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GraniteCave_SecretRoom1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GraniteCave_SecretRoom1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, GraniteCave_SecretRoom1_RegisInfluence
	.2byte 0


GraniteCave_SecretRoom1_RegisInfluence::
	goto_if_set FLAG_REGIELEKI_DEFEATED, GraniteCave_SecretRoom1_RegisInfluence_4
GraniteCave_SecretRoom1_RegisInfluence_3:
	msgbox GraniteCave_SecretRoom1_RegisInfluence_Text_0
	closemessage
	setvar VAR_TEMP_0, 1
GraniteCave_SecretRoom1_RegisInfluence_1:
	releaseall
	end

GraniteCave_SecretRoom1_RegisInfluence_2:
	setvar VAR_TEMP_0, 1
	goto GraniteCave_SecretRoom1_RegisInfluence_1

GraniteCave_SecretRoom1_RegisInfluence_4:
	goto_if_set FLAG_REGIDRAGO_DEFEATED, GraniteCave_SecretRoom1_RegisInfluence_2
	goto GraniteCave_SecretRoom1_RegisInfluence_3


GraniteCave_SecretRoom1_Rocks::
	goto_if_set FLAG_REGIDRAGO_ALMOST_UNLOCKED, GraniteCave_SecretRoom1_Rocks_7
GraniteCave_SecretRoom1_Rocks_5:
	goto_if_set FLAG_REGIELEKI_ALMOST_UNLOCKED, GraniteCave_SecretRoom1_Rocks_4
GraniteCave_SecretRoom1_Rocks_1:
	goto_if_set FLAG_REGIELEKI_DEFEATED, GraniteCave_SecretRoom1_Rocks_12
GraniteCave_SecretRoom1_Rocks_10:
	release
	end

GraniteCave_SecretRoom1_Rocks_2:
	setflag FLAG_TEMP_12
	setflag FLAG_TEMP_11
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_14
	setflag FLAG_TEMP_15
	goto GraniteCave_SecretRoom1_Rocks_1

GraniteCave_SecretRoom1_Rocks_3:
	setflag FLAG_TEMP_12
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_13
	setflag FLAG_TEMP_14
	setflag FLAG_TEMP_16
	goto GraniteCave_SecretRoom1_Rocks_1

GraniteCave_SecretRoom1_Rocks_4:
	goto_if_unset FLAG_REGIELEKI_DEFEATED, GraniteCave_SecretRoom1_Rocks_3
	goto GraniteCave_SecretRoom1_Rocks_1

GraniteCave_SecretRoom1_Rocks_7:
	goto_if_unset FLAG_REGIDRAGO_DEFEATED, GraniteCave_SecretRoom1_Rocks_2
	goto GraniteCave_SecretRoom1_Rocks_5

GraniteCave_SecretRoom1_Rocks_11:
	setflag FLAG_TEMP_12
	setflag FLAG_TEMP_11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_14
	setflag FLAG_TEMP_15
	setobjectxyperm 2, 13, 19
	releaseall
	end

GraniteCave_SecretRoom1_Rocks_12:
	goto_if_set FLAG_REGIDRAGO_DEFEATED, GraniteCave_SecretRoom1_Rocks_11
	goto GraniteCave_SecretRoom1_Rocks_10


GraniteCave_SecretRoom1_Braille_Face::
	goto_if_set FLAG_REGIDRAGO_ALMOST_UNLOCKED, GraniteCave_SecretRoom1_Braille_Face_7
GraniteCave_SecretRoom1_Braille_Face_5:
	goto_if_set FLAG_REGIELEKI_ALMOST_UNLOCKED, GraniteCave_SecretRoom1_Braille_Face_4
GraniteCave_SecretRoom1_Braille_Face_3:
	braillemsgbox DracoThunderAltar_Braille_MakeHisFace
	release
	end

GraniteCave_SecretRoom1_Braille_Face_1:
	braillemsgbox DracoThunderAltar_Braille_Route125
	release
	end

GraniteCave_SecretRoom1_Braille_Face_2:
	braillemsgbox DracoThunderAltar_Braille_Route111
	release
	end

GraniteCave_SecretRoom1_Braille_Face_4:
	goto_if_unset FLAG_REGIELEKI_DEFEATED, GraniteCave_SecretRoom1_Braille_Face_2
	goto GraniteCave_SecretRoom1_Braille_Face_3

GraniteCave_SecretRoom1_Braille_Face_7:
	goto_if_unset FLAG_REGIDRAGO_DEFEATED, GraniteCave_SecretRoom1_Braille_Face_1
	goto GraniteCave_SecretRoom1_Braille_Face_5


GraniteCave_SecretRoom1_Braille_Fear::
	braillemsgbox DracoThunderAltar_Braille_WeFearedSpeedWeFearedLife
	release
	end


GraniteCave_SecretRoom1_Braille_Key::
	braillemsgbox DracoThunderAltar_Braille_TheKeyIsUnited
	release
	end


EventScript_RockSmash_Regis_1::
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regis_1_7
EventScript_RockSmash_Regis_1_5:
	goto_if_set FLAG_REGIDRAGO_ALMOST_UNLOCKED, EventScript_RockSmash_Regis_1_2
	goto_if_set FLAG_REGIELEKI_ALMOST_UNLOCKED, EventScript_RockSmash_Regis_1_2
	playse SE_M_ROCK_THROW
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	goto_if_set FLAG_TEMP_3, EventScript_RockSmash_Regis_1_36
EventScript_RockSmash_Regis_1_16:
	goto_if_set FLAG_TEMP_12, EventScript_RockSmash_Regis_1_15
EventScript_RockSmash_Regis_1_10:
	releaseall
	end

EventScript_RockSmash_Regis_1_1:
	msgbox EventScript_RockSmash_Regis_1_Text_0
	releaseall
	end

EventScript_RockSmash_Regis_1_2:
	msgbox EventScript_RockSmash_Regis_1_Text_1
	releaseall
	end

EventScript_RockSmash_Regis_1_7:
	goto_if_set FLAG_REGIDRAGO_DEFEATED, EventScript_RockSmash_Regis_1_1
	goto EventScript_RockSmash_Regis_1_5

EventScript_RockSmash_Regis_1_11:
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regis_1_57
	setvar VAR_MIRAGE_TOWER_STATE, 0
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	setflag FLAG_REGIELEKI_ALMOST_UNLOCKED
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 2
	setvar VAR_0x8007, 3
	special ShakeCamera
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitstate
	delay 30
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	waitstate
	delay 30
	waitmovement 0
	msgbox EventScript_RockSmash_Regis_1_Text_3
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox EventScript_RockSmash_Regis_1_Text_4
	releaseall
	end

EventScript_RockSmash_Regis_1_12:
	goto_if_set FLAG_REGIDRAGO_DEFEATED, EventScript_RockSmash_Regis_1_60
	delay 20
	setflag FLAG_REGIDRAGO_ALMOST_UNLOCKED
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 2
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	playse SE_M_ROCK_THROW
	applymovement 2, Movement_SmashRock
	waitmovement 0
	removeobject 2
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	waitstate
	delay 30
	msgbox EventScript_RockSmash_Regis_1_Text_3
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox EventScript_RockSmash_Regis_1_Text_4
	releaseall
	end

EventScript_RockSmash_Regis_1_13:
	goto_if_unset FLAG_TEMP_5, EventScript_RockSmash_Regis_1_22
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_14:
	goto_if_set FLAG_TEMP_14, EventScript_RockSmash_Regis_1_18
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_15:
	goto_if_set FLAG_TEMP_11, EventScript_RockSmash_Regis_1_14
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_18:
	goto_if_set FLAG_TEMP_15, EventScript_RockSmash_Regis_1_13
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_21:
	goto_if_unset FLAG_TEMP_7, EventScript_RockSmash_Regis_1_26
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_22:
	goto_if_unset FLAG_TEMP_9, EventScript_RockSmash_Regis_1_21
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_25:
	goto_if_unset FLAG_TEMP_3, EventScript_RockSmash_Regis_1_30
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_26:
	goto_if_unset FLAG_TEMP_1, EventScript_RockSmash_Regis_1_25
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_29:
	goto_if_unset FLAG_TEMP_16, EventScript_RockSmash_Regis_1_12
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_30:
	goto_if_unset FLAG_TEMP_13, EventScript_RockSmash_Regis_1_29
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_34:
	goto_if_unset FLAG_TEMP_1, EventScript_RockSmash_Regis_1_45
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_35:
	goto_if_set FLAG_TEMP_13, EventScript_RockSmash_Regis_1_40
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_36:
	goto_if_set FLAG_TEMP_12, EventScript_RockSmash_Regis_1_35
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_39:
	goto_if_set FLAG_TEMP_16, EventScript_RockSmash_Regis_1_34
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_40:
	goto_if_set FLAG_TEMP_14, EventScript_RockSmash_Regis_1_39
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_44:
	goto_if_unset FLAG_TEMP_7, EventScript_RockSmash_Regis_1_49
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_45:
	goto_if_unset FLAG_TEMP_11, EventScript_RockSmash_Regis_1_44
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_48:
	goto_if_unset FLAG_TEMP_8, EventScript_RockSmash_Regis_1_53
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_49:
	goto_if_unset FLAG_TEMP_5, EventScript_RockSmash_Regis_1_48
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_52:
	goto_if_unset FLAG_TEMP_15, EventScript_RockSmash_Regis_1_11
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_53:
	goto_if_unset FLAG_TEMP_9, EventScript_RockSmash_Regis_1_52
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_57:
	msgbox EventScript_RockSmash_Regis_1_Text_2
	releaseall
	end

EventScript_RockSmash_Regis_1_60:
	msgbox EventScript_RockSmash_Regis_1_Text_5
	releaseall
	end


GraniteCave_SecretRoom1_RegisInfluence_Text_0:
	.string "La influencia de Registeel te permite\n"
	.string "romper las rocas en un santiamén.$"

EventScript_RockSmash_Regis_1_Text_0:
	.string "El poder de Registeel parece estar\n"
	.string "siendo limitado por un poder abismal...\p"
	.string "Es incapaz de romper estas rocas...$"

EventScript_RockSmash_Regis_1_Text_1:
	.string "Registeel piensa que hay cosas más\n"
	.string "importantes que hacer...\p"
	.string "Se rehúsa a alterar el patrón.$"

EventScript_RockSmash_Regis_1_Text_2:
	.string "Regieleki ya ha sido derrotado...$"

EventScript_RockSmash_Regis_1_Text_3:
	.string "Una puerta en la lejanía se ha abierto.$"

EventScript_RockSmash_Regis_1_Text_4:
	.string "Los mensajes en la pared de ahí parecen\n"
	.string "haber cambiado.$"

EventScript_RockSmash_Regis_1_Text_5:
	.string "Regidrago ya ha sido derrotado...$"
