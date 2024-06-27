Route102_EventScript_Boy::
# 4 "data/maps/Route102/scripts.pory"
	CheckItem ITEM_GREAT_BALL
# 5 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102_EventScript_Boy_1
# 29 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_3
	return

Route102_EventScript_Boy_1:
# 15 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_0
# 16 "data/maps/Route102/scripts.pory"
	message Route102_EventScript_Boy_Text_1
# 17 "data/maps/Route102/scripts.pory"
	giveitem ITEM_QUICK_BALL
# 18 "data/maps/Route102/scripts.pory"
	removeitem ITEM_GREAT_BALL
# 19 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_2
	return


# 36 "data/maps/Route102/scripts.pory"

# 37 "data/maps/Route102/scripts.pory"
.set LOCALID_RALTS, 9
# 38 "data/maps/Route102/scripts.pory"
.set LOCALID_ZIGZA, 10
# 39 "data/maps/Route102/scripts.pory"
.set LOCALID_BALL, 11
# 40 "data/maps/Route102/scripts.pory"
.set LOCALID_BALL2, 13
# 41 "data/maps/Route102/scripts.pory"
.set LOCALID_WALLY, 14
# 42 "data/maps/Route102/scripts.pory"

# 43 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 44 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route102_OnFrame
# 45 "data/maps/Route102/scripts.pory"
	.byte 0
# 46 "data/maps/Route102/scripts.pory"

# 47 "data/maps/Route102/scripts.pory"
Route102_OnFrame::
# 48 "data/maps/Route102/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, Route102_WallyTutorial
# 49 "data/maps/Route102/scripts.pory"
	.2byte 0
# 50 "data/maps/Route102/scripts.pory"

# 51 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 52 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 53 "data/maps/Route102/scripts.pory"
	end
# 54 "data/maps/Route102/scripts.pory"

# 55 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 56 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 57 "data/maps/Route102/scripts.pory"
	end
# 58 "data/maps/Route102/scripts.pory"

# 59 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 60 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 61 "data/maps/Route102/scripts.pory"
	end
# 62 "data/maps/Route102/scripts.pory"

# 63 "data/maps/Route102/scripts.pory"

# 64 "data/maps/Route102/scripts.pory"
Error::
# 65 "data/maps/Route102/scripts.pory"
	lockall
# 66 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 67 "data/maps/Route102/scripts.pory"
	special DrawWholeMapView
# 68 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 69 "data/maps/Route102/scripts.pory"
	msgbox NoDeberiasVerlo, MSGBOX_NPC
# 70 "data/maps/Route102/scripts.pory"
	releaseall
# 71 "data/maps/Route102/scripts.pory"
	end
# 72 "data/maps/Route102/scripts.pory"

# 73 "data/maps/Route102/scripts.pory"
Route102_WallyTutorial::
# 74 "data/maps/Route102/scripts.pory"
	lockall
# 75 "data/maps/Route102/scripts.pory"
	addobject LOCALID_WALLY
# 76 "data/maps/Route102/scripts.pory"
	addobject LOCALID_BALL
# 77 "data/maps/Route102/scripts.pory"
	addobject LOCALID_BALL2
# 78 "data/maps/Route102/scripts.pory"
	addobject LOCALID_RALTS
# 79 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ZIGZA
# 80 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyTutorialWally
# 81 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_Movement_WallyTutorialPlayer
# 82 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route102/scripts.pory"
	namebox Wally
# 84 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 85 "data/maps/Route102/scripts.pory"
	hidenamebox
# 86 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RaltsAppears
# 87 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_UnRalts, MSGBOX_DEFAULT
# 88 "data/maps/Route102/scripts.pory"
	closemessage
# 89 "data/maps/Route102/scripts.pory"
	hidenamebox
# 90 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 3, 6
# 91 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 92 "data/maps/Route102/scripts.pory"
	delay 16
# 93 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 94 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 95 "data/maps/Route102/scripts.pory"
	delay 16
# 96 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 10, 7
# 97 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ZIGZA, 3, 6
# 98 "data/maps/Route102/scripts.pory"
	delay 8
# 99 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 100 "data/maps/Route102/scripts.pory"
	delay 8
# 101 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 102 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 103 "data/maps/Route102/scripts.pory"
	waitmoncry
# 104 "data/maps/Route102/scripts.pory"
	delay 8
# 105 "data/maps/Route102/scripts.pory"
	namebox Wally
# 106 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyCommands
# 107 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyJump
# 108 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route102/scripts.pory"
	closemessage
# 110 "data/maps/Route102/scripts.pory"
	hidenamebox
# 111 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzagoonAttacks
# 112 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 113 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 114 "data/maps/Route102/scripts.pory"
	waitmoncry
# 115 "data/maps/Route102/scripts.pory"
	closemessage
# 116 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 117 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts
# 118 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsTeleport
# 119 "data/maps/Route102/scripts.pory"
	delay 2
# 120 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 121 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route102/scripts.pory"
	delay 8
# 123 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_RALTS, 5, 6
# 124 "data/maps/Route102/scripts.pory"
	delay 16
# 125 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsTeleport2
# 126 "data/maps/Route102/scripts.pory"
	delay 4
# 127 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 128 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route102/scripts.pory"
	delay 8
# 130 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaSurprise
# 131 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 132 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 133 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 135 "data/maps/Route102/scripts.pory"
	waitmoncry
# 136 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaHurt
# 137 "data/maps/Route102/scripts.pory"
	delay 60
# 138 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PokeballVe, MSGBOX_DEFAULT
# 139 "data/maps/Route102/scripts.pory"
	closemessage
# 140 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallThrow
# 141 "data/maps/Route102/scripts.pory"
	delay 8
# 142 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatch
# 143 "data/maps/Route102/scripts.pory"
	delay 8
# 144 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyGrabBall
# 145 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route102/scripts.pory"
	delay 16
# 147 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
# 148 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 149 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatchHide
# 150 "data/maps/Route102/scripts.pory"
	namebox Wally
# 151 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 152 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyGrabBall
# 153 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route102/scripts.pory"
	closemessage
# 155 "data/maps/Route102/scripts.pory"
	hidenamebox
# 156 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyZigzagoonThanks, MSGBOX_DEFAULT
# 157 "data/maps/Route102/scripts.pory"
	namebox Wally
# 158 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 159 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ZIGZA
# 160 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 5, 7
# 161 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 162 "data/maps/Route102/scripts.pory"
	delay 8
# 163 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 164 "data/maps/Route102/scripts.pory"
	waitse
# 165 "data/maps/Route102/scripts.pory"
	closemessage
# 166 "data/maps/Route102/scripts.pory"
	hidenamebox
# 167 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
# 168 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallZigzaHide
# 170 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft
# 171 "data/maps/Route102/scripts.pory"
	waitmovement LOCALID_WALLY
# 172 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 173 "data/maps/Route102/scripts.pory"
	closemessage
# 174 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 175 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 176 "data/maps/Route102/scripts.pory"
	fadedefaultbgm
# 177 "data/maps/Route102/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 178 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 179 "data/maps/Route102/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 180 "data/maps/Route102/scripts.pory"
	waitstate
# 181 "data/maps/Route102/scripts.pory"
	releaseall
# 182 "data/maps/Route102/scripts.pory"
	end
# 183 "data/maps/Route102/scripts.pory"

# 184 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialPlayer:
# 185 "data/maps/Route102/scripts.pory"
	delay_8
# 186 "data/maps/Route102/scripts.pory"
	walk_right
# 187 "data/maps/Route102/scripts.pory"
	walk_right
# 188 "data/maps/Route102/scripts.pory"
	walk_up
# 189 "data/maps/Route102/scripts.pory"
	walk_up
# 190 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 191 "data/maps/Route102/scripts.pory"
	step_end
# 192 "data/maps/Route102/scripts.pory"

# 193 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialWally:
# 194 "data/maps/Route102/scripts.pory"
	delay_8
# 195 "data/maps/Route102/scripts.pory"
	walk_right
# 196 "data/maps/Route102/scripts.pory"
	walk_up
# 197 "data/maps/Route102/scripts.pory"
	walk_up
# 198 "data/maps/Route102/scripts.pory"
	walk_up
# 199 "data/maps/Route102/scripts.pory"
	delay_16
# 200 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/Route102/scripts.pory"
	delay_16
# 202 "data/maps/Route102/scripts.pory"
	delay_16
# 203 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 204 "data/maps/Route102/scripts.pory"
	step_end
# 205 "data/maps/Route102/scripts.pory"

# 206 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyGrabBall:
# 207 "data/maps/Route102/scripts.pory"
	walk_right
# 208 "data/maps/Route102/scripts.pory"
	walk_right
# 209 "data/maps/Route102/scripts.pory"
	step_end
# 210 "data/maps/Route102/scripts.pory"

# 211 "data/maps/Route102/scripts.pory"

# 212 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyJump::
# 213 "data/maps/Route102/scripts.pory"
	jump_in_place_right
# 214 "data/maps/Route102/scripts.pory"
	step_end
# 215 "data/maps/Route102/scripts.pory"

# 216 "data/maps/Route102/scripts.pory"
Route102_EventScript_RaltsAppears::
# 217 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_RALTS, 6, 6
# 218 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsJump
# 219 "data/maps/Route102/scripts.pory"
	delay 8
# 220 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 221 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
# 223 "data/maps/Route102/scripts.pory"
	waitmoncry
# 224 "data/maps/Route102/scripts.pory"
	delay 8
# 225 "data/maps/Route102/scripts.pory"
	playbgm MUS_VS_WILD, FALSE
# 226 "data/maps/Route102/scripts.pory"
	return
# 227 "data/maps/Route102/scripts.pory"

# 228 "data/maps/Route102/scripts.pory"

# 229 "data/maps/Route102/scripts.pory"
	
# 230 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaSurprise::
# 231 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Common_Movement_ExclamationMark
# 232 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 233 "data/maps/Route102/scripts.pory"
	return
# 234 "data/maps/Route102/scripts.pory"

# 235 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaHurt::
# 236 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 237 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Route102_Movement_RaltsHurt
# 238 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route102/scripts.pory"
	return
# 240 "data/maps/Route102/scripts.pory"

# 241 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallThrow::
# 242 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 3, 6
# 243 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL, Route102_Movement_BallThrow
# 244 "data/maps/Route102/scripts.pory"
	playse SE_BALL_THROW
# 245 "data/maps/Route102/scripts.pory"
	waitse
# 246 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 247 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_RALTS
# 248 "data/maps/Route102/scripts.pory"
	waitse
# 249 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 250 "data/maps/Route102/scripts.pory"
	waitmoncry
# 251 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 10, 7
# 253 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL2, 5, 6
# 254 "data/maps/Route102/scripts.pory"
	return
# 255 "data/maps/Route102/scripts.pory"

# 256 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatch::
# 257 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 258 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 259 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 261 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 262 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 263 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route102/scripts.pory"
	waitse
# 265 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 266 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route102/scripts.pory"
	delay 16
# 268 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 269 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 270 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 272 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 274 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 275 "data/maps/Route102/scripts.pory"
	waitse
# 276 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 277 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route102/scripts.pory"
	delay 16
# 279 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 280 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 281 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 283 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 285 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 286 "data/maps/Route102/scripts.pory"
	waitse
# 287 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 288 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route102/scripts.pory"
	delay 24
# 290 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 291 "data/maps/Route102/scripts.pory"
	waitse 
# 292 "data/maps/Route102/scripts.pory"
	delay 10
# 293 "data/maps/Route102/scripts.pory"
	playfanfare MUS_EVOLVED
# 294 "data/maps/Route102/scripts.pory"
	waitfanfare
# 295 "data/maps/Route102/scripts.pory"
	return
# 296 "data/maps/Route102/scripts.pory"

# 297 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatchHide::
# 298 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL2
# 299 "data/maps/Route102/scripts.pory"
	return
# 300 "data/maps/Route102/scripts.pory"

# 301 "data/maps/Route102/scripts.pory"

# 302 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallZigzaHide::
# 303 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL
# 304 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL2
# 305 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_RALTS
# 306 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ZIGZA
# 307 "data/maps/Route102/scripts.pory"
	return
# 308 "data/maps/Route102/scripts.pory"
	
# 309 "data/maps/Route102/scripts.pory"

# 310 "data/maps/Route102/scripts.pory"
Route102_Movement_BallThrow::
# 311 "data/maps/Route102/scripts.pory"
	disable_jump_landing_ground_effect
# 312 "data/maps/Route102/scripts.pory"
	jump_2_right
# 313 "data/maps/Route102/scripts.pory"
	step_end
# 314 "data/maps/Route102/scripts.pory"

# 315 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport::
# 316 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 317 "data/maps/Route102/scripts.pory"
	set_invisible
# 318 "data/maps/Route102/scripts.pory"
	step_end
# 319 "data/maps/Route102/scripts.pory"

# 320 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport2::
# 321 "data/maps/Route102/scripts.pory"
	set_visible
# 322 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 323 "data/maps/Route102/scripts.pory"
	face_right
# 324 "data/maps/Route102/scripts.pory"
	step_end
# 325 "data/maps/Route102/scripts.pory"

# 326 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzagoonAttacks::
# 327 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Route102_Movement_AttackRalts
# 328 "data/maps/Route102/scripts.pory"
	delay 24
# 329 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 330 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsHurt
# 331 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 332 "data/maps/Route102/scripts.pory"
	return
# 333 "data/maps/Route102/scripts.pory"
	
# 334 "data/maps/Route102/scripts.pory"
	
# 335 "data/maps/Route102/scripts.pory"
	
# 336 "data/maps/Route102/scripts.pory"
Route102_Movement_AttackRalts::
# 337 "data/maps/Route102/scripts.pory"
	walk_right
# 338 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 339 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 340 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 341 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 342 "data/maps/Route102/scripts.pory"
	delay_16
# 343 "data/maps/Route102/scripts.pory"
	walk_left
# 344 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 345 "data/maps/Route102/scripts.pory"
	step_end
# 346 "data/maps/Route102/scripts.pory"

# 347 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsHurt::
# 348 "data/maps/Route102/scripts.pory"
	face_left
# 349 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 350 "data/maps/Route102/scripts.pory"
	jump_right
# 351 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 352 "data/maps/Route102/scripts.pory"
	step_end
# 353 "data/maps/Route102/scripts.pory"

# 354 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsJump::
# 355 "data/maps/Route102/scripts.pory"
	jump_in_place_left
# 356 "data/maps/Route102/scripts.pory"
	step_end
# 357 "data/maps/Route102/scripts.pory"

# 358 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 359 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 360 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 361 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 362 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 363 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 364 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 365 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 366 "data/maps/Route102/scripts.pory"
	release
# 367 "data/maps/Route102/scripts.pory"
	end
# 368 "data/maps/Route102/scripts.pory"

# 369 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 370 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 371 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 372 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 373 "data/maps/Route102/scripts.pory"
	release
# 374 "data/maps/Route102/scripts.pory"
	end
# 375 "data/maps/Route102/scripts.pory"

# 376 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 377 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 378 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 379 "data/maps/Route102/scripts.pory"
	release
# 380 "data/maps/Route102/scripts.pory"
	end
# 381 "data/maps/Route102/scripts.pory"

# 382 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 383 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 384 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 385 "data/maps/Route102/scripts.pory"
	release
# 386 "data/maps/Route102/scripts.pory"
	end
# 387 "data/maps/Route102/scripts.pory"

# 388 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 389 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 390 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 391 "data/maps/Route102/scripts.pory"
	release
# 392 "data/maps/Route102/scripts.pory"
	end
# 393 "data/maps/Route102/scripts.pory"

# 394 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 395 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 396 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 397 "data/maps/Route102/scripts.pory"
	end
# 398 "data/maps/Route102/scripts.pory"

# 399 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 400 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 401 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 402 "data/maps/Route102/scripts.pory"
	end
# 403 "data/maps/Route102/scripts.pory"

# 404 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 405 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 406 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 407 "data/maps/Route102/scripts.pory"
	end
# 408 "data/maps/Route102/scripts.pory"

# 409 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 410 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 411 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 412 "data/maps/Route102/scripts.pory"
	end
# 413 "data/maps/Route102/scripts.pory"

# 414 "data/maps/Route102/scripts.pory"
Route102_Text_Sigsa:
# 415 "data/maps/Route102/scripts.pory"
	.string "¡ZIGZA!$"
# 416 "data/maps/Route102/scripts.pory"
Route102_Text_Ralts:
# 417 "data/maps/Route102/scripts.pory"
	.string "¡R-RALTS!$"
# 418 "data/maps/Route102/scripts.pory"
Route102_Text_UnRalts:
# 419 "data/maps/Route102/scripts.pory"
	.string "¡WOW! ¡Un Ralts!\n"
# 420 "data/maps/Route102/scripts.pory"
	.string "Estos son raros, leí en un libro.\l"
# 421 "data/maps/Route102/scripts.pory"
	.string "Bueno, ahora es tiempo de atraparlo…\l"
# 422 "data/maps/Route102/scripts.pory"
	.string "Eh… ¿Cómo…?\p"
# 423 "data/maps/Route102/scripts.pory"
	.string "Em… Z-Zigzagon… ¡Sal de ahí!$"
# 424 "data/maps/Route102/scripts.pory"

# 425 "data/maps/Route102/scripts.pory"
Route102_Text_WallyCommands:
# 426 "data/maps/Route102/scripts.pory"
	.string "Ahora, tengo que atacar, ¿no?\pZigzagoon, ¡Tacleada!$"
# 427 "data/maps/Route102/scripts.pory"

# 428 "data/maps/Route102/scripts.pory"
Route102_Text_PokeballVe:
# 429 "data/maps/Route102/scripts.pory"
	.string "¡Y-y-y-y ahora, eh…!\p"
# 430 "data/maps/Route102/scripts.pory"
	.string "¡POKÉBALL, CAPTÚRALO!$"
# 431 "data/maps/Route102/scripts.pory"

# 432 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 433 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}…\n"
# 434 "data/maps/Route102/scripts.pory"
	.string "Los Pokémon viven en el pasto,\l"
# 435 "data/maps/Route102/scripts.pory"
	.string "¿no?\p"
# 436 "data/maps/Route102/scripts.pory"
	.string "Por favor quédate así puedo…\n"
# 437 "data/maps/Route102/scripts.pory"
	.string "¡…AHHH!$"
# 438 "data/maps/Route102/scripts.pory"

# 439 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 440 "data/maps/Route102/scripts.pory"
	.string "L-lo hice…\n"
# 441 "data/maps/Route102/scripts.pory"
	.string "¡TENGO UN POKÉMON!$"
# 442 "data/maps/Route102/scripts.pory"

# 443 "data/maps/Route102/scripts.pory"
Route102_Text_WallyZigzagoonThanks:
# 444 "data/maps/Route102/scripts.pory"
	.string "¡Gracias, Zigzagoon!\nNo podría haberlo hecho sin ti...\pEh... ¡Regresa!$"
# 445 "data/maps/Route102/scripts.pory"

# 446 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 447 "data/maps/Route102/scripts.pory"
	.string "¡{PLAYER}, gracias!\n"
# 448 "data/maps/Route102/scripts.pory"
	.string "¡Volvamos al Gimnasio!$"
# 449 "data/maps/Route102/scripts.pory"

# 450 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 451 "data/maps/Route102/scripts.pory"
	.string "No…soy tan alto, así que\n"
# 452 "data/maps/Route102/scripts.pory"
	.string "me hundo en el pasto alto.\p"
# 453 "data/maps/Route102/scripts.pory"
	.string "Ayúdame… Soy alérgic-\n"
# 454 "data/maps/Route102/scripts.pory"
	.string "-AAAA…\l"
# 455 "data/maps/Route102/scripts.pory"
	.string "CHOOO- alégica…$"
# 456 "data/maps/Route102/scripts.pory"

# 457 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 458 "data/maps/Route102/scripts.pory"
	.string "RUTA 102\n"
# 459 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} PUEBLO OLDALE$"
# 460 "data/maps/Route102/scripts.pory"

# 461 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 462 "data/maps/Route102/scripts.pory"
	.string "RUTA 102\n"
# 463 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} CIUDAD PETALBURG$"

Route102_EventScript_Boy_Text_0:
# 15 "data/maps/Route102/scripts.pory"
	.string "¡Ah!\n"
	.string "Me asustaste...\p"
	.string "¡Acepta este cambio y no le digas a\n"
	.string "nadie que estaba acá!$"

Route102_EventScript_Boy_Text_1:
# 16 "data/maps/Route102/scripts.pory"
	.string "¡Obtuviste una Veloz Ball a cambio de la Super Ball!$"

Route102_EventScript_Boy_Text_2:
# 19 "data/maps/Route102/scripts.pory"
	.string "La Veloz Ball es mejor cuando la usas al\n"
	.string "inicio de un combate.\p"
	.string "¡Acércate por detrás y atrapa a tu\n"
	.string "presa!$"

Route102_EventScript_Boy_Text_3:
# 29 "data/maps/Route102/scripts.pory"
	.string "¡Ah!\n"
	.string "¡Me asustaste!\p"
	.string "Te daría esta Veloz Ball, pero no tienes\n"
	.string "una Super Ball para darme a cambio...$"
