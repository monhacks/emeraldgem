# 306 "data/maps/RustboroCity_Gym/scripts.pory"

# 307 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_HINT_GUY, 4
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 310 "data/maps/RustboroCity_Gym/scripts.pory"

# 311 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	namebox Roxanne
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	hidenamebox
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	checkitem ITEM_TM39
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Gym_EventScript_GiveRockTomb
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	namebox Roxanne
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	hidenamebox
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Nada::
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_TEMP_1
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Clear_Down::
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 330 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkDown
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 335 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Clear_Left::
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkLeft
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Clear_Right::
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkRight1
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Up1::
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Down
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLED_PC
# 352 "data/maps/RustboroCity_Gym/scripts.pory"
	getpartysize
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 355 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceUp
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_WaitYouCant
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 363 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkDown
# 366 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymGuide2
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_PlayerWalkDown:
# 374 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
# 376 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_PlayerWalkRight:
# 377 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 378 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 381 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
# 382 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_PlayerWalkRight1:
# 383 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 384 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
# 385 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_PlayerWalkLeft:
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 387 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
# 388 "data/maps/RustboroCity_Gym/scripts.pory"

# 389 "data/maps/RustboroCity_Gym/scripts.pory"

# 390 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Left::
# 391 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Right
# 392 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLED_PC
# 393 "data/maps/RustboroCity_Gym/scripts.pory"
	getpartysize
# 394 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
# 395 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 396 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceLeft
# 397 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 398 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 399 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
# 400 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_WaitYouCant
# 402 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 403 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 404 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 405 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 406 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 407 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkRight
# 408 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 409 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 410 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 411 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 412 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymGuide2
# 413 "data/maps/RustboroCity_Gym/scripts.pory"
	end 
# 414 "data/maps/RustboroCity_Gym/scripts.pory"

# 415 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Right::
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Left
# 417 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLED_PC
# 418 "data/maps/RustboroCity_Gym/scripts.pory"
	getpartysize
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceRight
# 422 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 424 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
# 425 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 426 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_WaitYouCant
# 427 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 428 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 429 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 430 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 431 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 432 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkLeft
# 433 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 434 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 435 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 436 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 437 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymGuide2
# 438 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 439 "data/maps/RustboroCity_Gym/scripts.pory"

# 440 "data/maps/RustboroCity_Gym/scripts.pory"

# 441 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 442 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 443 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 444 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 445 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 446 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 447 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 448 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 449 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 450 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 451 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 452 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 453 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 454 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 455 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 456 "data/maps/RustboroCity_Gym/scripts.pory"

# 457 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 458 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM39
# 459 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 460 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 461 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 462 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 463 "data/maps/RustboroCity_Gym/scripts.pory"

# 464 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 465 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 466 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 467 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 468 "data/maps/RustboroCity_Gym/scripts.pory"

# 469 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 470 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 471 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 472 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 473 "data/maps/RustboroCity_Gym/scripts.pory"

# 474 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 475 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 476 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 477 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 478 "data/maps/RustboroCity_Gym/scripts.pory"

# 479 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 480 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 481 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 482 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 483 "data/maps/RustboroCity_Gym/scripts.pory"

# 484 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 485 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 486 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 487 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide2::
# 488 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 489 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ForThisGym
# 490 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceOriginalDirection
# 491 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 492 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 493 "data/maps/RustboroCity_Gym/scripts.pory"

# 494 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 495 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 496 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 497 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 498 "data/maps/RustboroCity_Gym/scripts.pory"

# 499 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 500 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 501 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 502 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 503 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 504 "data/maps/RustboroCity_Gym/scripts.pory"

# 505 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 506 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 507 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 508 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 509 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 510 "data/maps/RustboroCity_Gym/scripts.pory"

# 511 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 512 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 513 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 514 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 515 "data/maps/RustboroCity_Gym/scripts.pory"

# 516 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 517 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 518 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 519 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 520 "data/maps/RustboroCity_Gym/scripts.pory"

# 521 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 522 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 523 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 524 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 525 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 526 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 527 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 528 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 529 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 530 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 531 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 532 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 533 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 534 "data/maps/RustboroCity_Gym/scripts.pory"
	end

RustboroCity_Gym_Text_RoxannePreRematch::
# 2 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat::
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch::
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons::
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"

RustboroCity_Gym_WaitYouCant::
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Alto! ¡No puedes pasar así!$"

RustboroCity_Gym_ForThisGym::
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "En este Gimnasio, está prohibido llevar\n"
	.string "más de 3 Pokémon.\p"
	.string "Además, no podrás usar el {COLOR RED}Sistema de\n"
	.string "Almacenamiento Portátil{COLOR DARK_GRAY} dentro del\l"
	.string "Gimnasio.\p"
	.string "¡Pero cada Gimnasio es diferente!$"

RustboroCity_Gym_Text_GymGuidePostVictory::
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Esa batalla fue increíble!$"

RustboroCity_Gym_Text_JoshIntro::
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Te mostraré un gran poder!$"

RustboroCity_Gym_Text_JoshDefeat::
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "…$"

RustboroCity_Gym_Text_JoshPostBattle::
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Aún me falta mucho!$"

RustboroCity_Gym_Text_TommyIntro::
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Si no me puedes vencer,\n"
	.string "¡Olvídate de ganarle a Roxanne!$"

RustboroCity_Gym_Text_TommyDefeat::
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Wow! ¡Tienes potencial!$"

RustboroCity_Gym_Text_TommyPostBattle::
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne sobrepasa mi poder\n"
	.string "por kilómetros.\p"
	.string "¡Mejor ten cuidado!$"

RustboroCity_Gym_Text_MarcIntro::
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¿Sabías qué?\p"
	.string "¡Usar Camuflaje en este Gimnasio te\n"
	.string "convierte en Tipo Roca!$"

RustboroCity_Gym_Text_MarcDefeat::
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¿Sabías qué?\n"
	.string "¡Mi mujer me hará lavar los platos!$"

RustboroCity_Gym_Text_MarcPostBattle::
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡No tuve que apostar hacer quehaceres\l"
	.string "con mi mujer si mantenía una racha!$"

RustboroCity_Gym_Text_RoxanneIntro::
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Hola, soy Roxanne, la {COLOR RED}Líder del\n"
	.string "Gimnasio{COLOR DARK_GRAY}\n"
	.string "de esta ciudad. Prepárate...\p"
	.string "¡Vas a enfrentarte ahora, a la\n"
	.string "chica prodigio de Ciudad Rustboro!$"

RustboroCity_Gym_Text_RoxanneDefeat::
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Así que…\n"
	.string "Perdí…\p"
	.string "Ni con mi gran conocimiento conseguido\n"
	.string "con años de estudio de los combates\l"
	.string "pude ganarte.\p"
	.string "¡Acepto mi derrota humildemente!\n"
	.string "¡Eres increíble, {PLAYER}!$"

RustboroCity_Gym_Text_ReceivedStoneBadge::
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} recibió la\n"
	.string "{COLOR RED}Medalla Piedra{COLOR DARK_GRAY} de Roxanne.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis::
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Esa es una Medalla de Gimnasio,\n"
	.string "aunque seguro ya las conoces.\p"
	.string "Por favor, toma esto como premio.$"

RustboroCity_Gym_Text_ExplainRockTomb::
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Es la {COLOR BLUE}Máquina Técnica 39{COLOR DARK_GRAY}, Antiaéreo!\n"
	.string "Antiaéreo es un movimiento tipo Roca\l"
	.string "que causa que el rival {COLOR BLUE}pierda el tipo\l"
	.string "Volador hasta que sea reemplazado{COLOR DARK_GRAY}.\p"
	.string "¡Recuerda que las MTs no se gastan!$"

RustboroCity_Gym_Text_RoxannePostBattle::
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Te recomendaría visitar otros\n"
	.string "Gimnasios, y ganar.\p"
	.string "Con tu poder, lograrás todo.$"

RustboroCity_Gym_Text_GymStatue::
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gimnasio Pokémon Rustboro\p"
	.string "Vencedores del Gimnasio:\n"
	.string "{RIVAL}\n"
	.string "Leaf$"

RustboroCity_Gym_Text_GymStatueCertified::
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gimnasio Pokémon Rustboro\p"
	.string "Vencedores del Gimnasio:\n"
	.string "{RIVAL}\n"
	.string "Leaf\l"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall::
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … ¡BIP!\p"
	.string "Ah, hola, ¿{PLAYER}?\n"
	.string "Soy Roxanne, del Gimnasio Rustboro.\p"
	.string "Escuché de Brawly que eres más fuerte.\p"
	.string "Te prometo que mejoraré mi Gimnasio,\n"
	.string "para que puedas volver a enfrentame.\p"
	.string "¡Espero te emocione como a mí!\p"
	.string "… … … … … …\n"
	.string "… … … … … ¡Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne::
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne registrada.$"
