Route111_Trigger::
# 3 "data/maps/Route111/scripts.pory"
	addvar VAR_TEMP_0, 1
# 4 "data/maps/Route111/scripts.pory"
	msgbox Route111_Trigger_Text_0
	return


# 7 "data/maps/Route111/scripts.pory"

# 8 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 9 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 10 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 11 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 12 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 13 "data/maps/Route111/scripts.pory"
.set LOCALID_WALLY, 47
# 14 "data/maps/Route111/scripts.pory"

# 15 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 16 "data/maps/Route111/scripts.pory"

# 17 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 18 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 19 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 20 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 21 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 22 "data/maps/Route111/scripts.pory"
	.byte 0
# 23 "data/maps/Route111/scripts.pory"

# 24 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 25 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 26 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 27 "data/maps/Route111/scripts.pory"
	end
# 28 "data/maps/Route111/scripts.pory"

# 29 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 32 "data/maps/Route111/scripts.pory"
	return
# 33 "data/maps/Route111/scripts.pory"

# 34 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 35 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 47 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 48 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 49 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 50 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 51 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 52 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 53 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 54 "data/maps/Route111/scripts.pory"
	return
# 55 "data/maps/Route111/scripts.pory"

# 56 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 57 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 58 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 59 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 60 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 61 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 62 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 63 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 64 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 65 "data/maps/Route111/scripts.pory"
	end
# 66 "data/maps/Route111/scripts.pory"

# 67 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 68 "data/maps/Route111/scripts.pory"
	checkplayergender
# 69 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 70 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 71 "data/maps/Route111/scripts.pory"
	return
# 72 "data/maps/Route111/scripts.pory"

# 73 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 74 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 75 "data/maps/Route111/scripts.pory"
	return
# 76 "data/maps/Route111/scripts.pory"

# 77 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 78 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 79 "data/maps/Route111/scripts.pory"
	return
# 80 "data/maps/Route111/scripts.pory"

# 81 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 82 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 83 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 84 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 85 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 86 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 87 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 88 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 89 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 90 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 91 "data/maps/Route111/scripts.pory"
	return
# 92 "data/maps/Route111/scripts.pory"

# 93 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 94 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 95 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 96 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 97 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 98 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 99 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 100 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 101 "data/maps/Route111/scripts.pory"
	end
# 102 "data/maps/Route111/scripts.pory"

# 103 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 104 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 105 "data/maps/Route111/scripts.pory"
	return
# 106 "data/maps/Route111/scripts.pory"

# 107 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 108 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 109 "data/maps/Route111/scripts.pory"
	return
# 110 "data/maps/Route111/scripts.pory"

# 111 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 112 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 113 "data/maps/Route111/scripts.pory"
	.2byte 0
# 114 "data/maps/Route111/scripts.pory"

# 115 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 116 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 117 "data/maps/Route111/scripts.pory"
	end
# 118 "data/maps/Route111/scripts.pory"

# 119 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 120 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 121 "data/maps/Route111/scripts.pory"
	.2byte 0
# 122 "data/maps/Route111/scripts.pory"

# 123 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally::
# 124 "data/maps/Route111/scripts.pory"
	lockall
# 125 "data/maps/Route111/scripts.pory"
	faceplayer
# 126 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 127 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 128 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route111/scripts.pory"
	namebox Wally
# 130 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_0
# 131 "data/maps/Route111/scripts.pory"
	specialvar VAR_0x8004, GetPlayerFacingDirection
# 132 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, DIR_SOUTH
# 133 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Wally_2
# 134 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_1:
# 135 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 136 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_1
# 138 "data/maps/Route111/scripts.pory"
	closemessage
# 139 "data/maps/Route111/scripts.pory"
	hidenamebox
# 140 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 141 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 142 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route111/scripts.pory"
	faceplayer
# 144 "data/maps/Route111/scripts.pory"
	namebox Wally
# 145 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_2
# 146 "data/maps/Route111/scripts.pory"
	closemessage
# 147 "data/maps/Route111/scripts.pory"
	hidenamebox
# 148 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_WALLY, Route111_Movement_Wally1
# 149 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_3
# 151 "data/maps/Route111/scripts.pory"
	fadeoutbgm 1
# 152 "data/maps/Route111/scripts.pory"
	closemessage
# 153 "data/maps/Route111/scripts.pory"
	hidenamebox
# 154 "data/maps/Route111/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 155 "data/maps/Route111/scripts.pory"
	waitse
# 156 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 157 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8005, 1
# 158 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8006, 4
# 159 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8007, 2
# 160 "data/maps/Route111/scripts.pory"
	special ShakeCamera
# 161 "data/maps/Route111/scripts.pory"
	waitstate
# 162 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 163 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 164 "data/maps/Route111/scripts.pory"
	waitse
# 165 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerHelp
# 167 "data/maps/Route111/scripts.pory"
	delay 8
# 168 "data/maps/Route111/scripts.pory"
	fadescreen FADE_TO_BLACK
# 169 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_4
# 171 "data/maps/Route111/scripts.pory"
	closemessage
# 172 "data/maps/Route111/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 5
# 173 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_WALLY
# 174 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_WALLY_LAVARIDGE
# 175 "data/maps/Route111/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 176 "data/maps/Route111/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE_OUT
# 177 "data/maps/Route111/scripts.pory"
	fadeinbgm 1
# 178 "data/maps/Route111/scripts.pory"
	warp MAP_LAVARIDGE_TOWN_GYM_1F, 14, 11
# 179 "data/maps/Route111/scripts.pory"
	release
# 180 "data/maps/Route111/scripts.pory"
	end
# 181 "data/maps/Route111/scripts.pory"

# 182 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_2:
# 183 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerGetOut
# 184 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Wally_1
# 186 "data/maps/Route111/scripts.pory"

# 187 "data/maps/Route111/scripts.pory"

# 188 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerGetOut:
# 189 "data/maps/Route111/scripts.pory"
	walk_left
# 190 "data/maps/Route111/scripts.pory"
	walk_down
# 191 "data/maps/Route111/scripts.pory"
	delay_8
# 192 "data/maps/Route111/scripts.pory"
	face_right
# 193 "data/maps/Route111/scripts.pory"
	step_end
# 194 "data/maps/Route111/scripts.pory"

# 195 "data/maps/Route111/scripts.pory"
Route111_Movement_Wally1:
# 196 "data/maps/Route111/scripts.pory"
	walk_up
# 197 "data/maps/Route111/scripts.pory"
	walk_up
# 198 "data/maps/Route111/scripts.pory"
	walk_slow_up
# 199 "data/maps/Route111/scripts.pory"
	walk_slow_up
# 200 "data/maps/Route111/scripts.pory"
	delay_16
# 201 "data/maps/Route111/scripts.pory"
	walk_in_place_up
# 202 "data/maps/Route111/scripts.pory"
	step_end
# 203 "data/maps/Route111/scripts.pory"

# 204 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerHelp:
# 205 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 206 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 207 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 208 "data/maps/Route111/scripts.pory"
	step_end
# 209 "data/maps/Route111/scripts.pory"

# 210 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_0:
# 211 "data/maps/Route111/scripts.pory"
	.string "¡{PLAYER}!\n"
# 212 "data/maps/Route111/scripts.pory"
	.string "No esperaba que entendieras donde\l"
# 213 "data/maps/Route111/scripts.pory"
	.string "estaba... ¡Pero me alegra verte aquí!$"
# 214 "data/maps/Route111/scripts.pory"

# 215 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_1:
# 216 "data/maps/Route111/scripts.pory"
	.string "Q{PAUSE 8}uiero... Entrenar en esta misma Ruta,\n"
# 217 "data/maps/Route111/scripts.pory"
	.string "porque -COF, COF-,{PAUSE 25} yo{PAUSE 8} creo que puedo\l"
# 218 "data/maps/Route111/scripts.pory"
	.string "sobreponerme a mi asma. Que puedo\l"
# 219 "data/maps/Route111/scripts.pory"
	.string "vencer a mi enfermedad y lograrlo todo.\l"
# 220 "data/maps/Route111/scripts.pory"
	.string "{PAUSE 25}-COF, COF, COF-\p"
# 221 "data/maps/Route111/scripts.pory"
	.string "Mmmgghh{PAUSE 11}...\l"
# 222 "data/maps/Route111/scripts.pory"
	.string "{PAUSE 11}...$"
# 223 "data/maps/Route111/scripts.pory"

# 224 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_2:
# 225 "data/maps/Route111/scripts.pory"
	.string "No te... {PAUSE 25}-COF-...pre{PAUSE 8}ocupes, {PLAYER}.\n"
# 226 "data/maps/Route111/scripts.pory"
	.string "¡Soy más fuerte de lo que aparento!\l"
# 227 "data/maps/Route111/scripts.pory"
	.string "-COF, COF, COF-...{PAUSE 20}¡Ah...!\p"
# 228 "data/maps/Route111/scripts.pory"
	.string "Eh...{PAUSE 20} Est{PAUSE 11}oy bi{PAUSE 8}en... ¡ESTOY BIEN!$"
# 229 "data/maps/Route111/scripts.pory"

# 230 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_3:
# 231 "data/maps/Route111/scripts.pory"
	.string "¡ESTOY....! {PAUSE 20}Es{PAUSE 8}toy...\n"
# 232 "data/maps/Route111/scripts.pory"
	.string "B-{PAUSE 8}bi-{PAUSE 25}e{PAUSE 5}n...................$"
# 233 "data/maps/Route111/scripts.pory"

# 234 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_4:
# 235 "data/maps/Route111/scripts.pory"
	.string ".{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8}$"
# 236 "data/maps/Route111/scripts.pory"
	
# 237 "data/maps/Route111/scripts.pory"

# 238 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 239 "data/maps/Route111/scripts.pory"
	lockall
# 240 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 241 "data/maps/Route111/scripts.pory"
	waitstate
# 242 "data/maps/Route111/scripts.pory"
	delay 24
# 243 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 244 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 245 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 246 "data/maps/Route111/scripts.pory"
	waitstate
# 247 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 248 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 249 "data/maps/Route111/scripts.pory"
	delay 16
# 250 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 251 "data/maps/Route111/scripts.pory"
	delay 16
# 252 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 253 "data/maps/Route111/scripts.pory"
	waitstate
# 254 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 255 "data/maps/Route111/scripts.pory"
	waitstate
# 256 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 257 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 258 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 259 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 260 "data/maps/Route111/scripts.pory"
	releaseall
# 261 "data/maps/Route111/scripts.pory"
	end
# 262 "data/maps/Route111/scripts.pory"

# 263 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 264 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 265 "data/maps/Route111/scripts.pory"
	releaseall
# 266 "data/maps/Route111/scripts.pory"
	end
# 267 "data/maps/Route111/scripts.pory"

# 268 "data/maps/Route111/scripts.pory"
@ Unused
# 269 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 270 "data/maps/Route111/scripts.pory"
	lock_anim
# 271 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 272 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 273 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 274 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 275 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 276 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 277 "data/maps/Route111/scripts.pory"
	step_end
# 278 "data/maps/Route111/scripts.pory"

# 279 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 280 "data/maps/Route111/scripts.pory"
	lock
# 281 "data/maps/Route111/scripts.pory"
	faceplayer
# 282 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 283 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 284 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 285 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 286 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 287 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 288 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 289 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 290 "data/maps/Route111/scripts.pory"
	release
# 291 "data/maps/Route111/scripts.pory"
	end
# 292 "data/maps/Route111/scripts.pory"

# 293 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 294 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 295 "data/maps/Route111/scripts.pory"
	release
# 296 "data/maps/Route111/scripts.pory"
	end
# 297 "data/maps/Route111/scripts.pory"

# 298 "data/maps/Route111/scripts.pory"
@ Unused
# 299 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 300 "data/maps/Route111/scripts.pory"
	lockall
# 301 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 302 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 303 "data/maps/Route111/scripts.pory"
	end
# 304 "data/maps/Route111/scripts.pory"

# 305 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 306 "data/maps/Route111/scripts.pory"
	lockall
# 307 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 308 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 309 "data/maps/Route111/scripts.pory"
	end
# 310 "data/maps/Route111/scripts.pory"

# 311 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 312 "data/maps/Route111/scripts.pory"
	lockall
# 313 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 314 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 315 "data/maps/Route111/scripts.pory"
	end
# 316 "data/maps/Route111/scripts.pory"

# 317 "data/maps/Route111/scripts.pory"
@ Unused
# 318 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 319 "data/maps/Route111/scripts.pory"
	lockall
# 320 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 321 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 322 "data/maps/Route111/scripts.pory"
	end
# 323 "data/maps/Route111/scripts.pory"

# 324 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 325 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 326 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 327 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 328 "data/maps/Route111/scripts.pory"
	releaseall
# 329 "data/maps/Route111/scripts.pory"
	end
# 330 "data/maps/Route111/scripts.pory"

# 331 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 332 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 333 "data/maps/Route111/scripts.pory"
	closemessage
# 334 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 335 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 336 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 337 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 338 "data/maps/Route111/scripts.pory"
	releaseall
# 339 "data/maps/Route111/scripts.pory"
	end
# 340 "data/maps/Route111/scripts.pory"

# 341 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 342 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 343 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route111/scripts.pory"
	return
# 345 "data/maps/Route111/scripts.pory"

# 346 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 347 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 348 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route111/scripts.pory"
	return
# 350 "data/maps/Route111/scripts.pory"

# 351 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 352 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 353 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route111/scripts.pory"
	return
# 355 "data/maps/Route111/scripts.pory"

# 356 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 357 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 358 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 359 "data/maps/Route111/scripts.pory"
	return
# 360 "data/maps/Route111/scripts.pory"

# 361 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 362 "data/maps/Route111/scripts.pory"
	walk_up
# 363 "data/maps/Route111/scripts.pory"
	step_end
# 364 "data/maps/Route111/scripts.pory"

# 365 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 366 "data/maps/Route111/scripts.pory"
	walk_down
# 367 "data/maps/Route111/scripts.pory"
	step_end
# 368 "data/maps/Route111/scripts.pory"

# 369 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 370 "data/maps/Route111/scripts.pory"
	walk_left
# 371 "data/maps/Route111/scripts.pory"
	step_end
# 372 "data/maps/Route111/scripts.pory"

# 373 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 374 "data/maps/Route111/scripts.pory"
	walk_right
# 375 "data/maps/Route111/scripts.pory"
	step_end
# 376 "data/maps/Route111/scripts.pory"

# 377 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 378 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 379 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 380 "data/maps/Route111/scripts.pory"
	doweather
# 381 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 382 "data/maps/Route111/scripts.pory"
	end
# 383 "data/maps/Route111/scripts.pory"

# 384 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 385 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 386 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE111
# 387 "data/maps/Route111/scripts.pory"
	doweather
# 388 "data/maps/Route111/scripts.pory"
	end
# 389 "data/maps/Route111/scripts.pory"

# 390 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 391 "data/maps/Route111/scripts.pory"
	lock
# 392 "data/maps/Route111/scripts.pory"
	faceplayer
# 393 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 394 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 395 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 396 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 397 "data/maps/Route111/scripts.pory"
	release
# 398 "data/maps/Route111/scripts.pory"
	end
# 399 "data/maps/Route111/scripts.pory"

# 400 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 401 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 402 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 403 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 404 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 406 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 407 "data/maps/Route111/scripts.pory"
	closemessage
# 408 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 409 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 411 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 412 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 413 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 414 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 415 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 416 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 417 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 418 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 419 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 420 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 421 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 422 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 424 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 425 "data/maps/Route111/scripts.pory"
	closemessage
# 426 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 427 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 429 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 430 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 431 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 433 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 434 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 435 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 436 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 437 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 438 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 439 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 440 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 441 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 442 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 443 "data/maps/Route111/scripts.pory"
	closemessage
# 444 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 445 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 446 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 447 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 448 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 449 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 450 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 451 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 452 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 453 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 454 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 455 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 456 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 457 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 458 "data/maps/Route111/scripts.pory"
	closemessage
# 459 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 460 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 461 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 462 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 463 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 464 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 465 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 466 "data/maps/Route111/scripts.pory"
	release
# 467 "data/maps/Route111/scripts.pory"
	end
# 468 "data/maps/Route111/scripts.pory"

# 469 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 470 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 471 "data/maps/Route111/scripts.pory"
	waitdooranim
# 472 "data/maps/Route111/scripts.pory"
	return
# 473 "data/maps/Route111/scripts.pory"

# 474 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 475 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 476 "data/maps/Route111/scripts.pory"
	waitdooranim
# 477 "data/maps/Route111/scripts.pory"
	return
# 478 "data/maps/Route111/scripts.pory"

# 479 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 480 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 481 "data/maps/Route111/scripts.pory"
	walk_up
# 482 "data/maps/Route111/scripts.pory"
	step_end
# 483 "data/maps/Route111/scripts.pory"

# 484 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 485 "data/maps/Route111/scripts.pory"
	walk_down
# 486 "data/maps/Route111/scripts.pory"
	step_end
# 487 "data/maps/Route111/scripts.pory"

# 488 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 489 "data/maps/Route111/scripts.pory"
	delay_16
# 490 "data/maps/Route111/scripts.pory"
	delay_16
# 491 "data/maps/Route111/scripts.pory"
	delay_16
# 492 "data/maps/Route111/scripts.pory"
	step_end
# 493 "data/maps/Route111/scripts.pory"

# 494 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 495 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 496 "data/maps/Route111/scripts.pory"
	end
# 497 "data/maps/Route111/scripts.pory"

# 498 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 499 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 500 "data/maps/Route111/scripts.pory"
	end
# 501 "data/maps/Route111/scripts.pory"

# 502 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 503 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 504 "data/maps/Route111/scripts.pory"
	end
# 505 "data/maps/Route111/scripts.pory"

# 506 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 507 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 508 "data/maps/Route111/scripts.pory"
	end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 511 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 512 "data/maps/Route111/scripts.pory"
	end
# 513 "data/maps/Route111/scripts.pory"

# 514 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 515 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 516 "data/maps/Route111/scripts.pory"
	end
# 517 "data/maps/Route111/scripts.pory"

# 518 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 519 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 520 "data/maps/Route111/scripts.pory"
	end
# 521 "data/maps/Route111/scripts.pory"

# 522 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 523 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 524 "data/maps/Route111/scripts.pory"
	end
# 525 "data/maps/Route111/scripts.pory"

# 526 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 527 "data/maps/Route111/scripts.pory"
	lock
# 528 "data/maps/Route111/scripts.pory"
	faceplayer
# 529 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 530 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 531 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 532 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 533 "data/maps/Route111/scripts.pory"
	release
# 534 "data/maps/Route111/scripts.pory"
	end
# 535 "data/maps/Route111/scripts.pory"

# 536 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 537 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 538 "data/maps/Route111/scripts.pory"
	release
# 539 "data/maps/Route111/scripts.pory"
	end
# 540 "data/maps/Route111/scripts.pory"

# 541 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 542 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 543 "data/maps/Route111/scripts.pory"
	release
# 544 "data/maps/Route111/scripts.pory"
	end
# 545 "data/maps/Route111/scripts.pory"

# 546 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 547 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 548 "data/maps/Route111/scripts.pory"
	release
# 549 "data/maps/Route111/scripts.pory"
	end
# 550 "data/maps/Route111/scripts.pory"

# 551 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 552 "data/maps/Route111/scripts.pory"
	lockall
# 553 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 554 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 555 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 556 "data/maps/Route111/scripts.pory"
	closemessage
# 557 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 558 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 559 "data/maps/Route111/scripts.pory"
	releaseall
# 560 "data/maps/Route111/scripts.pory"
	end
# 561 "data/maps/Route111/scripts.pory"

# 562 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 563 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 564 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 565 "data/maps/Route111/scripts.pory"
	end
# 566 "data/maps/Route111/scripts.pory"

# 567 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 568 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 569 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 570 "data/maps/Route111/scripts.pory"
	end
# 571 "data/maps/Route111/scripts.pory"

# 572 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 573 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 574 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 575 "data/maps/Route111/scripts.pory"
	end
# 576 "data/maps/Route111/scripts.pory"

# 577 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 578 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 579 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 580 "data/maps/Route111/scripts.pory"
	end
# 581 "data/maps/Route111/scripts.pory"

# 582 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 583 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 584 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 585 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 586 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 587 "data/maps/Route111/scripts.pory"
	release
# 588 "data/maps/Route111/scripts.pory"
	end
# 589 "data/maps/Route111/scripts.pory"

# 590 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 591 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 592 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 593 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 594 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 595 "data/maps/Route111/scripts.pory"
	release
# 596 "data/maps/Route111/scripts.pory"
	end
# 597 "data/maps/Route111/scripts.pory"

# 598 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 599 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 600 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 601 "data/maps/Route111/scripts.pory"
	end
# 602 "data/maps/Route111/scripts.pory"

# 603 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 604 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 605 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 606 "data/maps/Route111/scripts.pory"
	end
# 607 "data/maps/Route111/scripts.pory"

# 608 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 609 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 610 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 611 "data/maps/Route111/scripts.pory"
	end
# 612 "data/maps/Route111/scripts.pory"

# 613 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 614 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 615 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 616 "data/maps/Route111/scripts.pory"
	end
# 617 "data/maps/Route111/scripts.pory"

# 618 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 619 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 620 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 621 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 622 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 623 "data/maps/Route111/scripts.pory"
	release
# 624 "data/maps/Route111/scripts.pory"
	end
# 625 "data/maps/Route111/scripts.pory"

# 626 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 627 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 628 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 629 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 630 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 631 "data/maps/Route111/scripts.pory"
	release
# 632 "data/maps/Route111/scripts.pory"
	end
# 633 "data/maps/Route111/scripts.pory"

# 634 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 635 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 636 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 637 "data/maps/Route111/scripts.pory"
	end
# 638 "data/maps/Route111/scripts.pory"

# 639 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 640 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 641 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 642 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 643 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 644 "data/maps/Route111/scripts.pory"
	release
# 645 "data/maps/Route111/scripts.pory"
	end
# 646 "data/maps/Route111/scripts.pory"

# 647 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 648 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 649 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 650 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 651 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 652 "data/maps/Route111/scripts.pory"
	release
# 653 "data/maps/Route111/scripts.pory"
	end
# 654 "data/maps/Route111/scripts.pory"

# 655 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 656 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 657 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 658 "data/maps/Route111/scripts.pory"
	end
# 659 "data/maps/Route111/scripts.pory"

# 660 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 661 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 662 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 663 "data/maps/Route111/scripts.pory"
	end
# 664 "data/maps/Route111/scripts.pory"

# 665 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 666 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 667 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 668 "data/maps/Route111/scripts.pory"
	end
# 669 "data/maps/Route111/scripts.pory"

# 670 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 671 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 672 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 673 "data/maps/Route111/scripts.pory"
	end
# 674 "data/maps/Route111/scripts.pory"

# 675 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 676 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 677 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 678 "data/maps/Route111/scripts.pory"
	end
# 679 "data/maps/Route111/scripts.pory"

# 680 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 681 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 682 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 683 "data/maps/Route111/scripts.pory"
	end
# 684 "data/maps/Route111/scripts.pory"

# 685 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 686 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 687 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 688 "data/maps/Route111/scripts.pory"
	end
# 689 "data/maps/Route111/scripts.pory"

# 690 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 691 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 692 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 693 "data/maps/Route111/scripts.pory"
	end
# 694 "data/maps/Route111/scripts.pory"

# 695 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 696 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 697 "data/maps/Route111/scripts.pory"
	end
# 698 "data/maps/Route111/scripts.pory"

# 699 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 700 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 701 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 702 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 703 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 704 "data/maps/Route111/scripts.pory"

# 705 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 706 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 707 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 708 "data/maps/Route111/scripts.pory"

# 709 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 710 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 711 "data/maps/Route111/scripts.pory"

# 712 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 713 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 714 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 715 "data/maps/Route111/scripts.pory"

# 716 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 717 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 718 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 719 "data/maps/Route111/scripts.pory"

# 720 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 721 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 722 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 723 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 724 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 725 "data/maps/Route111/scripts.pory"

# 726 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 727 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 728 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 729 "data/maps/Route111/scripts.pory"

# 730 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 731 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 732 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 733 "data/maps/Route111/scripts.pory"

# 734 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 735 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 736 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 737 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 738 "data/maps/Route111/scripts.pory"

# 739 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 740 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 741 "data/maps/Route111/scripts.pory"

# 742 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 743 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 744 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 745 "data/maps/Route111/scripts.pory"

# 746 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 747 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 748 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 749 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 750 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 751 "data/maps/Route111/scripts.pory"

# 752 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 753 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 754 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 755 "data/maps/Route111/scripts.pory"

# 756 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 757 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 758 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 759 "data/maps/Route111/scripts.pory"

# 760 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 761 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 762 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 763 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 764 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 765 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 766 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 767 "data/maps/Route111/scripts.pory"

# 768 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 769 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 770 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 771 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 772 "data/maps/Route111/scripts.pory"

# 773 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 774 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 775 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 776 "data/maps/Route111/scripts.pory"

# 777 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 778 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 779 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 780 "data/maps/Route111/scripts.pory"

# 781 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 782 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 783 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 784 "data/maps/Route111/scripts.pory"

# 785 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 786 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 787 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 788 "data/maps/Route111/scripts.pory"

# 789 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 790 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 791 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 792 "data/maps/Route111/scripts.pory"

# 793 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 794 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 795 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 796 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 797 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 798 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 799 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 800 "data/maps/Route111/scripts.pory"

# 801 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 802 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 803 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 804 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 805 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 806 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 807 "data/maps/Route111/scripts.pory"

# 808 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 809 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 810 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 811 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 812 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 813 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 814 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 815 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 816 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 817 "data/maps/Route111/scripts.pory"

# 818 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 819 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 820 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 821 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 822 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 823 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 824 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 825 "data/maps/Route111/scripts.pory"

# 826 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 827 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 828 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 829 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 830 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 831 "data/maps/Route111/scripts.pory"

# 832 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 833 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 834 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 835 "data/maps/Route111/scripts.pory"

# 836 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 837 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 838 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 839 "data/maps/Route111/scripts.pory"

# 840 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 841 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 842 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 843 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 844 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 845 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 846 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 847 "data/maps/Route111/scripts.pory"

# 848 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 849 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 850 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 851 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_Trigger_Text_0:
# 4 "data/maps/Route111/scripts.pory"
	.string "Hasta aqui llega esta DEMO. Puedes\n"
	.string "seguir si quieres, pero los mapas y\l"
	.string "eventos estarán a medio terminar.$"
