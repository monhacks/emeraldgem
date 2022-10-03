ShoalCave_LowTideIceRoom_DragoTomb_MapScripts::
	.byte 0


ShoalCave_LowTideIceRoom_DragoTomb_Regidrago::
	goto_if_set FLAG_REGIDRAGO_UNLOCKED, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_1
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_4
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_5
	releaseall
	end

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_1:
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_NORMAL
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_0
	waitmoncry
	closemessage
	setwildbattle SPECIES_REGIDRAGO, 50, ITEM_AIR_BALLOON
	special StartRegiBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_CAUGHT, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_5
	case B_OUTCOME_WON, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_6
	case B_OUTCOME_RAN, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_7
	case B_OUTCOME_PLAYER_TELEPORTED, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_7
	return

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_5:
	removeobject 1
	setflag FLAG_REGIDRAGO_DEFEATED
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_1
	return

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_6:
	setflag FLAG_DAILY_REGIDRAGO
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_2
	return

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_7:
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_3
	return


ShoalCave_LowTideIceRoom_DragoTomb_Braille_1::
	return


ShoalCave_LowTideIceRoom_DragoTomb_Braille_2::
	return


ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_0:
	.string "¡Regii! ¡Gooooooo!$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_1:
	.string "¡Regidrago te estará por siempre\n"
	.string "agradecido!$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_2:
	.string "¡A Regidrago le encantó combatir\n"
	.string "contigo!\p"
	.string "¡Seguro mañana querrá tener otra\n"
	.string "batalla!$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_3:
	.string "Regidrago parece decepcionado...$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_4:
	.string ".............$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_5:
	.string "Parece que Regidrago está sumido en un\n"
	.string "letargo a causa del mal clima...$"
