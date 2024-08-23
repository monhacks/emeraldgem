# 1 "data/maps/MirageTower_1F/scripts.pory"

# 2 "data/maps/MirageTower_1F/scripts.pory"
MirageTower_1F_MapScripts::
# 3 "data/maps/MirageTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/MirageTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_1F_SetHoleWarp
# 5 "data/maps/MirageTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MirageTower_1F_OnLoad
# 6 "data/maps/MirageTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_1F_OnTransition
# 7 "data/maps/MirageTower_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MirageTower_1F/scripts.pory"

# 9 "data/maps/MirageTower_1F/scripts.pory"
MirageTower_1F_SetHoleWarp:
# 10 "data/maps/MirageTower_1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 11 "data/maps/MirageTower_1F/scripts.pory"
	setholewarp MAP_MIRAGE_TOWER_SECRET_ROOM
# 12 "data/maps/MirageTower_1F/scripts.pory"
	end
# 13 "data/maps/MirageTower_1F/scripts.pory"

# 14 "data/maps/MirageTower_1F/scripts.pory"
MirageTower_1F_OnLoad:
# 15 "data/maps/MirageTower_1F/scripts.pory"
	goto_if_set FLAG_REGIELEKI_ALMOST_UNLOCKED, MirageTower_1F_SetFloorCracks
# 16 "data/maps/MirageTower_1F/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, MirageTower_1F_SetSecretStairs
# 17 "data/maps/MirageTower_1F/scripts.pory"
	release
# 18 "data/maps/MirageTower_1F/scripts.pory"
	end
# 19 "data/maps/MirageTower_1F/scripts.pory"

# 20 "data/maps/MirageTower_1F/scripts.pory"
MirageTower_1F_SetSecretStairs:
# 21 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 5, 2, 0x205, TRUE
# 22 "data/maps/MirageTower_1F/scripts.pory"
	special DrawWholeMapView
# 23 "data/maps/MirageTower_1F/scripts.pory"
	releaseall
# 24 "data/maps/MirageTower_1F/scripts.pory"
	end
# 25 "data/maps/MirageTower_1F/scripts.pory"

# 26 "data/maps/MirageTower_1F/scripts.pory"
MirageTower_1F_SetFloorCracks:
# 27 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 4, 14, METATILE_Cave_CrackedFloor, TRUE
# 28 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 5, 14, METATILE_Cave_CrackedFloor, TRUE
# 29 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 6, 14, METATILE_Cave_CrackedFloor, TRUE
# 30 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 7, 14, METATILE_Cave_CrackedFloor, TRUE
# 31 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 8, 14, METATILE_Cave_CrackedFloor, TRUE
# 32 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 11, 14, METATILE_Cave_CrackedFloor, TRUE
# 33 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_CrackedFloor, TRUE
# 34 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 13, 14, METATILE_Cave_CrackedFloor, TRUE
# 35 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 14, 14, METATILE_Cave_CrackedFloor, TRUE
# 36 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 15, 14, METATILE_Cave_CrackedFloor, TRUE
# 37 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 16, 14, METATILE_Cave_CrackedFloor, TRUE
# 38 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 6, 13, METATILE_Cave_CrackedFloor, TRUE
# 39 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 7, 13, METATILE_Cave_CrackedFloor, TRUE
# 40 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 8, 13, METATILE_Cave_CrackedFloor, TRUE
# 41 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 9, 13, METATILE_Cave_CrackedFloor, TRUE
# 42 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 10, 13, METATILE_Cave_CrackedFloor, TRUE
# 43 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 11, 13, METATILE_Cave_CrackedFloor, TRUE
# 44 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_CrackedFloor, TRUE
# 45 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 13, 13, METATILE_Cave_CrackedFloor, TRUE
# 46 "data/maps/MirageTower_1F/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_CrackedFloor, TRUE
# 47 "data/maps/MirageTower_1F/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/MirageTower_1F/scripts.pory"
	release
# 49 "data/maps/MirageTower_1F/scripts.pory"
	end
# 50 "data/maps/MirageTower_1F/scripts.pory"

# 51 "data/maps/MirageTower_1F/scripts.pory"
MirageTower_1F_OnTransition:
# 52 "data/maps/MirageTower_1F/scripts.pory"
	call CaveHole_FixCrackedGround
# 53 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_ENTERED_MIRAGE_TOWER
# 54 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 55 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_LANDMARK_MIRAGE_TOWER
# 56 "data/maps/MirageTower_1F/scripts.pory"
	end
