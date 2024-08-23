Route102_EventScript_Boy::
# 141 "data/maps/Route102/scripts.pory"
	CheckItem ITEM_GREAT_BALL
# 142 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102_EventScript_Boy_2
# 166 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_3
Route102_EventScript_Boy_1:
# 170 "data/maps/Route102/scripts.pory"
	closemessage
	return

Route102_EventScript_Boy_2:
# 152 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_0
# 153 "data/maps/Route102/scripts.pory"
	message Route102_EventScript_Boy_Text_1
# 154 "data/maps/Route102/scripts.pory"
	giveitem ITEM_QUICK_BALL
# 155 "data/maps/Route102/scripts.pory"
	removeitem ITEM_GREAT_BALL
# 156 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_2
	goto Route102_EventScript_Boy_1


# 174 "data/maps/Route102/scripts.pory"

# 175 "data/maps/Route102/scripts.pory"
.set LOCALID_RALTS, 9
# 176 "data/maps/Route102/scripts.pory"
.set LOCALID_ZIGZA, 10
# 177 "data/maps/Route102/scripts.pory"
.set LOCALID_BALL, 11
# 178 "data/maps/Route102/scripts.pory"
.set LOCALID_BALL2, 13
# 179 "data/maps/Route102/scripts.pory"
.set LOCALID_WALLY, 14
# 180 "data/maps/Route102/scripts.pory"

# 181 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 182 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route102_OnFrame
# 183 "data/maps/Route102/scripts.pory"
	.byte 0
# 184 "data/maps/Route102/scripts.pory"

# 185 "data/maps/Route102/scripts.pory"
Route102_OnFrame::
# 186 "data/maps/Route102/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, Route102_WallyTutorial
# 187 "data/maps/Route102/scripts.pory"
	.2byte 0
# 188 "data/maps/Route102/scripts.pory"

# 189 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 190 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 191 "data/maps/Route102/scripts.pory"
	end
# 192 "data/maps/Route102/scripts.pory"

# 193 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 194 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 195 "data/maps/Route102/scripts.pory"
	end
# 196 "data/maps/Route102/scripts.pory"

# 197 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 198 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 199 "data/maps/Route102/scripts.pory"
	end
# 200 "data/maps/Route102/scripts.pory"

# 201 "data/maps/Route102/scripts.pory"

# 202 "data/maps/Route102/scripts.pory"
Error::
# 203 "data/maps/Route102/scripts.pory"
	lockall
# 204 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 205 "data/maps/Route102/scripts.pory"
	special DrawWholeMapView
# 206 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 207 "data/maps/Route102/scripts.pory"
	msgbox NoDeberiasVerlo, MSGBOX_NPC
# 208 "data/maps/Route102/scripts.pory"
	releaseall
# 209 "data/maps/Route102/scripts.pory"
	end
# 210 "data/maps/Route102/scripts.pory"

# 211 "data/maps/Route102/scripts.pory"
Route102_WallyTutorial::
# 212 "data/maps/Route102/scripts.pory"
	lockall
# 213 "data/maps/Route102/scripts.pory"
	addobject LOCALID_WALLY
# 214 "data/maps/Route102/scripts.pory"
	addobject LOCALID_BALL
# 215 "data/maps/Route102/scripts.pory"
	addobject LOCALID_BALL2
# 216 "data/maps/Route102/scripts.pory"
	addobject LOCALID_RALTS
# 217 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ZIGZA
# 218 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyTutorialWally
# 219 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_Movement_WallyTutorialPlayer
# 220 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 221 "data/maps/Route102/scripts.pory"
	namebox Wally
# 222 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_INTERRUPT
# 223 "data/maps/Route102/scripts.pory"
	hidenamebox
# 224 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RaltsAppears
# 225 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_UnRalts, MSGBOX_DEFAULT
# 226 "data/maps/Route102/scripts.pory"
	closemessage
# 227 "data/maps/Route102/scripts.pory"
	hidenamebox
# 228 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 3, 6
# 229 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 230 "data/maps/Route102/scripts.pory"
	delay 16
# 231 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 232 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 233 "data/maps/Route102/scripts.pory"
	delay 16
# 234 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 10, 7
# 235 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ZIGZA, 3, 6
# 236 "data/maps/Route102/scripts.pory"
	delay 8
# 237 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 238 "data/maps/Route102/scripts.pory"
	delay 8
# 239 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 240 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 241 "data/maps/Route102/scripts.pory"
	waitmoncry
# 242 "data/maps/Route102/scripts.pory"
	delay 8
# 243 "data/maps/Route102/scripts.pory"
	namebox Wally
# 244 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyCommands
# 245 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyJump
# 246 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route102/scripts.pory"
	closemessage
# 248 "data/maps/Route102/scripts.pory"
	hidenamebox
# 249 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzagoonAttacks
# 250 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 251 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 252 "data/maps/Route102/scripts.pory"
	waitmoncry
# 253 "data/maps/Route102/scripts.pory"
	closemessage
# 254 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 255 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts
# 256 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsTeleport
# 257 "data/maps/Route102/scripts.pory"
	delay 2
# 258 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 259 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route102/scripts.pory"
	delay 8
# 261 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_RALTS, 5, 6
# 262 "data/maps/Route102/scripts.pory"
	delay 16
# 263 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsTeleport2
# 264 "data/maps/Route102/scripts.pory"
	delay 4
# 265 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 266 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route102/scripts.pory"
	delay 8
# 268 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaSurprise
# 269 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 270 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 271 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 273 "data/maps/Route102/scripts.pory"
	waitmoncry
# 274 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaHurt
# 275 "data/maps/Route102/scripts.pory"
	delay 60
# 276 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PokeballVe, MSGBOX_DEFAULT
# 277 "data/maps/Route102/scripts.pory"
	closemessage
# 278 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallThrow
# 279 "data/maps/Route102/scripts.pory"
	delay 8
# 280 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatch
# 281 "data/maps/Route102/scripts.pory"
	delay 8
# 282 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyGrabBall
# 283 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route102/scripts.pory"
	delay 16
# 285 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
# 286 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatchHide
# 288 "data/maps/Route102/scripts.pory"
	namebox Wally
# 289 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 290 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyGrabBall
# 291 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route102/scripts.pory"
	closemessage
# 293 "data/maps/Route102/scripts.pory"
	hidenamebox
# 294 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyZigzagoonThanks, MSGBOX_DEFAULT
# 295 "data/maps/Route102/scripts.pory"
	namebox Wally
# 296 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 297 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ZIGZA
# 298 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 7, 6
# 299 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 300 "data/maps/Route102/scripts.pory"
	delay 8
# 301 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 302 "data/maps/Route102/scripts.pory"
	waitse
# 303 "data/maps/Route102/scripts.pory"
	closemessage
# 304 "data/maps/Route102/scripts.pory"
	hidenamebox
# 305 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
# 306 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallZigzaHide
# 308 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft
# 309 "data/maps/Route102/scripts.pory"
	waitmovement LOCALID_WALLY
# 310 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 311 "data/maps/Route102/scripts.pory"
	closemessage
# 312 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 313 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 314 "data/maps/Route102/scripts.pory"
	fadedefaultbgm
# 315 "data/maps/Route102/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 316 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 317 "data/maps/Route102/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 318 "data/maps/Route102/scripts.pory"
	waitstate
# 319 "data/maps/Route102/scripts.pory"
	releaseall
# 320 "data/maps/Route102/scripts.pory"
	end
# 321 "data/maps/Route102/scripts.pory"

# 322 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialPlayer:
# 323 "data/maps/Route102/scripts.pory"
	delay_8
# 324 "data/maps/Route102/scripts.pory"
	walk_right
# 325 "data/maps/Route102/scripts.pory"
	walk_right
# 326 "data/maps/Route102/scripts.pory"
	walk_up
# 327 "data/maps/Route102/scripts.pory"
	walk_up
# 328 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 329 "data/maps/Route102/scripts.pory"
	step_end
# 330 "data/maps/Route102/scripts.pory"

# 331 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialWally:
# 332 "data/maps/Route102/scripts.pory"
	delay_8
# 333 "data/maps/Route102/scripts.pory"
	walk_right
# 334 "data/maps/Route102/scripts.pory"
	walk_up
# 335 "data/maps/Route102/scripts.pory"
	walk_up
# 336 "data/maps/Route102/scripts.pory"
	walk_up
# 337 "data/maps/Route102/scripts.pory"
	delay_16
# 338 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_up
# 339 "data/maps/Route102/scripts.pory"
	delay_16
# 340 "data/maps/Route102/scripts.pory"
	delay_16
# 341 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 342 "data/maps/Route102/scripts.pory"
	step_end
# 343 "data/maps/Route102/scripts.pory"

# 344 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyGrabBall:
# 345 "data/maps/Route102/scripts.pory"
	walk_right
# 346 "data/maps/Route102/scripts.pory"
	walk_right
# 347 "data/maps/Route102/scripts.pory"
	step_end
# 348 "data/maps/Route102/scripts.pory"

# 349 "data/maps/Route102/scripts.pory"

# 350 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyJump::
# 351 "data/maps/Route102/scripts.pory"
	jump_in_place_right
# 352 "data/maps/Route102/scripts.pory"
	step_end
# 353 "data/maps/Route102/scripts.pory"

# 354 "data/maps/Route102/scripts.pory"
Route102_EventScript_RaltsAppears::
# 355 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_RALTS, 6, 6
# 356 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsJump
# 357 "data/maps/Route102/scripts.pory"
	delay 8
# 358 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 359 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
# 361 "data/maps/Route102/scripts.pory"
	waitmoncry
# 362 "data/maps/Route102/scripts.pory"
	delay 8
# 363 "data/maps/Route102/scripts.pory"
	playbgm MUS_VS_WILD, FALSE
# 364 "data/maps/Route102/scripts.pory"
	return
# 365 "data/maps/Route102/scripts.pory"

# 366 "data/maps/Route102/scripts.pory"

# 367 "data/maps/Route102/scripts.pory"
	
# 368 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaSurprise::
# 369 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Common_Movement_ExclamationMark
# 370 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 371 "data/maps/Route102/scripts.pory"
	return
# 372 "data/maps/Route102/scripts.pory"

# 373 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaHurt::
# 374 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 375 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Route102_Movement_RaltsHurt
# 376 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 377 "data/maps/Route102/scripts.pory"
	return
# 378 "data/maps/Route102/scripts.pory"

# 379 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallThrow::
# 380 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 3, 6
# 381 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL, Route102_Movement_BallThrow
# 382 "data/maps/Route102/scripts.pory"
	playse SE_BALL_THROW
# 383 "data/maps/Route102/scripts.pory"
	waitse
# 384 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 385 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_RALTS
# 386 "data/maps/Route102/scripts.pory"
	waitse
# 387 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 388 "data/maps/Route102/scripts.pory"
	waitmoncry
# 389 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 390 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 10, 7
# 391 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL2, 5, 6
# 392 "data/maps/Route102/scripts.pory"
	return
# 393 "data/maps/Route102/scripts.pory"

# 394 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatch::
# 395 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 396 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 397 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 399 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 401 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route102/scripts.pory"
	waitse
# 403 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 404 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route102/scripts.pory"
	delay 16
# 406 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 407 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 408 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 409 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 410 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 411 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 412 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 413 "data/maps/Route102/scripts.pory"
	waitse
# 414 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 415 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route102/scripts.pory"
	delay 16
# 417 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 418 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 419 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 421 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 422 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 423 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route102/scripts.pory"
	waitse
# 425 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 426 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 427 "data/maps/Route102/scripts.pory"
	delay 24
# 428 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 429 "data/maps/Route102/scripts.pory"
	waitse 
# 430 "data/maps/Route102/scripts.pory"
	delay 10
# 431 "data/maps/Route102/scripts.pory"
	playfanfare MUS_EVOLVED
# 432 "data/maps/Route102/scripts.pory"
	waitfanfare
# 433 "data/maps/Route102/scripts.pory"
	return
# 434 "data/maps/Route102/scripts.pory"

# 435 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatchHide::
# 436 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL2
# 437 "data/maps/Route102/scripts.pory"
	return
# 438 "data/maps/Route102/scripts.pory"

# 439 "data/maps/Route102/scripts.pory"

# 440 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallZigzaHide::
# 441 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL
# 442 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL2
# 443 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_RALTS
# 444 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ZIGZA
# 445 "data/maps/Route102/scripts.pory"
	return
# 446 "data/maps/Route102/scripts.pory"
	
# 447 "data/maps/Route102/scripts.pory"

# 448 "data/maps/Route102/scripts.pory"
Route102_Movement_BallThrow::
# 449 "data/maps/Route102/scripts.pory"
	disable_jump_landing_ground_effect
# 450 "data/maps/Route102/scripts.pory"
	jump_2_right
# 451 "data/maps/Route102/scripts.pory"
	step_end
# 452 "data/maps/Route102/scripts.pory"

# 453 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport::
# 454 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 455 "data/maps/Route102/scripts.pory"
	set_invisible
# 456 "data/maps/Route102/scripts.pory"
	step_end
# 457 "data/maps/Route102/scripts.pory"

# 458 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport2::
# 459 "data/maps/Route102/scripts.pory"
	set_visible
# 460 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 461 "data/maps/Route102/scripts.pory"
	face_right
# 462 "data/maps/Route102/scripts.pory"
	step_end
# 463 "data/maps/Route102/scripts.pory"

# 464 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzagoonAttacks::
# 465 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Route102_Movement_AttackRalts
# 466 "data/maps/Route102/scripts.pory"
	delay 24
# 467 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 468 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsHurt
# 469 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 470 "data/maps/Route102/scripts.pory"
	return
# 471 "data/maps/Route102/scripts.pory"
	
# 472 "data/maps/Route102/scripts.pory"
	
# 473 "data/maps/Route102/scripts.pory"
	
# 474 "data/maps/Route102/scripts.pory"
Route102_Movement_AttackRalts::
# 475 "data/maps/Route102/scripts.pory"
	walk_right
# 476 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 477 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 478 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 479 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 480 "data/maps/Route102/scripts.pory"
	delay_16
# 481 "data/maps/Route102/scripts.pory"
	walk_left
# 482 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 483 "data/maps/Route102/scripts.pory"
	step_end
# 484 "data/maps/Route102/scripts.pory"

# 485 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsHurt::
# 486 "data/maps/Route102/scripts.pory"
	face_left
# 487 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 488 "data/maps/Route102/scripts.pory"
	jump_right
# 489 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 490 "data/maps/Route102/scripts.pory"
	step_end
# 491 "data/maps/Route102/scripts.pory"

# 492 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsJump::
# 493 "data/maps/Route102/scripts.pory"
	jump_in_place_left
# 494 "data/maps/Route102/scripts.pory"
	step_end
# 495 "data/maps/Route102/scripts.pory"

# 496 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 497 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 498 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 499 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 500 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 501 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 502 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 503 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 504 "data/maps/Route102/scripts.pory"
	release
# 505 "data/maps/Route102/scripts.pory"
	end
# 506 "data/maps/Route102/scripts.pory"

# 507 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 508 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 509 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 510 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 511 "data/maps/Route102/scripts.pory"
	release
# 512 "data/maps/Route102/scripts.pory"
	end
# 513 "data/maps/Route102/scripts.pory"

# 514 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 515 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 516 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 517 "data/maps/Route102/scripts.pory"
	release
# 518 "data/maps/Route102/scripts.pory"
	end
# 519 "data/maps/Route102/scripts.pory"

# 520 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 521 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 522 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 523 "data/maps/Route102/scripts.pory"
	release
# 524 "data/maps/Route102/scripts.pory"
	end
# 525 "data/maps/Route102/scripts.pory"

# 526 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 527 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 528 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 529 "data/maps/Route102/scripts.pory"
	release
# 530 "data/maps/Route102/scripts.pory"
	end
# 531 "data/maps/Route102/scripts.pory"

# 532 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 533 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 534 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 535 "data/maps/Route102/scripts.pory"
	end
# 536 "data/maps/Route102/scripts.pory"

# 537 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 538 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 539 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 540 "data/maps/Route102/scripts.pory"
	end
# 541 "data/maps/Route102/scripts.pory"

# 542 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 543 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 544 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/Route102/scripts.pory"
	end
# 546 "data/maps/Route102/scripts.pory"

# 547 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 548 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 549 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route102/scripts.pory"
	end

Route102_EventScript_Boy_Text_0:
# 152 "data/maps/Route102/scripts.pory"
	.string "¡Ah!\n"
	.string "Me asustaste...\p"
	.string "¡Acepta este cambio y no le digas a\n"
	.string "nadie que estaba acá!$"

Route102_EventScript_Boy_Text_1:
# 153 "data/maps/Route102/scripts.pory"
	.string "¡Obtuviste una Veloz Ball a cambio de la\n"
	.string "Super Ball!$"

Route102_EventScript_Boy_Text_2:
# 156 "data/maps/Route102/scripts.pory"
	.string "La Veloz Ball es mejor cuando la usas al\n"
	.string "inicio de un combate.\p"
	.string "¡Acércate por detrás y atrapa a tu\n"
	.string "presa!$"

Route102_EventScript_Boy_Text_3:
# 166 "data/maps/Route102/scripts.pory"
	.string "¡Ah!\n"
	.string "¡Me asustaste!\p"
	.string "Te daría esta Veloz Ball, pero no tienes\n"
	.string "una Super Ball para darme a cambio...$"

Route102_Text_Sigsa::
# 2 "data/maps/Route102/scripts.pory"
	.string "¡ZIGZA!$"

Route102_Text_Ralts::
# 13 "data/maps/Route102/scripts.pory"
	.string "¡R-{PAUSE 20}RALTS!$"

Route102_Text_UnRalts::
# 23 "data/maps/Route102/scripts.pory"
	.string "¡WOW! ¡Un Ralts!\n"
	.string "Estos son raros, leí en un libro.\p"
	.string "Bueno, ahora es tiempo de atraparlo…\n"
	.string "Eh…{PAUSE 20} ¿Cómo…?\p"
	.string "Em…{PAUSE 20} Z-Zigzagon… ¡Sal de ahí!$"

Route102_Text_WallyCommands::
# 39 "data/maps/Route102/scripts.pory"
	.string "Ahora, tengo que atacar, ¿no?\p"
	.string "Zigzagoon, ¡Tacleada!$"

Route102_Text_PokeballVe::
# 51 "data/maps/Route102/scripts.pory"
	.string "¡Y-y-y-y ahora, eh…!\p"
	.string "¡POKÉBALL, CAPTÚRALO!$"

Route102_Text_WatchMeCatchPokemon::
# 65 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}…\n"
	.string "Los Pokémon viven en el pasto, ¿no?\p"
	.string "Por favor quédate así puedo…\n"
	.string "¡…AHHH-!{PAUSE 20}$"

Route102_Text_WallyIDidIt::
# 80 "data/maps/Route102/scripts.pory"
	.string "L-lo hice…\n"
	.string "¡TENGO UN POKÉMON!$"

Route102_Text_WallyZigzagoonThanks::
# 95 "data/maps/Route102/scripts.pory"
	.string "¡Gracias, Zigzagoon!\n"
	.string "No podría haberlo hecho sin ti...\p"
	.string "Eh... ¡Regresa!$"

Route102_Text_LetsGoBack::
# 107 "data/maps/Route102/scripts.pory"
	.string "¡{PLAYER}, gracias!\n"
	.string "¡Volvamos al Gimnasio!$"

Route102_Text_ImNotVeryTall::
# 121 "data/maps/Route102/scripts.pory"
	.string "No…soy tan alto, así que\n"
	.string "me hundo en el pasto alto.\p"
	.string "Ayúdame… Soy alérgic-\n"
	.string "-AAAA…\l"
	.string "CHOOO- alégica…$"

Route102_Text_RouteSignOldale::
# 129 "data/maps/Route102/scripts.pory"
	.string "RUTA 102\n"
	.string "{RIGHT_ARROW} PUEBLO OLDALE$"

Route102_Text_RouteSignPetalburg::
# 134 "data/maps/Route102/scripts.pory"
	.string "RUTA 102\n"
	.string "{LEFT_ARROW} CIUDAD PETALBURG$"
