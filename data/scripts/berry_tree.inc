# 252 "data/scripts/berry_tree.pory"

# 253 "data/scripts/berry_tree.pory"

# 254 "data/scripts/berry_tree.pory"
BerryTreeScript::
# 255 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 256 "data/scripts/berry_tree.pory"
	switch VAR_0x8004
# 257 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_SPARKLING, BerryTree_EventScript_Sparkling
# 258 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_NO_BERRY, BerryTree_EventScript_CheckSoil
# 259 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_PLANTED, BerryTree_EventScript_CheckBerryStage1
# 260 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_SPROUTED, BerryTree_EventScript_CheckBerryStage2
# 261 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_TALLER, BerryTree_EventScript_CheckBerryStage3
# 262 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_FLOWERING, BerryTree_EventScript_CheckBerryStage4
# 263 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_BERRIES, BerryTree_EventScript_CheckBerryFullyGrown
# 264 "data/scripts/berry_tree.pory"
	end
# 265 "data/scripts/berry_tree.pory"

# 266 "data/scripts/berry_tree.pory"
BerryTree_EventScript_Sparkling::
# 267 "data/scripts/berry_tree.pory"
	lockall
# 268 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ExclamationPoint
# 269 "data/scripts/berry_tree.pory"
	waitmessage
# 270 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 271 "data/scripts/berry_tree.pory"
	releaseall
# 272 "data/scripts/berry_tree.pory"
	end
# 273 "data/scripts/berry_tree.pory"

# 274 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckSoil::
# 275 "data/scripts/berry_tree.pory"
	lock
# 276 "data/scripts/berry_tree.pory"
	faceplayer
# 277 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 278 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_HasMulch
# 279 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ItsSoftLoamySoil
# 280 "data/scripts/berry_tree.pory"
	waitmessage
# 281 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 282 "data/scripts/berry_tree.pory"
	release
# 283 "data/scripts/berry_tree.pory"
	end
# 284 "data/scripts/berry_tree.pory"

# 285 "data/scripts/berry_tree.pory"
BerryTree_EventScript_HasMulch::
# 286 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, PlayerHasMulch
# 287 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToMulch
# 288 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_WantToPlant
# 289 "data/scripts/berry_tree.pory"
	release
# 290 "data/scripts/berry_tree.pory"
	end
# 291 "data/scripts/berry_tree.pory"

# 292 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToPlant::
# 293 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToPlant, MSGBOX_YESNO
# 294 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseBerryToPlant
# 295 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
# 296 "data/scripts/berry_tree.pory"
	end
# 297 "data/scripts/berry_tree.pory"

# 298 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToMulch::
# 299 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToMulch, MSGBOX_YESNO
# 300 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseMulchToAdd
# 301 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_WantToPlantShort
# 302 "data/scripts/berry_tree.pory"
	end
# 303 "data/scripts/berry_tree.pory"

# 304 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToPlantShort::
# 305 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToPlantShort, MSGBOX_YESNO
# 306 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseBerryToPlant
# 307 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
# 308 "data/scripts/berry_tree.pory"
	end
# 309 "data/scripts/berry_tree.pory"

# 310 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ChooseBerryToPlant::
# 311 "data/scripts/berry_tree.pory"
	fadescreen FADE_TO_BLACK
# 312 "data/scripts/berry_tree.pory"
	closemessage
# 313 "data/scripts/berry_tree.pory"
	special Bag_ChooseBerry
# 314 "data/scripts/berry_tree.pory"
	waitstate
# 315 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_ITEM_ID, 0, BerryTree_EventScript_CancelPlanting
# 316 "data/scripts/berry_tree.pory"
	removeitem VAR_ITEM_ID
# 317 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PlantBerry
# 318 "data/scripts/berry_tree.pory"

# 319 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CancelPlanting::
# 320 "data/scripts/berry_tree.pory"
	release
# 321 "data/scripts/berry_tree.pory"
	end
# 322 "data/scripts/berry_tree.pory"

# 323 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ChooseMulchToAdd::
# 324 "data/scripts/berry_tree.pory"
	fadescreen FADE_TO_BLACK
# 325 "data/scripts/berry_tree.pory"
	closemessage
# 326 "data/scripts/berry_tree.pory"
	chooseitem ITEMS_POCKET
# 327 "data/scripts/berry_tree.pory"
	switch VAR_ITEM_ID
# 328 "data/scripts/berry_tree.pory"
	case ITEM_GROWTH_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
# 329 "data/scripts/berry_tree.pory"
	case ITEM_DAMP_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
# 330 "data/scripts/berry_tree.pory"
	case ITEM_STABLE_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
# 331 "data/scripts/berry_tree.pory"
	case ITEM_RICH_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
# 332 "data/scripts/berry_tree.pory"
	case ITEM_SURPRISE_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
# 333 "data/scripts/berry_tree.pory"
	case ITEM_AMAZE_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
# 334 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_CancelPlanting
# 335 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ChooseMulchToAdd2::
# 336 "data/scripts/berry_tree.pory"
	copyvar VAR_0x8004, VAR_ITEM_ID
# 337 "data/scripts/berry_tree.pory"
	removeitem VAR_ITEM_ID
# 338 "data/scripts/berry_tree.pory"
	bufferitemname STR_VAR_2, VAR_0x8004
# 339 "data/scripts/berry_tree.pory"
	message BerryTree_Text_MulchWasAdded
# 340 "data/scripts/berry_tree.pory"
	waitmessage
# 341 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 342 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_ChooseBerryToPlant
# 343 "data/scripts/berry_tree.pory"
	end
# 344 "data/scripts/berry_tree.pory"

# 345 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStage1::
# 346 "data/scripts/berry_tree.pory"
	lockall
# 347 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 348 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage1
# 349 "data/scripts/berry_tree.pory"
	waitmessage
# 350 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 351 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 352 "data/scripts/berry_tree.pory"

# 353 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStage2::
# 354 "data/scripts/berry_tree.pory"
	lockall
# 355 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 356 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage2
# 357 "data/scripts/berry_tree.pory"
	waitmessage
# 358 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 359 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 360 "data/scripts/berry_tree.pory"

# 361 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStage3::
# 362 "data/scripts/berry_tree.pory"
	lockall
# 363 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 364 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage3
# 365 "data/scripts/berry_tree.pory"
	waitmessage
# 366 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 367 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 368 "data/scripts/berry_tree.pory"

# 369 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryStage4::
# 370 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_GetCareAdverb
# 371 "data/scripts/berry_tree.pory"
	lockall
# 372 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 373 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage4
# 374 "data/scripts/berry_tree.pory"
	waitmessage
# 375 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 376 "data/scripts/berry_tree.pory"
	goto BerryTree_EventScript_WantToWater
# 377 "data/scripts/berry_tree.pory"

# 378 "data/scripts/berry_tree.pory"
@ VAR_0x8005 here is the number of times watered
# 379 "data/scripts/berry_tree.pory"
@ Buffered by ObjectEventInteractionGetBerryTreeData
# 380 "data/scripts/berry_tree.pory"
BerryTree_EventScript_GetCareAdverb::
# 381 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_0x8005, 0, BerryTree_EventScript_SetAdverbPoor
# 382 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_0x8005, 4, BerryTree_EventScript_SetAdverbGreat
# 383 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGood
# 384 "data/scripts/berry_tree.pory"
	return
# 385 "data/scripts/berry_tree.pory"

# 386 "data/scripts/berry_tree.pory"
BerryTree_EventScript_SetAdverbGreat::
# 387 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGreat
# 388 "data/scripts/berry_tree.pory"
	return
# 389 "data/scripts/berry_tree.pory"

# 390 "data/scripts/berry_tree.pory"
BerryTree_EventScript_SetAdverbPoor::
# 391 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbPoor
# 392 "data/scripts/berry_tree.pory"
	return
# 393 "data/scripts/berry_tree.pory"

# 394 "data/scripts/berry_tree.pory"
@ VAR_0x8006 here is the number of berries
# 395 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CheckBerryFullyGrown::
# 396 "data/scripts/berry_tree.pory"
	buffernumberstring STR_VAR_2, VAR_0x8006
# 397 "data/scripts/berry_tree.pory"
	lock
# 398 "data/scripts/berry_tree.pory"
	faceplayer
# 399 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 400 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToPick, MSGBOX_YESNO
# 401 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PickBerry
# 402 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPickingBerry
# 403 "data/scripts/berry_tree.pory"

# 404 "data/scripts/berry_tree.pory"
BerryTree_EventScript_PickBerry::
# 405 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionPickBerryTree
# 406 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_0x8004, 0, BerryTree_EventScript_BerryPocketFull
# 407 "data/scripts/berry_tree.pory"
	special IncrementDailyPickedBerries
# 408 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionRemoveBerryTree
# 409 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PickedTheBerry
# 410 "data/scripts/berry_tree.pory"
	delay 10
# 411 "data/scripts/berry_tree.pory"
	showberrydesc
# 412 "data/scripts/berry_tree.pory"
	playfanfare MUS_OBTAIN_BERRY
# 413 "data/scripts/berry_tree.pory"
	waitmessage
# 414 "data/scripts/berry_tree.pory"
	waitfanfare
# 415 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 416 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PutAwayBerry
# 417 "data/scripts/berry_tree.pory"
	waitmessage
# 418 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 419 "data/scripts/berry_tree.pory"
	hideitemdesc
# 420 "data/scripts/berry_tree.pory"
	release
# 421 "data/scripts/berry_tree.pory"
	end
# 422 "data/scripts/berry_tree.pory"

# 423 "data/scripts/berry_tree.pory"
BerryTree_EventScript_BerryPocketFull::
# 424 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryPocketFull
# 425 "data/scripts/berry_tree.pory"
	waitmessage
# 426 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 427 "data/scripts/berry_tree.pory"
	release
# 428 "data/scripts/berry_tree.pory"
	end
# 429 "data/scripts/berry_tree.pory"

# 430 "data/scripts/berry_tree.pory"
BerryTree_EventScript_CancelPickingBerry::
# 431 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryLeftUnpicked
# 432 "data/scripts/berry_tree.pory"
	waitmessage
# 433 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 434 "data/scripts/berry_tree.pory"
	release
# 435 "data/scripts/berry_tree.pory"
	end
# 436 "data/scripts/berry_tree.pory"

# 437 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ItemUsePlantBerry::
# 438 "data/scripts/berry_tree.pory"
	lockall
# 439 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 440 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PlantBerry
# 441 "data/scripts/berry_tree.pory"
	releaseall
# 442 "data/scripts/berry_tree.pory"
	end
# 443 "data/scripts/berry_tree.pory"

# 444 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToWater::
# 445 "data/scripts/berry_tree.pory"
	checkitem ITEM_WAILMER_PAIL
# 446 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
# 447 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 448 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToWater, MSGBOX_YESNO
# 449 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_WaterBerry
# 450 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_DontWater
# 451 "data/scripts/berry_tree.pory"

# 452 "data/scripts/berry_tree.pory"
BerryTree_EventScript_DontWater::
# 453 "data/scripts/berry_tree.pory"
	releaseall
# 454 "data/scripts/berry_tree.pory"
	end
# 455 "data/scripts/berry_tree.pory"

# 456 "data/scripts/berry_tree.pory"
BerryTree_EventScript_ItemUseWailmerPail::
# 457 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 458 "data/scripts/berry_tree.pory"
	lockall
# 459 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WaterBerry::
# 460 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 461 "data/scripts/berry_tree.pory"
	message BerryTree_Text_WateredTheBerry
# 462 "data/scripts/berry_tree.pory"
	waitmessage
# 463 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionWaterBerryTree
# 464 "data/scripts/berry_tree.pory"
	special DoWateringBerryTreeAnim
# 465 "data/scripts/berry_tree.pory"
	waitstate
# 466 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PlantIsDelighted
# 467 "data/scripts/berry_tree.pory"
	waitmessage
# 468 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 469 "data/scripts/berry_tree.pory"
	releaseall
# 470 "data/scripts/berry_tree.pory"
	end
# 471 "data/scripts/berry_tree.pory"

# 472 "data/scripts/berry_tree.pory"
BerryTree_EventScript_PlantBerry::
# 473 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionPlantBerryTree
# 474 "data/scripts/berry_tree.pory"
	incrementgamestat GAME_STAT_PLANTED_BERRIES
# 475 "data/scripts/berry_tree.pory"
	special IncrementDailyPlantedBerries
# 476 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 477 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PlantedOneBerry
# 478 "data/scripts/berry_tree.pory"
	waitmessage
# 479 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 480 "data/scripts/berry_tree.pory"
	return

BerryTree_Text_ItsSoftLoamySoil::
# 2 "data/scripts/berry_tree.pory"
	.string "Es un suelo blando y fértil.$"

BerryTree_Text_WantToPlant::
# 13 "data/scripts/berry_tree.pory"
	.string "Es un suelo blando y fértil.\n"
	.string "¿Quieres plantar una baya?$"

BerryTree_Text_WantToPlantShort::
# 26 "data/scripts/berry_tree.pory"
	.string "¿Quieres plantar una baya?$"

BerryTree_Text_WantToMulch::
# 37 "data/scripts/berry_tree.pory"
	.string "Es un suelo blando y fértil.\n"
	.string "¿Quieres aplicarle abono?$"

BerryTree_Text_PlantedOneBerry::
# 50 "data/scripts/berry_tree.pory"
	.string "{PLAYER} plantó una {STR_VAR_1}\n"
	.string "en el blando y fértil suelo.$"

BerryTree_Text_BerryGrowthStage1::
# 63 "data/scripts/berry_tree.pory"
	.string "Una {STR_VAR_1} fue plantada con\n"
	.string "{STR_VAR_3}.$"

BerryTree_Text_BerryGrowthStage2::
# 74 "data/scripts/berry_tree.pory"
	.string "{STR_VAR_1} ha crecido.$"

BerryTree_Text_BerryGrowthStage3::
# 85 "data/scripts/berry_tree.pory"
	.string "El árbol de {STR_VAR_1}\n"
	.string "está creciendo.$"

BerryTree_Text_BerryGrowthStage4::
# 96 "data/scripts/berry_tree.pory"
	.string "Las flores de {STR_VAR_1}\n"
	.string "están {STR_VAR_2}.$"

BerryTree_Text_CareAdverbGreat::
# 108 "data/scripts/berry_tree.pory"
	.string "hermosas$"

BerryTree_Text_CareAdverbPoor::
# 119 "data/scripts/berry_tree.pory"
	.string "feas$"

BerryTree_Text_CareAdverbGood::
# 130 "data/scripts/berry_tree.pory"
	.string "lindas$"

BerryTree_Text_WantToPick::
# 141 "data/scripts/berry_tree.pory"
	.string "¿¡{STR_VAR_2} {STR_VAR_1}!\p"
	.string "¿Te llevarás algunas\n"
	.string "{STR_VAR_1}?$"

BerryTree_Text_PickedTheBerry::
# 155 "data/scripts/berry_tree.pory"
	.string "{PLAYER} recogió {STR_VAR_2}\n"
	.string "{STR_VAR_1}.$"

BerryTree_Text_PutAwayBerry::
# 166 "data/scripts/berry_tree.pory"
	.string "El suelo regresó a su estado fértil y\n"
	.string "blando.$"

BerryTree_Text_BerryPocketFull::
# 177 "data/scripts/berry_tree.pory"
	.string "El Bolsillo de Bayas está lleno.\p"
	.string "No entra nada más.$"

BerryTree_Text_BerryLeftUnpicked::
# 190 "data/scripts/berry_tree.pory"
	.string "{PLAYER} no recogió la\n"
	.string "{STR_VAR_1}$"

BerryTree_Text_WantToWater::
# 202 "data/scripts/berry_tree.pory"
	.string "¿Quieres usar la Wailmegadera?$"

BerryTree_Text_WateredTheBerry::
# 213 "data/scripts/berry_tree.pory"
	.string "{PLAYER} regó la {STR_VAR_1}.$"

BerryTree_Text_PlantIsDelighted::
# 224 "data/scripts/berry_tree.pory"
	.string "¡Ya está! ¡Toda contenta!$"

BerryTree_Text_ExclamationPoint::
# 235 "data/scripts/berry_tree.pory"
	.string "!$"

BerryTree_Text_MulchWasAdded::
# 239 "data/scripts/berry_tree.pory"
	.string "Abonaste el suelo con {STR_VAR_2}.\n"
	.string "Elige una baya para plantar.$"
