Route101_EventScript_HelpMe::
# 5 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_HelpMe_Text_0
	return


Route101_EventScript_PleaseHelp::
# 17 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PleaseHelp_Text_0
	return


Route101_EventScript_DontLeaveMe::
# 29 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_DontLeaveMe_Text_0
	return


Route101_EventScript_YouSavedMe::
# 41 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 42 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_YouSavedMe_Text_0
# 45 "data/maps/Route101/scripts.pory"
	hidenamebox
# 46 "data/maps/Route101/scripts.pory"
	namebox Birch
# 47 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_YouSavedMe_Text_1
# 48 "data/maps/Route101/scripts.pory"
	hidenamebox
	return


# 63 "data/maps/Route101/scripts.pory"

# 64 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 65 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 66 "data/maps/Route101/scripts.pory"

# 67 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 68 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 69 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 70 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 71 "data/maps/Route101/scripts.pory"
	.byte 0
# 72 "data/maps/Route101/scripts.pory"

# 73 "data/maps/Route101/scripts.pory"
Route101_OnResume:
# 74 "data/maps/Route101/scripts.pory"
	special GetDayOrNight
# 75 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route101_OnResume_Night
# 76 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route101_OnResume_Day
# 77 "data/maps/Route101/scripts.pory"
	end
# 78 "data/maps/Route101/scripts.pory"
	
# 79 "data/maps/Route101/scripts.pory"
Route101_OnResume_Night:
# 80 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 81 "data/maps/Route101/scripts.pory"
	end
# 82 "data/maps/Route101/scripts.pory"
	
# 83 "data/maps/Route101/scripts.pory"
Route101_OnResume_Day:
# 84 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 85 "data/maps/Route101/scripts.pory"
	end
# 86 "data/maps/Route101/scripts.pory"

# 87 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 88 "data/maps/Route101/scripts.pory"
	special GetDayOrNight
# 89 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route101_OnTransition_Night
# 90 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route101_OnTransition_Day
# 91 "data/maps/Route101/scripts.pory"
	end
# 92 "data/maps/Route101/scripts.pory"
	
# 93 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Night:
# 94 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 95 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 96 "data/maps/Route101/scripts.pory"
	end
# 97 "data/maps/Route101/scripts.pory"

# 98 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Day:
# 99 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 100 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 101 "data/maps/Route101/scripts.pory"
	end
# 102 "data/maps/Route101/scripts.pory"

# 103 "data/maps/Route101/scripts.pory"

# 104 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 105 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 106 "data/maps/Route101/scripts.pory"
	.2byte 0
# 107 "data/maps/Route101/scripts.pory"

# 108 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 109 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 110 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 111 "data/maps/Route101/scripts.pory"
	end
# 112 "data/maps/Route101/scripts.pory"

# 113 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 114 "data/maps/Route101/scripts.pory"
	lockall
# 115 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 116 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 117 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_HelpMe
# 118 "data/maps/Route101/scripts.pory"
	closemessage
# 119 "data/maps/Route101/scripts.pory"
	hidenamebox
# 120 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 16
# 121 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 17
# 122 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 123 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 124 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 125 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 127 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 128 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 130 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 132 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 133 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 135 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_PleaseHelp
# 136 "data/maps/Route101/scripts.pory"
	closemessage
# 137 "data/maps/Route101/scripts.pory"
	hidenamebox
# 138 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 139 "data/maps/Route101/scripts.pory"
	releaseall
# 140 "data/maps/Route101/scripts.pory"
	end
# 141 "data/maps/Route101/scripts.pory"

# 142 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 143 "data/maps/Route101/scripts.pory"
	lockall
# 144 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 145 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 146 "data/maps/Route101/scripts.pory"
	hidenamebox
# 147 "data/maps/Route101/scripts.pory"
	closemessage
# 148 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 149 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route101/scripts.pory"
	releaseall
# 151 "data/maps/Route101/scripts.pory"
	end
# 152 "data/maps/Route101/scripts.pory"

# 153 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 154 "data/maps/Route101/scripts.pory"
	lockall
# 155 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 156 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 157 "data/maps/Route101/scripts.pory"
	closemessage
# 158 "data/maps/Route101/scripts.pory"
	hidenamebox
# 159 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 160 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route101/scripts.pory"
	releaseall
# 162 "data/maps/Route101/scripts.pory"
	end
# 163 "data/maps/Route101/scripts.pory"

# 164 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 165 "data/maps/Route101/scripts.pory"
	lockall
# 166 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 167 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 168 "data/maps/Route101/scripts.pory"
	closemessage
# 169 "data/maps/Route101/scripts.pory"
	hidenamebox
# 170 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 171 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route101/scripts.pory"
	releaseall
# 173 "data/maps/Route101/scripts.pory"
	end
# 174 "data/maps/Route101/scripts.pory"

# 175 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 176 "data/maps/Route101/scripts.pory"
	walk_up
# 177 "data/maps/Route101/scripts.pory"
	step_end
# 178 "data/maps/Route101/scripts.pory"

# 179 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 180 "data/maps/Route101/scripts.pory"
	walk_right
# 181 "data/maps/Route101/scripts.pory"
	step_end
# 182 "data/maps/Route101/scripts.pory"

# 183 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 184 "data/maps/Route101/scripts.pory"
	walk_down
# 185 "data/maps/Route101/scripts.pory"
	step_end
# 186 "data/maps/Route101/scripts.pory"

# 187 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 204 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 205 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 206 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 208 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 209 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 210 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 211 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 213 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 214 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 215 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 216 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 217 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 218 "data/maps/Route101/scripts.pory"
	step_end
# 219 "data/maps/Route101/scripts.pory"

# 220 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 221 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 222 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 223 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 224 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 225 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 227 "data/maps/Route101/scripts.pory"
	step_end
# 228 "data/maps/Route101/scripts.pory"

# 229 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 230 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 231 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 232 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 233 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 234 "data/maps/Route101/scripts.pory"
	step_end
# 235 "data/maps/Route101/scripts.pory"

# 236 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 237 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 238 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 239 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 240 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 241 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 242 "data/maps/Route101/scripts.pory"
	step_end
# 243 "data/maps/Route101/scripts.pory"

# 244 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 245 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 246 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 247 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 248 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 250 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 251 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 252 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 253 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 254 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 255 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 256 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 257 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 258 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 259 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 260 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 261 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 262 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 263 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 264 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 265 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 266 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 267 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 268 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 269 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 270 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 271 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 272 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 273 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 274 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 275 "data/maps/Route101/scripts.pory"
	step_end
# 276 "data/maps/Route101/scripts.pory"

# 277 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 278 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 279 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 280 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 281 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 282 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 283 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 284 "data/maps/Route101/scripts.pory"
	step_end
# 285 "data/maps/Route101/scripts.pory"

# 286 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 287 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 288 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 289 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 290 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 291 "data/maps/Route101/scripts.pory"
	step_end
# 292 "data/maps/Route101/scripts.pory"

# 293 "data/maps/Route101/scripts.pory"
Route101_Movement_PokemonEscape:
# 294 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 295 "data/maps/Route101/scripts.pory"
	delay_8
# 296 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 297 "data/maps/Route101/scripts.pory"
	delay_8
# 298 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 299 "data/maps/Route101/scripts.pory"
	delay_8
# 300 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 301 "data/maps/Route101/scripts.pory"
	delay_8
# 302 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 303 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 304 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 305 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 306 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 307 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 308 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 309 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 310 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 311 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 312 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 313 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 314 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 316 "data/maps/Route101/scripts.pory"
	set_invisible
# 317 "data/maps/Route101/scripts.pory"
	step_end
# 318 "data/maps/Route101/scripts.pory"

# 319 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 320 "data/maps/Route101/scripts.pory"
	special GetPokemonAttribute
# 321 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 322 "data/maps/Route101/scripts.pory"
	end
# 323 "data/maps/Route101/scripts.pory"
Route101_EventScript_Night::
# 324 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
# 325 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 95, ITEM_LEFTOVERS
# 326 "data/maps/Route101/scripts.pory"
	dowildbattle
# 327 "data/maps/Route101/scripts.pory"
	giveitem ITEM_LEFTOVERS, 10
# 328 "data/maps/Route101/scripts.pory"
	clearflag FLAG_EVENTOMISTERIOSO1
# 329 "data/maps/Route101/scripts.pory"
	end
# 330 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 331 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 332 "data/maps/Route101/scripts.pory"
	end
# 333 "data/maps/Route101/scripts.pory"

# 334 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 335 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 336 "data/maps/Route101/scripts.pory"
	end
# 337 "data/maps/Route101/scripts.pory"

# 338 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 339 "data/maps/Route101/scripts.pory"
	lock
# 340 "data/maps/Route101/scripts.pory"
	faceplayer
# 341 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 342 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 343 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 344 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 345 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Common_Movement_WalkInPlaceFasterRight
# 346 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 347 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 349 "data/maps/Route101/scripts.pory"
	waitstate
# 350 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 351 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Common_Movement_ExclamationMark
# 352 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 353 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_PokemonEscape
# 354 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 355 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 356 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_YouSavedMe
# 358 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 359 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 360 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 361 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 362 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 363 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 364 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 365 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 366 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 367 "data/maps/Route101/scripts.pory"
	getemptyslot
# 368 "data/maps/Route101/scripts.pory"
	checkplayergender
# 369 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 370 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 371 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 372 "data/maps/Route101/scripts.pory"
	waitstate
# 373 "data/maps/Route101/scripts.pory"
	release
# 374 "data/maps/Route101/scripts.pory"
	end
# 375 "data/maps/Route101/scripts.pory"

# 376 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 377 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 378 "data/maps/Route101/scripts.pory"
	return
# 379 "data/maps/Route101/scripts.pory"

# 380 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 381 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 382 "data/maps/Route101/scripts.pory"
	return
# 383 "data/maps/Route101/scripts.pory"

# 384 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 385 "data/maps/Route101/scripts.pory"
	walk_right
# 386 "data/maps/Route101/scripts.pory"
	step_end
# 387 "data/maps/Route101/scripts.pory"

# 388 "data/maps/Route101/scripts.pory"

# 389 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 390 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}! ¡{STR_VAR_2}! ¡{STR_VAR_3}!$"
# 391 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter2:
# 392 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}!$"
# 393 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 394 "data/maps/Route101/scripts.pory"
	.string "Los Pokémon salvajes te atacarán\n"
# 395 "data/maps/Route101/scripts.pory"
	.string "sin pensar en la hierba alta.\p"
# 396 "data/maps/Route101/scripts.pory"
	.string "¡Ten cuidado en las Rutas!$"
# 397 "data/maps/Route101/scripts.pory"

# 398 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 399 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 400 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\l"
# 401 "data/maps/Route101/scripts.pory"
	.string "{DOWN_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}VILLA LITTLEROOT{COLOR DARK_GRAY SHADOW LIGHT_GRAY}$"

Route101_EventScript_HelpMe_Text_0:
# 5 "data/maps/Route101/scripts.pory"
	.string "¡ALGUIEN, AYÚDEME!$"

Route101_EventScript_PleaseHelp_Text_0:
# 17 "data/maps/Route101/scripts.pory"
	.string "¡Tú, ayúdame, soy alérgico a este\n"
	.string "Pokémon, y olvidé mi EPI-Pen!\p"
	.string "¡Usa las PokéBall que están en mi\n"
	.string "maletín!$"

Route101_EventScript_DontLeaveMe_Text_0:
# 29 "data/maps/Route101/scripts.pory"
	.string "¡No me dejes así!$"

Route101_EventScript_YouSavedMe_Text_0:
# 42 "data/maps/Route101/scripts.pory"
	.string "¡UFF! ¡MUCHÍSIMAS GRACIAS!\p"
	.string "Eso estuvo cerca…\n"
	.string "Estaba estudiando los Pokémon de esta\l"
	.string "ruta, y me atacó un Zigzagoon…\p"
	.string "¡Por cierto, yo soy el {COLOR BLUE}Profesor Birch{COLOR DARK_GRAY}!$"

Route101_EventScript_YouSavedMe_Text_1:
# 47 "data/maps/Route101/scripts.pory"
	.string "¡Encantado!\n"
	.string "Te invito a mi Laboratorio para charlar\l"
	.string "más.$"
