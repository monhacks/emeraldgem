MirageTower_SecretRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MirageTower_SecretRoom_OnLoad
	.byte 0


MirageTower_SecretRoom_OnLoad::
	goto_if_unset FLAG_REGIELEKI_DEFEATED, MirageTower_SecretRoom_OnLoad_2
MirageTower_SecretRoom_OnLoad_1:
	releaseall
	end

MirageTower_SecretRoom_OnLoad_2:
	clearflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
	setmetatile 5, 2, 0x211, TRUE
	setmetatile 5, 1, 0x219, TRUE
	special DrawWholeMapView
	goto MirageTower_SecretRoom_OnLoad_1


MirageTower_SecretRoom_Braille::
	braillemsgbox ThunderTomb_Braille_Route111
	releaseall
	end

