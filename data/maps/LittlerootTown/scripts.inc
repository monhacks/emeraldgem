LittlerootTown_EventScript_TownSign::
# 5 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
# 17 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BirchsLabSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BrendansHouseSign::
# 27 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 28 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 29 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_BrendansHouseSign_2
# 42 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_1, MSGBOX_SIGN
LittlerootTown_EventScript_BrendansHouseSign_1:
# 49 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_BrendansHouseSign_2:
# 32 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_0, MSGBOX_SIGN
	goto LittlerootTown_EventScript_BrendansHouseSign_1


LittlerootTown_EventScript_MaysHouseSign::
# 54 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 55 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 56 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne LittlerootTown_EventScript_MaysHouseSign_2
# 69 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_1, MSGBOX_SIGN
LittlerootTown_EventScript_MaysHouseSign_1:
# 76 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_MaysHouseSign_2:
# 59 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_0, MSGBOX_SIGN
	goto LittlerootTown_EventScript_MaysHouseSign_1


LittlerootTown_EventScript_MLMSign::
# 83 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_MLMSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 94 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 95 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_GiveRunningShoesTrigger_2
# 100 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayerFemale
# 101 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsFemale
LittlerootTown_EventScript_GiveRunningShoesTrigger_1:
# 103 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 104 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0
# 105 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 106 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 107 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 108 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_GiveRunningShoesTrigger_6
# 114 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayerFemale
# 115 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 116 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeFemale
LittlerootTown_EventScript_GiveRunningShoesTrigger_5:
# 118 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger_2:
# 96 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayerMale
# 97 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsMale
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger_1

LittlerootTown_EventScript_GiveRunningShoesTrigger_6:
# 109 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayerMale
# 110 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 111 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeMale
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger_5


LittlerootTown_EventScript_FatMan::
# 123 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 125 "data/maps/LittlerootTown/scripts.pory"
	namebox Carlos
# 128 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_0
# 136 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 137 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 138 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_Boy::
# 143 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 144 "data/maps/LittlerootTown/scripts.pory"
	lock
# 147 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Boy_Text_0
# 153 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GiveRunningShoes::
# 160 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 161 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_0
# 163 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 164 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_MACH_BIKE, 1
# 165 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_NOT_DOUBLE_BIKE
# 166 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 168 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 169 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 170 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_1
# 192 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 193 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 194 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_EventScript_OurNewHomeLetsGoInside::
# 201 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_OurNewHomeLetsGoInside_Text_0
	return


# 215 "data/maps/LittlerootTown/scripts.pory"

# 216 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 217 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 218 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 219 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 220 "data/maps/LittlerootTown/scripts.pory"

# 221 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 222 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 223 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 224 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 225 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 226 "data/maps/LittlerootTown/scripts.pory"

# 227 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 228 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 229 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 230 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 231 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 232 "data/maps/LittlerootTown/scripts.pory"

# 233 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 234 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 235 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 236 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 237 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 238 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 239 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 240 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 241 "data/maps/LittlerootTown/scripts.pory"

# 242 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 243 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 244 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 245 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 246 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 247 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 248 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 249 "data/maps/LittlerootTown/scripts.pory"

# 250 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 251 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 252 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 253 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 254 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 255 "data/maps/LittlerootTown/scripts.pory"

# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 258 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 259 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 260 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 261 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 262 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 263 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 264 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 265 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 266 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 267 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 268 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 269 "data/maps/LittlerootTown/scripts.pory"
	end
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MakePlayerInvisible::
# 272 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MakePlayerInvisible
# 273 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 274 "data/maps/LittlerootTown/scripts.pory"
	return
# 275 "data/maps/LittlerootTown/scripts.pory"

# 276 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MakePlayerInvisible:
# 277 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 278 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 279 "data/maps/LittlerootTown/scripts.pory"

# 280 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 281 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 282 "data/maps/LittlerootTown/scripts.pory"
	return
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 285 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 286 "data/maps/LittlerootTown/scripts.pory"
	return
# 287 "data/maps/LittlerootTown/scripts.pory"

# 288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 289 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 290 "data/maps/LittlerootTown/scripts.pory"
	return
# 291 "data/maps/LittlerootTown/scripts.pory"

# 292 "data/maps/LittlerootTown/scripts.pory"
	
# 293 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MLMSign::
# 294 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE ESMERALDA$"
# 295 "data/maps/LittlerootTown/scripts.pory"

# 296 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 297 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 298 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 299 "data/maps/LittlerootTown/scripts.pory"
	return
# 300 "data/maps/LittlerootTown/scripts.pory"

# 301 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 302 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 303 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 304 "data/maps/LittlerootTown/scripts.pory"
	return
# 305 "data/maps/LittlerootTown/scripts.pory"

# 306 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 307 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 308 "data/maps/LittlerootTown/scripts.pory"
	return
# 309 "data/maps/LittlerootTown/scripts.pory"

# 310 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 311 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 312 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 2
# 313 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 314 "data/maps/LittlerootTown/scripts.pory"
	return
# 315 "data/maps/LittlerootTown/scripts.pory"

# 316 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 317 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 3
# 318 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 319 "data/maps/LittlerootTown/scripts.pory"
	return
# 320 "data/maps/LittlerootTown/scripts.pory"

# 321 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 322 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 323 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 324 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 325 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 326 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 327 "data/maps/LittlerootTown/scripts.pory"
	return
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 330 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 9
# 331 "data/maps/LittlerootTown/scripts.pory"
	return
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 334 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 335 "data/maps/LittlerootTown/scripts.pory"
	return
# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 338 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 339 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 340 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 341 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 342 "data/maps/LittlerootTown/scripts.pory"

# 343 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 344 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 345 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 346 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 347 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 348 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 349 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 350 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 351 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 352 "data/maps/LittlerootTown/scripts.pory"
	end
# 353 "data/maps/LittlerootTown/scripts.pory"

# 354 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 355 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 356 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 357 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 358 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 359 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 360 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 361 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 362 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 363 "data/maps/LittlerootTown/scripts.pory"
	end
# 364 "data/maps/LittlerootTown/scripts.pory"

# 365 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 366 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 367 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 368 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 369 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 370 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 371 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 372 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 373 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 374 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 375 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 376 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 377 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 378 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 379 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 380 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 381 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_OurNewHomeLetsGoInside
# 382 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 383 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 384 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 385 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 386 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 387 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 388 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 390 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 391 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 393 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 394 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 395 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 396 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 397 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 398 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 399 "data/maps/LittlerootTown/scripts.pory"
	return
# 400 "data/maps/LittlerootTown/scripts.pory"

# 401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 402 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 403 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 406 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 407 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 408 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 409 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 412 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 413 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 414 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 415 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 416 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 419 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 420 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 421 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 422 "data/maps/LittlerootTown/scripts.pory"

# 423 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 424 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 425 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 426 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 427 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 428 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 429 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 432 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 433 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 434 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 435 "data/maps/LittlerootTown/scripts.pory"

# 436 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 437 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 438 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 439 "data/maps/LittlerootTown/scripts.pory"
	set_visible
# 440 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 441 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 442 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 443 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 446 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 447 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 448 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 449 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 450 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 451 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 452 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 453 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 454 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 455 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 456 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 457 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 458 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 459 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 460 "data/maps/LittlerootTown/scripts.pory"
	end
# 461 "data/maps/LittlerootTown/scripts.pory"

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 463 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 464 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 467 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 468 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 469 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 471 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 472 "data/maps/LittlerootTown/scripts.pory"
	end
# 473 "data/maps/LittlerootTown/scripts.pory"

# 474 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 475 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 476 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 477 "data/maps/LittlerootTown/scripts.pory"
	end
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 480 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 481 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 482 "data/maps/LittlerootTown/scripts.pory"
	end
# 483 "data/maps/LittlerootTown/scripts.pory"
	
# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_1:
# 485 "data/maps/LittlerootTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED SIDE_QUEST_3
# 486 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, TRUE
# 487 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq LittlerootTown_EventScript_FatMan_2
# 488 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 489 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 490 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 491 "data/maps/LittlerootTown/scripts.pory"
	return
# 492 "data/maps/LittlerootTown/scripts.pory"

# 493 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_2:
# 494 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_MISTERIO, 3
# 495 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ge LittlerootTown_EventScript_FatMan_5
# 496 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_ALEX, LittlerootTown_EventScript_FatMan_11
# 497 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_3
# 498 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 499 "data/maps/LittlerootTown/scripts.pory"

# 500 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_5:
# 501 "data/maps/LittlerootTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE SIDE_QUEST_3
# 502 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, TRUE
# 503 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq LittlerootTown_EventScript_FatMan_9
# 504 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_8:
# 505 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_ALEX, LittlerootTown_EventScript_FatMan_14
# 506 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_3
# 507 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 508 "data/maps/LittlerootTown/scripts.pory"

# 509 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_9:
# 510 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_Unused_0
# 511 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_8
# 512 "data/maps/LittlerootTown/scripts.pory"

# 513 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_11:
# 514 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_4
# 515 "data/maps/LittlerootTown/scripts.pory"
	addvar VAR_MISTERIO, 1
# 516 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_ALEX
# 517 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 518 "data/maps/LittlerootTown/scripts.pory"

# 519 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_14:
# 520 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_1
# 521 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_2
# 522 "data/maps/LittlerootTown/scripts.pory"
	addvar VAR_MISTERIO, 1
# 523 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_ALEX
# 524 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 525 "data/maps/LittlerootTown/scripts.pory"

# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_Unused_0:
# 529 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que\n"
# 530 "data/maps/LittlerootTown/scripts.pory"
	.string "paso demasiado tiempo afuera…\p"
# 531 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 532 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 5}Sabes sobre… {PAUSE 5}… {PAUSE 5}…\n"
# 533 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}Aquel día…\p"
# 534 "data/maps/LittlerootTown/scripts.pory"
	.string "-inhala- {PAUSE 2}UUFFF… {PAUSE 5}Bueno, no sé tanto\n"
# 535 "data/maps/LittlerootTown/scripts.pory"
	.string "sobre {COLOR RED}Pokémon que cambian su forma{COLOR DARK_GRAY},\l"
# 536 "data/maps/LittlerootTown/scripts.pory"
	.string "pero sí sospecho que es mejor\l"
# 537 "data/maps/LittlerootTown/scripts.pory"
	.string "dejarlo así. Ya le derrotamos.\p"
# 538 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 539 "data/maps/LittlerootTown/scripts.pory"
	.string "Tal vez, y sólo tal vez,\n"
# 540 "data/maps/LittlerootTown/scripts.pory"
	.string "otra gente sepa más.$"
# 541 "data/maps/LittlerootTown/scripts.pory"

# 542 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_1:
# 543 "data/maps/LittlerootTown/scripts.pory"
	.string "Quizá… {PAUSE 5}Ya sea el momento de\n"
# 544 "data/maps/LittlerootTown/scripts.pory"
	.string "hablar con Birch sobre esto. Ha estado\l"
# 545 "data/maps/LittlerootTown/scripts.pory"
	.string "evitando hacerlo desde entonces, pero\l"
# 546 "data/maps/LittlerootTown/scripts.pory"
	.string "pasa que él dedicó mucho a resolver\l"
# 547 "data/maps/LittlerootTown/scripts.pory"
	.string "este misterio. Quizá, sólo quizá seas\l"
# 548 "data/maps/LittlerootTown/scripts.pory"
	.string "capaz de resolver esto.$"
# 549 "data/maps/LittlerootTown/scripts.pory"

# 550 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_2:
# 551 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 552 "data/maps/LittlerootTown/scripts.pory"
	.string "Tal vez, y sólo tal vez,\n"
# 553 "data/maps/LittlerootTown/scripts.pory"
	.string "otra gente sepa más.$"
# 554 "data/maps/LittlerootTown/scripts.pory"

# 555 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_3:
# 556 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que\n"
# 557 "data/maps/LittlerootTown/scripts.pory"
	.string "paso demasiado tiempo afuera…\p"
# 558 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 559 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 5}Sabes sobre… {PAUSE 5}… {PAUSE 5}…\n"
# 560 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}Aquel día…\p"
# 561 "data/maps/LittlerootTown/scripts.pory"
	.string "-inhala- {PAUSE 2}UUFFF… {PAUSE 5}Bueno, no sé tanto\n"
# 562 "data/maps/LittlerootTown/scripts.pory"
	.string "sobre {COLOR RED}Pokémon que cambian su forma{COLOR DARK_GRAY},\l"
# 563 "data/maps/LittlerootTown/scripts.pory"
	.string "pero sí sospecho que es mejor\l"
# 564 "data/maps/LittlerootTown/scripts.pory"
	.string "dejarlo así. Ya le derrotamos.\p"
# 565 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 566 "data/maps/LittlerootTown/scripts.pory"
	.string "Aunque tal vez, y sólo tal vez, tenga\n"
# 567 "data/maps/LittlerootTown/scripts.pory"
	.string "una idea. Hay un Pokémon de una lejana\l"
# 568 "data/maps/LittlerootTown/scripts.pory"
	.string "región que es capaz de cambiar su\l"
# 569 "data/maps/LittlerootTown/scripts.pory"
	.string "forma, pero no sé cómo funciona.\l"
# 570 "data/maps/LittlerootTown/scripts.pory"
	.string "Quizás…\p"
# 571 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\n"
# 572 "data/maps/LittlerootTown/scripts.pory"
	.string "No, no podría haber causado tanto daño\l"
# 573 "data/maps/LittlerootTown/scripts.pory"
	.string "de ser así…$"
# 574 "data/maps/LittlerootTown/scripts.pory"

# 575 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_4:
# 576 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Hola, {PLAYER}!\p"
# 577 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 2}¿Era un {COLOR RED}Zoroark{COLOR DARK_GRAY}?\p"
# 578 "data/maps/LittlerootTown/scripts.pory"
	.string "Eso significa que mis teorías\n"
# 579 "data/maps/LittlerootTown/scripts.pory"
	.string "eran correctas…\l"
# 580 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces las ilusiones de\l"
# 581 "data/maps/LittlerootTown/scripts.pory"
	.string "Zoroark son así de fuertes…$"
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 584 "data/maps/LittlerootTown/scripts.pory"
	lock
# 585 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 586 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 587 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 588 "data/maps/LittlerootTown/scripts.pory"
	release
# 589 "data/maps/LittlerootTown/scripts.pory"
	end
# 590 "data/maps/LittlerootTown/scripts.pory"

# 591 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 592 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 593 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 594 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 598 "data/maps/LittlerootTown/scripts.pory"
	release
# 599 "data/maps/LittlerootTown/scripts.pory"
	end
# 600 "data/maps/LittlerootTown/scripts.pory"

# 601 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 602 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 603 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 604 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 605 "data/maps/LittlerootTown/scripts.pory"
	end
# 606 "data/maps/LittlerootTown/scripts.pory"

# 607 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 608 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 609 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 610 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 611 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 612 "data/maps/LittlerootTown/scripts.pory"
	return
# 613 "data/maps/LittlerootTown/scripts.pory"

# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 616 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 617 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 618 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 619 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 620 "data/maps/LittlerootTown/scripts.pory"

# 621 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 622 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 623 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 624 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 625 "data/maps/LittlerootTown/scripts.pory"
	end
# 626 "data/maps/LittlerootTown/scripts.pory"

# 627 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 628 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 629 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 630 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 634 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 638 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 639 "data/maps/LittlerootTown/scripts.pory"
	end
# 640 "data/maps/LittlerootTown/scripts.pory"

# 641 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 642 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 643 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 644 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 645 "data/maps/LittlerootTown/scripts.pory"
	end
# 646 "data/maps/LittlerootTown/scripts.pory"

# 647 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 648 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 649 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 650 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 651 "data/maps/LittlerootTown/scripts.pory"
	end
# 652 "data/maps/LittlerootTown/scripts.pory"

# 653 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 654 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 655 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 656 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 657 "data/maps/LittlerootTown/scripts.pory"
	end
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 660 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 661 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 662 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 663 "data/maps/LittlerootTown/scripts.pory"
	end
# 664 "data/maps/LittlerootTown/scripts.pory"

# 665 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 666 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 6
# 667 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 668 "data/maps/LittlerootTown/scripts.pory"
	return
# 669 "data/maps/LittlerootTown/scripts.pory"

# 670 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 671 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 672 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 673 "data/maps/LittlerootTown/scripts.pory"
	return
# 674 "data/maps/LittlerootTown/scripts.pory"

# 675 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	return
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	return
# 684 "data/maps/LittlerootTown/scripts.pory"

# 685 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 686 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 687 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 688 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 689 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 690 "data/maps/LittlerootTown/scripts.pory"
	return
# 691 "data/maps/LittlerootTown/scripts.pory"

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 693 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 694 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 695 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 696 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 697 "data/maps/LittlerootTown/scripts.pory"
	return
# 698 "data/maps/LittlerootTown/scripts.pory"

# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 701 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 703 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 705 "data/maps/LittlerootTown/scripts.pory"
	return
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 708 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 712 "data/maps/LittlerootTown/scripts.pory"
	return
# 713 "data/maps/LittlerootTown/scripts.pory"

# 714 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 715 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	return
# 720 "data/maps/LittlerootTown/scripts.pory"

# 721 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 722 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	return
# 727 "data/maps/LittlerootTown/scripts.pory"

# 728 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 729 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 730 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 731 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 733 "data/maps/LittlerootTown/scripts.pory"
	return
# 734 "data/maps/LittlerootTown/scripts.pory"

# 735 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 736 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 738 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 739 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 740 "data/maps/LittlerootTown/scripts.pory"
	return
# 741 "data/maps/LittlerootTown/scripts.pory"

# 742 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 743 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 744 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 745 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 746 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 747 "data/maps/LittlerootTown/scripts.pory"
	return
# 748 "data/maps/LittlerootTown/scripts.pory"

# 749 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 750 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 751 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 752 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 753 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 754 "data/maps/LittlerootTown/scripts.pory"
	return
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 757 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 758 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 759 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 760 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 761 "data/maps/LittlerootTown/scripts.pory"
	return
# 762 "data/maps/LittlerootTown/scripts.pory"

# 763 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 764 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 765 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 766 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 767 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 768 "data/maps/LittlerootTown/scripts.pory"
	return
# 769 "data/maps/LittlerootTown/scripts.pory"

# 770 "data/maps/LittlerootTown/scripts.pory"

# 771 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 772 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 774 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 775 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 776 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 777 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 778 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 779 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 780 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 781 "data/maps/LittlerootTown/scripts.pory"
	return
# 782 "data/maps/LittlerootTown/scripts.pory"

# 783 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 784 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 786 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 788 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 789 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 790 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 791 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 793 "data/maps/LittlerootTown/scripts.pory"
	return
# 794 "data/maps/LittlerootTown/scripts.pory"

# 795 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 796 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 799 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 800 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 801 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 802 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 803 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 804 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 805 "data/maps/LittlerootTown/scripts.pory"
	return
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 808 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 810 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 811 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 812 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 813 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 814 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 815 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 816 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 817 "data/maps/LittlerootTown/scripts.pory"
	return
# 818 "data/maps/LittlerootTown/scripts.pory"

# 819 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 820 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 821 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 822 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 823 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 824 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 825 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 826 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 827 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 828 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 829 "data/maps/LittlerootTown/scripts.pory"
	return
# 830 "data/maps/LittlerootTown/scripts.pory"

# 831 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 832 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 833 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 834 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 835 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 836 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 837 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 838 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 839 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 840 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 841 "data/maps/LittlerootTown/scripts.pory"
	return
# 842 "data/maps/LittlerootTown/scripts.pory"

# 843 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 844 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 845 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 846 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 847 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 848 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 849 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 850 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 851 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 852 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 853 "data/maps/LittlerootTown/scripts.pory"
	return
# 854 "data/maps/LittlerootTown/scripts.pory"

# 855 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 856 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 857 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 858 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 859 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 860 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 861 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 862 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 863 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 864 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 865 "data/maps/LittlerootTown/scripts.pory"
	return
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 877 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 878 "data/maps/LittlerootTown/scripts.pory"

# 879 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 888 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 889 "data/maps/LittlerootTown/scripts.pory"

# 890 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 898 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 899 "data/maps/LittlerootTown/scripts.pory"

# 900 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 904 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 905 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 907 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 908 "data/maps/LittlerootTown/scripts.pory"

# 909 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 912 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 913 "data/maps/LittlerootTown/scripts.pory"

# 914 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 918 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 919 "data/maps/LittlerootTown/scripts.pory"

# 920 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 921 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 922 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 923 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 925 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 926 "data/maps/LittlerootTown/scripts.pory"

# 927 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 928 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 929 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 931 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 932 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 933 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 934 "data/maps/LittlerootTown/scripts.pory"

# 935 "data/maps/LittlerootTown/scripts.pory"

# 936 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 937 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 938 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 939 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 940 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 941 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 943 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 944 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 946 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 947 "data/maps/LittlerootTown/scripts.pory"

# 948 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 949 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 950 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 951 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 952 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 955 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 956 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 957 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 958 "data/maps/LittlerootTown/scripts.pory"

# 959 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 961 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 963 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 964 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 965 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 967 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 968 "data/maps/LittlerootTown/scripts.pory"

# 969 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 970 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 971 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 972 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 973 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 974 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 975 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 976 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 977 "data/maps/LittlerootTown/scripts.pory"

# 978 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 979 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 980 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 981 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 982 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 983 "data/maps/LittlerootTown/scripts.pory"

# 984 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 985 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 986 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 987 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 988 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 989 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 990 "data/maps/LittlerootTown/scripts.pory"

# 991 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 992 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 993 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 994 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 995 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 996 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 997 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 998 "data/maps/LittlerootTown/scripts.pory"

# 999 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1000 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1001 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1002 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1003 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1004 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1006 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1007 "data/maps/LittlerootTown/scripts.pory"

# 1008 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1009 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1010 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1011 "data/maps/LittlerootTown/scripts.pory"

# 1012 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1013 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1014 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1015 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1016 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1017 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1018 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1019 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1020 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1021 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1022 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1023 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1024 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1025 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1026 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1027 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1028 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1029 "data/maps/LittlerootTown/scripts.pory"
	end
# 1030 "data/maps/LittlerootTown/scripts.pory"

# 1031 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1032 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1033 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1034 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1035 "data/maps/LittlerootTown/scripts.pory"
	release
# 1036 "data/maps/LittlerootTown/scripts.pory"
	end
# 1037 "data/maps/LittlerootTown/scripts.pory"

# 1038 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1039 "data/maps/LittlerootTown/scripts.pory"
	.string "…………$"
# 1040 "data/maps/LittlerootTown/scripts.pory"

# 1041 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Bueno, bueno, {PLAYER}, sabía que\n"
# 1043 "data/maps/LittlerootTown/scripts.pory"
	.string "eras especial!\p"
# 1044 "data/maps/LittlerootTown/scripts.pory"
	.string "Tu gran poder…\p"
# 1045 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Te ha llevado a lograr tanto!\p"
# 1046 "data/maps/LittlerootTown/scripts.pory"
	.string "Gracias a eso, voy a darte algo…\p"
# 1047 "data/maps/LittlerootTown/scripts.pory"
	.string "Ven a mi Laboratorio…$"

LittlerootTown_EventScript_TownSign_Text_0:
# 5 "data/maps/LittlerootTown/scripts.pory"
	.string "VILLA LITTLEROOT\n"
	.string "“Una Villa bonita.”$"

LittlerootTown_EventScript_BirchsLabSign_Text_0:
# 17 "data/maps/LittlerootTown/scripts.pory"
	.string "LABORATORIO DEL PROFESOR BIRCH$"

LittlerootTown_EventScript_BrendansHouseSign_Text_0:
# 32 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE {PLAYER}$"

LittlerootTown_EventScript_BrendansHouseSign_Text_1:
# 42 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE {RIVAL}$"

LittlerootTown_EventScript_MLMSign_Text_0:
# 83 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE ESMERALDA$"

LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0:
# 104 "data/maps/LittlerootTown/scripts.pory"
	.string "Ah, {PLAYER}.$"

LittlerootTown_EventScript_FatMan_Text_0:
# 128 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que paso\n"
	.string "demasiado tiempo afuera, pero… ¡Amo el\l"
	.string "aire fresco y limpio, y la naturaleza tan\l"
	.string "bella…!\p"
	.string "Aunque entiendo que debería pasar más\n"
	.string "tiempo con él dentro de casa…$"

LittlerootTown_EventScript_Boy_Text_0:
# 147 "data/maps/LittlerootTown/scripts.pory"
	.string "Ese Profesor. Se la pasa siempre fuera\n"
	.string "de su casa investigando, ¿Qué no\l"
	.string "extraña a su familia?$"

LittlerootTown_EventScript_GiveRunningShoes_Text_0:
# 161 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Mi amor!\p"
	.string "¡Ah, el Profesor te dio un Pokémon!\p"
	.string "-sniff sniff- …{PAUSE 5} …{PAUSE 5} …{PAUSE 5}\n"
	.string "Perdón por llorar pero… {PAUSE 5}Estoy tan\l"
	.string "orgullosa de ti, mi pequeñ{ITOITA}…\p"
	.string "Pero bueno… {PAUSE 5}No puedo evitar que\n"
	.string "crezcas, así que… {PAUSE 5}Toma esto, mi amor.$"

LittlerootTown_EventScript_GiveRunningShoes_Text_1:
# 170 "data/maps/LittlerootTown/scripts.pory"
	.string "Es una Bici Dos-En-Uno, aunque creo que\n"
	.string "no funciona… ¡Quizá la puedan reparar\l"
	.string "en la Tienda de Bicis!\p"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\n"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
	.string "Ya tienes un Pokémon…\n"
	.string "Estoy tan, tan orgullosa de ti, mi\l"
	.string "pequeñ{OA}…\p"
	.string "Si pasa algo, acá está mami para darte\n"
	.string "amor y cariño.\p"
	.string "Cuídate mucho, mi amor…\n"
	.string "Voy a extrañarte…$"

LittlerootTown_EventScript_OurNewHomeLetsGoInside_Text_0:
# 201 "data/maps/LittlerootTown/scripts.pory"
	.string "¡LLegamos, amor!\p"
	.string "Lamento haberte dejado en el camión,\n"
	.string "pero no teníamos más dinero…¡Pero\l"
	.string "bueno, esto es Villa Littleroot!\p"
	.string "¿Te gusta? Se me hace que es un lugar\n"
	.string "tranquilo para vivir.\p"
	.string "¡Entremos!$"
