EventScript_RunningShoesManualTranslated::
# 129 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_0, MSGBOX_YESNO
# 132 "data/scripts/players_house.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_RunningShoesManualTranslated_2
EventScript_RunningShoesManualTranslated_1:
# 141 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_3
# 159 "data/scripts/players_house.pory"
	releaseall
	end

EventScript_RunningShoesManualTranslated_2:
# 133 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_1, MSGBOX_YESNO
# 134 "data/scripts/players_house.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_RunningShoesManualTranslated_4
	goto EventScript_RunningShoesManualTranslated_1

EventScript_RunningShoesManualTranslated_4:
# 135 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_2
# 136 "data/scripts/players_house.pory"
	releaseall
	end


EventScript_YoureNewNeighbor_Translated::
# 167 "data/scripts/players_house.pory"
	msgbox EventScript_YoureNewNeighbor_Translated_Text_0
# 173 "data/scripts/players_house.pory"
	call EventScript_MeetRival
	return


EventScript_MeetRival::
# 178 "data/scripts/players_house.pory"
	playse SE_EXIT
# 179 "data/scripts/players_house.pory"
	delay 10
# 180 "data/scripts/players_house.pory"
	addobject 7
# 181 "data/scripts/players_house.pory"
	delay 30
# 182 "data/scripts/players_house.pory"
	playse SE_PIN
# 183 "data/scripts/players_house.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 184 "data/scripts/players_house.pory"
	waitmovement 0
# 185 "data/scripts/players_house.pory"
	applymovement 7, Common_Movement_FacePlayer
# 186 "data/scripts/players_house.pory"
	checkplayergender
# 187 "data/scripts/players_house.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq EventScript_MeetRival_2
# 204 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 205 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 206 "data/scripts/players_house.pory"
	applymovement 7, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer
# 207 "data/scripts/players_house.pory"
	waitmovement 0
# 208 "data/scripts/players_house.pory"
	namebox Rival
# 209 "data/scripts/players_house.pory"
	call RivalsHouse_1F_Text_MayWhoAreYou_Translated
# 210 "data/scripts/players_house.pory"
	closemessage
# 211 "data/scripts/players_house.pory"
	hidenamebox
# 212 "data/scripts/players_house.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs
# 213 "data/scripts/players_house.pory"
	playse SE_EXIT
# 214 "data/scripts/players_house.pory"
	removeobject 7
# 215 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 216 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 217 "data/scripts/players_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
EventScript_MeetRival_1:
# 219 "data/scripts/players_house.pory"
	delay 30
# 220 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 221 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 222 "data/scripts/players_house.pory"
	savebgm MUS_DUMMY
# 223 "data/scripts/players_house.pory"
	fadedefaultbgm
	return

EventScript_MeetRival_2:
# 188 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 189 "data/scripts/players_house.pory"
	waitmovement 0
# 190 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 191 "data/scripts/players_house.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer
# 192 "data/scripts/players_house.pory"
	namebox Rival
# 193 "data/scripts/players_house.pory"
	call RivalsHouse_1F_Text_MayWhoAreYou_Translated
# 194 "data/scripts/players_house.pory"
	closemessage
# 195 "data/scripts/players_house.pory"
	hidenamebox
# 196 "data/scripts/players_house.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs
# 197 "data/scripts/players_house.pory"
	playse SE_EXIT
# 198 "data/scripts/players_house.pory"
	removeobject 7
# 199 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 200 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 201 "data/scripts/players_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	goto EventScript_MeetRival_1


RivalsHouse_1F_Text_MayWhoAreYou_Translated::
# 229 "data/scripts/players_house.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou_Translated_Text_0
	return


PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation::
# 248 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_0
# 249 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 250 "data/scripts/players_house.pory"
	waitmovement 0
# 251 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, MALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale
# 252 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, FEMALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale
# 253 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_1
# 264 "data/scripts/players_house.pory"
	closemessage
# 265 "data/scripts/players_house.pory"
	hidenamebox
# 266 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 267 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerWalkIn
# 268 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 269 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated::
# 276 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated_Text_0
# 282 "data/scripts/players_house.pory"
	closemessage
# 283 "data/scripts/players_house.pory"
	hidenamebox
# 284 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 285 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MovePlayerAwayFromDoor
# 286 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom::
# 293 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom_Text_0
	return


PlayersHouse_1F_EventScript_MaybeDadWillBeOn::
# 305 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MaybeDadWillBeOn_Text_0
	return


PlayersHouse_1F_EventScript_ItsOverWeMissedHim::
# 317 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_ItsOverWeMissedHim_Text_0
	return


PlayersHouse_1F_EventScript_StarterSet_Translated_11::
# 329 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterSet_Translated_11_Text_0
	return


PlayersHouse_1F_EventScript_StarterSet_13::
# 341 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterSet_13_Text_0, MSGBOX_YESNO
# 347 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
# 348 "data/scripts/players_house.pory"
	goto_if_eq PlayersHouse_1F_EventScript_StarterSet_15
# 349 "data/scripts/players_house.pory"
	namebox Mama
# 352 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterSet_13_Text_1
# 358 "data/scripts/players_house.pory"
	hidenamebox
# 359 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSet_2
	return


# 364 "data/scripts/players_house.pory"

# 365 "data/scripts/players_house.pory"
@ Local IDs are the same for both players houses
# 366 "data/scripts/players_house.pory"
.set LOCALID_MOM, 1
# 367 "data/scripts/players_house.pory"
.set LOCALID_DAD, 5
# 368 "data/scripts/players_house.pory"
.set LOCALID_MOM_2F, 14
# 369 "data/scripts/players_house.pory"

# 370 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
# 371 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 372 "data/scripts/players_house.pory"
	return
# 373 "data/scripts/players_house.pory"

# 374 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_EnterHouseMovingIn::
# 375 "data/scripts/players_house.pory"
	namebox Mama
# 376 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation
# 377 "data/scripts/players_house.pory"
	releaseall
# 378 "data/scripts/players_house.pory"
	end
# 379 "data/scripts/players_house.pory"

# 380 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale::
# 381 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 382 "data/scripts/players_house.pory"
	waitmovement 0
# 383 "data/scripts/players_house.pory"
	return
# 384 "data/scripts/players_house.pory"

# 385 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale::
# 386 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 387 "data/scripts/players_house.pory"
	waitmovement 0
# 388 "data/scripts/players_house.pory"
	return
# 389 "data/scripts/players_house.pory"

# 390 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerWalkIn:
# 391 "data/scripts/players_house.pory"
	walk_up
# 392 "data/scripts/players_house.pory"
	step_end
# 393 "data/scripts/players_house.pory"

# 394 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 395 "data/scripts/players_house.pory"
	namebox Mama	
# 396 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated
# 397 "data/scripts/players_house.pory"
	releaseall
# 398 "data/scripts/players_house.pory"
	end
# 399 "data/scripts/players_house.pory"

# 400 "data/scripts/players_house.pory"
LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
# 401 "data/scripts/players_house.pory"
	lockall
# 402 "data/scripts/players_house.pory"
	setvar VAR_0x8004, MALE
# 403 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 404 "data/scripts/players_house.pory"
	end
# 405 "data/scripts/players_house.pory"

# 406 "data/scripts/players_house.pory"
LittlerootTown_MaysHouse_2F_EventScript_WallClock::
# 407 "data/scripts/players_house.pory"
	lockall
# 408 "data/scripts/players_house.pory"
	setvar VAR_0x8004, FEMALE
# 409 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 410 "data/scripts/players_house.pory"
	end
# 411 "data/scripts/players_house.pory"

# 412 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock::
# 413 "data/scripts/players_house.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
# 414 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_ChoseClock
# 415 "data/scripts/players_house.pory"
	end
# 416 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseTimeThing:
# 417 "data/scripts/players_house.pory"
	.string "¡AVISO! LEE ESTO CON ATENCIÓN.\n"
# 418 "data/scripts/players_house.pory"
	.string "POR FAVOR, SELECCIONAR SI DESEA\l"
# 419 "data/scripts/players_house.pory"
	.string "CONTINUAR USANDO EL RELOJ DEL\l"
# 420 "data/scripts/players_house.pory"
	.string "JUEGO, O EL RELOJ REAL DE SU\l"
# 421 "data/scripts/players_house.pory"
	.string "DISPOSITIVO.\p"
# 422 "data/scripts/players_house.pory"
	.string "Tenga en cuenta que esta\n"
# 423 "data/scripts/players_house.pory"
	.string "acción no se puede cambiar.$"
# 424 "data/scripts/players_house.pory"
	
# 425 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseClock:
# 426 "data/scripts/players_house.pory"
	.string "¿Está segur{OA} que quiere\n"
# 427 "data/scripts/players_house.pory"
	.string "usar el reloj falso del\l"
# 428 "data/scripts/players_house.pory"
	.string "juego?$"
# 429 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseRTC:
# 430 "data/scripts/players_house.pory"
	.string "¿Está segur{OA} que quiere\n"
# 431 "data/scripts/players_house.pory"
	.string "usar el reloj real de\l"
# 432 "data/scripts/players_house.pory"
	.string "su dispositivo?$"
# 433 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_ChoseClock::
# 434 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 435 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 436 "data/scripts/players_house.pory"
	delay 30
# 437 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 438 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 439 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 440 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 441 "data/scripts/players_house.pory"
	checkplayergender
# 442 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 443 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 444 "data/scripts/players_house.pory"
	playse SE_EXIT
# 445 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 446 "data/scripts/players_house.pory"
	releaseall
# 447 "data/scripts/players_house.pory"
	end
# 448 "data/scripts/players_house.pory"

# 449 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_ChoseRTC::
# 450 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ChooseRTC, MSGBOX_YESNO
# 451 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
# 452 "data/scripts/players_house.pory"
	goto_if_ne PlayersHouse_2F_EventScript_WallClock
# 453 "data/scripts/players_house.pory"
	closemessage
# 454 "data/scripts/players_house.pory"
	delay 30
# 455 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 456 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 457 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 458 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 459 "data/scripts/players_house.pory"
	checkplayergender
# 460 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 461 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 462 "data/scripts/players_house.pory"
	playse SE_EXIT
# 463 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 464 "data/scripts/players_house.pory"
	releaseall
# 465 "data/scripts/players_house.pory"
	end
# 466 "data/scripts/players_house.pory"

# 467 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsMale::
# 468 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 469 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 470 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
# 471 "data/scripts/players_house.pory"
	waitmovement 0
# 472 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 473 "data/scripts/players_house.pory"
	waitmovement 0
# 474 "data/scripts/players_house.pory"
	namebox Mama
# 475 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom
# 476 "data/scripts/players_house.pory"
	closemessage
# 477 "data/scripts/players_house.pory"
	hidenamebox
# 478 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
# 479 "data/scripts/players_house.pory"
	waitmovement 0
# 480 "data/scripts/players_house.pory"
	return
# 481 "data/scripts/players_house.pory"

# 482 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsFemale::
# 483 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 484 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 485 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersFemale
# 486 "data/scripts/players_house.pory"
	waitmovement 0
# 487 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 488 "data/scripts/players_house.pory"
	waitmovement 0
# 489 "data/scripts/players_house.pory"
	namebox Mama
# 490 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom
# 491 "data/scripts/players_house.pory"
	closemessage
# 492 "data/scripts/players_house.pory"
	hidenamebox
# 493 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsFemale
# 494 "data/scripts/players_house.pory"
	waitmovement 0
# 495 "data/scripts/players_house.pory"
	return
# 496 "data/scripts/players_house.pory"

# 497 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_CheckWallClock::
# 498 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 499 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 500 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 501 "data/scripts/players_house.pory"
	waitstate
# 502 "data/scripts/players_house.pory"
	releaseall
# 503 "data/scripts/players_house.pory"
	end
# 504 "data/scripts/players_house.pory"

# 505 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_SetWallClock::
# 506 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 507 "data/scripts/players_house.pory"
	special SetHourMinutes
# 508 "data/scripts/players_house.pory"
	special StartWallClock
# 509 "data/scripts/players_house.pory"
	waitstate
# 510 "data/scripts/players_house.pory"
	return
# 511 "data/scripts/players_house.pory"

# 512 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersMale:
# 513 "data/scripts/players_house.pory"
	delay_8
# 514 "data/scripts/players_house.pory"
	walk_down
# 515 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 516 "data/scripts/players_house.pory"
	delay_16
# 517 "data/scripts/players_house.pory"
	delay_8
# 518 "data/scripts/players_house.pory"
	walk_left
# 519 "data/scripts/players_house.pory"
	step_end
# 520 "data/scripts/players_house.pory"

# 521 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsMale:
# 522 "data/scripts/players_house.pory"
	walk_right
# 523 "data/scripts/players_house.pory"
	walk_up
# 524 "data/scripts/players_house.pory"
	delay_8
# 525 "data/scripts/players_house.pory"
	step_end
# 526 "data/scripts/players_house.pory"

# 527 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersFemale:
# 528 "data/scripts/players_house.pory"
	delay_8
# 529 "data/scripts/players_house.pory"
	walk_down
# 530 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 531 "data/scripts/players_house.pory"
	delay_16
# 532 "data/scripts/players_house.pory"
	delay_8
# 533 "data/scripts/players_house.pory"
	walk_right
# 534 "data/scripts/players_house.pory"
	step_end
# 535 "data/scripts/players_house.pory"

# 536 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsFemale:
# 537 "data/scripts/players_house.pory"
	walk_left
# 538 "data/scripts/players_house.pory"
	walk_up
# 539 "data/scripts/players_house.pory"
	delay_8
# 540 "data/scripts/players_house.pory"
	step_end
# 541 "data/scripts/players_house.pory"

# 542 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetWatchedBroadcast::
# 543 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 544 "data/scripts/players_house.pory"
	releaseall
# 545 "data/scripts/players_house.pory"
	end
# 546 "data/scripts/players_house.pory"

# 547 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportMale::
# 548 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
# 549 "data/scripts/players_house.pory"
	waitmovement 0
# 550 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 551 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymMale
# 552 "data/scripts/players_house.pory"
	waitmovement 0
# 553 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 554 "data/scripts/players_house.pory"
	namebox Mama
# 555 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MaybeDadWillBeOn
# 556 "data/scripts/players_house.pory"
	closemessage
# 557 "data/scripts/players_house.pory"
	hidenamebox
# 558 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale
# 559 "data/scripts/players_house.pory"
	waitmovement 0
# 560 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVMale
# 561 "data/scripts/players_house.pory"
	waitmovement 0
# 562 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 563 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 564 "data/scripts/players_house.pory"
	waitmovement 0
# 565 "data/scripts/players_house.pory"
	namebox Mama
# 566 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_ItsOverWeMissedHim
# 567 "data/scripts/players_house.pory"
	hidenamebox
# 568 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet
# 569 "data/scripts/players_house.pory"
	hidenamebox
# 570 "data/scripts/players_house.pory"
	closemessage
# 571 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 572 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatMale
# 573 "data/scripts/players_house.pory"
	waitmovement 0
# 574 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 575 "data/scripts/players_house.pory"
	end
# 576 "data/scripts/players_house.pory"

# 577 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportFemale::
# 578 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
# 579 "data/scripts/players_house.pory"
	waitmovement 0
# 580 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 581 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale
# 582 "data/scripts/players_house.pory"
	waitmovement 0
# 583 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 584 "data/scripts/players_house.pory"
	namebox Mama
# 585 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MaybeDadWillBeOn
# 586 "data/scripts/players_house.pory"
	closemessage
# 587 "data/scripts/players_house.pory"
	hidenamebox
# 588 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale
# 589 "data/scripts/players_house.pory"
	waitmovement 0
# 590 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVFemale
# 591 "data/scripts/players_house.pory"
	waitmovement 0
# 592 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 593 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 594 "data/scripts/players_house.pory"
	waitmovement 0
# 595 "data/scripts/players_house.pory"
	namebox Mama
# 596 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_ItsOverWeMissedHim
# 597 "data/scripts/players_house.pory"
	hidenamebox
# 598 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet
# 599 "data/scripts/players_house.pory"
	hidenamebox
# 600 "data/scripts/players_house.pory"
	closemessage
# 601 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 602 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatFemale
# 603 "data/scripts/players_house.pory"
	waitmovement 0
# 604 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 605 "data/scripts/players_house.pory"
	end
# 606 "data/scripts/players_house.pory"

# 607 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticeGymBroadcast::
# 608 "data/scripts/players_house.pory"
	playse SE_PIN
# 609 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 610 "data/scripts/players_house.pory"
	waitmovement 0
# 611 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 612 "data/scripts/players_house.pory"
	waitmovement 0
# 613 "data/scripts/players_house.pory"
	namebox Mama
# 614 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
# 615 "data/scripts/players_house.pory"
	closemessage
# 616 "data/scripts/players_house.pory"
	hidenamebox
# 617 "data/scripts/players_house.pory"
	return
# 618 "data/scripts/players_house.pory"

# 619 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_WatchGymBroadcast::
# 620 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 621 "data/scripts/players_house.pory"
	waitmovement 0
# 622 "data/scripts/players_house.pory"
	namebox Entrevistador
# 623 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
# 624 "data/scripts/players_house.pory"
	fadedefaultbgm
# 625 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 626 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 627 "data/scripts/players_house.pory"
	delay 35
# 628 "data/scripts/players_house.pory"
	return
# 629 "data/scripts/players_house.pory"

# 630 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet::
# 631 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_2:
# 632 "data/scripts/players_house.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, PlayersHouse_1F_EventScript_StarterSet_Text_0, PlayersHouse_1F_EventScript_StarterSet_Text_1, PlayersHouse_1F_EventScript_StarterSet_Text_2, PlayersHouse_1F_EventScript_StarterSet_Text_3, PlayersHouse_1F_EventScript_StarterSet_Text_4, PlayersHouse_1F_EventScript_StarterSet_Text_5, PlayersHouse_1F_EventScript_StarterSet_Text_6, PlayersHouse_1F_EventScript_StarterSet_Text_7, PlayersHouse_1F_EventScript_StarterSet_Text_8
# 633 "data/scripts/players_house.pory"
	switch VAR_RESULT
# 634 "data/scripts/players_house.pory"
	case 0, PlayersHouse_1F_EventScript_StarterSet_5
# 635 "data/scripts/players_house.pory"
	case 1, PlayersHouse_1F_EventScript_StarterSet_6
# 636 "data/scripts/players_house.pory"
	case 2, PlayersHouse_1F_EventScript_StarterSet_7
# 637 "data/scripts/players_house.pory"
	case 3, PlayersHouse_1F_EventScript_StarterSet_8
# 638 "data/scripts/players_house.pory"
	case 4, PlayersHouse_1F_EventScript_StarterSet_9
# 639 "data/scripts/players_house.pory"
	case 5, PlayersHouse_1F_EventScript_StarterSet_10
# 640 "data/scripts/players_house.pory"
	case 6, PlayersHouse_1F_EventScript_StarterSet_11
# 641 "data/scripts/players_house.pory"
	case 7, PlayersHouse_1F_EventScript_StarterSet_12
# 642 "data/scripts/players_house.pory"
	case 8, PlayersHouse_1F_EventScript_StarterSet_13
# 643 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSetEnd::
# 644 "data/scripts/players_house.pory"
	namebox Mama
# 645 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet_Translated_11
# 646 "data/scripts/players_house.pory"
	closemessage
# 647 "data/scripts/players_house.pory"
	hidenamebox
# 648 "data/scripts/players_house.pory"
	return
# 649 "data/scripts/players_house.pory"

# 650 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_5:
# 651 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 1
# 652 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 653 "data/scripts/players_house.pory"

# 654 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_6:
# 655 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 2
# 656 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 657 "data/scripts/players_house.pory"

# 658 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_7:
# 659 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 3
# 660 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 661 "data/scripts/players_house.pory"

# 662 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_8:
# 663 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 4
# 664 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 665 "data/scripts/players_house.pory"

# 666 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_9:
# 667 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 5
# 668 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 669 "data/scripts/players_house.pory"

# 670 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_10:
# 671 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 6
# 672 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 673 "data/scripts/players_house.pory"

# 674 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_11:
# 675 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 7
# 676 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 677 "data/scripts/players_house.pory"

# 678 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_12:
# 679 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 8
# 680 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 681 "data/scripts/players_house.pory"

# 682 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_15:
# 683 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 9
# 684 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 685 "data/scripts/players_house.pory"

# 686 "data/scripts/players_house.pory"

# 687 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_0:
# 688 "data/scripts/players_house.pory"
	.string "Kanto$"
# 689 "data/scripts/players_house.pory"

# 690 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_1:
# 691 "data/scripts/players_house.pory"
	.string "Johto$"
# 692 "data/scripts/players_house.pory"

# 693 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_2:
# 694 "data/scripts/players_house.pory"
	.string "Hoenn$"
# 695 "data/scripts/players_house.pory"

# 696 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_3:
# 697 "data/scripts/players_house.pory"
	.string "Sinnoh$"
# 698 "data/scripts/players_house.pory"

# 699 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_4:
# 700 "data/scripts/players_house.pory"
	.string "Unova$"
# 701 "data/scripts/players_house.pory"

# 702 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_5:
# 703 "data/scripts/players_house.pory"
	.string "Kalos$"
# 704 "data/scripts/players_house.pory"

# 705 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_6:
# 706 "data/scripts/players_house.pory"
	.string "Alola$"
# 707 "data/scripts/players_house.pory"

# 708 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_7:
# 709 "data/scripts/players_house.pory"
	.string "Galar$"
# 710 "data/scripts/players_house.pory"

# 711 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 712 "data/scripts/players_house.pory"
	walk_up
# 713 "data/scripts/players_house.pory"
	walk_right
# 714 "data/scripts/players_house.pory"
	walk_right
# 715 "data/scripts/players_house.pory"
	walk_right
# 716 "data/scripts/players_house.pory"
	walk_right
# 717 "data/scripts/players_house.pory"
	walk_down
# 718 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 719 "data/scripts/players_house.pory"
	step_end
# 720 "data/scripts/players_house.pory"

# 721 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 722 "data/scripts/players_house.pory"
	walk_up
# 723 "data/scripts/players_house.pory"
	walk_left
# 724 "data/scripts/players_house.pory"
	walk_left
# 725 "data/scripts/players_house.pory"
	walk_left
# 726 "data/scripts/players_house.pory"
	walk_left
# 727 "data/scripts/players_house.pory"
	walk_down
# 728 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 729 "data/scripts/players_house.pory"
	step_end
# 730 "data/scripts/players_house.pory"

# 731 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 732 "data/scripts/players_house.pory"
	walk_right
# 733 "data/scripts/players_house.pory"
	step_end
# 734 "data/scripts/players_house.pory"

# 735 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 736 "data/scripts/players_house.pory"
	walk_left
# 737 "data/scripts/players_house.pory"
	step_end
# 738 "data/scripts/players_house.pory"

# 739 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 740 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 741 "data/scripts/players_house.pory"
	delay_16
# 742 "data/scripts/players_house.pory"
	delay_16
# 743 "data/scripts/players_house.pory"
	delay_16
# 744 "data/scripts/players_house.pory"
	delay_16
# 745 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 746 "data/scripts/players_house.pory"
	delay_16
# 747 "data/scripts/players_house.pory"
	delay_16
# 748 "data/scripts/players_house.pory"
	step_end
# 749 "data/scripts/players_house.pory"

# 750 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 751 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 752 "data/scripts/players_house.pory"
	delay_16
# 753 "data/scripts/players_house.pory"
	delay_16
# 754 "data/scripts/players_house.pory"
	delay_16
# 755 "data/scripts/players_house.pory"
	delay_16
# 756 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 757 "data/scripts/players_house.pory"
	delay_16
# 758 "data/scripts/players_house.pory"
	delay_16
# 759 "data/scripts/players_house.pory"
	step_end
# 760 "data/scripts/players_house.pory"

# 761 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 762 "data/scripts/players_house.pory"
	walk_up
# 763 "data/scripts/players_house.pory"
	walk_left
# 764 "data/scripts/players_house.pory"
	walk_left
# 765 "data/scripts/players_house.pory"
	step_end
# 766 "data/scripts/players_house.pory"

# 767 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 768 "data/scripts/players_house.pory"
	walk_up
# 769 "data/scripts/players_house.pory"
	walk_right
# 770 "data/scripts/players_house.pory"
	walk_right
# 771 "data/scripts/players_house.pory"
	step_end
# 772 "data/scripts/players_house.pory"

# 773 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale:
# 774 "data/scripts/players_house.pory"
	walk_left
# 775 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 776 "data/scripts/players_house.pory"
	step_end
# 777 "data/scripts/players_house.pory"

# 778 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale:
# 779 "data/scripts/players_house.pory"
	walk_right
# 780 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 781 "data/scripts/players_house.pory"
	step_end
# 782 "data/scripts/players_house.pory"

# 783 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatMale:
# 784 "data/scripts/players_house.pory"
	walk_left
# 785 "data/scripts/players_house.pory"
	walk_down
# 786 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 787 "data/scripts/players_house.pory"
	step_end
# 788 "data/scripts/players_house.pory"

# 789 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatFemale:
# 790 "data/scripts/players_house.pory"
	walk_right
# 791 "data/scripts/players_house.pory"
	walk_down
# 792 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 793 "data/scripts/players_house.pory"
	step_end
# 794 "data/scripts/players_house.pory"

# 795 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Mom::
# 796 "data/scripts/players_house.pory"
	lock
# 797 "data/scripts/players_house.pory"
	faceplayer
# 798 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 799 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 800 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PlayersHouse_1F_EventScript_TryRegisterMom
# 801 "data/scripts/players_house.pory"
	goto_if_set FLAG_RESCUED_BIRCH, PlayersHouse_1F_EventScript_MomHealsParty
# 802 "data/scripts/players_house.pory"
	goto_if_eq VAR_TEMP_1, 1, PlayersHouse_1F_EventScript_SeeYouHoney
# 803 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, PlayersHouse_1F_EventScript_DidYouMeetProfBirch
# 804 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 805 "data/scripts/players_house.pory"
	release
# 806 "data/scripts/players_house.pory"
	end
# 807 "data/scripts/players_house.pory"

# 808 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DontPushYourselfTooHard::
# 809 "data/scripts/players_house.pory"
	namebox Mama
# 810 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 811 "data/scripts/players_house.pory"
	hidenamebox
# 812 "data/scripts/players_house.pory"
	release
# 813 "data/scripts/players_house.pory"
	end
# 814 "data/scripts/players_house.pory"

# 815 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryRegisterMom::
# 816 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_CheckGiveAmuletCoin
# 817 "data/scripts/players_house.pory"
	namebox Mama
# 818 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
# 819 "data/scripts/players_house.pory"
	closemessage
# 820 "data/scripts/players_house.pory"
	hidenamebox
# 821 "data/scripts/players_house.pory"
	delay 30
# 822 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 823 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
# 824 "data/scripts/players_house.pory"
	waitfanfare
# 825 "data/scripts/players_house.pory"
	closemessage
# 826 "data/scripts/players_house.pory"
	delay 30
# 827 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 828 "data/scripts/players_house.pory"
	release
# 829 "data/scripts/players_house.pory"
	end
# 830 "data/scripts/players_house.pory"

# 831 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_CheckGiveAmuletCoin::
# 832 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryGiveAmuletCoin
# 833 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
# 834 "data/scripts/players_house.pory"

# 835 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryGiveAmuletCoin::
# 836 "data/scripts/players_house.pory"
	goto_if_set FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_MomHealsParty
# 837 "data/scripts/players_house.pory"
	namebox Mama
# 838 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
# 839 "data/scripts/players_house.pory"
	hidenamebox
# 840 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN, 6
# 841 "data/scripts/players_house.pory"
	giveitem ITEM_CHERISH_BALL, 20
# 842 "data/scripts/players_house.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 843 "data/scripts/players_house.pory"
	namebox Mama
# 844 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 845 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
# 846 "data/scripts/players_house.pory"
	hidenamebox
# 847 "data/scripts/players_house.pory"
	release
# 848 "data/scripts/players_house.pory"
	end
# 849 "data/scripts/players_house.pory"

# 850 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomHealsParty::
# 851 "data/scripts/players_house.pory"
	namebox Mama
# 852 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 853 "data/scripts/players_house.pory"
	hidenamebox
# 854 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_HealParty
# 855 "data/scripts/players_house.pory"
	end
# 856 "data/scripts/players_house.pory"

# 857 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SeeYouHoney::
# 858 "data/scripts/players_house.pory"
	namebox Mama
# 859 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
# 860 "data/scripts/players_house.pory"
	hidenamebox
# 861 "data/scripts/players_house.pory"
	release
# 862 "data/scripts/players_house.pory"
	end
# 863 "data/scripts/players_house.pory"

# 864 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_HealParty::
# 865 "data/scripts/players_house.pory"
	closemessage
# 866 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 867 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 868 "data/scripts/players_house.pory"
	namebox Mama
# 869 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
# 870 "data/scripts/players_house.pory"
	hidenamebox
# 871 "data/scripts/players_house.pory"
	release
# 872 "data/scripts/players_house.pory"
	end
# 873 "data/scripts/players_house.pory"

# 874 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DidYouMeetProfBirch::
# 875 "data/scripts/players_house.pory"
	namebox Mama
# 876 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
# 877 "data/scripts/players_house.pory"
	hidenamebox
# 878 "data/scripts/players_house.pory"
	release
# 879 "data/scripts/players_house.pory"
	end
# 880 "data/scripts/players_house.pory"

# 881 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth1::
# 882 "data/scripts/players_house.pory"
	lock
# 883 "data/scripts/players_house.pory"
	faceplayer
# 884 "data/scripts/players_house.pory"
	waitse
# 885 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 886 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
# 887 "data/scripts/players_house.pory"
	waitmoncry
# 888 "data/scripts/players_house.pory"
	release
# 889 "data/scripts/players_house.pory"
	end
# 890 "data/scripts/players_house.pory"

# 891 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth2::
# 892 "data/scripts/players_house.pory"
	lock
# 893 "data/scripts/players_house.pory"
	faceplayer
# 894 "data/scripts/players_house.pory"
	waitse
# 895 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 896 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
# 897 "data/scripts/players_house.pory"
	waitmoncry
# 898 "data/scripts/players_house.pory"
	release
# 899 "data/scripts/players_house.pory"
	end
# 900 "data/scripts/players_house.pory"

# 901 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymMale:
# 902 "data/scripts/players_house.pory"
	walk_down
# 903 "data/scripts/players_house.pory"
	walk_down
# 904 "data/scripts/players_house.pory"
	walk_left
# 905 "data/scripts/players_house.pory"
	walk_left
# 906 "data/scripts/players_house.pory"
	walk_left
# 907 "data/scripts/players_house.pory"
	step_end
# 908 "data/scripts/players_house.pory"

# 909 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVMale:
# 910 "data/scripts/players_house.pory"
	walk_left
# 911 "data/scripts/players_house.pory"
	step_end
# 912 "data/scripts/players_house.pory"

# 913 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale:
# 914 "data/scripts/players_house.pory"
	walk_down
# 915 "data/scripts/players_house.pory"
	walk_down
# 916 "data/scripts/players_house.pory"
	walk_right
# 917 "data/scripts/players_house.pory"
	walk_right
# 918 "data/scripts/players_house.pory"
	walk_right
# 919 "data/scripts/players_house.pory"
	step_end
# 920 "data/scripts/players_house.pory"

# 921 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVFemale:
# 922 "data/scripts/players_house.pory"
	walk_right
# 923 "data/scripts/players_house.pory"
	step_end
# 924 "data/scripts/players_house.pory"

# 925 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 926 "data/scripts/players_house.pory"
	walk_up
# 927 "data/scripts/players_house.pory"
	step_end
# 928 "data/scripts/players_house.pory"

# 929 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 930 "data/scripts/players_house.pory"
	lockall
# 931 "data/scripts/players_house.pory"
	checkplayergender
# 932 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 933 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 934 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 935 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 936 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 937 "data/scripts/players_house.pory"
	waitmovement 0
# 938 "data/scripts/players_house.pory"
	playse SE_PIN
# 939 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 940 "data/scripts/players_house.pory"
	waitmovement 0
# 941 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 942 "data/scripts/players_house.pory"
	waitmovement 0
# 943 "data/scripts/players_house.pory"
	delay 20
# 944 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 945 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 946 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
# 947 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 948 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
# 949 "data/scripts/players_house.pory"
	closemessage
# 950 "data/scripts/players_house.pory"
	delay 20
# 951 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 952 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 953 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
# 954 "data/scripts/players_house.pory"
	closemessage
# 955 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 956 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 957 "data/scripts/players_house.pory"
	playse SE_DOOR
# 958 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 959 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 960 "data/scripts/players_house.pory"
	delay 30
# 961 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 962 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 963 "data/scripts/players_house.pory"
	delay 20
# 964 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
# 965 "data/scripts/players_house.pory"
	closemessage
# 966 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 967 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 968 "data/scripts/players_house.pory"
	delay 60
# 969 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 970 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 971 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
# 972 "data/scripts/players_house.pory"
	closemessage
# 973 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 974 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 975 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
# 976 "data/scripts/players_house.pory"
	closemessage
# 977 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 978 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 979 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 980 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 981 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 982 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
# 983 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 984 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 985 "data/scripts/players_house.pory"
	special InitRoamer
# 986 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 987 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
# 988 "data/scripts/players_house.pory"
	closemessage
# 989 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 990 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
# 991 "data/scripts/players_house.pory"
	releaseall
# 992 "data/scripts/players_house.pory"
	end
# 993 "data/scripts/players_house.pory"

# 994 "data/scripts/players_house.pory"
@ Never called.
# 995 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 996 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 997 "data/scripts/players_house.pory"
	return
# 998 "data/scripts/players_house.pory"

# 999 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 1000 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 1001 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 1002 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 1003 "data/scripts/players_house.pory"
	return
# 1004 "data/scripts/players_house.pory"

# 1005 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 1006 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 1007 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 1008 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 1009 "data/scripts/players_house.pory"
	return
# 1010 "data/scripts/players_house.pory"

# 1011 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 1012 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 1013 "data/scripts/players_house.pory"
	waitmovement 0
# 1014 "data/scripts/players_house.pory"
	return
# 1015 "data/scripts/players_house.pory"

# 1016 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 1017 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 1018 "data/scripts/players_house.pory"
	waitmovement 0
# 1019 "data/scripts/players_house.pory"
	return
# 1020 "data/scripts/players_house.pory"

# 1021 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 1022 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 1023 "data/scripts/players_house.pory"
	waitmovement 0
# 1024 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 1025 "data/scripts/players_house.pory"
	waitmovement 0
# 1026 "data/scripts/players_house.pory"
	return
# 1027 "data/scripts/players_house.pory"

# 1028 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 1029 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 1030 "data/scripts/players_house.pory"
	waitmovement 0
# 1031 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 1032 "data/scripts/players_house.pory"
	waitmovement 0
# 1033 "data/scripts/players_house.pory"
	return
# 1034 "data/scripts/players_house.pory"

# 1035 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 1036 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 1037 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 1038 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 1039 "data/scripts/players_house.pory"
	waitmovement 0
# 1040 "data/scripts/players_house.pory"
	return
# 1041 "data/scripts/players_house.pory"

# 1042 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 1043 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 1044 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 1045 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 1046 "data/scripts/players_house.pory"
	waitmovement 0
# 1047 "data/scripts/players_house.pory"
	return
# 1048 "data/scripts/players_house.pory"

# 1049 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 1050 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 1051 "data/scripts/players_house.pory"
	waitmovement 0
# 1052 "data/scripts/players_house.pory"
	return
# 1053 "data/scripts/players_house.pory"

# 1054 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 1055 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 1056 "data/scripts/players_house.pory"
	waitmovement 0
# 1057 "data/scripts/players_house.pory"
	return
# 1058 "data/scripts/players_house.pory"

# 1059 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 1060 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 1061 "data/scripts/players_house.pory"
	waitmovement 0
# 1062 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 1063 "data/scripts/players_house.pory"
	waitmovement 0
# 1064 "data/scripts/players_house.pory"
	return
# 1065 "data/scripts/players_house.pory"

# 1066 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 1067 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 1068 "data/scripts/players_house.pory"
	waitmovement 0
# 1069 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 1070 "data/scripts/players_house.pory"
	waitmovement 0
# 1071 "data/scripts/players_house.pory"
	return
# 1072 "data/scripts/players_house.pory"

# 1073 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 1074 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 1075 "data/scripts/players_house.pory"
	waitmovement 0
# 1076 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1077 "data/scripts/players_house.pory"
	waitmovement 0
# 1078 "data/scripts/players_house.pory"
	return
# 1079 "data/scripts/players_house.pory"

# 1080 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 1081 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 1082 "data/scripts/players_house.pory"
	waitmovement 0
# 1083 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1084 "data/scripts/players_house.pory"
	waitmovement 0
# 1085 "data/scripts/players_house.pory"
	return
# 1086 "data/scripts/players_house.pory"

# 1087 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 1088 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 1089 "data/scripts/players_house.pory"
	waitmovement 0
# 1090 "data/scripts/players_house.pory"
	return
# 1091 "data/scripts/players_house.pory"

# 1092 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 1093 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 1094 "data/scripts/players_house.pory"
	waitmovement 0
# 1095 "data/scripts/players_house.pory"
	return
# 1096 "data/scripts/players_house.pory"

# 1097 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 1098 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 1099 "data/scripts/players_house.pory"
	waitmovement 0
# 1100 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1101 "data/scripts/players_house.pory"
	waitmovement 0
# 1102 "data/scripts/players_house.pory"
	return
# 1103 "data/scripts/players_house.pory"

# 1104 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 1105 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 1106 "data/scripts/players_house.pory"
	waitmovement 0
# 1107 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1108 "data/scripts/players_house.pory"
	waitmovement 0
# 1109 "data/scripts/players_house.pory"
	return
# 1110 "data/scripts/players_house.pory"

# 1111 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 1112 "data/scripts/players_house.pory"
	walk_right
# 1113 "data/scripts/players_house.pory"
	walk_right
# 1114 "data/scripts/players_house.pory"
	step_end
# 1115 "data/scripts/players_house.pory"

# 1116 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 1117 "data/scripts/players_house.pory"
	walk_left
# 1118 "data/scripts/players_house.pory"
	walk_left
# 1119 "data/scripts/players_house.pory"
	step_end
# 1120 "data/scripts/players_house.pory"

# 1121 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 1122 "data/scripts/players_house.pory"
	face_left
# 1123 "data/scripts/players_house.pory"
	step_end
# 1124 "data/scripts/players_house.pory"

# 1125 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 1126 "data/scripts/players_house.pory"
	face_right
# 1127 "data/scripts/players_house.pory"
	step_end
# 1128 "data/scripts/players_house.pory"

# 1129 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 1130 "data/scripts/players_house.pory"
	walk_down
# 1131 "data/scripts/players_house.pory"
	walk_right
# 1132 "data/scripts/players_house.pory"
	walk_down
# 1133 "data/scripts/players_house.pory"
	delay_8
# 1134 "data/scripts/players_house.pory"
	step_end
# 1135 "data/scripts/players_house.pory"

# 1136 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 1137 "data/scripts/players_house.pory"
	walk_down
# 1138 "data/scripts/players_house.pory"
	walk_left
# 1139 "data/scripts/players_house.pory"
	walk_down
# 1140 "data/scripts/players_house.pory"
	delay_8
# 1141 "data/scripts/players_house.pory"
	step_end
# 1142 "data/scripts/players_house.pory"

# 1143 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 1144 "data/scripts/players_house.pory"
	delay_16
# 1145 "data/scripts/players_house.pory"
	walk_down
# 1146 "data/scripts/players_house.pory"
	walk_down
# 1147 "data/scripts/players_house.pory"
	walk_down
# 1148 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 1149 "data/scripts/players_house.pory"
	step_end
# 1150 "data/scripts/players_house.pory"

# 1151 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 1152 "data/scripts/players_house.pory"
	delay_8
# 1153 "data/scripts/players_house.pory"
	delay_16
# 1154 "data/scripts/players_house.pory"
	delay_16
# 1155 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 1156 "data/scripts/players_house.pory"
	step_end
# 1157 "data/scripts/players_house.pory"

# 1158 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 1159 "data/scripts/players_house.pory"
	delay_16
# 1160 "data/scripts/players_house.pory"
	walk_down
# 1161 "data/scripts/players_house.pory"
	walk_down
# 1162 "data/scripts/players_house.pory"
	walk_down
# 1163 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 1164 "data/scripts/players_house.pory"
	step_end
# 1165 "data/scripts/players_house.pory"

# 1166 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 1167 "data/scripts/players_house.pory"
	walk_up
# 1168 "data/scripts/players_house.pory"
	walk_left
# 1169 "data/scripts/players_house.pory"
	walk_left
# 1170 "data/scripts/players_house.pory"
	walk_left
# 1171 "data/scripts/players_house.pory"
	walk_left
# 1172 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 1173 "data/scripts/players_house.pory"
	step_end
# 1174 "data/scripts/players_house.pory"

# 1175 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 1176 "data/scripts/players_house.pory"
	walk_up
# 1177 "data/scripts/players_house.pory"
	walk_right
# 1178 "data/scripts/players_house.pory"
	walk_right
# 1179 "data/scripts/players_house.pory"
	walk_right
# 1180 "data/scripts/players_house.pory"
	walk_right
# 1181 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 1182 "data/scripts/players_house.pory"
	step_end
# 1183 "data/scripts/players_house.pory"

# 1184 "data/scripts/players_house.pory"
EventScript_RunningShoesManual::
# 1185 "data/scripts/players_house.pory"
	lockall
# 1186 "data/scripts/players_house.pory"
	call EventScript_RunningShoesManualTranslated
# 1187 "data/scripts/players_house.pory"
	releaseall
# 1188 "data/scripts/players_house.pory"
	end

EventScript_RunningShoesManualTranslated_Text_0:
# 129 "data/scripts/players_house.pory"
	.string "¡Es una Guía para Entrenadores!\n"
	.string "“Consejo 1: En cada Centro Pokémon,\l"
	.string "hay Máquinas Especiales, ¡Y quizá\l"
	.string "alguien especial también!\p"
	.string "¡Habla con todos, interactúa con todo!”\p"
	.string "¿Seguir leyendo?$"

EventScript_RunningShoesManualTranslated_Text_1:
# 133 "data/scripts/players_house.pory"
	.string "“Consejo 2: Cada Pokémon puede ser\n"
	.string "renombrado desde el menú, y también,\l"
	.string "puedes recordarle Movimientos.”\p"
	.string "¿Seguir leyendo?$"

EventScript_RunningShoesManualTranslated_Text_2:
# 135 "data/scripts/players_house.pory"
	.string "“Consejo 3: Puedes escapar de un\n"
	.string "Pokémon tocando R, y lanzar una\l"
	.string "PokéBall con L.”\p"
	.string "Ese es el último consejo útil.$"

EventScript_RunningShoesManualTranslated_Text_3:
# 141 "data/scripts/players_house.pory"
	.string "Mucho leer por hoy.$"

EventScript_YoureNewNeighbor_Translated_Text_0:
# 167 "data/scripts/players_house.pory"
	.string "¡AH! ¿¡QUIÉN ERES!?\p"
	.string "Ah, tú eres {ELLA} nuev{OA}, ¿no?$"

RivalsHouse_1F_Text_MayWhoAreYou_Translated_Text_0:
# 229 "data/scripts/players_house.pory"
	.string "Oh, tú eres… {PLAYER}, ¿Qué haces en\n"
	.string "mi casa?\p"
	.string "… … … … … … … … … … … …\p"
	.string "Mhhh… Mi papá dijo que vendrías,\n"
	.string "{PLAYER}, ¡Y que seamos amigos!\p"
	.string "Pero recién nos conocimos hoy,\n"
	.string "¿Verdad?\p"
	.string "No tengo mucho tiempo de todas formas,\n"
	.string "{PLAYER}, espero lo entiendas.$"

PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_0:
# 248 "data/scripts/players_house.pory"
	.string "¿No es linda la casa?$"

PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_1:
# 253 "data/scripts/players_house.pory"
	.string "Mientras Pokémon Movers termina de\n"
	.string "acomodar, ¿Porqué no pones en marcha el\l"
	.string "reloj que te compro Papá?$"

PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated_Text_0:
# 276 "data/scripts/players_house.pory"
	.string "Haz lo que te digo.$"

PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom_Text_0:
# 293 "data/scripts/players_house.pory"
	.string "¿Te gusta tu cuarto nuevo?\n"
	.string "No olvides tu Poción en la PC.$"

PlayersHouse_1F_EventScript_MaybeDadWillBeOn_Text_0:
# 305 "data/scripts/players_house.pory"
	.string "¡Ven, rápido, Papá está en la tele!$"

PlayersHouse_1F_EventScript_ItsOverWeMissedHim_Text_0:
# 317 "data/scripts/players_house.pory"
	.string "Terminó...\p"
	.string "Pues bueno, el Profesor me dijo que te\n"
	.string "preguntara algo.\p"
	.string "¿Cuál región tiene tus Iniciales\n"
	.string "favoritos?$"

PlayersHouse_1F_EventScript_StarterSet_Translated_11_Text_0:
# 329 "data/scripts/players_house.pory"
	.string "Está bien. Se lo diré cuanto antes\n"
	.string "púeda.$"

PlayersHouse_1F_EventScript_StarterSet_13_Text_0:
# 341 "data/scripts/players_house.pory"
	.string "¿Entonces quieres a los más difíciles\n"
	.string "de entrenar?$"

PlayersHouse_1F_EventScript_StarterSet_13_Text_1:
# 352 "data/scripts/players_house.pory"
	.string "¿Qué región tiene tus Iniciales\n"
	.string "favoritos?$"

PlayersHouse_1F_Text_YouShouldRestABit::
# 1 "data/scripts/players_house.pory"
	.string "¿Cómo va todo, amor?\n"
	.string "Te ves cansad{OA}.\p"
	.string "Descansa un rato, mi vida.$"

PlayersHouse_1F_Text_TakeCareHoney::
# 16 "data/scripts/players_house.pory"
	.string "¡Cuídate mucho!$"

PlayersHouse_1F_Text_IsntItNiceInHere::
# 27 "data/scripts/players_house.pory"
	.string "Qué linda casa.$"

PlayersHouse_1F_Text_MoversPokemonGoSetClock::
# 38 "data/scripts/players_house.pory"
	.string "Pokémon Movers hacen todo el trabajo, Y\n"
	.string "LIMPIAN.\p"
	.string "Ahora, ve a ajustar el reloj que te\n"
	.string "compró Papá.$"

PlayersHouse_1F_Text_ArentYouInterestedInRoom::
# 49 "data/scripts/players_house.pory"
	.string "Te dije que hicieras algo, ¿no?$"

PlayersHouse_1F_Text_GoSetTheClock::
# 61 "data/scripts/players_house.pory"
	.string "{PLAYER}.\p"
	.string "No te vas hasta que ajustes ese reloj.$"

PlayersHouse_1F_Text_OhComeQuickly::
# 75 "data/scripts/players_house.pory"
	.string "¡{PLAYER}, {PLAYER}!\n"
	.string "¡MIRA!$"

PlayersHouse_1F_Text_MaybeDadWillBeOn::
# 89 "data/scripts/players_house.pory"
	.string "¡UNA ENTREVISTA EN EL GIMNASIO\n"
	.string "PETALBURG!$"

PlayersHouse_1F_Text_ReportFromPetalburgGym::
# 100 "data/scripts/players_house.pory"
	.string "¡Y bueno, aunque nervioso, ese fue\n"
	.string "Norman, el gran Líder de Gimnasio!\p"
	.string "Ahora seguiremos con nuestra\n"
	.string "entrevista al nuevo donador de Devon,\l"
	.string "el señor -BZZT-$"

PlayersHouse_1F_EventScript_StarterSet_Text_8::
# 115 "data/scripts/players_house.pory"
	.string "Ninguna$"
