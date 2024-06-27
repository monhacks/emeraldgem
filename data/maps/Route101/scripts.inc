# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 7 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 8 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 9 "data/maps/Route101/scripts.pory"
	.byte 0
# 10 "data/maps/Route101/scripts.pory"

# 11 "data/maps/Route101/scripts.pory"
Route101_OnResume:
# 12 "data/maps/Route101/scripts.pory"
	special GetDayOrNight
# 13 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route101_OnResume_Night
# 14 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route101_OnResume_Day
# 15 "data/maps/Route101/scripts.pory"
	end
# 16 "data/maps/Route101/scripts.pory"
	
# 17 "data/maps/Route101/scripts.pory"
Route101_OnResume_Night:
# 18 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 19 "data/maps/Route101/scripts.pory"
	end
# 20 "data/maps/Route101/scripts.pory"
	
# 21 "data/maps/Route101/scripts.pory"
Route101_OnResume_Day:
# 22 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 23 "data/maps/Route101/scripts.pory"
	end
# 24 "data/maps/Route101/scripts.pory"

# 25 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 26 "data/maps/Route101/scripts.pory"
	special GetDayOrNight
# 27 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route101_OnTransition_Night
# 28 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route101_OnTransition_Day
# 29 "data/maps/Route101/scripts.pory"
	end
# 30 "data/maps/Route101/scripts.pory"
	
# 31 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Night:
# 32 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 33 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 34 "data/maps/Route101/scripts.pory"
	end
# 35 "data/maps/Route101/scripts.pory"

# 36 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Day:
# 37 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 38 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 39 "data/maps/Route101/scripts.pory"
	end
# 40 "data/maps/Route101/scripts.pory"

# 41 "data/maps/Route101/scripts.pory"

# 42 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 43 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 44 "data/maps/Route101/scripts.pory"
	.2byte 0
# 45 "data/maps/Route101/scripts.pory"

# 46 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 47 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 49 "data/maps/Route101/scripts.pory"
	end
# 50 "data/maps/Route101/scripts.pory"

# 51 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 52 "data/maps/Route101/scripts.pory"
	lockall
# 53 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 54 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 55 "data/maps/Route101/scripts.pory"
	closemessage
# 56 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 16
# 57 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 17
# 58 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 59 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 60 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 61 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 63 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 64 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 66 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 68 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 69 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 71 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 72 "data/maps/Route101/scripts.pory"
	closemessage
# 73 "data/maps/Route101/scripts.pory"
	hidenamebox
# 74 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 75 "data/maps/Route101/scripts.pory"
	releaseall
# 76 "data/maps/Route101/scripts.pory"
	end
# 77 "data/maps/Route101/scripts.pory"

# 78 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 79 "data/maps/Route101/scripts.pory"
	lockall
# 80 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 81 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 82 "data/maps/Route101/scripts.pory"
	hidenamebox
# 83 "data/maps/Route101/scripts.pory"
	closemessage
# 84 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 85 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route101/scripts.pory"
	releaseall
# 87 "data/maps/Route101/scripts.pory"
	end
# 88 "data/maps/Route101/scripts.pory"

# 89 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 90 "data/maps/Route101/scripts.pory"
	lockall
# 91 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 92 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 93 "data/maps/Route101/scripts.pory"
	closemessage
# 94 "data/maps/Route101/scripts.pory"
	hidenamebox
# 95 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 96 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route101/scripts.pory"
	releaseall
# 98 "data/maps/Route101/scripts.pory"
	end
# 99 "data/maps/Route101/scripts.pory"

# 100 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 101 "data/maps/Route101/scripts.pory"
	lockall
# 102 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 103 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 104 "data/maps/Route101/scripts.pory"
	closemessage
# 105 "data/maps/Route101/scripts.pory"
	hidenamebox
# 106 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 107 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route101/scripts.pory"
	releaseall
# 109 "data/maps/Route101/scripts.pory"
	end
# 110 "data/maps/Route101/scripts.pory"

# 111 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 112 "data/maps/Route101/scripts.pory"
	walk_up
# 113 "data/maps/Route101/scripts.pory"
	step_end
# 114 "data/maps/Route101/scripts.pory"

# 115 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 116 "data/maps/Route101/scripts.pory"
	walk_right
# 117 "data/maps/Route101/scripts.pory"
	step_end
# 118 "data/maps/Route101/scripts.pory"

# 119 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 120 "data/maps/Route101/scripts.pory"
	walk_down
# 121 "data/maps/Route101/scripts.pory"
	step_end
# 122 "data/maps/Route101/scripts.pory"

# 123 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 154 "data/maps/Route101/scripts.pory"
	step_end
# 155 "data/maps/Route101/scripts.pory"

# 156 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 163 "data/maps/Route101/scripts.pory"
	step_end
# 164 "data/maps/Route101/scripts.pory"

# 165 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 166 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 167 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 168 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 169 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 170 "data/maps/Route101/scripts.pory"
	step_end
# 171 "data/maps/Route101/scripts.pory"

# 172 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route101/scripts.pory"
	step_end
# 179 "data/maps/Route101/scripts.pory"

# 180 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 204 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 205 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 206 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 207 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 208 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 209 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 210 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 211 "data/maps/Route101/scripts.pory"
	step_end
# 212 "data/maps/Route101/scripts.pory"

# 213 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 214 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 215 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 216 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 217 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 219 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 220 "data/maps/Route101/scripts.pory"
	step_end
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 223 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 224 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 225 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 226 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 227 "data/maps/Route101/scripts.pory"
	step_end
# 228 "data/maps/Route101/scripts.pory"

# 229 "data/maps/Route101/scripts.pory"
Route101_Movement_PokemonEscape:
# 230 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 231 "data/maps/Route101/scripts.pory"
	delay_8
# 232 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 233 "data/maps/Route101/scripts.pory"
	delay_8
# 234 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 235 "data/maps/Route101/scripts.pory"
	delay_8
# 236 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 237 "data/maps/Route101/scripts.pory"
	delay_8
# 238 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 239 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 240 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 241 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 242 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 243 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 245 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 247 "data/maps/Route101/scripts.pory"
	set_invisible
# 248 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 250 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 251 "data/maps/Route101/scripts.pory"
	step_end
# 252 "data/maps/Route101/scripts.pory"

# 253 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 254 "data/maps/Route101/scripts.pory"
	special GetPokemonAttribute
# 255 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 256 "data/maps/Route101/scripts.pory"
	end
# 257 "data/maps/Route101/scripts.pory"
Route101_EventScript_Night::
# 258 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
# 259 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 95, ITEM_LEFTOVERS
# 260 "data/maps/Route101/scripts.pory"
	dowildbattle
# 261 "data/maps/Route101/scripts.pory"
	giveitem ITEM_LEFTOVERS, 10
# 262 "data/maps/Route101/scripts.pory"
	clearflag FLAG_EVENTOMISTERIOSO1
# 263 "data/maps/Route101/scripts.pory"
	end
# 264 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 265 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 266 "data/maps/Route101/scripts.pory"
	end
# 267 "data/maps/Route101/scripts.pory"

# 268 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 269 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 270 "data/maps/Route101/scripts.pory"
	end
# 271 "data/maps/Route101/scripts.pory"

# 272 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 273 "data/maps/Route101/scripts.pory"
	lock
# 274 "data/maps/Route101/scripts.pory"
	faceplayer
# 275 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 276 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 277 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 278 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 279 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Common_Movement_WalkInPlaceFasterRight
# 280 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 281 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 283 "data/maps/Route101/scripts.pory"
	waitstate
# 284 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 285 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Common_Movement_ExclamationMark
# 286 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_PokemonEscape
# 287 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 289 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 290 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 292 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 293 "data/maps/Route101/scripts.pory"
	hidenamebox
# 294 "data/maps/Route101/scripts.pory"
	namebox Birch
# 295 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe2, MSGBOX_DEFAULT
# 296 "data/maps/Route101/scripts.pory"
	hidenamebox
# 297 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 298 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 299 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 300 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 301 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 302 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 303 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 304 "data/maps/Route101/scripts.pory"
	getemptyslot
# 305 "data/maps/Route101/scripts.pory"
	checkplayergender
# 306 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 307 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 308 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 309 "data/maps/Route101/scripts.pory"
	waitstate
# 310 "data/maps/Route101/scripts.pory"
	release
# 311 "data/maps/Route101/scripts.pory"
	end
# 312 "data/maps/Route101/scripts.pory"

# 313 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 314 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 315 "data/maps/Route101/scripts.pory"
	return
# 316 "data/maps/Route101/scripts.pory"

# 317 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 318 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 319 "data/maps/Route101/scripts.pory"
	return
# 320 "data/maps/Route101/scripts.pory"

# 321 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 322 "data/maps/Route101/scripts.pory"
	walk_right
# 323 "data/maps/Route101/scripts.pory"
	step_end
# 324 "data/maps/Route101/scripts.pory"

# 325 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 326 "data/maps/Route101/scripts.pory"
	.string "¡A-Ayúdame!$"
# 327 "data/maps/Route101/scripts.pory"

# 328 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 329 "data/maps/Route101/scripts.pory"
	.string "¡Tú, sí, tú!\n"
# 330 "data/maps/Route101/scripts.pory"
	.string "¡En mi Mochila hay {COLOR LIGHT_RED SHADOW RED} Pokéballs{COLOR DARK_GRAY SHADOW LIGHT_GRAY}, agarra una\l"
# 331 "data/maps/Route101/scripts.pory"
	.string "y sálvame, soy alérgico a este Pokémon!$"
# 332 "data/maps/Route101/scripts.pory"

# 333 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 334 "data/maps/Route101/scripts.pory"
	.string "¡¿A-adónde vas?! ¡NO ME DEJES!$"
# 335 "data/maps/Route101/scripts.pory"

# 336 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 337 "data/maps/Route101/scripts.pory"
	.string "¡UFF! ¡MUCHÍSIMAS GRACIAS!\p"
# 338 "data/maps/Route101/scripts.pory"
	.string "Eso estuvo cerca…\n"
# 339 "data/maps/Route101/scripts.pory"
	.string "Estaba estudiando los Pokémon de\l"
# 340 "data/maps/Route101/scripts.pory"
	.string "esta ruta, y me atacó un Zigzagoon…\p"
# 341 "data/maps/Route101/scripts.pory"
	.string "Ya era muy tarde cuando noté que no\n"
# 342 "data/maps/Route101/scripts.pory"
	.string "tenía mis EPI-Pen…\p"
# 343 "data/maps/Route101/scripts.pory"
	.string "¡Por cierto, yo soy el {COLOR BLUE}Profesor Birch{COLOR DARK_GRAY}!$"
# 344 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe2:
# 345 "data/maps/Route101/scripts.pory"
	.string "¡Encantado de conocerte!\n"
# 346 "data/maps/Route101/scripts.pory"
	.string "Te invito a mi Laboratorio para charlar\l"
# 347 "data/maps/Route101/scripts.pory"
	.string "más.$"
# 348 "data/maps/Route101/scripts.pory"

# 349 "data/maps/Route101/scripts.pory"

# 350 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 351 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}! ¡{STR_VAR_2}! ¡{STR_VAR_3}!$"
# 352 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter2:
# 353 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}!$"
# 354 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 355 "data/maps/Route101/scripts.pory"
	.string "Los Pokémon salvajes te atacarán\n"
# 356 "data/maps/Route101/scripts.pory"
	.string "sin pensar en la hierba alta.\p"
# 357 "data/maps/Route101/scripts.pory"
	.string "¡Ten cuidado en las Rutas!$"
# 358 "data/maps/Route101/scripts.pory"

# 359 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 360 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 361 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\l"
# 362 "data/maps/Route101/scripts.pory"
	.string "{DOWN_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}VILLA LITTLEROOT{COLOR DARK_GRAY SHADOW LIGHT_GRAY}$"
