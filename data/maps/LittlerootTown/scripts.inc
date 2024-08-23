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
# 194 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 195 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 196 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_EventScript_OurNewHomeLetsGoInside::
# 203 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_OurNewHomeLetsGoInside_Text_0
	return


# 217 "data/maps/LittlerootTown/scripts.pory"

# 218 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 219 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 220 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 221 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 224 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 225 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 226 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 227 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 228 "data/maps/LittlerootTown/scripts.pory"

# 229 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 230 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 231 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 232 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 233 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 236 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 237 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 238 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 239 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 240 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 241 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 242 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 243 "data/maps/LittlerootTown/scripts.pory"

# 244 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 245 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 246 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 247 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 248 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 249 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 250 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 251 "data/maps/LittlerootTown/scripts.pory"

# 252 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 253 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 254 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 255 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 256 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"

# 259 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 260 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 261 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 262 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 263 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 264 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 265 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 266 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 267 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 268 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 269 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 270 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 271 "data/maps/LittlerootTown/scripts.pory"
	end
# 272 "data/maps/LittlerootTown/scripts.pory"

# 273 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MakePlayerInvisible::
# 274 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MakePlayerInvisible
# 275 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/LittlerootTown/scripts.pory"
	return
# 277 "data/maps/LittlerootTown/scripts.pory"

# 278 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MakePlayerInvisible:
# 279 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 280 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 281 "data/maps/LittlerootTown/scripts.pory"

# 282 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 283 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 284 "data/maps/LittlerootTown/scripts.pory"
	return
# 285 "data/maps/LittlerootTown/scripts.pory"

# 286 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 287 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 288 "data/maps/LittlerootTown/scripts.pory"
	return
# 289 "data/maps/LittlerootTown/scripts.pory"

# 290 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 291 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 292 "data/maps/LittlerootTown/scripts.pory"
	return
# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
	
# 295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MLMSign::
# 296 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE ESMERALDA$"
# 297 "data/maps/LittlerootTown/scripts.pory"

# 298 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 299 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 300 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 301 "data/maps/LittlerootTown/scripts.pory"
	return
# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 304 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 305 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 306 "data/maps/LittlerootTown/scripts.pory"
	return
# 307 "data/maps/LittlerootTown/scripts.pory"

# 308 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 309 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 310 "data/maps/LittlerootTown/scripts.pory"
	return
# 311 "data/maps/LittlerootTown/scripts.pory"

# 312 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 313 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 314 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 2
# 315 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 316 "data/maps/LittlerootTown/scripts.pory"
	return
# 317 "data/maps/LittlerootTown/scripts.pory"

# 318 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 319 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 3
# 320 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 321 "data/maps/LittlerootTown/scripts.pory"
	return
# 322 "data/maps/LittlerootTown/scripts.pory"

# 323 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 324 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 325 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 326 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 327 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 328 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 329 "data/maps/LittlerootTown/scripts.pory"
	return
# 330 "data/maps/LittlerootTown/scripts.pory"

# 331 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 332 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 9
# 333 "data/maps/LittlerootTown/scripts.pory"
	return
# 334 "data/maps/LittlerootTown/scripts.pory"

# 335 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 336 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 337 "data/maps/LittlerootTown/scripts.pory"
	return
# 338 "data/maps/LittlerootTown/scripts.pory"

# 339 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 340 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 341 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 342 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 343 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 344 "data/maps/LittlerootTown/scripts.pory"

# 345 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 346 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 347 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 348 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 349 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 350 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 351 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 352 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 353 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 354 "data/maps/LittlerootTown/scripts.pory"
	end
# 355 "data/maps/LittlerootTown/scripts.pory"

# 356 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 357 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 358 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 359 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 360 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 361 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 362 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 363 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 364 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 365 "data/maps/LittlerootTown/scripts.pory"
	end
# 366 "data/maps/LittlerootTown/scripts.pory"

# 367 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 368 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 369 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 370 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 371 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 372 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 373 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 374 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 375 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 376 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 377 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 378 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 379 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 380 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 381 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 383 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_OurNewHomeLetsGoInside
# 384 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 385 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 386 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 387 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 388 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 389 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 391 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 392 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 393 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 394 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 395 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 396 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 397 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 398 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 399 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 400 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 401 "data/maps/LittlerootTown/scripts.pory"
	return
# 402 "data/maps/LittlerootTown/scripts.pory"

# 403 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 404 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 405 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 406 "data/maps/LittlerootTown/scripts.pory"

# 407 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 408 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 409 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 410 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 411 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 412 "data/maps/LittlerootTown/scripts.pory"

# 413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 414 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 415 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 416 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 417 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 418 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 419 "data/maps/LittlerootTown/scripts.pory"

# 420 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 421 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 422 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 423 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 426 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 427 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 428 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 429 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 430 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 431 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 432 "data/maps/LittlerootTown/scripts.pory"

# 433 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 434 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 435 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 436 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 439 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 440 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 441 "data/maps/LittlerootTown/scripts.pory"
	set_visible
# 442 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 443 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 444 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 445 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 448 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 449 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 450 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 451 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 452 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 453 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 454 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 455 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 456 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 457 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 458 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 459 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 460 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 461 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 462 "data/maps/LittlerootTown/scripts.pory"
	end
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 465 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 466 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 467 "data/maps/LittlerootTown/scripts.pory"

# 468 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 469 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 470 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 471 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 472 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 473 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 474 "data/maps/LittlerootTown/scripts.pory"
	end
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 477 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 478 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 479 "data/maps/LittlerootTown/scripts.pory"
	end
# 480 "data/maps/LittlerootTown/scripts.pory"

# 481 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 482 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 483 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 484 "data/maps/LittlerootTown/scripts.pory"
	end
# 485 "data/maps/LittlerootTown/scripts.pory"
	
# 486 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_1:
# 487 "data/maps/LittlerootTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED SIDE_QUEST_3
# 488 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, TRUE
# 489 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq LittlerootTown_EventScript_FatMan_2
# 490 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 491 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 492 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 493 "data/maps/LittlerootTown/scripts.pory"
	return
# 494 "data/maps/LittlerootTown/scripts.pory"

# 495 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_2:
# 496 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_MISTERIO, 3
# 497 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ge LittlerootTown_EventScript_FatMan_5
# 498 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_ALEX, LittlerootTown_EventScript_FatMan_11
# 499 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_3
# 500 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 501 "data/maps/LittlerootTown/scripts.pory"

# 502 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_5:
# 503 "data/maps/LittlerootTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE SIDE_QUEST_3
# 504 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, TRUE
# 505 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq LittlerootTown_EventScript_FatMan_9
# 506 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_8:
# 507 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_ALEX, LittlerootTown_EventScript_FatMan_14
# 508 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_3
# 509 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 510 "data/maps/LittlerootTown/scripts.pory"

# 511 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_9:
# 512 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_Unused_0
# 513 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_8
# 514 "data/maps/LittlerootTown/scripts.pory"

# 515 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_11:
# 516 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_4
# 517 "data/maps/LittlerootTown/scripts.pory"
	addvar VAR_MISTERIO, 1
# 518 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_ALEX
# 519 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 520 "data/maps/LittlerootTown/scripts.pory"

# 521 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_14:
# 522 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_1
# 523 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_2
# 524 "data/maps/LittlerootTown/scripts.pory"
	addvar VAR_MISTERIO, 1
# 525 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_ALEX
# 526 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"

# 529 "data/maps/LittlerootTown/scripts.pory"

# 530 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_Unused_0:
# 531 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que\n"
# 532 "data/maps/LittlerootTown/scripts.pory"
	.string "paso demasiado tiempo afuera…\p"
# 533 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 534 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 5}Sabes sobre… {PAUSE 5}… {PAUSE 5}…\n"
# 535 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}Aquel día…\p"
# 536 "data/maps/LittlerootTown/scripts.pory"
	.string "-inhala- {PAUSE 2}UUFFF… {PAUSE 5}Bueno, no sé tanto\n"
# 537 "data/maps/LittlerootTown/scripts.pory"
	.string "sobre {COLOR RED}Pokémon que cambian su forma{COLOR DARK_GRAY},\l"
# 538 "data/maps/LittlerootTown/scripts.pory"
	.string "pero sí sospecho que es mejor\l"
# 539 "data/maps/LittlerootTown/scripts.pory"
	.string "dejarlo así. Ya le derrotamos.\p"
# 540 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 541 "data/maps/LittlerootTown/scripts.pory"
	.string "Tal vez, y sólo tal vez,\n"
# 542 "data/maps/LittlerootTown/scripts.pory"
	.string "otra gente sepa más.$"
# 543 "data/maps/LittlerootTown/scripts.pory"

# 544 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_1:
# 545 "data/maps/LittlerootTown/scripts.pory"
	.string "Quizá… {PAUSE 5}Ya sea el momento de\n"
# 546 "data/maps/LittlerootTown/scripts.pory"
	.string "hablar con Birch sobre esto. Ha estado\l"
# 547 "data/maps/LittlerootTown/scripts.pory"
	.string "evitando hacerlo desde entonces, pero\l"
# 548 "data/maps/LittlerootTown/scripts.pory"
	.string "pasa que él dedicó mucho a resolver\l"
# 549 "data/maps/LittlerootTown/scripts.pory"
	.string "este misterio. Quizá, sólo quizá seas\l"
# 550 "data/maps/LittlerootTown/scripts.pory"
	.string "capaz de resolver esto.$"
# 551 "data/maps/LittlerootTown/scripts.pory"

# 552 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_2:
# 553 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 554 "data/maps/LittlerootTown/scripts.pory"
	.string "Tal vez, y sólo tal vez,\n"
# 555 "data/maps/LittlerootTown/scripts.pory"
	.string "otra gente sepa más.$"
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_3:
# 558 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que\n"
# 559 "data/maps/LittlerootTown/scripts.pory"
	.string "paso demasiado tiempo afuera…\p"
# 560 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 561 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 5}Sabes sobre… {PAUSE 5}… {PAUSE 5}…\n"
# 562 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}Aquel día…\p"
# 563 "data/maps/LittlerootTown/scripts.pory"
	.string "-inhala- {PAUSE 2}UUFFF… {PAUSE 5}Bueno, no sé tanto\n"
# 564 "data/maps/LittlerootTown/scripts.pory"
	.string "sobre {COLOR RED}Pokémon que cambian su forma{COLOR DARK_GRAY},\l"
# 565 "data/maps/LittlerootTown/scripts.pory"
	.string "pero sí sospecho que es mejor\l"
# 566 "data/maps/LittlerootTown/scripts.pory"
	.string "dejarlo así. Ya le derrotamos.\p"
# 567 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 568 "data/maps/LittlerootTown/scripts.pory"
	.string "Aunque tal vez, y sólo tal vez, tenga\n"
# 569 "data/maps/LittlerootTown/scripts.pory"
	.string "una idea. Hay un Pokémon de una lejana\l"
# 570 "data/maps/LittlerootTown/scripts.pory"
	.string "región que es capaz de cambiar su\l"
# 571 "data/maps/LittlerootTown/scripts.pory"
	.string "forma, pero no sé cómo funciona.\l"
# 572 "data/maps/LittlerootTown/scripts.pory"
	.string "Quizás…\p"
# 573 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\n"
# 574 "data/maps/LittlerootTown/scripts.pory"
	.string "No, no podría haber causado tanto daño\l"
# 575 "data/maps/LittlerootTown/scripts.pory"
	.string "de ser así…$"
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_4:
# 578 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Hola, {PLAYER}!\p"
# 579 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 2}¿Era un {COLOR RED}Zoroark{COLOR DARK_GRAY}?\p"
# 580 "data/maps/LittlerootTown/scripts.pory"
	.string "Eso significa que mis teorías\n"
# 581 "data/maps/LittlerootTown/scripts.pory"
	.string "eran correctas…\l"
# 582 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces las ilusiones de\l"
# 583 "data/maps/LittlerootTown/scripts.pory"
	.string "Zoroark son así de fuertes…$"
# 584 "data/maps/LittlerootTown/scripts.pory"

# 585 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 586 "data/maps/LittlerootTown/scripts.pory"
	lock
# 587 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 588 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 589 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 590 "data/maps/LittlerootTown/scripts.pory"
	release
# 591 "data/maps/LittlerootTown/scripts.pory"
	end
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 594 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 595 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 596 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 600 "data/maps/LittlerootTown/scripts.pory"
	release
# 601 "data/maps/LittlerootTown/scripts.pory"
	end
# 602 "data/maps/LittlerootTown/scripts.pory"

# 603 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 604 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 605 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 606 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 607 "data/maps/LittlerootTown/scripts.pory"
	end
# 608 "data/maps/LittlerootTown/scripts.pory"

# 609 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 610 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 611 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 612 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 613 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 614 "data/maps/LittlerootTown/scripts.pory"
	return
# 615 "data/maps/LittlerootTown/scripts.pory"

# 616 "data/maps/LittlerootTown/scripts.pory"

# 617 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 618 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 619 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 620 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 621 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 622 "data/maps/LittlerootTown/scripts.pory"

# 623 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 624 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 625 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 626 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 627 "data/maps/LittlerootTown/scripts.pory"
	end
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 630 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 634 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 635 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 636 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 637 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 638 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 639 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 640 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 641 "data/maps/LittlerootTown/scripts.pory"
	end
# 642 "data/maps/LittlerootTown/scripts.pory"

# 643 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 644 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 645 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 646 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 647 "data/maps/LittlerootTown/scripts.pory"
	end
# 648 "data/maps/LittlerootTown/scripts.pory"

# 649 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 650 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 651 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 652 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 653 "data/maps/LittlerootTown/scripts.pory"
	end
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 656 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 657 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 658 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 659 "data/maps/LittlerootTown/scripts.pory"
	end
# 660 "data/maps/LittlerootTown/scripts.pory"

# 661 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 662 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 663 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 664 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 665 "data/maps/LittlerootTown/scripts.pory"
	end
# 666 "data/maps/LittlerootTown/scripts.pory"

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 668 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 6
# 669 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 670 "data/maps/LittlerootTown/scripts.pory"
	return
# 671 "data/maps/LittlerootTown/scripts.pory"

# 672 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 673 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 674 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 675 "data/maps/LittlerootTown/scripts.pory"
	return
# 676 "data/maps/LittlerootTown/scripts.pory"

# 677 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 678 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 680 "data/maps/LittlerootTown/scripts.pory"
	return
# 681 "data/maps/LittlerootTown/scripts.pory"

# 682 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 683 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown/scripts.pory"
	return
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 688 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 689 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 690 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 691 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 692 "data/maps/LittlerootTown/scripts.pory"
	return
# 693 "data/maps/LittlerootTown/scripts.pory"

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 695 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 696 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 697 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 698 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 699 "data/maps/LittlerootTown/scripts.pory"
	return
# 700 "data/maps/LittlerootTown/scripts.pory"

# 701 "data/maps/LittlerootTown/scripts.pory"

# 702 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 703 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 705 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 706 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 707 "data/maps/LittlerootTown/scripts.pory"
	return
# 708 "data/maps/LittlerootTown/scripts.pory"

# 709 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 710 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	return
# 715 "data/maps/LittlerootTown/scripts.pory"

# 716 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 721 "data/maps/LittlerootTown/scripts.pory"
	return
# 722 "data/maps/LittlerootTown/scripts.pory"

# 723 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 727 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 728 "data/maps/LittlerootTown/scripts.pory"
	return
# 729 "data/maps/LittlerootTown/scripts.pory"

# 730 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 731 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 733 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 734 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 735 "data/maps/LittlerootTown/scripts.pory"
	return
# 736 "data/maps/LittlerootTown/scripts.pory"

# 737 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 738 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 739 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 740 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 741 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 742 "data/maps/LittlerootTown/scripts.pory"
	return
# 743 "data/maps/LittlerootTown/scripts.pory"

# 744 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 745 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 746 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 747 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 748 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 749 "data/maps/LittlerootTown/scripts.pory"
	return
# 750 "data/maps/LittlerootTown/scripts.pory"

# 751 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 752 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 753 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 754 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 755 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 756 "data/maps/LittlerootTown/scripts.pory"
	return
# 757 "data/maps/LittlerootTown/scripts.pory"

# 758 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 759 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 760 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 761 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 762 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 763 "data/maps/LittlerootTown/scripts.pory"
	return
# 764 "data/maps/LittlerootTown/scripts.pory"

# 765 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 766 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 767 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 768 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 769 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 770 "data/maps/LittlerootTown/scripts.pory"
	return
# 771 "data/maps/LittlerootTown/scripts.pory"

# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 774 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 775 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 776 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 777 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 778 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 779 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 780 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 781 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 782 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 783 "data/maps/LittlerootTown/scripts.pory"
	return
# 784 "data/maps/LittlerootTown/scripts.pory"

# 785 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 786 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 788 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 789 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 790 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 791 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 792 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 793 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 794 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 795 "data/maps/LittlerootTown/scripts.pory"
	return
# 796 "data/maps/LittlerootTown/scripts.pory"

# 797 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 798 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 799 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 800 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 801 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 802 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 803 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 804 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 805 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 806 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 807 "data/maps/LittlerootTown/scripts.pory"
	return
# 808 "data/maps/LittlerootTown/scripts.pory"

# 809 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 810 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 811 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 812 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 813 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 814 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 815 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 816 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 817 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 818 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 819 "data/maps/LittlerootTown/scripts.pory"
	return
# 820 "data/maps/LittlerootTown/scripts.pory"

# 821 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 822 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 823 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 824 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 825 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 826 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 827 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 828 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 829 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 830 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 831 "data/maps/LittlerootTown/scripts.pory"
	return
# 832 "data/maps/LittlerootTown/scripts.pory"

# 833 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 834 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 835 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 836 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 837 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 838 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 839 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 840 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 841 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 842 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 843 "data/maps/LittlerootTown/scripts.pory"
	return
# 844 "data/maps/LittlerootTown/scripts.pory"

# 845 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 846 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 847 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 848 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 849 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 850 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 851 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 852 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 853 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 854 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 855 "data/maps/LittlerootTown/scripts.pory"
	return
# 856 "data/maps/LittlerootTown/scripts.pory"

# 857 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 858 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 859 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 860 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 861 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 862 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 863 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 864 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 865 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 866 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 867 "data/maps/LittlerootTown/scripts.pory"
	return
# 868 "data/maps/LittlerootTown/scripts.pory"

# 869 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_right
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 879 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 880 "data/maps/LittlerootTown/scripts.pory"

# 881 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 890 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 891 "data/maps/LittlerootTown/scripts.pory"

# 892 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 900 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 901 "data/maps/LittlerootTown/scripts.pory"

# 902 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 904 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 905 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 909 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 910 "data/maps/LittlerootTown/scripts.pory"

# 911 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 912 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 914 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 915 "data/maps/LittlerootTown/scripts.pory"

# 916 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 920 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 921 "data/maps/LittlerootTown/scripts.pory"

# 922 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 923 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 927 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 928 "data/maps/LittlerootTown/scripts.pory"

# 929 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 931 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 932 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 934 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 935 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 936 "data/maps/LittlerootTown/scripts.pory"

# 937 "data/maps/LittlerootTown/scripts.pory"

# 938 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
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
	walk_left
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 947 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 948 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 949 "data/maps/LittlerootTown/scripts.pory"

# 950 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 951 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 952 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 955 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 956 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 957 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 958 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 959 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 960 "data/maps/LittlerootTown/scripts.pory"

# 961 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 963 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 964 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 965 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 968 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 969 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 970 "data/maps/LittlerootTown/scripts.pory"

# 971 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 972 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 973 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 974 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 975 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 976 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 977 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 978 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 979 "data/maps/LittlerootTown/scripts.pory"

# 980 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 981 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 982 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 983 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 984 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 985 "data/maps/LittlerootTown/scripts.pory"

# 986 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 987 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 988 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 989 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 990 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 991 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 992 "data/maps/LittlerootTown/scripts.pory"

# 993 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 994 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 995 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 996 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 997 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 998 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 999 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1000 "data/maps/LittlerootTown/scripts.pory"

# 1001 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1002 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1003 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1004 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1006 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1007 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1008 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1009 "data/maps/LittlerootTown/scripts.pory"

# 1010 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1011 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1012 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1013 "data/maps/LittlerootTown/scripts.pory"

# 1014 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1015 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1016 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1017 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1018 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1019 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1020 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1021 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1022 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1023 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1024 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1025 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1026 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1027 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1028 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1029 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1030 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1031 "data/maps/LittlerootTown/scripts.pory"
	end
# 1032 "data/maps/LittlerootTown/scripts.pory"

# 1033 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1034 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1035 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1036 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1037 "data/maps/LittlerootTown/scripts.pory"
	release
# 1038 "data/maps/LittlerootTown/scripts.pory"
	end
# 1039 "data/maps/LittlerootTown/scripts.pory"

# 1040 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1041 "data/maps/LittlerootTown/scripts.pory"
	.string "…………$"
# 1042 "data/maps/LittlerootTown/scripts.pory"

# 1043 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1044 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Bueno, bueno, {PLAYER}, sabía que\n"
# 1045 "data/maps/LittlerootTown/scripts.pory"
	.string "eras especial!\p"
# 1046 "data/maps/LittlerootTown/scripts.pory"
	.string "Tu gran poder…\p"
# 1047 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Te ha llevado a lograr tanto!\p"
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "Gracias a eso, voy a darte algo…\p"
# 1049 "data/maps/LittlerootTown/scripts.pory"
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
	.string "-sniff sniff- …{PAUSE 5} …{PAUSE 5} …{PAUSE 5}\l"
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
# 203 "data/maps/LittlerootTown/scripts.pory"
	.string "¡LLegamos, amor!\p"
	.string "Lamento haberte dejado en el camión,\n"
	.string "pero no teníamos más dinero…¡Pero\l"
	.string "bueno, esto es Villa Littleroot!\p"
	.string "¿Te gusta? Se me hace que es un lugar\n"
	.string "tranquilo para vivir.\p"
	.string "¡Entremos!$"
