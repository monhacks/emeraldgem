# 1 "data/maps/Route130/scripts.pory"

# 2 "data/maps/Route130/scripts.pory"
Route130_MapScripts::
# 3 "data/maps/Route130/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route130_OnTransition
# 4 "data/maps/Route130/scripts.pory"
	.byte 0
# 5 "data/maps/Route130/scripts.pory"

# 6 "data/maps/Route130/scripts.pory"
Route130_OnTransition:
# 7 "data/maps/Route130/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, Route130_EventScript_CheckSetAbnormalWeather
# 8 "data/maps/Route130/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 9 "data/maps/Route130/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route130_EventScript_SetMirageIslandLayout
# 10 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_11
# 11 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_12
# 12 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_13
# 13 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_14
# 14 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_15
# 15 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_16
# 16 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_17
# 17 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_18
# 18 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_19
# 19 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1A
# 20 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1B
# 21 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1C
# 22 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1D
# 23 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1E
# 24 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1F
# 25 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130
# 26 "data/maps/Route130/scripts.pory"
	end
# 27 "data/maps/Route130/scripts.pory"

# 28 "data/maps/Route130/scripts.pory"
Route130_EventScript_SetMirageIslandLayout::
# 29 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130_MIRAGE_ISLAND
# 30 "data/maps/Route130/scripts.pory"
	end
# 31 "data/maps/Route130/scripts.pory"

# 32 "data/maps/Route130/scripts.pory"
Route130_EventScript_CheckSetAbnormalWeather::
# 33 "data/maps/Route130/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 34 "data/maps/Route130/scripts.pory"
	return
# 35 "data/maps/Route130/scripts.pory"

# 36 "data/maps/Route130/scripts.pory"
Route130_EventScript_Rodney::
# 37 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_RODNEY, Route130_Text_RodneyIntro, Route130_Text_RodneyDefeat
# 38 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route130/scripts.pory"
	end
# 40 "data/maps/Route130/scripts.pory"

# 41 "data/maps/Route130/scripts.pory"
Route130_EventScript_Katie::
# 42 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_KATIE, Route130_Text_KatieIntro, Route130_Text_KatieDefeat
# 43 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route130/scripts.pory"
	end
# 45 "data/maps/Route130/scripts.pory"

# 46 "data/maps/Route130/scripts.pory"
Route130_EventScript_Santiago::
# 47 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_SANTIAGO, Route130_Text_SantiagoIntro, Route130_Text_SantiagoDefeat
# 48 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route130/scripts.pory"
	end
