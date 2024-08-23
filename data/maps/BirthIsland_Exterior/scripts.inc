# 1 "data/maps/BirthIsland_Exterior/scripts.pory"

# 2 "data/maps/BirthIsland_Exterior/scripts.pory"
.set LOCALID_DEOXYS, 2
# 3 "data/maps/BirthIsland_Exterior/scripts.pory"

# 4 "data/maps/BirthIsland_Exterior/scripts.pory"
@ Note: LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK is a local id for this map used elsewhere. It's defined in event_objects.h
# 5 "data/maps/BirthIsland_Exterior/scripts.pory"

# 6 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_MapScripts::
# 7 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_OnTransition
# 8 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_OnResume
# 9 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_OnReturnToField
# 10 "data/maps/BirthIsland_Exterior/scripts.pory"
	.byte 0
# 11 "data/maps/BirthIsland_Exterior/scripts.pory"

# 12 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_OnReturnToField:
# 13 "data/maps/BirthIsland_Exterior/scripts.pory"
	special SetDeoxysRockPalette
# 14 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 15 "data/maps/BirthIsland_Exterior/scripts.pory"

# 16 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_OnTransition:
# 17 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_MAP_SCRIPT_CHECKED_DEOXYS
# 18 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 19 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_ROCK_STEP_COUNT, 0
# 20 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_ROCK_LEVEL, 0
# 21 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_set FLAG_BATTLED_DEOXYS, BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle
# 22 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_unset FLAG_BATTLED_DEOXYS, BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle
# 23 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 24 "data/maps/BirthIsland_Exterior/scripts.pory"

# 25 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle::
# 26 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 27 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
# 28 "data/maps/BirthIsland_Exterior/scripts.pory"
	return
# 29 "data/maps/BirthIsland_Exterior/scripts.pory"

# 30 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle::
# 31 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEOXYS, Common_EventScript_NopReturn
# 32 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
# 33 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_DEOXYS_ROCK_COMPLETE
# 34 "data/maps/BirthIsland_Exterior/scripts.pory"
	return
# 35 "data/maps/BirthIsland_Exterior/scripts.pory"

# 36 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_OnResume:
# 37 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_EventScript_TryRemoveDeoxys
# 38 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 39 "data/maps/BirthIsland_Exterior/scripts.pory"

# 40 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_TryRemoveDeoxys::
# 41 "data/maps/BirthIsland_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 42 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 43 "data/maps/BirthIsland_Exterior/scripts.pory"
	removeobject LOCALID_DEOXYS
# 44 "data/maps/BirthIsland_Exterior/scripts.pory"
	return
# 45 "data/maps/BirthIsland_Exterior/scripts.pory"

# 46 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_Triangle::
# 47 "data/maps/BirthIsland_Exterior/scripts.pory"
	lock
# 48 "data/maps/BirthIsland_Exterior/scripts.pory"
	faceplayer
# 49 "data/maps/BirthIsland_Exterior/scripts.pory"
	special DoDeoxysRockInteraction
# 50 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitstate
# 51 "data/maps/BirthIsland_Exterior/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/BirthIsland_Exterior/scripts.pory"
	case 0, BirthIsland_Exterior_EventScript_NotSolved1
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	case 1, BirthIsland_Exterior_EventScript_NotSolved2
# 54 "data/maps/BirthIsland_Exterior/scripts.pory"
	case 2, BirthIsland_Exterior_EventScript_Deoxys
# 55 "data/maps/BirthIsland_Exterior/scripts.pory"
	case 3, BirthIsland_Exterior_EventScript_NotSolved3
# 56 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 57 "data/maps/BirthIsland_Exterior/scripts.pory"

# 58 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved1::
# 59 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
# 60 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 61 "data/maps/BirthIsland_Exterior/scripts.pory"

# 62 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved2::
# 63 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
# 64 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 65 "data/maps/BirthIsland_Exterior/scripts.pory"

# 66 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved3::
# 67 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
# 68 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 69 "data/maps/BirthIsland_Exterior/scripts.pory"

# 70 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_Deoxys::
# 71 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 72 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
# 73 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 1, MAP_NUM(BIRTH_ISLAND_EXTERIOR)
# 74 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP(BIRTH_ISLAND_EXTERIOR)
# 75 "data/maps/BirthIsland_Exterior/scripts.pory"
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 76 "data/maps/BirthIsland_Exterior/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_DEOXYS, FALSE
# 77 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 78 "data/maps/BirthIsland_Exterior/scripts.pory"
	addobject LOCALID_DEOXYS
# 79 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_DEOXYS, BirthIsland_Exterior_Movement_DeoxysApproach
# 80 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 81 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 82 "data/maps/BirthIsland_Exterior/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 83 "data/maps/BirthIsland_Exterior/scripts.pory"
	delay 40
# 84 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmoncry
# 85 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_DEOXYS
# 86 "data/maps/BirthIsland_Exterior/scripts.pory"
	seteventmon SPECIES_DEOXYS, 30
# 87 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/BirthIsland_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 89 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitstate
# 90 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 91 "data/maps/BirthIsland_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 92 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BirthIsland_Exterior_EventScript_DefeatedDeoxys
# 93 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BirthIsland_Exterior_EventScript_RanFromDeoxys
# 94 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_EventScript_RanFromDeoxys
# 95 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_BATTLED_DEOXYS
# 96 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
# 97 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 98 "data/maps/BirthIsland_Exterior/scripts.pory"

# 99 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_DefeatedDeoxys::
# 100 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_DEFEATED_DEOXYS
# 101 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 102 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 103 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 104 "data/maps/BirthIsland_Exterior/scripts.pory"

# 105 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_RanFromDeoxys::
# 106 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 107 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 108 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 109 "data/maps/BirthIsland_Exterior/scripts.pory"

# 110 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Movement_DeoxysApproach:
# 111 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slow_down
# 112 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slow_down
# 113 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slow_down
# 114 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slow_down
# 115 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slow_down
# 116 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slow_down
# 117 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slow_down
# 118 "data/maps/BirthIsland_Exterior/scripts.pory"
	step_end
