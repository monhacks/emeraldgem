ShoalCave_LowTideIceRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideIceRoom_MapScriptsOnTransition
	map_script MAP_SCRIPT_ON_RESUME, ShoalCave_LowTideIceRoom_MapScriptsOnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShoalCave_LowTideIceRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShoalCave_LowTideIceRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, ShoalCave_LowTideIceRoom_MapScriptsOnLoad
	.2byte 0


ShoalCave_LowTideIceRoom_MapScriptsOnTransition::
	goto_if_set FLAG_REGIDRAGO_DOOR_UNLOCKED, ShoalCave_LowTideIceRoom_MapScriptsOnTransition_1
	return

ShoalCave_LowTideIceRoom_MapScriptsOnTransition_1:
	setmetatile 3, 2, 0x3A7, FALSE
	setmetatile 3, 1, 0x39F, TRUE
	setmetatile 2, 1, 0x39E, TRUE
	setmetatile 2, 2, 0x3A6, TRUE
	setmetatile 4, 1, 0x3A0, TRUE
	setmetatile 4, 2, 0x3A1, TRUE
	setmetatile 5, 3, METATILE_Cave_SwitchIcePressed, FALSE
	setmetatile 3, 7, METATILE_Cave_SwitchIcePressed, FALSE
	setmetatile 7, 12, METATILE_Cave_SwitchIcePressed, FALSE
	special DrawWholeMapView
	return


ShoalCave_LowTideIceRoom_MapScriptsOnResume::
	setstepcallback STEP_CB_ICE_SWITCH
	releaseall
	end


ShoalCave_LowTideIceRoom_MapScriptsOnLoad::
	waitmovement 0
	goto_if_set FLAG_REGIDRAGO_ALMOST_UNLOCKED, ShoalCave_LowTideIceRoom_MapScriptsOnLoad_6
ShoalCave_LowTideIceRoom_MapScriptsOnLoad_5:
	goto_if_set FLAG_REGIDRAGO_DEFEATED, ShoalCave_LowTideIceRoom_MapScriptsOnLoad_3
	setflag FLAG_ENABLED_PC
	clearflag FLAG_REGICE_INFLUENCE
	clearflag FLAG_HAS_FIRE_POKEMON
ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1:
	setvar VAR_TEMP_0, 1
	releaseall
	end

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_2:
	clearflag FLAG_ENABLED_PC
	setvar 0x8005, SPECIES_REGICE
	special CheckSpecies
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideIceRoom_MapScriptsOnLoad_9
	clearflag FLAG_REGICE_INFLUENCE
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_3:
	setvar 0x8005, SPECIES_REGICE
	special CheckSpecies
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideIceRoom_MapScriptsOnLoad_12
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_6:
	goto_if_unset FLAG_REGIDRAGO_DEFEATED, ShoalCave_LowTideIceRoom_MapScriptsOnLoad_2
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_5

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_9:
	setflag FLAG_REGICE_INFLUENCE
	msgbox ShoalCave_LowTideIceRoom_MapScriptsOnLoad_Text_0
	checkpartytype TYPE_FIRE
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideIceRoom_MapScriptsOnLoad_14
	clearflag FLAG_HAS_FIRE_POKEMON
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_12:
	setflag FLAG_REGICE_INFLUENCE
	clearflag FLAG_HAS_FIRE_POKEMON
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_14:
	setflag FLAG_HAS_FIRE_POKEMON
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox ShoalCave_LowTideIceRoom_MapScriptsOnLoad_Text_1
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1


ShoalCave_LowTideIceRoom_BrailleDoor_One::
	braillemsgbox DracoTomb_Braille_First
	braillemsgbox DracoTomb_Braille_Second
	releaseall
	end


ShoalCave_LowTideIceRoom_BrailleDoor_Two::
	goto_if_unset FLAG_REGIDRAGO_DOOR_UNLOCKED, ShoalCave_LowTideIceRoom_BrailleDoor_Two_1
	msgbox ShoalCave_LowTideIceRoom_BrailleDoor_Two_Text_0
	return

ShoalCave_LowTideIceRoom_BrailleDoor_Two_1:
	braillemsgbox DracoTomb_Braille_Third
	compare VAR_TEMP_1, 3
	goto_if_ge ShoalCave_LowTideIceRoom_BrailleDoor_Two_5
	braillemsgbox DracoTomb_Braille_OutsideFirstText
	braillemsgbox DracoTomb_Braille_OutsideEast
ShoalCave_LowTideIceRoom_BrailleDoor_Two_4:
	releaseall
	end

ShoalCave_LowTideIceRoom_BrailleDoor_Two_5:
	braillemsgbox DracoTomb_Braille_Fourth
	goto ShoalCave_LowTideIceRoom_BrailleDoor_Two_4


ShoalCave_LowTideIceRoom_BrailleClue_EastNorth::
	braillemsgbox DracoTomb_Braille_OutsideNorthEight
	releaseall
	end


ShoalCave_LowTideIceRoom_BrailleClue_Hallway::
	braillemsgbox DracoTomb_Braille_OutsideHallway
	releaseall
	end


ShoalCave_LowTideIceRoom_MapScriptsOnLoad_Text_0:
	.string "¡La influencia de Regice te permite\n"
	.string "caminar por el hielo sin\l"
	.string "preocupaciones!$"

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_Text_1:
	.string "¡Oh!\p"
	.string "¡Parece que tu {STR_VAR_1} te está\n"
	.string "prestando su fuerza!\p"
	.string "¡Ahora puedes derretir el hielo con el\n"
	.string "Botón R!$"

ShoalCave_LowTideIceRoom_BrailleDoor_Two_Text_0:
	.string "Se ha abierto una puerta.$"
