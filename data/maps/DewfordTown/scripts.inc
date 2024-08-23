# 326 "data/maps/DewfordTown/scripts.pory"

# 327 "data/maps/DewfordTown/scripts.pory"
@ Sailing to and from Dewford uses local IDs from different maps
# 328 "data/maps/DewfordTown/scripts.pory"
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
# 329 "data/maps/DewfordTown/scripts.pory"
@ All of these local IDs are labeled here
# 330 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_DEWFORD, 2
# 331 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_DEWFORD, 4
# 332 "data/maps/DewfordTown/scripts.pory"

# 333 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R109, 1
# 334 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R109, 2
# 335 "data/maps/DewfordTown/scripts.pory"

# 336 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R104, 7
# 337 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R104, 8
# 338 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_GRUNT, 6
# 339 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_WALLY, 7
# 340 "data/maps/DewfordTown/scripts.pory"

# 341 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 342 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 343 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DewfordTown_OnFrame
# 344 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 345 "data/maps/DewfordTown/scripts.pory"

# 346 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 347 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 348 "data/maps/DewfordTown/scripts.pory"
	end
# 349 "data/maps/DewfordTown/scripts.pory"

# 350 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnFrame:
# 351 "data/maps/DewfordTown/scripts.pory"
	map_script_2 VAR_DEWFORD_TOWN_STATE, 3, DewfordTown_OnFrameWally
# 352 "data/maps/DewfordTown/scripts.pory"
	.2byte 0
# 353 "data/maps/DewfordTown/scripts.pory"

# 354 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Wally::
# 355 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, DewfordTown_EventScript_Wally2
# 356 "data/maps/DewfordTown/scripts.pory"
	lock
# 357 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 358 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_TEMP_1
# 359 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 360 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_WallyHello, MSGBOX_DEFAULT
# 361 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 362 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 363 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
# 364 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 365 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 366 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_WallyBeginSpeech, MSGBOX_DEFAULT
# 367 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 368 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE_OUT
# 369 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 6
# 370 "data/maps/DewfordTown/scripts.pory"
	specialvar VAR_0x8004, GetPlayerFacingDirection
# 371 "data/maps/DewfordTown/scripts.pory"
    warp MAP_PETALBURG_CITY, 15, 16
# 372 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 373 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 374 "data/maps/DewfordTown/scripts.pory"
	end
# 375 "data/maps/DewfordTown/scripts.pory"

# 376 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Wally2::
# 377 "data/maps/DewfordTown/scripts.pory"
	end
# 378 "data/maps/DewfordTown/scripts.pory"

# 379 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnFrameWally::
# 380 "data/maps/DewfordTown/scripts.pory"
	lockall
# 381 "data/maps/DewfordTown/scripts.pory"
	call Script_RemoveTint
# 382 "data/maps/DewfordTown/scripts.pory"
	call_if_eq VAR_0x8004, DIR_EAST, DewfordTown_OnFrameWallyEast
# 383 "data/maps/DewfordTown/scripts.pory"
	call_if_eq VAR_0x8004, DIR_WEST, DewfordTown_OnFrameWallyWest
# 384 "data/maps/DewfordTown/scripts.pory"
	call_if_eq VAR_0x8004, DIR_NORTH, DewfordTown_OnFrameWallyNorth
# 385 "data/maps/DewfordTown/scripts.pory"
	call_if_eq VAR_0x8004, DIR_SOUTH, DewfordTown_OnFrameWallySouth
# 386 "data/maps/DewfordTown/scripts.pory"
	delay 16
# 387 "data/maps/DewfordTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 388 "data/maps/DewfordTown/scripts.pory"
	delay 8
# 389 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 390 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyContinueSpeech, MSGBOX_DEFAULT
# 391 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 392 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 393 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyContinueSpeech2
# 394 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 395 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 396 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
# 397 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FaceUp
# 399 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 401 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyDetermined
# 402 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
# 403 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 404 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyLetsGo
# 405 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 406 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 407 "data/maps/DewfordTown/scripts.pory"
	call_if_eq VAR_0x8004, DIR_WEST, DewfordTown_WallyGoToGymWest
# 408 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_WALLY, DewfordTown_Movement_WallyGoToGym
# 409 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 410 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, 8
# 411 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8005, 17
# 412 "data/maps/DewfordTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 413 "data/maps/DewfordTown/scripts.pory"
	waitdooranim
# 414 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_WALLY, DewfordTown_Movement_WallyGoToGym2
# 415 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 416 "data/maps/DewfordTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 417 "data/maps/DewfordTown/scripts.pory"
	waitdooranim
# 418 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 419 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyGym1
# 420 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_MEDITITE, CRY_MODE_NORMAL
# 421 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 422 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 423 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 424 "data/maps/DewfordTown/scripts.pory"
	delay 8
# 425 "data/maps/DewfordTown/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 426 "data/maps/DewfordTown/scripts.pory"
	waitse
# 427 "data/maps/DewfordTown/scripts.pory"
	delay 12
# 428 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 429 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyGym2
# 430 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 431 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 432 "data/maps/DewfordTown/scripts.pory"
	playse SE_M_SUPERSONIC
# 433 "data/maps/DewfordTown/scripts.pory"
	waitse
# 434 "data/maps/DewfordTown/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 435 "data/maps/DewfordTown/scripts.pory"
	waitse
# 436 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_MEDITITE, CRY_MODE_FAINT
# 437 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 438 "data/maps/DewfordTown/scripts.pory"
	delay 8
# 439 "data/maps/DewfordTown/scripts.pory"
	playse SE_FAINT
# 440 "data/maps/DewfordTown/scripts.pory"
	waitse
# 441 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 442 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyGym3
# 443 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 444 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 445 "data/maps/DewfordTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 446 "data/maps/DewfordTown/scripts.pory"
	delay 50
# 447 "data/maps/DewfordTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 448 "data/maps/DewfordTown/scripts.pory"
	delay 10
# 449 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 450 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyGymBattle
# 451 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 452 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 453 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 454 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 455 "data/maps/DewfordTown/scripts.pory"
	delay 8
# 456 "data/maps/DewfordTown/scripts.pory"
	playse SE_M_DETECT
# 457 "data/maps/DewfordTown/scripts.pory"
	waitse
# 458 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 459 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyGymBattle2
# 460 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 461 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 462 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 463 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 464 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 465 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyGymBattle3
# 466 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 467 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 468 "data/maps/DewfordTown/scripts.pory"
	delay 10
# 469 "data/maps/DewfordTown/scripts.pory"
	playse SE_M_REFLECT
# 470 "data/maps/DewfordTown/scripts.pory"
	waitse
# 471 "data/maps/DewfordTown/scripts.pory"
	playse SE_M_BRICK_BREAK
# 472 "data/maps/DewfordTown/scripts.pory"
	waitse
# 473 "data/maps/DewfordTown/scripts.pory"
	delay 12
# 474 "data/maps/DewfordTown/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 475 "data/maps/DewfordTown/scripts.pory"
	waitse
# 476 "data/maps/DewfordTown/scripts.pory"
	delay 16
# 477 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_RALTS,CRY_MODE_NORMAL
# 478 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 479 "data/maps/DewfordTown/scripts.pory"
	delay 30
# 480 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_KIRLIA,CRY_MODE_GROWL_1
# 481 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 482 "data/maps/DewfordTown/scripts.pory"
	delay 30
# 483 "data/maps/DewfordTown/scripts.pory"
	playfanfare MUS_EVOLVED
# 484 "data/maps/DewfordTown/scripts.pory"
	waitfanfare
# 485 "data/maps/DewfordTown/scripts.pory"
	delay 10
# 486 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 487 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyGymBattle4
# 488 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 489 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 490 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 491 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 492 "data/maps/DewfordTown/scripts.pory"
	playse SE_M_SUPERSONIC
# 493 "data/maps/DewfordTown/scripts.pory"
	waitse
# 494 "data/maps/DewfordTown/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 495 "data/maps/DewfordTown/scripts.pory"
	waitse
# 496 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_FAINT
# 497 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 498 "data/maps/DewfordTown/scripts.pory"
	playse SE_FAINT
# 499 "data/maps/DewfordTown/scripts.pory"
	waitse
# 500 "data/maps/DewfordTown/scripts.pory"
	delay 20
# 501 "data/maps/DewfordTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 502 "data/maps/DewfordTown/scripts.pory"
	waitdooranim
# 503 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_WALLY, DewfordTown_Movement_WallyComeOut
# 504 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 505 "data/maps/DewfordTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 506 "data/maps/DewfordTown/scripts.pory"
	waitdooranim
# 507 "data/maps/DewfordTown/scripts.pory"
	namebox Wally
# 508 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WallyAfter
# 509 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 510 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 511 "data/maps/DewfordTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 512 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_WALLY_DEWFORD_TOWN
# 513 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_WALLY_RUSTBORO
# 514 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_WALLY
# 515 "data/maps/DewfordTown/scripts.pory"
	delay 16
# 516 "data/maps/DewfordTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 517 "data/maps/DewfordTown/scripts.pory"
	delay 8
# 518 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 4
# 519 "data/maps/DewfordTown/scripts.pory"
	releaseall
# 520 "data/maps/DewfordTown/scripts.pory"
	end
# 521 "data/maps/DewfordTown/scripts.pory"

# 522 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_WallyComeOut::
# 523 "data/maps/DewfordTown/scripts.pory"
	face_down
# 524 "data/maps/DewfordTown/scripts.pory"
	set_visible
# 525 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 527 "data/maps/DewfordTown/scripts.pory"
	face_player
# 528 "data/maps/DewfordTown/scripts.pory"
	step_end
# 529 "data/maps/DewfordTown/scripts.pory"

# 530 "data/maps/DewfordTown/scripts.pory"
DewfordTown_WallyGoToGymWest::
# 531 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerOutTheWay
# 532 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 533 "data/maps/DewfordTown/scripts.pory"
	return
# 534 "data/maps/DewfordTown/scripts.pory"

# 535 "data/maps/DewfordTown/scripts.pory"

# 536 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnFrameWallyEast::
# 537 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayer
# 538 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/DewfordTown/scripts.pory"
	return
# 540 "data/maps/DewfordTown/scripts.pory"

# 541 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnFrameWallyWest::
# 542 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerWest
# 543 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/DewfordTown/scripts.pory"
	return
# 545 "data/maps/DewfordTown/scripts.pory"

# 546 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnFrameWallyNorth::
# 547 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerNorth
# 548 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 549 "data/maps/DewfordTown/scripts.pory"
	return
# 550 "data/maps/DewfordTown/scripts.pory"

# 551 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnFrameWallySouth::
# 552 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerSouth
# 553 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/DewfordTown/scripts.pory"
	return
# 555 "data/maps/DewfordTown/scripts.pory"

# 556 "data/maps/DewfordTown/scripts.pory"

# 557 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_WallyGoToGym::
# 558 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 559 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 560 "data/maps/DewfordTown/scripts.pory"
	face_up
# 561 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_up
# 562 "data/maps/DewfordTown/scripts.pory"
	step_end
# 563 "data/maps/DewfordTown/scripts.pory"

# 564 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_WallyGoToGym2::
# 565 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 566 "data/maps/DewfordTown/scripts.pory"
	set_invisible
# 567 "data/maps/DewfordTown/scripts.pory"
	step_end
# 568 "data/maps/DewfordTown/scripts.pory"

# 569 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerOutTheWay::
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 571 "data/maps/DewfordTown/scripts.pory"
	face_up
# 572 "data/maps/DewfordTown/scripts.pory"
	step_end
# 573 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_VisiblePlayer::
# 574 "data/maps/DewfordTown/scripts.pory"
	face_right
# 575 "data/maps/DewfordTown/scripts.pory"
	set_visible
# 576 "data/maps/DewfordTown/scripts.pory"
	step_end
# 577 "data/maps/DewfordTown/scripts.pory"

# 578 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_VisiblePlayerWest::
# 579 "data/maps/DewfordTown/scripts.pory"
	face_left
# 580 "data/maps/DewfordTown/scripts.pory"
	set_visible
# 581 "data/maps/DewfordTown/scripts.pory"
	step_end
# 582 "data/maps/DewfordTown/scripts.pory"

# 583 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_VisiblePlayerNorth::
# 584 "data/maps/DewfordTown/scripts.pory"
	face_up
# 585 "data/maps/DewfordTown/scripts.pory"
	set_visible
# 586 "data/maps/DewfordTown/scripts.pory"
	step_end
# 587 "data/maps/DewfordTown/scripts.pory"

# 588 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_VisiblePlayerSouth::
# 589 "data/maps/DewfordTown/scripts.pory"
	face_down
# 590 "data/maps/DewfordTown/scripts.pory"
	set_visible
# 591 "data/maps/DewfordTown/scripts.pory"
	step_end
# 592 "data/maps/DewfordTown/scripts.pory"

# 593 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Trigger::
# 594 "data/maps/DewfordTown/scripts.pory"
	goto_if_ne VAR_DEWFORD_TOWN_STATE, 0, DewfordTown_EventScript_TriggerNada
# 595 "data/maps/DewfordTown/scripts.pory"
	lockall
# 596 "data/maps/DewfordTown/scripts.pory"
	playse SE_BALL_TRADE
# 597 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 598 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/DewfordTown/scripts.pory"
	playse SE_PIN
# 600 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
# 601 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_FacePlayer
# 603 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/DewfordTown/scripts.pory"
	delay 32
# 605 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerApproach1
# 606 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 607 "data/maps/DewfordTown/scripts.pory"
	delay 16
# 608 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_GRUNT, DewfordTown_Movement_GruntEscapes
# 609 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 610 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_GRUNT
# 611 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_DEWFORD_GRUNT
# 612 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerApproach2
# 613 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 614 "data/maps/DewfordTown/scripts.pory"
	namebox Player
# 615 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Trigger_Text_0
# 616 "data/maps/DewfordTown/scripts.pory"
	hidenamebox
# 617 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 1
# 618 "data/maps/DewfordTown/scripts.pory"
	releaseall
# 619 "data/maps/DewfordTown/scripts.pory"
	return
# 620 "data/maps/DewfordTown/scripts.pory"
	end
# 621 "data/maps/DewfordTown/scripts.pory"

# 622 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Trigger2::
# 623 "data/maps/DewfordTown/scripts.pory"
	lockall
# 624 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 625 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Trigger_Text_2
# 626 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 627 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBackDown
# 628 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 629 "data/maps/DewfordTown/scripts.pory"
	releaseall
# 630 "data/maps/DewfordTown/scripts.pory"
	end
# 631 "data/maps/DewfordTown/scripts.pory"

# 632 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBackDown:
# 633 "data/maps/DewfordTown/scripts.pory"
	lock_facing_direction
# 634 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 635 "data/maps/DewfordTown/scripts.pory"
	unlock_facing_direction
# 636 "data/maps/DewfordTown/scripts.pory"
	step_end
# 637 "data/maps/DewfordTown/scripts.pory"

# 638 "data/maps/DewfordTown/scripts.pory"

# 639 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TriggerNada::
# 640 "data/maps/DewfordTown/scripts.pory"
	releaseall
# 641 "data/maps/DewfordTown/scripts.pory"
	end
# 642 "data/maps/DewfordTown/scripts.pory"

# 643 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerApproach1:
# 644 "data/maps/DewfordTown/scripts.pory"
	walk_slow_left
# 645 "data/maps/DewfordTown/scripts.pory"
	step_end
# 646 "data/maps/DewfordTown/scripts.pory"

# 647 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_GruntEscapes:
# 648 "data/maps/DewfordTown/scripts.pory"
	walk_fast_down
# 649 "data/maps/DewfordTown/scripts.pory"
	walk_fast_down
# 650 "data/maps/DewfordTown/scripts.pory"
	walk_fast_down
# 651 "data/maps/DewfordTown/scripts.pory"
	delay_16
# 652 "data/maps/DewfordTown/scripts.pory"
	delay_16
# 653 "data/maps/DewfordTown/scripts.pory"
	lock_facing_direction
# 654 "data/maps/DewfordTown/scripts.pory"
	walk_slow_up
# 655 "data/maps/DewfordTown/scripts.pory"
	walk_slow_up
# 656 "data/maps/DewfordTown/scripts.pory"
	walk_slow_up
# 657 "data/maps/DewfordTown/scripts.pory"
	unlock_facing_direction
# 658 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 659 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 660 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 661 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 662 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 663 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 664 "data/maps/DewfordTown/scripts.pory"
	step_end
# 665 "data/maps/DewfordTown/scripts.pory"

# 666 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerApproach2:
# 667 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 668 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 669 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 670 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 671 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 672 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 673 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 674 "data/maps/DewfordTown/scripts.pory"
	step_end
# 675 "data/maps/DewfordTown/scripts.pory"

# 676 "data/maps/DewfordTown/scripts.pory"

# 677 "data/maps/DewfordTown/scripts.pory"

# 678 "data/maps/DewfordTown/scripts.pory"

# 679 "data/maps/DewfordTown/scripts.pory"

# 680 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 681 "data/maps/DewfordTown/scripts.pory"
	lock
# 682 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 683 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
# 684 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 685 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 686 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 687 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 688 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_ChoosePetalburg
# 689 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_ChooseSlateport
# 690 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_CancelSailSelect
# 691 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 692 "data/maps/DewfordTown/scripts.pory"
	end
# 693 "data/maps/DewfordTown/scripts.pory"

# 694 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 695 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 696 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 697 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 698 "data/maps/DewfordTown/scripts.pory"
	release
# 699 "data/maps/DewfordTown/scripts.pory"
	end
# 700 "data/maps/DewfordTown/scripts.pory"

# 701 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 702 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_YESNO
# 703 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 704 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailToSlateport
# 705 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HopeYouEnjoyed, MSGBOX_DEFAULT
# 706 "data/maps/DewfordTown/scripts.pory"
	release
# 707 "data/maps/DewfordTown/scripts.pory"
	end 
# 708 "data/maps/DewfordTown/scripts.pory"

# 709 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 710 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 711 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 712 "data/maps/DewfordTown/scripts.pory"
	release
# 713 "data/maps/DewfordTown/scripts.pory"
	end
# 714 "data/maps/DewfordTown/scripts.pory"

# 715 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 716 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 717 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 718 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 719 "data/maps/DewfordTown/scripts.pory"
	release
# 720 "data/maps/DewfordTown/scripts.pory"
	end
# 721 "data/maps/DewfordTown/scripts.pory"

# 722 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 723 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 724 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 725 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 726 "data/maps/DewfordTown/scripts.pory"
	end
# 727 "data/maps/DewfordTown/scripts.pory"

# 728 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 729 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 730 "data/maps/DewfordTown/scripts.pory"
	end
# 731 "data/maps/DewfordTown/scripts.pory"

# 732 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 733 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 734 "data/maps/DewfordTown/scripts.pory"
	end
# 735 "data/maps/DewfordTown/scripts.pory"

# 736 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 737 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 738 "data/maps/DewfordTown/scripts.pory"
	end
# 739 "data/maps/DewfordTown/scripts.pory"

# 740 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 741 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 742 "data/maps/DewfordTown/scripts.pory"
	end
# 743 "data/maps/DewfordTown/scripts.pory"

# 744 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 745 "data/maps/DewfordTown/scripts.pory"
	lock
# 746 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 747 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 748 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 749 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 750 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 751 "data/maps/DewfordTown/scripts.pory"
	end
# 752 "data/maps/DewfordTown/scripts.pory"

# 753 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 754 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 755 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 756 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 757 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 758 "data/maps/DewfordTown/scripts.pory"
	release
# 759 "data/maps/DewfordTown/scripts.pory"
	end
# 760 "data/maps/DewfordTown/scripts.pory"

# 761 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 762 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 763 "data/maps/DewfordTown/scripts.pory"
	release
# 764 "data/maps/DewfordTown/scripts.pory"
	end
# 765 "data/maps/DewfordTown/scripts.pory"

# 766 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 767 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 768 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 769 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 770 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 771 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 772 "data/maps/DewfordTown/scripts.pory"
	end
# 773 "data/maps/DewfordTown/scripts.pory"

# 774 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 775 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 776 "data/maps/DewfordTown/scripts.pory"
	release
# 777 "data/maps/DewfordTown/scripts.pory"
	end
# 778 "data/maps/DewfordTown/scripts.pory"

# 779 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 780 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 781 "data/maps/DewfordTown/scripts.pory"
	release
# 782 "data/maps/DewfordTown/scripts.pory"
	end
# 783 "data/maps/DewfordTown/scripts.pory"

# 784 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 785 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 786 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 787 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
# 788 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 789 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 790 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 791 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 792 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 793 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 794 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 795 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
# 796 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 797 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 799 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 800 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 801 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 802 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 803 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 804 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 805 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 806 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 807 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 808 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 809 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 810 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 811 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 812 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 813 "data/maps/DewfordTown/scripts.pory"
	release
# 814 "data/maps/DewfordTown/scripts.pory"
	end
# 815 "data/maps/DewfordTown/scripts.pory"

# 816 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 817 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 818 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 819 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
# 820 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 821 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 822 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 823 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 824 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 825 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 826 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 827 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
# 828 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
# 829 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 830 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 831 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 832 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 833 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 834 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
# 835 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BRINEY_R109
# 836 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 837 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
# 838 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 839 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 840 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BOAT_R109
# 841 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 842 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 843 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 844 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 845 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 846 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 847 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 848 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 849 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
# 850 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_R109
# 851 "data/maps/DewfordTown/scripts.pory"
	release
# 852 "data/maps/DewfordTown/scripts.pory"
	end
# 853 "data/maps/DewfordTown/scripts.pory"

# 854 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 855 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 856 "data/maps/DewfordTown/scripts.pory"
	return
# 857 "data/maps/DewfordTown/scripts.pory"

# 858 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 859 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 860 "data/maps/DewfordTown/scripts.pory"
	return
# 861 "data/maps/DewfordTown/scripts.pory"

# 862 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 863 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 864 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 865 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 866 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 867 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 868 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 869 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 870 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 871 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 872 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 873 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 874 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 875 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 876 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 877 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 878 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 879 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 880 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 881 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 882 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 883 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 884 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 885 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 886 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 887 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 888 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 889 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 890 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 891 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 892 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 893 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 894 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 895 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 896 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 897 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 898 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 899 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 900 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 901 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 902 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 903 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 904 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 905 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 906 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 907 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 908 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 909 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 910 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 911 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 912 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 913 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 914 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 915 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 916 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 917 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 918 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 919 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 920 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 921 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 922 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 923 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 924 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 925 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 926 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 927 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 928 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 929 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 930 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 931 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 932 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 933 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 934 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 935 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 936 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 937 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 938 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 939 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 940 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 941 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 942 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 943 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 944 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 945 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 946 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 947 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 948 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 949 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 950 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 951 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 952 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 953 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 954 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 955 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 956 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 957 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 958 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 959 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 960 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 961 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 962 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 963 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 964 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 965 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 966 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 967 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 968 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 969 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 970 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 971 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 972 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 973 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 974 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 975 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 976 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 977 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 978 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 979 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 980 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 981 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 982 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 983 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 984 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 985 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 986 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 987 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 988 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 989 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 990 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 991 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 992 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 993 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 994 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 995 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 996 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 997 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 998 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 999 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1000 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1001 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1002 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1003 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1004 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1005 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1006 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1007 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1008 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1009 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1010 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1011 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1012 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1013 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1014 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1015 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1016 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1017 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1018 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1019 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1020 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1021 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1022 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1023 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 1024 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 1025 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 1026 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 1027 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 1028 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 1029 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 1030 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 1031 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 1032 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 1033 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1034 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1035 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1036 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1037 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1038 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1039 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1040 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1041 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1042 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1043 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1044 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1045 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1046 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1047 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1048 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1049 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1050 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1051 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1052 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1053 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1054 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1055 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1056 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1057 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1058 "data/maps/DewfordTown/scripts.pory"

# 1059 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 1060 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1061 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 1062 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 1063 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1064 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1065 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1066 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1067 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1068 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1069 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1070 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1071 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1072 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1073 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1074 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1075 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1076 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1077 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1078 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1079 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1080 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1081 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1082 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1083 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1084 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1085 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1086 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1087 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1088 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1089 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1090 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1091 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1092 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1093 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1094 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1095 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1096 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1097 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1098 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1099 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1100 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1101 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1102 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1103 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1104 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1105 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1106 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1107 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1108 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1109 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1110 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1111 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1112 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1113 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1114 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1115 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1116 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1117 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1118 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1119 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1120 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1121 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1122 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1123 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1124 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1125 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1126 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1127 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1128 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1129 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1130 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1131 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1132 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1133 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1134 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1135 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1136 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1137 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1138 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1139 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1140 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1141 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1142 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1143 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1144 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1145 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1146 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1147 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1148 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1149 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1150 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1151 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1152 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1153 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1154 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1155 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1156 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1157 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1158 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1159 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1160 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1161 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1162 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1163 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1164 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1165 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1166 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1167 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1168 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1169 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1170 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1171 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1172 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1173 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1174 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1175 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1176 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1177 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1178 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1179 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1180 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1181 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1182 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1183 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1184 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1185 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1186 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1187 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1188 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1189 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1190 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1191 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1192 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1193 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1194 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1195 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1196 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1197 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1198 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1199 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1200 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1201 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1202 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1203 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1204 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1205 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1206 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1207 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 1208 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 1209 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1210 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1211 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1212 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1213 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1214 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1215 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1216 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1217 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1218 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1219 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1220 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1221 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1222 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1223 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1224 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1225 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1226 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1227 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1228 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1229 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1230 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1231 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1232 "data/maps/DewfordTown/scripts.pory"

# 1233 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 1234 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1235 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1236 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1237 "data/maps/DewfordTown/scripts.pory"

# 1238 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 1239 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1240 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1241 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1242 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1243 "data/maps/DewfordTown/scripts.pory"

# 1244 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 1245 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1246 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1247 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1248 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 1249 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1250 "data/maps/DewfordTown/scripts.pory"

# 1251 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 1252 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1253 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1254 "data/maps/DewfordTown/scripts.pory"

# 1255 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 1256 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1257 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1258 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1259 "data/maps/DewfordTown/scripts.pory"

# 1260 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 1261 "data/maps/DewfordTown/scripts.pory"
	lock
# 1262 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1263 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 1264 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 1265 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 1266 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 1267 "data/maps/DewfordTown/scripts.pory"
	end
# 1268 "data/maps/DewfordTown/scripts.pory"

# 1269 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 1270 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 1271 "data/maps/DewfordTown/scripts.pory"
	release
# 1272 "data/maps/DewfordTown/scripts.pory"
	end
# 1273 "data/maps/DewfordTown/scripts.pory"

# 1274 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 1275 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 1276 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 1277 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 1278 "data/maps/DewfordTown/scripts.pory"
	lock
# 1279 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1280 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 1281 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 1282 "data/maps/DewfordTown/scripts.pory"
	end
# 1283 "data/maps/DewfordTown/scripts.pory"

# 1284 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 1285 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 1286 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 1287 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 1288 "data/maps/DewfordTown/scripts.pory"
	release
# 1289 "data/maps/DewfordTown/scripts.pory"
	end
# 1290 "data/maps/DewfordTown/scripts.pory"

# 1291 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 1292 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 1293 "data/maps/DewfordTown/scripts.pory"
	release
# 1294 "data/maps/DewfordTown/scripts.pory"
	end
# 1295 "data/maps/DewfordTown/scripts.pory"

# 1296 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 1297 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 1298 "data/maps/DewfordTown/scripts.pory"
	release
# 1299 "data/maps/DewfordTown/scripts.pory"
	end

DewfordTown_EventScript_Trigger_Text_2::
# 1 "data/maps/DewfordTown/scripts.pory"
	.string "El Gimnasio está cerrado.$"

DewfordTown_Text_TinyIslandCommunity::
# 12 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford es una pequeña comunidad.\p"
	.string "Si algo se pone de moda,\n"
	.string "todos lo saben.$"

DewfordTown_Text_TownSign::
# 16 "data/maps/DewfordTown/scripts.pory"
	.string "PUEBLO DEWFORD\n"
	.string "“Una islita en el mar azul.”$"

DewfordTown_Text_GymSign::
# 21 "data/maps/DewfordTown/scripts.pory"
	.string "GIMNASIO DE PUEBLO DEWFORD\n"
	.string "Líder: Brawly\l"
	.string "“¡Una enorme ola de poder!”$"

DewfordTown_Text_HallSign::
# 27 "data/maps/DewfordTown/scripts.pory"
	.string "SALÓN COMUNITARIO DEWFORD\n"
	.string "“¡Un lugar de encuentros!”$"

Route104_Text_LandedInDewfordDeliverLetter::
# 32 "data/maps/DewfordTown/scripts.pory"
	.string "¡Ahoy, mariner{OA}!\n"
	.string "¡Esto es Dewford!\p"
	.string "Ahora podrás entregar la carta.$"

DewfordTown_Text_SetSailBackToPetalburg::
# 43 "data/maps/DewfordTown/scripts.pory"
	.string "¿Has terminado y quieres volver?$"

DewfordTown_Text_PetalburgWereSettingSail2::
# 55 "data/maps/DewfordTown/scripts.pory"
	.string "¡A Petalburg entonces!$"

DewfordTown_Text_GoDeliverIllBeWaiting::
# 67 "data/maps/DewfordTown/scripts.pory"
	.string "Ah, OK.$"

DewfordTown_Text_BrineyLandedInDewford::
# 71 "data/maps/DewfordTown/scripts.pory"
	.string "¡Ahoy!$"

DewfordTown_Text_WhereAreWeBound::
# 83 "data/maps/DewfordTown/scripts.pory"
	.string "¡Allá vamos!$"

DewfordTown_Text_PetalburgWereSettingSail::
# 95 "data/maps/DewfordTown/scripts.pory"
	.string "¿A Petalburg?\n"
	.string "¡Vamos, Peeko, querido!$"

DewfordTown_Text_SlateportWereSettingSail::
# 107 "data/maps/DewfordTown/scripts.pory"
	.string "¿A Slaterport?\n"
	.string "¡Lo lamento!\p"
	.string "Hasta aquí llega la DEMO de\n"
	.string "Pokémon Bismuto.\p"
	.string "Puedes continuar si quieres, pero las\n"
	.string "cosas no estarán terminadas, y los\l"
	.string "mapas usarán gráficos viejos.\p"
	.string "¿Continuar igualmente?$"

DewfordTown_Text_JustTellMeWhenYouNeedToSetSail::
# 118 "data/maps/DewfordTown/scripts.pory"
	.string "¡Aquí esperaré!$"

DewfordTown_Text_GettingItchToFish::
# 129 "data/maps/DewfordTown/scripts.pory"
	.string "¡Ah! ¡Quiero pescar!\p"
	.string "¿Tú no?$"

DewfordTown_Text_GiveYouOneOfMyRods::
# 133 "data/maps/DewfordTown/scripts.pory"
	.string "¡Te escucho fuerte y claro!\p"
	.string "¡Toma esto, pequeñ{OA}!$"

DewfordTown_Text_ThrowInFishingAdvice::
# 137 "data/maps/DewfordTown/scripts.pory"
	.string "¿Sabes?\p"
	.string "He desarrollado una caña que puede\n"
	.string "pescar Pokémon, ¡Sin necesidad\l"
	.string "de esperar tanto!$"

DewfordTown_Text_ThatsTooBadThen::
# 141 "data/maps/DewfordTown/scripts.pory"
	.string "Qué mal.$"

DewfordTown_Text_HowsYourFishing::
# 145 "data/maps/DewfordTown/scripts.pory"
	.string "¡Ey!\n"
	.string "¿Cómo va todo?$"

DewfordTown_Text_GreatHaulInSomeBigOnes::
# 150 "data/maps/DewfordTown/scripts.pory"
	.string "¡Genial, atrapa unos grandes!$"

DewfordTown_Text_FishingAdvice::
# 154 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, bueno, ¡Ya irá mejor!$"

DewfordTown_Text_XIsTheBiggestHappeningThingRight::
# 158 "data/maps/DewfordTown/scripts.pory"
	.string "Osea, está muy de moda eso de\n"
	.string "“{STR_VAR_1}”\p"
	.string "Obvio lo conoces, osea,\n"
	.string "“{STR_VAR_1}”…\l"
	.string "¡Todos hablan de eso!\n"
	.string "“{STR_VAR_1}”\l"
	.string "Es lo más, ¿no?$"

DewfordTown_Text_TellMeWhatsNewAndIn::
# 167 "data/maps/DewfordTown/scripts.pory"
	.string "¿Qué?\n"
	.string "¿Ya pasó de moda?\p"
	.string "Entonces, ¿Qué es lo más?$"

DewfordTown_Text_OfCourseIKnowAboutThat::
# 171 "data/maps/DewfordTown/scripts.pory"
	.string "¿“{STR_VAR_2}”?\p"
	.string "… …\p"
	.string "…Eh… ¡Sí! ¡Claro, claro!\n"
	.string "“{STR_VAR_2},” ¿No?\p"
	.string "Pfff, ¡Obvio!\n"
	.string "“{STR_VAR_2}”\p"
	.string "Es lo más.$"

DewfordTown_Text_XHuhIThinkYIsCool::
# 180 "data/maps/DewfordTown/scripts.pory"
	.string "Mmmhhh…\n"
	.string "“{STR_VAR_2},” ¿No?\p"
	.string "Aunque pienso que\n"
	.string "“{STR_VAR_1}”\l"
	.string "es mucho mejor.$"

DewfordTown_Text_HearOfAnyTrendsComeShareWithMe::
# 188 "data/maps/DewfordTown/scripts.pory"
	.string "Bueno, si hay otras\n"
	.string "trends, dímelo, ¿Sí?$"

DewfordTown_Text_YeahDefinitionOfInRightNow::
# 192 "data/maps/DewfordTown/scripts.pory"
	.string "¡Osea, obvio!\p"
	.string "“{STR_VAR_1}” es la\n"
	.string "definición de cool.$"

DewfordTown_EventScript_WallyHello::
# 198 "data/maps/DewfordTown/scripts.pory"
	.string "¡O-oh!\n"
	.string "-COF COF-\l"
	.string "¡{PLAYER}!\p"
	.string "N-no sabía que vendrías…\n"
	.string "¡Pero que bien que estés aquí!$"

DewfordTown_EventScript_WallyBeginSpeech::
# 206 "data/maps/DewfordTown/scripts.pory"
	.string "Sabes, tengo mucho miedo de comenzar mi\n"
	.string "{COLOR BLUE}Desafío de los Gimnasios{COLOR DARK_GRAY}, y n-no sé si\l"
	.string "sea algo en lo que pueda siquiera\l"
	.string "aspirar a ser bueno…\p"
	.string "Tengo miedo de fallar, y que todos se\n"
	.string "burlen de mí de nuevo…$"

DewfordTown_Text_HopeYouEnjoyed::
# 216 "data/maps/DewfordTown/scripts.pory"
	.string "¡Espero hays disfrutado esta DEMO!$"

DewfordTown_Text_WallyContinueSpeech::
# 228 "data/maps/DewfordTown/scripts.pory"
	.string "Pero ahora.\n"
	.string "Ahora voy a demostrarles que\l"
	.string "se equivocaban conmigo.\p"
	.string "…\n"
	.string "…\p"
	.string "O…\n"
	.string "¿…Sabes qué?\p"
	.string "¿A quién le importa lo\n"
	.string "que ellos piensan de mí?$"

DewfordTown_Text_WallyContinueSpeech2::
# 234 "data/maps/DewfordTown/scripts.pory"
	.string "Claramente no les importa\n"
	.string "quién soy, o qué es lo que haga.\p"
	.string "Quizá… Sea mejor hacer este viaje\n"
	.string "por mí mismo, y no por otros.\p"
	.string "¿Eso… Eso suena bien, ¿no?\p"
	.string "Pero aún así… Me gustaría\n"
	.string "que estés aquí conmigo…$"

DewfordTown_Text_WallyDetermined::
# 240 "data/maps/DewfordTown/scripts.pory"
	.string "…\p"
	.string "El {COLOR BLUE}Gimnasio Dewford{COLOR DARK_GRAY}…\p"
	.string "{COLOR GREEN}(Vamos Wally… ¡Tú puedes!){COLOR DARK_GRAY}\p"
	.string "El tipo de este Gimnasio es Lucha…\p"
	.string "Mi Ralts es tipo Psíquico Y Hada, así\n"
	.string "que debería ser relativamente fácil\l"
	.string "para él…$"

DewfordTown_Text_WallyLetsGo::
# 250 "data/maps/DewfordTown/scripts.pory"
	.string "Bueno, Ralts… ¿Estás listo?\p"
	.string "¡Entonces vamos!$"

DewfordTown_Text_WallyGym1::
# 255 "data/maps/DewfordTown/scripts.pory"
	.string "¡Wow! ¡En serio no puede verse nada!\p"
	.string "¿Cómo siquiera funcionan las luces en\n"
	.string "este Gimnasio? ¿Los Entrenadores acá\l"
	.string "pueden verme pero yo a ellos no?\p"
	.string "Eh- ¡No importa, Wally!\n"
	.string "¡Concéntrate!\p"
	.string "…\p"
	.string "¡AH!$"

DewfordTown_Text_WallyGym2::
# 266 "data/maps/DewfordTown/scripts.pory"
	.string "G-gracias, Ralts, pensé que ese- COF,\n"
	.string "COF- Em… Ese Meditite iba a\l"
	.string "lastimarme…\p"
	.string "¡Pero ahora, Ralts, usa {COLOR LIGHT_RED}Brillo Mágico{COLOR DARK_GRAY}!$"

DewfordTown_Text_WallyGym3::
# 273 "data/maps/DewfordTown/scripts.pory"
	.string "¡Bien hecho, Ralts!\n"
	.string "¡Eso fue increíble!\p"
	.string "Ahora… Yo estudié la arquitectura de\n"
	.string "este Gimnasio… El Líder debería\l"
	.string "estar…\l"
	.string "………\p"
	.string "¡Acá!\n"
	.string "¡Ja! ¡Lo sabía! ¡Vamos, Ralts!$"

DewfordTown_Text_WallyGymBattle::
# 284 "data/maps/DewfordTown/scripts.pory"
	.string "Y ahora, Ralts… ¡¡Usa {COLOR LIGHT_RED}Campo Psíquico{COLOR DARK_GRAY}, y\n"
	.string "luego usa {COLOR LIGHT_RED}Confusión{COLOR DARK_GRAY}!!$"

DewfordTown_Text_WallyGymBattle2::
# 288 "data/maps/DewfordTown/scripts.pory"
	.string "{COLOR RED}D-detección{COLOR DARK_GRAY}…\n"
	.string "Brawly leyó mi estrategia y reaccionó\l"
	.string "acorde…$"

DewfordTown_Text_WallyGymBattle3::
# 293 "data/maps/DewfordTown/scripts.pory"
	.string "¡Cuidado, Ralts, esquiva eso!\p"
	.string "………\p"
	.string "¿E-eh?$"

DewfordTown_Text_WallyGymBattle4::
# 298 "data/maps/DewfordTown/scripts.pory"
	.string "¡R-Ralts! ¡Evolucionaste a Kirlia!\n"
	.string "¡Estoy t-tan orgulloso de tí, Ra- Eh,\l"
	.string "Kirlia!\p"
	.string "-COF, COF, COF- Em… Ahora, ¡Usa {COLOR LIGHT_RED}Fuerza\n"
	.string "Expansiva{COLOR DARK_GRAY}!$"

DewfordTown_Text_WallyAfter::
# 305 "data/maps/DewfordTown/scripts.pory"
	.string "¡G-gané, {PLAYER}, gané!\n"
	.string "¡Y Ralts evolucionó a Kirlia, también!\p"
	.string "Muchas gracias por estar ahí,\n"
	.string "{PLAYER}, sin tu apoyo, no habría\l"
	.string "podido hacer nada…\p"
	.string "Ahora, ¡Voy a continuar mejorando, y un\n"
	.string "día, voy a derrotarte en un combate,\l"
	.string "{PLAYER}!$"

DewfordTown_EventScript_Trigger_Text_0::
# 315 "data/maps/DewfordTown/scripts.pory"
	.string "{COLOR BLUE}(¿Q-qué fue eso…?){COLOR LIGHT_GRAY}$"
