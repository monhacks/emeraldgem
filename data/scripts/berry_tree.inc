BerryTreeScript::
	special ObjectEventInteractionGetBerryTreeData
	switch VAR_0x8004
	case BERRY_STAGE_SPARKLING, BerryTree_EventScript_Sparkling
	case BERRY_STAGE_NO_BERRY, BerryTree_EventScript_CheckSoil
	case BERRY_STAGE_PLANTED, BerryTree_EventScript_CheckBerryStage1
	case BERRY_STAGE_SPROUTED, BerryTree_EventScript_CheckBerryStage2
	case BERRY_STAGE_TALLER, BerryTree_EventScript_CheckBerryStage3
	case BERRY_STAGE_FLOWERING, BerryTree_EventScript_CheckBerryStage4
	case BERRY_STAGE_BERRIES, BerryTree_EventScript_CheckBerryFullyGrown
	end

BerryTree_EventScript_Sparkling::
	lockall
	message BerryTree_Text_ExclamationPoint
	waitmessage
	waitbuttonpress
	releaseall
	end

BerryTree_EventScript_CheckSoil::
	lock
	faceplayer
	specialvar VAR_RESULT, PlayerHasBerries
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_HasMulch
	message BerryTree_Text_ItsSoftLoamySoil
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_HasMulch::
	specialvar VAR_RESULT, PlayerHasMulch
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToMulch
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_WantToPlant
	release
	end

BerryTree_EventScript_WantToPlant::
	msgbox BerryTree_Text_WantToPlant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseBerryToPlant
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
	end

BerryTree_EventScript_WantToMulch::
	msgbox BerryTree_Text_WantToMulch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseMulchToAdd
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_WantToPlantShort
	end

BerryTree_EventScript_WantToPlantShort::
	msgbox BerryTree_Text_WantToPlantShort, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseBerryToPlant
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
	end

BerryTree_EventScript_ChooseBerryToPlant::
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseBerry
	waitstate
	goto_if_eq VAR_ITEM_ID, 0, BerryTree_EventScript_CancelPlanting
	removeitem VAR_ITEM_ID
	call BerryTree_EventScript_PlantBerry

BerryTree_EventScript_CancelPlanting::
	release
	end

BerryTree_EventScript_ChooseMulchToAdd::
	fadescreen FADE_TO_BLACK
	closemessage
	chooseitem ITEMS_POCKET
	switch VAR_ITEM_ID
	case ITEM_GROWTH_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
	case ITEM_DAMP_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
	case ITEM_STABLE_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
	case ITEM_RICH_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
	case ITEM_SURPRISE_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
	case ITEM_AMAZE_MULCH, BerryTree_EventScript_ChooseMulchToAdd2
	goto BerryTree_EventScript_CancelPlanting
BerryTree_EventScript_ChooseMulchToAdd2::
	copyvar VAR_0x8004, VAR_ITEM_ID
	removeitem VAR_ITEM_ID
	buffernumberstring STR_VAR_2, VAR_0x8004
	message BerryTree_Text_MulchWasAdded
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_ChooseBerryToPlant
	end

BerryTree_EventScript_CheckBerryStage1::
	lockall
	special ObjectEventInteractionGetBerryCountString
	message BerryTree_Text_BerryGrowthStage1
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage2::
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage2
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage3::
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage3
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage4::
	call BerryTree_EventScript_GetCareAdverb
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage4
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

@ VAR_0x8005 here is the number of times watered
@ Buffered by ObjectEventInteractionGetBerryTreeData
BerryTree_EventScript_GetCareAdverb::
	goto_if_eq VAR_0x8005, 0, BerryTree_EventScript_SetAdverbPoor
	goto_if_eq VAR_0x8005, 4, BerryTree_EventScript_SetAdverbGreat
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGood
	return

BerryTree_EventScript_SetAdverbGreat::
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGreat
	return

BerryTree_EventScript_SetAdverbPoor::
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbPoor
	return

@ VAR_0x8006 here is the number of berries
BerryTree_EventScript_CheckBerryFullyGrown::
	buffernumberstring STR_VAR_2, VAR_0x8006
	lock
	faceplayer
	special ObjectEventInteractionGetBerryCountString
	msgbox BerryTree_Text_WantToPick, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PickBerry
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPickingBerry

BerryTree_EventScript_PickBerry::
	special ObjectEventInteractionPickBerryTree
	goto_if_eq VAR_0x8004, 0, BerryTree_EventScript_BerryPocketFull
	special IncrementDailyPickedBerries
	special ObjectEventInteractionRemoveBerryTree
	message BerryTree_Text_PickedTheBerry
	delay 10
	showberrydesc
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwayBerry
	waitmessage
	waitbuttonpress
	hideitemdesc
	release
	end

BerryTree_EventScript_BerryPocketFull::
	message BerryTree_Text_BerryPocketFull
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_CancelPickingBerry::
	message BerryTree_Text_BerryLeftUnpicked
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_ItemUsePlantBerry::
	lockall
	special ObjectEventInteractionGetBerryTreeData
	call BerryTree_EventScript_PlantBerry
	releaseall
	end

BerryTree_EventScript_WantToWater::
	checkitem ITEM_WAILMER_PAIL
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
	special ObjectEventInteractionGetBerryName
	msgbox BerryTree_Text_WantToWater, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_WaterBerry
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_DontWater

BerryTree_EventScript_DontWater::
	releaseall
	end

BerryTree_EventScript_ItemUseWailmerPail::
	special ObjectEventInteractionGetBerryTreeData
	lockall
BerryTree_EventScript_WaterBerry::
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_WateredTheBerry
	waitmessage
	special ObjectEventInteractionWaterBerryTree
	special DoWateringBerryTreeAnim
	waitstate
	message BerryTree_Text_PlantIsDelighted
	waitmessage
	waitbuttonpress
	releaseall
	end

BerryTree_EventScript_PlantBerry::
	special ObjectEventInteractionPlantBerryTree
	incrementgamestat GAME_STAT_PLANTED_BERRIES
	special IncrementDailyPlantedBerries
	special ObjectEventInteractionGetBerryCountString
	message BerryTree_Text_PlantedOneBerry
	waitmessage
	waitbuttonpress
	return

BerryTree_Text_ItsSoftLoamySoil:
	.string "Es un suelo blando y fértil.$"

BerryTree_Text_WantToPlant:
	.string "Es un suelo blando y fértil.\n"
	.string "¿Quieres plantar una baya?$"

BerryTree_Text_WantToPlantShort:
	.string "¿Quieres plantar una baya?$"

BerryTree_Text_WantToMulch:
	.string "Es un suelo blando y fértil.\n"
	.string "¿Quieres aplicarle abono?$"

BerryTree_Text_PlantedOneBerry:
	.string "{PLAYER} plantó una {STR_VAR_1}\n"
	.string "en el blando y fértil suelo.$"

BerryTree_Text_BerryGrowthStage1:
	.string "Una {STR_VAR_1} fue plantada con {STR_VAR_2}.$"

BerryTree_Text_BerryGrowthStage2:
	.string "{STR_VAR_1} ha crecido.$"

BerryTree_Text_BerryGrowthStage3:
	.string "El árbol de {STR_VAR_1}\nestá creciendo.$"

BerryTree_Text_BerryGrowthStage4:
	.string "Las flores de {STR_VAR_1}\n"
	.string "están {STR_VAR_2}.$"

BerryTree_Text_CareAdverbGreat:
	.string "hermosas$"

BerryTree_Text_CareAdverbPoor:
	.string "feas$"

BerryTree_Text_CareAdverbGood:
	.string "lindas$"

BerryTree_Text_WantToPick:
	.string "¡{STR_VAR_2} {STR_VAR_1}!\p"
	.string "¿Te llevarías algunas\n"
	.string "{STR_VAR_1}?$"

BerryTree_Text_PickedTheBerry:
	.string "{PLAYER} recogió {STR_VAR_2} {STR_VAR_1}.$"

BerryTree_Text_PutAwayBerry:
	.string "El suelo sigue fértil.$"

BerryTree_Text_BerryPocketFull:
	.string "The BAG's BERRIES POCKET is full.\p"
	.string "The {STR_VAR_1} couldn't be taken.$"

BerryTree_Text_BerryLeftUnpicked:
	.string "{PLAYER} left the {STR_VAR_1}\n"
	.string "unpicked.$"

BerryTree_Text_WantToWater:
	.string "Want to water the {STR_VAR_1} with the\n"
	.string "WAILMER PAIL?$"

BerryTree_Text_WateredTheBerry:
	.string "{PLAYER} watered the {STR_VAR_1}.$"

BerryTree_Text_PlantIsDelighted:
	.string "The plant seems to be delighted.$"

BerryTree_Text_ExclamationPoint:
	.string "!$"

BerryTree_Text_MulchWasAdded:
	.string "Abonó el suelo con {STR_VAR_2}.\n"
	.string "Elige una baya para plantar.$"
