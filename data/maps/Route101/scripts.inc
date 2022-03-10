.set LOCALID_BIRCH, 2
.set LOCALID_ZIGZAGOON, 4

Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
	.byte 0

Route101_OnResume:
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 1, Route101_OnResume_Night
	goto_if_eq VAR_RESULT, 0, Route101_OnResume_Day
	end
	
Route101_OnResume_Night:
	setvar VAR_DAYNIGHT, 1
	end
	
Route101_OnResume_Day:
	setvar VAR_DAYNIGHT, 0
	end

Route101_OnTransition:
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 1, Route101_OnTransition_Night
	goto_if_eq VAR_RESULT, 0, Route101_OnTransition_Day
	end
	
Route101_OnTransition_Night:
	setvar VAR_DAYNIGHT, 1
	call ProfBirch_EventScript_UpdateLocation
	end

Route101_OnTransition_Day:
	setvar VAR_DAYNIGHT, 0
	call ProfBirch_EventScript_UpdateLocation
	end


Route101_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0

Route101_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE101_STATE, 1
	end

Route101_EventScript_StartBirchRescue::
	lockall
	playbgm MUS_HELP, TRUE
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
	closemessage
	setobjectxy LOCALID_BIRCH, 0, 15
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
	waitmovement 0
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
	closemessage
	setvar VAR_ROUTE101_STATE, 2
	releaseall
	end

Route101_EventScript_PreventExitSouth::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitWest::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitNorth::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
	waitmovement 0
	releaseall
	end

Route101_Movement_PreventExitSouth:
	walk_up
	step_end

Route101_Movement_PreventExitWest:
	walk_right
	step_end

Route101_Movement_PreventExitNorth:
	walk_down
	step_end

Route101_Movement_ZigzagoonChaseInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_ZigzagoonChase1:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_ZigzagoonFaceBirch:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

Route101_Movement_EnterScene:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_faster_left
	step_end

Route101_Movement_BirchRunInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_BirchRunAway1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_BirchFaceZigzagoon:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

Route101_Movement_Unused1:
	walk_up
	walk_up
	step_end

Route101_Movement_Unused2:
	walk_up
	walk_left
	walk_up
	step_end

Route101_EventScript_Youngster::
	goto_if_eq VAR_DAYNIGHT, 1, Route101_EventScript_Night
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end
Route101_EventScript_Night::
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
	end
Route101_EventScript_Boy::
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	setflag FLAG_RTC_ENABLED
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

Route101_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ZIGZAGOON
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special ChooseStarter
	waitstate
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
	waitmovement 0
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
	special HealPlayerParty
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	release
	end

Route101_EventScript_HideMayInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	return

Route101_EventScript_HideBrendanInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

Route101_Movement_BirchApproachPlayer:
	walk_right
	step_end

Route101_Text_HelpMe:
	.string "¡A-Ayúdame!$"

Route101_Text_PleaseHelp:
	.string "???: ¡Tú, sí, tú!\n"
	.string "¡En mi Mochila hay {COLOR LIGHT_RED SHADOW RED} Pokéballs{COLOR DARK_GRAY SHADOW LIGHT_GRAY}, agarra una\l"
	.string "y sálvame, soy alérgico a este Pokémon!$"

Route101_Text_DontLeaveMe:
	.string "???: ¡¿A-adónde vas?! ¡NO ME DEJES!$"

Route101_Text_YouSavedMe:
	.string "???: ¡UFF! ¡MUCHÍSIMAS GRACIAS!\p"
	.string "Eso estuvo cerca…\n"
	.string "Estaba estudiando el comportamiento\l"
	.string "de los {COLOR BLUE} nuevos Pokémon que migraron{COLOR DARK_GRAY}, y\l"
	.string "me atacó un Poochyena…\p"
	.string "Ya era muy tarde cuando noté que no\n"
	.string "tenía mis EPI-Pen…\p"
	.string "¡Por cierto, yo soy el {COLOR BLUE}Profesor Birch{COLOR DARK_GRAY}!\p"
	.string "Profe Birch: ¡Encantado de conocerte!\n"
	.string "Te invito a mi Laboratorio para charlar\l"
	.string "más.$"


Route101_Text_TakeTiredPokemonToPokeCenter:
	.string "Si tus Pokémon se cansan,\n"
	.string "llévalos al Centro Pokémon de\l"
	.string "inmediato.$"
Route101_Text_TakeTiredPokemonToPokeCenter2:
	.string "Es de noche.$"
Route101_Text_WildPokemonInTallGrass:
	.string "Los Pokémon salvajes te atacarán a la\n"
	.string "mínima que hagas.\p"
	.string "¡Ten cuidado en las Rutas!$"

Route101_Text_RouteSign:
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}$"

