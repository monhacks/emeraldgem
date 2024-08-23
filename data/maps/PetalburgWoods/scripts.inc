PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_lt PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_2
# 14 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve
	return

PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_2:
# 6 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_Text_0
	return


PetalburgWoods_EventScript_GetInvolved::
# 19 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 20 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 23 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_0, MSGBOX_YESNO
# 29 "data/maps/PetalburgWoods/scripts.pory"
	namebox Aqua
# 30 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgWoods_EventScript_GetInvolved_2
# 35 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_EVIL_TEAM_SIDE, 2
# 38 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_1
# 39 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 40 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_2
# 41 "data/maps/PetalburgWoods/scripts.pory"
	namebox Player
# 42 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_3
# 52 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 53 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 54 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 55 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	namebox Aqua
# 61 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_4
PetalburgWoods_EventScript_GetInvolved_1:
	return

PetalburgWoods_EventScript_GetInvolved_2:
# 31 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_EVIL_TEAM_SIDE, 3
# 32 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua
	goto PetalburgWoods_EventScript_GetInvolved_1


# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 337 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 338 "data/maps/PetalburgWoods/scripts.pory"

# 339 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 341 "data/maps/PetalburgWoods/scripts.pory"

# 342 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 343 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 344 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 345 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 346 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 348 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 349 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 350 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 351 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 352 "data/maps/PetalburgWoods/scripts.pory"
	namebox Archie
# 353 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 354 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 355 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 356 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 357 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 358 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 359 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 360 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 361 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 362 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 363 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 364 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 365 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 366 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 367 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 368 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 369 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 370 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 371 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 372 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 373 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 374 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 375 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 376 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 377 "data/maps/PetalburgWoods/scripts.pory"
	end
# 378 "data/maps/PetalburgWoods/scripts.pory"

# 379 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherCenter::
# 380 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 381 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 382 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerCenter
# 383 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 384 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 385 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 386 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 387 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 388 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 389 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 390 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 391 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherCenter
# 392 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 393 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 394 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 395 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 396 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 397 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerCenter
# 398 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 399 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 400 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 401 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 402 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 403 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 404 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 405 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 406 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 407 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 408 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 409 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 410 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 411 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 412 "data/maps/PetalburgWoods/scripts.pory"
	end
# 413 "data/maps/PetalburgWoods/scripts.pory"

# 414 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 415 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 416 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 417 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 418 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 419 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 420 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 421 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 422 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 423 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 424 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 425 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 426 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 427 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 428 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 429 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 430 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 431 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 432 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 433 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 434 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 435 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 436 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 437 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 438 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 439 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 440 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 441 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 442 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 443 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 444 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 445 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 446 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 447 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 448 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 449 "data/maps/PetalburgWoods/scripts.pory"
	end
# 450 "data/maps/PetalburgWoods/scripts.pory"

# 451 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 452 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 453 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 454 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 455 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 456 "data/maps/PetalburgWoods/scripts.pory"
	return
# 457 "data/maps/PetalburgWoods/scripts.pory"

# 458 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 459 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText
# 460 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 461 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 462 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 463 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 464 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 465 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 466 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 467 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 468 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 469 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 470 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 471 "data/maps/PetalburgWoods/scripts.pory"
	end
# 472 "data/maps/PetalburgWoods/scripts.pory"

# 473 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 474 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 475 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 476 "data/maps/PetalburgWoods/scripts.pory"
	end
# 477 "data/maps/PetalburgWoods/scripts.pory"

# 478 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 479 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 480 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 481 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 482 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 483 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 484 "data/maps/PetalburgWoods/scripts.pory"
	return
# 485 "data/maps/PetalburgWoods/scripts.pory"

# 486 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 487 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 488 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 489 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 490 "data/maps/PetalburgWoods/scripts.pory"
	end
# 491 "data/maps/PetalburgWoods/scripts.pory"

# 492 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 493 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 494 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 495 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 496 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 497 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 498 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 499 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 500 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 501 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 502 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 503 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 504 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 505 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 506 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 507 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 508 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 509 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 510 "data/maps/PetalburgWoods/scripts.pory"

# 511 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 512 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 513 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 514 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 515 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 516 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 517 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 518 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 519 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 520 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 521 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 522 "data/maps/PetalburgWoods/scripts.pory"

# 523 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 524 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 525 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 526 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 527 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 529 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 530 "data/maps/PetalburgWoods/scripts.pory"

# 531 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 532 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 533 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 534 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 535 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 536 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 537 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 538 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerCenter:
# 539 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 540 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 541 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 542 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 543 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 544 "data/maps/PetalburgWoods/scripts.pory"

# 545 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 546 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 547 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 548 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 549 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 550 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 551 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 552 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 553 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 555 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 556 "data/maps/PetalburgWoods/scripts.pory"

# 557 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 558 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 559 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 560 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 561 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 562 "data/maps/PetalburgWoods/scripts.pory"

# 563 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 564 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 565 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 566 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 567 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 568 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 569 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 570 "data/maps/PetalburgWoods/scripts.pory"

# 571 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerCenter:
# 572 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 573 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 574 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 575 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 576 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 577 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 578 "data/maps/PetalburgWoods/scripts.pory"

# 579 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 580 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 581 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 582 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 583 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 584 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 585 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 586 "data/maps/PetalburgWoods/scripts.pory"

# 587 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 588 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 589 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 590 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 591 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 592 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 593 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 594 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 595 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 596 "data/maps/PetalburgWoods/scripts.pory"

# 597 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 598 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 599 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 600 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 601 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 602 "data/maps/PetalburgWoods/scripts.pory"

# 603 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 604 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 605 "data/maps/PetalburgWoods/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 607 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 608 "data/maps/PetalburgWoods/scripts.pory"

# 609 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 610 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 611 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 612 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 613 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 614 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 615 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 616 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 617 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 618 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 619 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 620 "data/maps/PetalburgWoods/scripts.pory"

# 621 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 622 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 623 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 624 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 625 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 626 "data/maps/PetalburgWoods/scripts.pory"

# 627 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherCenter:
# 628 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 629 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 630 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 631 "data/maps/PetalburgWoods/scripts.pory"

# 632 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 633 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 634 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 635 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 636 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 637 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 638 "data/maps/PetalburgWoods/scripts.pory"

# 639 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 640 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 641 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 642 "data/maps/PetalburgWoods/scripts.pory"

# 643 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 644 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 645 "data/maps/PetalburgWoods/scripts.pory"
	end
# 646 "data/maps/PetalburgWoods/scripts.pory"

# 647 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 648 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 649 "data/maps/PetalburgWoods/scripts.pory"
	end
# 650 "data/maps/PetalburgWoods/scripts.pory"

# 651 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 652 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 653 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 654 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 655 "data/maps/PetalburgWoods/scripts.pory"
	pokemart PetalburgWoods_SpecialMart
# 656 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 657 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 658 "data/maps/PetalburgWoods/scripts.pory"
	end
# 659 "data/maps/PetalburgWoods/scripts.pory"

# 660 "data/maps/PetalburgWoods/scripts.pory"
.align 2
# 661 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_SpecialMart:
# 662 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 663 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 664 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_CHARCOAL
# 665 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_BLACK_BELT
# 666 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_HARD_STONE
# 667 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_DRAGON_FANG
# 668 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SILK_SCARF
# 669 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_MAGNET
# 670 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_NEVER_MELT_ICE
# 671 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_POISON_BARB
# 672 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SHARP_BEAK
# 673 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SOFT_SAND
# 674 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_TWISTED_SPOON
# 675 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SILVER_POWDER
# 676 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SPELL_TAG
# 677 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_BLACK_GLASSES
# 678 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_METAL_COAT
# 679 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_NONE
# 680 "data/maps/PetalburgWoods/scripts.pory"
	release
# 681 "data/maps/PetalburgWoods/scripts.pory"
	end
# 682 "data/maps/PetalburgWoods/scripts.pory"

# 683 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 684 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 685 "data/maps/PetalburgWoods/scripts.pory"
	release
# 686 "data/maps/PetalburgWoods/scripts.pory"
	end
# 687 "data/maps/PetalburgWoods/scripts.pory"

# 688 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 689 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 690 "data/maps/PetalburgWoods/scripts.pory"
	end
# 691 "data/maps/PetalburgWoods/scripts.pory"

# 692 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 693 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 694 "data/maps/PetalburgWoods/scripts.pory"
	end
# 695 "data/maps/PetalburgWoods/scripts.pory"

# 696 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 697 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 698 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 699 "data/maps/PetalburgWoods/scripts.pory"
	end
# 700 "data/maps/PetalburgWoods/scripts.pory"

# 701 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 702 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 703 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 704 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 705 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 706 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 707 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 708 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 709 "data/maps/PetalburgWoods/scripts.pory"
	release
# 710 "data/maps/PetalburgWoods/scripts.pory"
	end
# 711 "data/maps/PetalburgWoods/scripts.pory"

# 712 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 713 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 714 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 715 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 716 "data/maps/PetalburgWoods/scripts.pory"
	release
# 717 "data/maps/PetalburgWoods/scripts.pory"
	end
# 718 "data/maps/PetalburgWoods/scripts.pory"

# 719 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 720 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 721 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 722 "data/maps/PetalburgWoods/scripts.pory"
	release
# 723 "data/maps/PetalburgWoods/scripts.pory"
	end
# 724 "data/maps/PetalburgWoods/scripts.pory"

# 725 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 726 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 727 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 728 "data/maps/PetalburgWoods/scripts.pory"
	release
# 729 "data/maps/PetalburgWoods/scripts.pory"
	end
# 730 "data/maps/PetalburgWoods/scripts.pory"

# 731 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 732 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 733 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 734 "data/maps/PetalburgWoods/scripts.pory"
	release
# 735 "data/maps/PetalburgWoods/scripts.pory"
	end
# 736 "data/maps/PetalburgWoods/scripts.pory"

# 737 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 738 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 739 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 740 "data/maps/PetalburgWoods/scripts.pory"
	end

PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_Text_0:
# 6 "data/maps/PetalburgWoods/scripts.pory"
	.string "Con alguien tan fuerte como tú,\n"
	.string "¡Seríamos diez veces más imparables!\p"
	.string "Espero que recapacites... Tienes tiempo,\n"
	.string "aún hay cosas por hacer en Rustboro…$"

PetalburgWoods_EventScript_GetInvolved_Text_0:
# 23 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Quieres involucrarte?$"

PetalburgWoods_EventScript_GetInvolved_Text_1:
# 38 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Jojojo!\p"
	.string "¡Parece que nadie va a ayudarte\n"
	.string "después de todo!$"

PetalburgWoods_EventScript_GetInvolved_Text_2:
# 40 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿¡PERO QÚE HACES!?\p"
	.string "¡ESTO ES IMPORTANTE!\p"
	.string "¡ATACA, ATACA, ATACA!$"

PetalburgWoods_EventScript_GetInvolved_Text_3:
# 42 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR BLUE}(Parece que no me queda de otra, este\n"
	.string "loco no me dejará ignorarlo...)\p"
	.string "(Pero... Tampoco parece que el Recluta\n"
	.string "se olvidará de esto.){COLOR DARK_GRAY}$"

PetalburgWoods_EventScript_GetInvolved_Text_4:
# 61 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Pero decídete, niñ{OA}!\p"
	.string "¿Estás con nosotros o no?\p"
	.string "¡Quizá una golpiza te haga decidirte!$"

PetalburgWoods_Text_NotAOneToBeFound::
# 71 "data/maps/PetalburgWoods/scripts.pory"
	.string "No encuentro ni uno...$"

PetalburgWoods_Text_HaveYouSeenShroomish::
# 82 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Hola! ¿Has visto al Pokémon\n"
	.string "“Shroomish” por aquí?\p"
	.string "¡Amo a ese Pokémon!\n"
	.string "¡Oh, y escuché que “Morellul” suele\l"
	.string "aparecer de noche!$"

PetalburgWoods_Text_IWasGoingToAmbushYou::
# 96 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Porqué estás escapando de mí?\n"
	.string "¡Ya dame los {COLOR BLUE}Planos{COLOR DARK_GRAY} y déjame terminar\l"
	.string "esta misión!$"

PetalburgWoods_Text_HandOverThosePapers::
# 111 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Así que es eso, eh?\n"
	.string "¿La Gran Corporación Devon se\l"
	.string "arrepintió?\p"
	.string "¡No me importa, ya dame esos Planos!$"

PetalburgWoods_Text_YouHaveToHelpMe::
# 127 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡AAAAAAHHHHH!\p"
	.string "¡SIRVE DE ALGO Y AYÚDAME!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua::
# 141 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ojojojojo, ¿Así que vas a protegerlo,\n"
	.string "no? ¡Pues contra el poderoso {COLOR LIGHT_BLUE}{SHADOW BLUE}Equipo\l"
	.string "Aqua{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} no podrás!$"

PetalburgWoods_Text_YoureKiddingMe::
# 155 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡I-imposible!\n"
	.string "¡Sí que pudiste!$"

PetalburgWoods_Text_YouveGotSomeNerve::
# 169 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡ARGH!\p"
	.string "¡Eres un{A} estúpid{OA} por meterte con el\n"
	.string "grandioso Equipo Aqua!\p"
	.string "Pero no importa, después de todo, no es\n"
	.string "lo único que el Equipo Aqua necesita de\l"
	.string "Rustboro………$"

PetalburgWoods_Text_ThatWasAwfullyClose::
# 185 "data/maps/PetalburgWoods/scripts.pory"
	.string "Fiu…\n"
	.string "Eso estuvo demasiado cerca…\l"
	.string "¡Pero bueno, gracias de todas formas!\p"
	.string "¡Ten esto!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro::
# 201 "data/maps/PetalburgWoods/scripts.pory"
	.string "…………………………………$"

PetalburgWoods_Text_ICantBeWastingTime::
# 205 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡UN MONENTO, YA SÉ LO QUE QUIEREN!\p"
	.string "¡DEBO CUIDARLAS O SERÁN ROBADAS!$"

PetalburgWoods_Text_YoureLoadedWithItems::
# 218 "data/maps/PetalburgWoods/scripts.pory"
	.string "De alguna forma no tienes espacio.$"

PetalburgWoods_Text_GoBugPokemonTeam::
# 222 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡AL ESCONDERME EN EL ARBOL,\n"
	.string "PUDE ATRAPAR MUCHOS BICHOS!\p"
	.string "¡GO, GO, GO!\n"
	.string "¡MI MONOTYPE BICHO!$"

PetalburgWoods_Text_ICouldntWin::
# 229 "data/maps/PetalburgWoods/scripts.pory"
	.string "Incluso con tantos,\n"
	.string "no pude ganar…$"

PetalburgWoods_Text_ImOutOfPokeBalls::
# 234 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokéballs. Necesito.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon::
# 238 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si llevas tus Pokémon al colegio,\n"
	.string "¡Te harás muy popular!$"

PetalburgWoods_Text_CantBePopularIfILose::
# 243 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pero si pierdo me odiarán.$"

PetalburgWoods_Text_PeopleRespectYou::
# 247 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si tienes un tipo Bicho grande,\n"
	.string "la gente se interesará en ti.\p"
	.string "Al menos eso dijo mi papá.$"

PetalburgWoods_Text_IWantRematch1::
# 253 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡QUIERO LA REVANCHA!\p"
	.string "¡TE DIRÉ CUANDO HAYAN CRECIDO!$"

PetalburgWoods_Text_IWantRematch2::
# 258 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡QUIERO LA REVANCHA!\p"
	.string "¡TE DIRÉ CUANDO HAYAN CRECIDO!$"

PetalburgWoods_Text_MyPokemonHaveGrown::
# 263 "data/maps/PetalburgWoods/scripts.pory"
	.string "Mis Bichos ahora son grandes.\n"
	.string "Todo-digo todas me amarán.$"

PetalburgWoods_Text_CantBePopularIfLose::
# 268 "data/maps/PetalburgWoods/scripts.pory"
	.string "Mis bichos no fueron lo\n"
	.string "suficientemente fuertes para\l"
	.string "impresionarte.$"

PetalburgWoods_Text_IveBeenTrainingHard::
# 274 "data/maps/PetalburgWoods/scripts.pory"
	.string "Los Pokémon fuertes impresionan\n"
	.string "a los-las chicas, ¿no?\l"
	.string "Entrené mucho para eso.$"

PetalburgWoods_Text_StayOutOfTallGrass::
# 280 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Che, vos!\n"
	.string "¿Están bien tus Pokes?\p"
	.string "Si no es asi, esquivá el pasto.$"

PetalburgWoods_Text_HiddenItemsExplanation::
# 286 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aveces, hay Pokémon raros\n"
	.string "que aparecen al {COLOR RED}encadenar{COLOR DARK_GRAY}\l"
	.string "Pokemon salvajes.\p"
	.string "Por ejemplo, estoy buscando un Phantum.$"

PetalburgWoods_Text_TryUsingThisItem::
# 293 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Ah, genial!\n"
	.string "¡Es la {COLOR GREEN}Medalla de Rustboro{COLOR DARK_GRAY}!\p"
	.string "¡Esta es una tienda especial!$"

PetalburgWoods_Text_MiracleSeedExplanation::
# 299 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Vuelva pronto!$"

PetalburgWoods_Text_TrainerTipsExperience::
# 303 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡PISTAS PARA ENTRENADORES!\p"
	.string "¡No subestimes el poder de los Pokémon\n"
	.string "de Tipo Bicho!\p"
	.string "¡Algunos pueden ponerte en un aprieto,\n"
	.string "sobretodo si usas un Tipo Hada!\p"
	.string "¡No olvides que también son inmunes a la\n"
	.string "confusión!$"

PetalburgWoods_Text_TrainerTipsPP::
# 321 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡PISTAS PARA ENTRENADORES!\p"
	.string "Los Pokémon a la noche son de más alto\n"
	.string "nivel.\p"
	.string "Si buscas agregar algo a tu Equipo a\n"
	.string "último momento, ¡Busca de noche!$"
