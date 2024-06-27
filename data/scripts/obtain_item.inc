.set ITEMID, VAR_0x8000
.set AMOUNT, VAR_0x8001

Std_ObtainItem::
	copyvar VAR_0x8006, ITEMID
	additem ITEMID, AMOUNT
	copyvar VAR_0x8007, VAR_RESULT
	call EventScript_ObtainItemMessage
	return

EventScript_ObtainItemMessage::
	bufferitemnameplural STR_VAR_2, ITEMID, AMOUNT
	checkitemtype ITEMID
	call EventScript_BufferPocketNameAndTryFanfare
	call_if_eq VAR_0x8007, TRUE, EventScript_ObtainedItem
	call_if_eq VAR_0x8007, FALSE, EventScript_NoRoomForItem
	return

EventScript_BufferPocketNameAndTryFanfare::
	switch VAR_RESULT
	case POCKET_ITEMS,      EventScript_BufferItemsPocket
	case POCKET_KEY_ITEMS,  EventScript_BufferKeyItemsPocket
	case POCKET_POKE_BALLS, EventScript_BufferPokeballsPocket
	case POCKET_TM_HM,      EventScript_BufferTMHMsPocket
	case POCKET_BERRIES,    EventScript_BufferBerriesPocket
	end

EventScript_BufferItemsPocket::
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return

EventScript_BufferKeyItemsPocket::
	bufferstdstring STR_VAR_3, STDSTRING_KEYITEMS
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return

EventScript_BufferPokeballsPocket::
	bufferstdstring STR_VAR_3, STDSTRING_POKEBALLS
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return

EventScript_BufferTMHMsPocket::
	bufferstdstring STR_VAR_3, STDSTRING_TMHMS
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedTMHM
	return

EventScript_BufferBerriesPocket::
	bufferstdstring STR_VAR_3, STDSTRING_BERRIES
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return

EventScript_ObtainedItem::
	message gText_ObtainedTheItem
	delay 10
	showitemdesc
	waitfanfare
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	hideitemdesc
	setvar VAR_RESULT, TRUE
	return

EventScript_NoRoomForItem::
	setvar VAR_RESULT, FALSE
	return

EventScript_PlayFanfareObtainedItem::
	playfanfare MUS_OBTAIN_ITEM
	return

EventScript_PlayFanfareObtainedTMHM::
	playfanfare MUS_OBTAIN_TMHM
	return

Std_ObtainDecoration::
	adddecoration ITEMID
	copyvar VAR_0x8007, VAR_RESULT
	call EventScript_ObtainDecorationMessage
	return

EventScript_ObtainDecorationMessage::
	bufferdecorationname STR_VAR_2, ITEMID
	call_if_eq VAR_0x8007, TRUE, EventScript_ObtainedDecor
	call_if_eq VAR_0x8007, FALSE, EventScript_NoRoomForDecor
	return

EventScript_ObtainedDecor::
	playfanfare MUS_OBTAIN_ITEM
	message gText_ObtainedTheDecor
	waitfanfare
	msgbox gText_TheDecorWasTransferredToThePC, MSGBOX_DEFAULT
	setvar VAR_RESULT, TRUE
	return

EventScript_NoRoomForDecor::
	setvar VAR_RESULT, FALSE
	return

Std_FindItem::
	lock
	faceplayer
	waitse
	copyvar VAR_0x8006, ITEMID
	copyvar VAR_0x8004, ITEMID
	copyvar VAR_0x8005, AMOUNT
	checkitemspace ITEMID, AMOUNT
	copyvar VAR_0x8007, VAR_RESULT
	bufferitemnameplural STR_VAR_2, ITEMID, AMOUNT
	checkitemtype ITEMID
	call EventScript_BufferPocketNameAndTryFanfare
	call_if_eq VAR_0x8007, TRUE, EventScript_PickUpItem
	call_if_eq VAR_0x8007, FALSE, EventScript_NoRoomToPickUpItem
	release
	return

EventScript_PickUpItem::
	removeobject VAR_LAST_TALKED
	additem VAR_0x8004, VAR_0x8005
	copyvar VAR_0x8006 VAR_0x8004
	specialvar VAR_RESULT, BufferTMHMMoveName
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, TRUE, EventScript_FoundTMHM
	call_if_eq VAR_0x8008, FALSE, EventScript_FoundItem
	delay 10
	showitemdesc
	waitfanfare
	waitmessage
	bufferitemnameplural STR_VAR_2, VAR_0x8004, VAR_0x8005
	pyramid_inchallenge
	goto_if_eq VAR_RESULT, TRUE, EventScript_PutBattlePyramidItemInBag
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	hideitemdesc
	return

EventScript_PutBattlePyramidItemInBag::
	msgbox gText_PlayerPutItemInBag, MSGBOX_DEFAULT
	hideitemdesc
	return

EventScript_FoundTMHM::
	bufferitemnameplural STR_VAR_1, VAR_0x8004, VAR_0x8005
	message gText_PlayerFoundOneTMHM
	return

EventScript_FoundItem::
	message gText_PlayerFoundOneItem
	return

EventScript_NoRoomToPickUpItem::
	msgbox gText_ObtainedTheItem, MSGBOX_DEFAULT
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	setvar VAR_RESULT, FALSE
	return

EventScript_HiddenItemScript::
	lockall
	waitse
	copyvar VAR_0x8006, VAR_0x8005
	additem VAR_0x8005
	copyvar VAR_0x8007, VAR_RESULT
	bufferitemnameplural STR_VAR_2, VAR_0x8005, 1
	checkitemtype VAR_0x8005
	call EventScript_BufferPocketNameAndTryFanfare
	goto_if_eq VAR_0x8007, TRUE, EventScript_PickUpHiddenItem
	goto_if_eq VAR_0x8007, FALSE, EventScript_NoRoomForHiddenItem
	end

EventScript_PickUpHiddenItem::
	copyvar VAR_0x8008, VAR_0x8004
	copyvar VAR_0x8004, VAR_0x8005
	specialvar VAR_RESULT, BufferTMHMMoveName
	goto_if_eq VAR_RESULT, TRUE, EventScript_FoundHiddenTMHM
	goto_if_eq VAR_RESULT, FALSE, EventScript_FoundHiddenItem
	end

EventScript_FoundHiddenTMHM::
	bufferitemnameplural STR_VAR_1, VAR_0x8004, 1
	message gText_PlayerFoundOneTMHM
	goto EventScript_PutHiddenItemInPocket
	end

EventScript_FoundHiddenItem::
	message gText_PlayerFoundOneItem
	goto EventScript_PutHiddenItemInPocket
	end

EventScript_PutHiddenItemInPocket::
	delay 10
	showitemdesc
	waitmessage
	waitfanfare
	bufferitemnameplural STR_VAR_2, VAR_0x8004, 1
	copyvar VAR_0x8004, VAR_0x8008
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	hideitemdesc
	special TryPutTreasureInvestigatorsOnAir
	special SetHiddenItemFlag
	releaseall
	end

EventScript_NoRoomForHiddenItem::
	msgbox gText_PlayerFoundOneItem, MSGBOX_DEFAULT
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	releaseall
	end

EventScript_FindItemInTrash::
	lockall
	random 3
	goto_if_set FLAG_TEMP_1, EventScript_FindItemInTrash_6
	setflag FLAG_TEMP_1
	compare VAR_RESULT, 1
	goto_if_eq EventScript_FindItemInTrash_2
	msgbox EventScript_FindItemInTrash_Text_9
	goto EventScript_FindItemInTrash_5
EventScript_FindItemInTrash_5:
	releaseall
	return

EventScript_FindItemInTrash_2:
	random 8
	switch VAR_RESULT
	case 0, EventScript_FindItemInTrash_9
	case 1, EventScript_FindItemInTrash_10
	case 2, EventScript_FindItemInTrash_11
	case 3, EventScript_FindItemInTrash_12
	case 4, EventScript_FindItemInTrash_13
	case 5, EventScript_FindItemInTrash_14
	case 6, EventScript_FindItemInTrash_15
	case 7, EventScript_FindItemInTrash_16
	msgbox EventScript_FindItemInTrash_Text_8
	

EventScript_FindItemInTrash_6:
	msgbox EventScript_FindItemInTrash_Text_9
	goto EventScript_FindItemInTrash_5

EventScript_FindItemInTrash_9:
	msgbox EventScript_FindItemInTrash_Text_0
	giveitem ITEM_POTION, 1
	goto EventScript_FindItemInTrash_6
	

EventScript_FindItemInTrash_10:
	msgbox EventScript_FindItemInTrash_Text_1
	giveitem ITEM_POKE_BALL, 1
	goto EventScript_FindItemInTrash_6
	

EventScript_FindItemInTrash_11:
	msgbox EventScript_FindItemInTrash_Text_2
	giveitem ITEM_PREMIER_BALL, 1
	goto EventScript_FindItemInTrash_6
	

EventScript_FindItemInTrash_12:
	msgbox EventScript_FindItemInTrash_Text_3
	giveitem ITEM_ORAN_BERRY, 1
	goto EventScript_FindItemInTrash_6
	

EventScript_FindItemInTrash_13:
	msgbox EventScript_FindItemInTrash_Text_4
	giveitem ITEM_PECHA_BERRY, 1
	goto EventScript_FindItemInTrash_6
	

EventScript_FindItemInTrash_14:
	msgbox EventScript_FindItemInTrash_Text_5
	giveitem ITEM_LEFTOVERS, 1
	goto EventScript_FindItemInTrash_6
	

EventScript_FindItemInTrash_15:
	msgbox EventScript_FindItemInTrash_Text_6
	giveitem ITEM_BLUE_SHARD, 1
	giveitem ITEM_GREEN_SHARD, 1
	giveitem ITEM_RED_SHARD, 1
	giveitem ITEM_YELLOW_SHARD, 1
	goto EventScript_FindItemInTrash_6

EventScript_FindItemInTrash_16:
	msgbox EventScript_FindItemInTrash_Text_7
	addmoney 5000
	goto EventScript_FindItemInTrash_6
	


EventScript_FindItemInTrash_Text_0:
	.string "¡Ey! ¡Hay una Poción\n"
	.string "en la basura!$"

EventScript_FindItemInTrash_Text_1:
	.string "¡Ey! ¡Hay una Pokéball\n"
	.string "en la basura!$"

EventScript_FindItemInTrash_Text_2:
	.string "¡Ey! ¡Hay una Premier\n"
	.string "Ball en la basura!$"

EventScript_FindItemInTrash_Text_3:
	.string "¡Ey! ¡Hay una Baya Aranja\n"
	.string "en la basura!$"

EventScript_FindItemInTrash_Text_4:
	.string "¡Ey! ¡Hay una Baya Meloc\n"
	.string "en la basura!$"

EventScript_FindItemInTrash_Text_5:
	.string "¡Ey! ¡Hay unos Restos\n"
	.string "en la basura!$"

EventScript_FindItemInTrash_Text_6:
	.string "¡Ey! ¡Hay muchas Partes\n"
	.string "en la basura!$"

EventScript_FindItemInTrash_Text_7:
	.string "¡Ey! ¡Hay ¥5.000\n"
	.string "en la basura!$"

EventScript_FindItemInTrash_Text_8:
	.string "¡No tendrías porqué ver esto!$"

EventScript_FindItemInTrash_Text_9:
	.string "La basura está vacía.\p"
	.string "Aunque algo me dice que debería\n"
	.string "volver luego…$"

	
