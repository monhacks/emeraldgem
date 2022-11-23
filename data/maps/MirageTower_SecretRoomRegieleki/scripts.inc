MirageTower_SecretRoomRegieleki_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MirageTower_SecretRoomRegieleki_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MirageTower_SecretRoomRegieleki_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, MirageTower_SecretRoomRegieleki_RegisInfluence
	.2byte 0


MirageTower_SecretRoomRegieleki_RegisInfluence::
	goto_if_set FLAG_REGIELEKI_DEFEATED, MirageTower_SecretRoomRegieleki_RegisInfluence_2
	goto_if_set FLAG_REGIELEKI_UNLOCKED, MirageTower_SecretRoomRegieleki_RegisInfluence_3
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
	setvar 0x8005, SPECIES_REGIROCK
	special CheckSpecies
	compare VAR_RESULT, 0
	goto_if_eq MirageTower_SecretRoomRegieleki_RegisInfluence_8
	msgbox MirageTower_SecretRoomRegieleki_RegisInfluence_Text_0
	closemessage
	setvar VAR_TEMP_0, 1
MirageTower_SecretRoomRegieleki_RegisInfluence_1:
	releaseall
	end

MirageTower_SecretRoomRegieleki_RegisInfluence_2:
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
	setweather WEATHER_NONE
	doweather
	setvar VAR_TEMP_0, 1
	goto MirageTower_SecretRoomRegieleki_RegisInfluence_1

MirageTower_SecretRoomRegieleki_RegisInfluence_3:
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
	setweather WEATHER_NONE
	doweather
	setvar VAR_TEMP_0, 1
	goto MirageTower_SecretRoomRegieleki_RegisInfluence_1

MirageTower_SecretRoomRegieleki_RegisInfluence_8:
	setvar VAR_TEMP_0, 1
	releaseall
	end


MirageTower_SecretRoomRegieleki_Regieleki::
	goto_if_set FLAG_DAILY_REGIELEKI, MirageTower_SecretRoomRegieleki_Regieleki_1
	goto_if_set FLAG_REGIELEKI_UNLOCKED, MirageTower_SecretRoomRegieleki_Regieleki_2
	goto_if_set FLAG_REGIELEKI_DEFEATED, MirageTower_SecretRoomRegieleki_Regieleki_3
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_8
	closemessage
	releaseall
	end

MirageTower_SecretRoomRegieleki_Regieleki_1:
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_0
	releaseall
	end

MirageTower_SecretRoomRegieleki_Regieleki_2:
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_1
	closemessage
	delay 16
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_2
	playmoncry SPECIES_REGIELEKI, CRY_MODE_NORMAL
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_3
	waitmoncry
	closemessage
	setwildbattle SPECIES_REGIELEKI, 50, ITEM_AIR_BALLOON
	special StartRegiBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_CAUGHT, MirageTower_SecretRoomRegieleki_Regieleki_10
	case B_OUTCOME_WON, MirageTower_SecretRoomRegieleki_Regieleki_11
	case B_OUTCOME_RAN, MirageTower_SecretRoomRegieleki_Regieleki_12
	case B_OUTCOME_PLAYER_TELEPORTED, MirageTower_SecretRoomRegieleki_Regieleki_12
MirageTower_SecretRoomRegieleki_Regieleki_8:
	releaseall
	end

MirageTower_SecretRoomRegieleki_Regieleki_3:
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_7
	releaseall
	end

MirageTower_SecretRoomRegieleki_Regieleki_10:
	removeobject 1
	setflag FLAG_REGIELEKI_DEFEATED
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_4
	goto MirageTower_SecretRoomRegieleki_Regieleki_8

MirageTower_SecretRoomRegieleki_Regieleki_11:
	setflag FLAG_DAILY_REGIELEKI
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_5
	goto MirageTower_SecretRoomRegieleki_Regieleki_8

MirageTower_SecretRoomRegieleki_Regieleki_12:
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_6
	goto MirageTower_SecretRoomRegieleki_Regieleki_8


MirageTower_SecretRoomRegieleki_Braille_1::
	braillemsgbox ThunderTomb_Braille_First
	releaseall
	end


MirageTower_SecretRoomRegieleki_Braille_2::
	braillemsgbox ThunderTomb_Braille_Second
	releaseall
	end


MirageTower_SecretRoomRegieleki_Braille_3::
	braillemsgbox ThunderTomb_Braille_Third
	releaseall
	end


MirageTower_SecretRoomRegieleki_Braille_4::
	braillemsgbox ThunderTomb_Braille_Fourth
	releaseall
	end


MirageTower_SecretRoomRegieleki_Braille_Message::
	braillemsgbox ThunderTomb_Braille_Stop
	delay 8
	braillemsgbox ThunderTomb_Braille_Order
	delay 8
	braillemsgbox ThunderTomb_Braille_Stop
	releaseall
	end


EventScript_RockSmash_Regieleki::
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regieleki_1
	goto_if_set FLAG_REGIELEKI_UNLOCKED, EventScript_RockSmash_Regieleki_2
	playse SE_M_ROCK_THROW
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	goto_if_set FLAG_TEMP_1, EventScript_RockSmash_Regieleki_56
EventScript_RockSmash_Regieleki_12:
	goto_if_unset FLAG_TEMP_1, EventScript_RockSmash_Regieleki_11
EventScript_RockSmash_Regieleki_6:
	releaseall
	end

EventScript_RockSmash_Regieleki_1:
	msgbox EventScript_RockSmash_Regieleki_Text_0
	releaseall
	end

EventScript_RockSmash_Regieleki_2:
	msgbox EventScript_RockSmash_Regieleki_Text_1
	releaseall
	end

EventScript_RockSmash_Regieleki_7:
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regieleki_99
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
	setflag FLAG_REGIELEKI_UNLOCKED
	setweather WEATHER_NONE
	doweather
	delay 50
	msgbox EventScript_RockSmash_Regieleki_Text_3
	playmoncry SPECIES_REGIELEKI, CRY_MODE_NORMAL
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_3
	waitmoncry
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox EventScript_RockSmash_Regieleki_Text_4
	releaseall
	end

EventScript_RockSmash_Regieleki_8:
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regieleki_102
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
	setflag FLAG_REGIELEKI_UNLOCKED
	setweather WEATHER_NONE
	doweather
	delay 50
	msgbox EventScript_RockSmash_Regieleki_Text_3
	playmoncry SPECIES_REGIELEKI, CRY_MODE_NORMAL
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_3
	waitmoncry
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox EventScript_RockSmash_Regieleki_Text_4
	releaseall
	end

EventScript_RockSmash_Regieleki_9:
	goto_if_set FLAG_TEMP_A, EventScript_RockSmash_Regieleki_30
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_10:
	goto_if_unset FLAG_TEMP_3, EventScript_RockSmash_Regieleki_15
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_11:
	goto_if_unset FLAG_TEMP_2, EventScript_RockSmash_Regieleki_10
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_14:
	goto_if_unset FLAG_TEMP_7, EventScript_RockSmash_Regieleki_19
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_15:
	goto_if_unset FLAG_TEMP_5, EventScript_RockSmash_Regieleki_14
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_18:
	goto_if_unset FLAG_TEMP_D, EventScript_RockSmash_Regieleki_23
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_19:
	goto_if_unset FLAG_TEMP_9, EventScript_RockSmash_Regieleki_18
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_22:
	goto_if_unset FLAG_TEMP_11, EventScript_RockSmash_Regieleki_26
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_23:
	goto_if_set FLAG_TEMP_E, EventScript_RockSmash_Regieleki_22
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_26:
	goto_if_unset FLAG_TEMP_15, EventScript_RockSmash_Regieleki_9
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_29:
	goto_if_set FLAG_TEMP_B, EventScript_RockSmash_Regieleki_34
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_30:
	goto_if_set FLAG_TEMP_4, EventScript_RockSmash_Regieleki_29
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_33:
	goto_if_set FLAG_TEMP_13, EventScript_RockSmash_Regieleki_38
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_34:
	goto_if_set FLAG_TEMP_C, EventScript_RockSmash_Regieleki_33
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_37:
	goto_if_set FLAG_TEMP_6, EventScript_RockSmash_Regieleki_42
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_38:
	goto_if_set FLAG_TEMP_14, EventScript_RockSmash_Regieleki_37
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_41:
	goto_if_set FLAG_TEMP_8, EventScript_RockSmash_Regieleki_46
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_42:
	goto_if_set FLAG_TEMP_16, EventScript_RockSmash_Regieleki_41
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_45:
	goto_if_set FLAG_TEMP_10, EventScript_RockSmash_Regieleki_50
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_46:
	goto_if_set FLAG_TEMP_F, EventScript_RockSmash_Regieleki_45
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_49:
	goto_if_set FLAG_TEMP_18, EventScript_RockSmash_Regieleki_8
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_50:
	goto_if_set FLAG_TEMP_17, EventScript_RockSmash_Regieleki_49
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_54:
	goto_if_unset FLAG_TEMP_A, EventScript_RockSmash_Regieleki_75
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_55:
	goto_if_set FLAG_TEMP_3, EventScript_RockSmash_Regieleki_60
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_56:
	goto_if_set FLAG_TEMP_2, EventScript_RockSmash_Regieleki_55
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_59:
	goto_if_set FLAG_TEMP_7, EventScript_RockSmash_Regieleki_64
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_60:
	goto_if_set FLAG_TEMP_5, EventScript_RockSmash_Regieleki_59
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_63:
	goto_if_set FLAG_TEMP_D, EventScript_RockSmash_Regieleki_68
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_64:
	goto_if_set FLAG_TEMP_9, EventScript_RockSmash_Regieleki_63
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_67:
	goto_if_set FLAG_TEMP_11, EventScript_RockSmash_Regieleki_71
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_68:
	goto_if_set FLAG_TEMP_E, EventScript_RockSmash_Regieleki_67
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_71:
	goto_if_set FLAG_TEMP_15, EventScript_RockSmash_Regieleki_54
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_74:
	goto_if_unset FLAG_TEMP_B, EventScript_RockSmash_Regieleki_79
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_75:
	goto_if_unset FLAG_TEMP_4, EventScript_RockSmash_Regieleki_74
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_78:
	goto_if_unset FLAG_TEMP_13, EventScript_RockSmash_Regieleki_83
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_79:
	goto_if_unset FLAG_TEMP_C, EventScript_RockSmash_Regieleki_78
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_82:
	goto_if_unset FLAG_TEMP_6, EventScript_RockSmash_Regieleki_87
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_83:
	goto_if_unset FLAG_TEMP_14, EventScript_RockSmash_Regieleki_82
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_86:
	goto_if_unset FLAG_TEMP_8, EventScript_RockSmash_Regieleki_91
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_87:
	goto_if_unset FLAG_TEMP_16, EventScript_RockSmash_Regieleki_86
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_90:
	goto_if_unset FLAG_TEMP_10, EventScript_RockSmash_Regieleki_95
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_91:
	goto_if_unset FLAG_TEMP_F, EventScript_RockSmash_Regieleki_90
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_94:
	goto_if_unset FLAG_TEMP_18, EventScript_RockSmash_Regieleki_7
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_95:
	goto_if_unset FLAG_TEMP_17, EventScript_RockSmash_Regieleki_94
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_99:
	msgbox EventScript_RockSmash_Regieleki_Text_2
	releaseall
	end

EventScript_RockSmash_Regieleki_102:
	msgbox EventScript_RockSmash_Regieleki_Text_2
	releaseall
	end


MirageTower_SecretRoomRegieleki_PushBack::
	setvar 0x8005, SPECIES_REGIROCK
	special CheckSpecies
	compare VAR_RESULT, 0
	goto_if_eq MirageTower_SecretRoomRegieleki_PushBack_1
	return

MirageTower_SecretRoomRegieleki_PushBack_1:
	msgbox MirageTower_SecretRoomRegieleki_PushBack_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MirageTower_SecretRoomRegieleki_MoveBack
	waitmovement 0
	releaseall
	end


MirageTower_SecretRoomRegieleki_MoveBack:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

MirageTower_SecretRoomRegieleki_RegisInfluence_Text_0:
	.string "La influencia de Regirock te permite\n"
	.string "caminar y la fuerza de Registeel,\l"
	.string "romper las rocas.$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_0:
	.string "Regieleki parece muy cansado para\n"
	.string "pelear...\p"
	.string "¡Vuelve mañana!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_1:
	.string "¡Re re re re gigigigi!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_2:
	.string "¡Regieleki parece recuperado!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_3:
	.string "¡Regi! ¡Eleeeeekiiiii!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_4:
	.string "¡Regieleki te estará por siempre\n"
	.string "agradecido!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_5:
	.string "¡A Regieleki le encantó combatir\n"
	.string "contigo!\p"
	.string "¡Seguro mañana querrá tener otra\n"
	.string "batalla!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_6:
	.string "Regieleki parece decepcionado...$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_7:
	.string "Si ves esto, avisa al creador del juego.\n"
	.string "Esto no tendría que ocurrir. Dale al\l"
	.string "creador las circumstancias en las que\l"
	.string "esto ocurrió para encontrar una\l"
	.string "solución. Lamento las molestias.$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_8:
	.string "R...eg....iii....$"

EventScript_RockSmash_Regieleki_Text_0:
	.string "Registeel parece desinteresado en\n"
	.string "estas rocas...$"

EventScript_RockSmash_Regieleki_Text_1:
	.string "Registeel piensa que hay cosas más\n"
	.string "importantes que hacer...\p"
	.string "Se rehúsa a alterar el patrón.$"

EventScript_RockSmash_Regieleki_Text_2:
	.string "Regieleki ya ha sido derrotado...$"

EventScript_RockSmash_Regieleki_Text_3:
	.string "Parece que el clima se ha calmado...$"

EventScript_RockSmash_Regieleki_Text_4:
	.string "¡Parece que Regieleki ya se siente\n"
	.string "mejor!\p"
	.string "¡Debe querer agradecerte con un\n"
	.string "combate!$"

MirageTower_SecretRoomRegieleki_PushBack_Text_0:
	.string "¡La tormenta de arena te empuja hacia\n"
	.string "atrás!$"
