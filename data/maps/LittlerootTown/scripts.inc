# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 11 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"

# 19 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 27 "data/maps/LittlerootTown/scripts.pory"

# 28 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 29 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 35 "data/maps/LittlerootTown/scripts.pory"

# 36 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 45 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 55 "data/maps/LittlerootTown/scripts.pory"
	end
# 56 "data/maps/LittlerootTown/scripts.pory"

# 57 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 58 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 59 "data/maps/LittlerootTown/scripts.pory"
	return
# 60 "data/maps/LittlerootTown/scripts.pory"

# 61 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 62 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/LittlerootTown/scripts.pory"
	return
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 66 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MLMSign::
# 70 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_MLMSign
# 71 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 72 "data/maps/LittlerootTown/scripts.pory"
	end
# 73 "data/maps/LittlerootTown/scripts.pory"
	
# 74 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MLMSign::
# 75 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE ESMERALDA$"
# 76 "data/maps/LittlerootTown/scripts.pory"

# 77 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 78 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 79 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 80 "data/maps/LittlerootTown/scripts.pory"
	return
# 81 "data/maps/LittlerootTown/scripts.pory"

# 82 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 83 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 84 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 85 "data/maps/LittlerootTown/scripts.pory"
	return
# 86 "data/maps/LittlerootTown/scripts.pory"

# 87 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 88 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 89 "data/maps/LittlerootTown/scripts.pory"
	return
# 90 "data/maps/LittlerootTown/scripts.pory"

# 91 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 92 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 93 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 2
# 94 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 95 "data/maps/LittlerootTown/scripts.pory"
	return
# 96 "data/maps/LittlerootTown/scripts.pory"

# 97 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 3
# 99 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 100 "data/maps/LittlerootTown/scripts.pory"
	return
# 101 "data/maps/LittlerootTown/scripts.pory"

# 102 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 103 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 104 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 105 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 106 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 107 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 108 "data/maps/LittlerootTown/scripts.pory"
	return
# 109 "data/maps/LittlerootTown/scripts.pory"

# 110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 111 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 9
# 112 "data/maps/LittlerootTown/scripts.pory"
	return
# 113 "data/maps/LittlerootTown/scripts.pory"

# 114 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 115 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 116 "data/maps/LittlerootTown/scripts.pory"
	return
# 117 "data/maps/LittlerootTown/scripts.pory"

# 118 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 119 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 120 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 121 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 122 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 123 "data/maps/LittlerootTown/scripts.pory"

# 124 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 125 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 126 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 127 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 128 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 129 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 130 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 131 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 132 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 133 "data/maps/LittlerootTown/scripts.pory"
	end
# 134 "data/maps/LittlerootTown/scripts.pory"

# 135 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 136 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 137 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 138 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 139 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 140 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 141 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 142 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 143 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 144 "data/maps/LittlerootTown/scripts.pory"
	end
# 145 "data/maps/LittlerootTown/scripts.pory"

# 146 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 147 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 148 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 149 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 150 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 153 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 154 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 155 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 156 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 157 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 158 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 159 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 162 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 163 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 164 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 165 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 169 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 170 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 171 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 172 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 174 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 175 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 176 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 177 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 178 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 179 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 180 "data/maps/LittlerootTown/scripts.pory"
	return
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
Mama:
# 183 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW RED}Mamá$"
# 184 "data/maps/LittlerootTown/scripts.pory"

# 185 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 186 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 187 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 188 "data/maps/LittlerootTown/scripts.pory"

# 189 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 190 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 192 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 193 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 194 "data/maps/LittlerootTown/scripts.pory"

# 195 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 196 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 198 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown/scripts.pory"

# 202 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 203 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 204 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 205 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 206 "data/maps/LittlerootTown/scripts.pory"

# 207 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 208 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 210 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 211 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 213 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 214 "data/maps/LittlerootTown/scripts.pory"

# 215 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 216 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 217 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 218 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 219 "data/maps/LittlerootTown/scripts.pory"

# 220 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 221 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 222 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 223 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 224 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 225 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 226 "data/maps/LittlerootTown/scripts.pory"

# 227 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 228 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 229 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 230 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 231 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 232 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 233 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 234 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 235 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 236 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 237 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 238 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 239 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 240 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 241 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 242 "data/maps/LittlerootTown/scripts.pory"
	end
# 243 "data/maps/LittlerootTown/scripts.pory"

# 244 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 245 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 246 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 247 "data/maps/LittlerootTown/scripts.pory"

# 248 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 249 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 250 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 251 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 252 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 253 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 254 "data/maps/LittlerootTown/scripts.pory"
	end
# 255 "data/maps/LittlerootTown/scripts.pory"

# 256 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 257 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 258 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 259 "data/maps/LittlerootTown/scripts.pory"
	end
# 260 "data/maps/LittlerootTown/scripts.pory"

# 261 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 262 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 263 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 264 "data/maps/LittlerootTown/scripts.pory"
	end
# 265 "data/maps/LittlerootTown/scripts.pory"

# 266 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 267 "data/maps/LittlerootTown/scripts.pory"
	namebox Carlos
# 268 "data/maps/LittlerootTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED SIDE_QUEST_3
# 269 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 270 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 271 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, TRUE
# 272 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq LittlerootTown_EventScript_FatMan_2
# 273 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_5
# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_1:
# 275 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 276 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 277 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 278 "data/maps/LittlerootTown/scripts.pory"
	return
# 279 "data/maps/LittlerootTown/scripts.pory"

# 280 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_2:
# 281 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_MISTERIO, 3
# 282 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ge LittlerootTown_EventScript_FatMan_5
# 283 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_ALEX, LittlerootTown_EventScript_FatMan_11
# 284 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_3
# 285 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 286 "data/maps/LittlerootTown/scripts.pory"

# 287 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_5:
# 288 "data/maps/LittlerootTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE SIDE_QUEST_3
# 289 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, TRUE
# 290 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq LittlerootTown_EventScript_FatMan_9
# 291 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_8:
# 292 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_ALEX, LittlerootTown_EventScript_FatMan_14
# 293 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_3
# 294 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 295 "data/maps/LittlerootTown/scripts.pory"

# 296 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_9:
# 297 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_0
# 298 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_8
# 299 "data/maps/LittlerootTown/scripts.pory"

# 300 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_11:
# 301 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_4
# 302 "data/maps/LittlerootTown/scripts.pory"
	addvar VAR_MISTERIO, 1
# 303 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_ALEX
# 304 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 305 "data/maps/LittlerootTown/scripts.pory"

# 306 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_14:
# 307 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_1
# 308 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_2
# 309 "data/maps/LittlerootTown/scripts.pory"
	addvar VAR_MISTERIO, 1
# 310 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_ALEX
# 311 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_FatMan_1
# 312 "data/maps/LittlerootTown/scripts.pory"

# 313 "data/maps/LittlerootTown/scripts.pory"

# 314 "data/maps/LittlerootTown/scripts.pory"

# 315 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_0:
# 316 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que\n"
# 317 "data/maps/LittlerootTown/scripts.pory"
	.string "paso demasiado tiempo afuera…\p"
# 318 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 319 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 5}Sabes sobre… {PAUSE 5}… {PAUSE 5}…\n"
# 320 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}Aquel día…\p"
# 321 "data/maps/LittlerootTown/scripts.pory"
	.string "-inhala- {PAUSE 2}UUFFF… {PAUSE 5}Bueno, no sé tanto\n"
# 322 "data/maps/LittlerootTown/scripts.pory"
	.string "sobre {COLOR RED}Pokémon que cambian su forma{COLOR DARK_GRAY},\l"
# 323 "data/maps/LittlerootTown/scripts.pory"
	.string "pero sí sospecho que es mejor\l"
# 324 "data/maps/LittlerootTown/scripts.pory"
	.string "dejarlo así. Ya le derrotamos.\p"
# 325 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 326 "data/maps/LittlerootTown/scripts.pory"
	.string "Tal vez, y sólo tal vez,\n"
# 327 "data/maps/LittlerootTown/scripts.pory"
	.string "otra gente sepa más.$"
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_1:
# 330 "data/maps/LittlerootTown/scripts.pory"
	.string "Quizá… {PAUSE 5}Ya sea el momento de\n"
# 331 "data/maps/LittlerootTown/scripts.pory"
	.string "hablar con Birch sobre esto. Ha estado\l"
# 332 "data/maps/LittlerootTown/scripts.pory"
	.string "evitando hacerlo desde entonces, pero\l"
# 333 "data/maps/LittlerootTown/scripts.pory"
	.string "pasa que él dedicó mucho a resolver\l"
# 334 "data/maps/LittlerootTown/scripts.pory"
	.string "este misterio. Quizá, sólo quizá seas\l"
# 335 "data/maps/LittlerootTown/scripts.pory"
	.string "capaz de resolver esto.$"
# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_2:
# 338 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 339 "data/maps/LittlerootTown/scripts.pory"
	.string "Tal vez, y sólo tal vez,\n"
# 340 "data/maps/LittlerootTown/scripts.pory"
	.string "otra gente sepa más.$"
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_3:
# 343 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que\n"
# 344 "data/maps/LittlerootTown/scripts.pory"
	.string "paso demasiado tiempo afuera…\p"
# 345 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 346 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 5}Sabes sobre… {PAUSE 5}… {PAUSE 5}…\n"
# 347 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}Aquel día…\p"
# 348 "data/maps/LittlerootTown/scripts.pory"
	.string "-inhala- {PAUSE 2}UUFFF… {PAUSE 5}Bueno, no sé tanto\n"
# 349 "data/maps/LittlerootTown/scripts.pory"
	.string "sobre {COLOR RED}Pokémon que cambian su forma{COLOR DARK_GRAY},\l"
# 350 "data/maps/LittlerootTown/scripts.pory"
	.string "pero sí sospecho que es mejor\l"
# 351 "data/maps/LittlerootTown/scripts.pory"
	.string "dejarlo así. Ya le derrotamos.\p"
# 352 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 353 "data/maps/LittlerootTown/scripts.pory"
	.string "Aunque tal vez, y sólo tal vez, tenga\n"
# 354 "data/maps/LittlerootTown/scripts.pory"
	.string "una idea. Hay un Pokémon de una lejana\l"
# 355 "data/maps/LittlerootTown/scripts.pory"
	.string "región que es capaz de cambiar su\l"
# 356 "data/maps/LittlerootTown/scripts.pory"
	.string "forma, pero no sé cómo funciona.\l"
# 357 "data/maps/LittlerootTown/scripts.pory"
	.string "Quizás…\p"
# 358 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\n"
# 359 "data/maps/LittlerootTown/scripts.pory"
	.string "No, no podría haber causado tanto daño\l"
# 360 "data/maps/LittlerootTown/scripts.pory"
	.string "de ser así…$"
# 361 "data/maps/LittlerootTown/scripts.pory"

# 362 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_4:
# 363 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Hola, {PLAYER}!\p"
# 364 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces… {PAUSE 2}¿Era un {COLOR RED}Zoroark{COLOR DARK_GRAY}?\p"
# 365 "data/maps/LittlerootTown/scripts.pory"
	.string "Eso significa que mis teorías\n"
# 366 "data/maps/LittlerootTown/scripts.pory"
	.string "eran correctas…\l"
# 367 "data/maps/LittlerootTown/scripts.pory"
	.string "Entonces las ilusiones de\l"
# 368 "data/maps/LittlerootTown/scripts.pory"
	.string "Zoroark son así de fuertes…$"
# 369 "data/maps/LittlerootTown/scripts.pory"

# 370 "data/maps/LittlerootTown/scripts.pory"

# 371 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 372 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 373 "data/maps/LittlerootTown/scripts.pory"
	end
# 374 "data/maps/LittlerootTown/scripts.pory"

# 375 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 376 "data/maps/LittlerootTown/scripts.pory"
	lock
# 377 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 378 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 379 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 380 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 381 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 382 "data/maps/LittlerootTown/scripts.pory"
	release
# 383 "data/maps/LittlerootTown/scripts.pory"
	end
# 384 "data/maps/LittlerootTown/scripts.pory"

# 385 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 386 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 387 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 388 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 392 "data/maps/LittlerootTown/scripts.pory"
	release
# 393 "data/maps/LittlerootTown/scripts.pory"
	end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 396 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 397 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_YouSavedBirch_Text_0
# 398 "data/maps/LittlerootTown/scripts.pory"
	addmoney 10
# 399 "data/maps/LittlerootTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST SIDE_QUEST_3
# 400 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_YouSavedBirch_Text_1
# 401 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 402 "data/maps/LittlerootTown/scripts.pory"
	return
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch_Text_0:
# 406 "data/maps/LittlerootTown/scripts.pory"
	.string "¡LO SALVASTE! ¡GRACIAS!\p"
# 407 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Toma esto como agradecimiento!$"
# 408 "data/maps/LittlerootTown/scripts.pory"

# 409 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch_Text_1:
# 410 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Gracias!$"
# 411 "data/maps/LittlerootTown/scripts.pory"

# 412 "data/maps/LittlerootTown/scripts.pory"

# 413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 414 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 415 "data/maps/LittlerootTown/scripts.pory"
	release
# 416 "data/maps/LittlerootTown/scripts.pory"
	end
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 419 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 420 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 421 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 422 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 423 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 424 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 425 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 426 "data/maps/LittlerootTown/scripts.pory"
	end
# 427 "data/maps/LittlerootTown/scripts.pory"

# 428 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 429 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 430 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 431 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 432 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 433 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 434 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 435 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 436 "data/maps/LittlerootTown/scripts.pory"
	return
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 439 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 440 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 441 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 442 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 443 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 444 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 445 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 446 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 447 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 448 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 449 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 450 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 451 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 452 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 453 "data/maps/LittlerootTown/scripts.pory"

# 454 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 455 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 456 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 457 "data/maps/LittlerootTown/scripts.pory"

# 458 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 459 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 460 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 462 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 463 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 464 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 465 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 466 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 467 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 468 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 469 "data/maps/LittlerootTown/scripts.pory"

# 470 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 471 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 472 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 473 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 474 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 477 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 478 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 479 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 480 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 481 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 482 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 483 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 484 "data/maps/LittlerootTown/scripts.pory"
	end
# 485 "data/maps/LittlerootTown/scripts.pory"

# 486 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 487 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 488 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 489 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 490 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 491 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 492 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 493 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 494 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 495 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 496 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 497 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 498 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 499 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 502 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 503 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 504 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 505 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 506 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 507 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 508 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 509 "data/maps/LittlerootTown/scripts.pory"

# 510 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 511 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 512 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 513 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 515 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 517 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 518 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 519 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 521 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 522 "data/maps/LittlerootTown/scripts.pory"
	end
# 523 "data/maps/LittlerootTown/scripts.pory"

# 524 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 525 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 526 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 527 "data/maps/LittlerootTown/scripts.pory"
	end
# 528 "data/maps/LittlerootTown/scripts.pory"

# 529 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 530 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 531 "data/maps/LittlerootTown/scripts.pory"
	end
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 534 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 535 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 536 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 538 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 539 "data/maps/LittlerootTown/scripts.pory"
	end
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 542 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 543 "data/maps/LittlerootTown/scripts.pory"
	return
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 546 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 547 "data/maps/LittlerootTown/scripts.pory"
	return
# 548 "data/maps/LittlerootTown/scripts.pory"

# 549 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 550 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 551 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 552 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 553 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 554 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 555 "data/maps/LittlerootTown/scripts.pory"
	end
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 558 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 559 "data/maps/LittlerootTown/scripts.pory"
	return
# 560 "data/maps/LittlerootTown/scripts.pory"

# 561 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 562 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 563 "data/maps/LittlerootTown/scripts.pory"
	return
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 566 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 567 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 568 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 569 "data/maps/LittlerootTown/scripts.pory"
	end
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 572 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 573 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 574 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 575 "data/maps/LittlerootTown/scripts.pory"
	end
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 578 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 579 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 580 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 581 "data/maps/LittlerootTown/scripts.pory"
	end
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 584 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 585 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 586 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 587 "data/maps/LittlerootTown/scripts.pory"
	end
# 588 "data/maps/LittlerootTown/scripts.pory"

# 589 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 590 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 591 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 592 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 593 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 594 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 595 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 596 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 597 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 598 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 599 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 600 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 601 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 602 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 603 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 604 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 607 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 608 "data/maps/LittlerootTown/scripts.pory"
	end
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 611 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 6
# 612 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 613 "data/maps/LittlerootTown/scripts.pory"
	return
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 617 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 618 "data/maps/LittlerootTown/scripts.pory"
	return
# 619 "data/maps/LittlerootTown/scripts.pory"

# 620 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 621 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 622 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 623 "data/maps/LittlerootTown/scripts.pory"
	return
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 627 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/LittlerootTown/scripts.pory"
	return
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 631 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 632 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 633 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 634 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 635 "data/maps/LittlerootTown/scripts.pory"
	return
# 636 "data/maps/LittlerootTown/scripts.pory"

# 637 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 638 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 639 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 640 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 641 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 642 "data/maps/LittlerootTown/scripts.pory"
	return
# 643 "data/maps/LittlerootTown/scripts.pory"

# 644 "data/maps/LittlerootTown/scripts.pory"

# 645 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 646 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	return
# 651 "data/maps/LittlerootTown/scripts.pory"

# 652 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 653 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 655 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 657 "data/maps/LittlerootTown/scripts.pory"
	return
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 663 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 664 "data/maps/LittlerootTown/scripts.pory"
	return
# 665 "data/maps/LittlerootTown/scripts.pory"

# 666 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 667 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	return
# 672 "data/maps/LittlerootTown/scripts.pory"

# 673 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 674 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	return
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown/scripts.pory"
	return
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 692 "data/maps/LittlerootTown/scripts.pory"
	return
# 693 "data/maps/LittlerootTown/scripts.pory"

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 695 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 697 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 699 "data/maps/LittlerootTown/scripts.pory"
	return
# 700 "data/maps/LittlerootTown/scripts.pory"

# 701 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 702 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 703 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 704 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 705 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 706 "data/maps/LittlerootTown/scripts.pory"
	return
# 707 "data/maps/LittlerootTown/scripts.pory"

# 708 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 709 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 710 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 711 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 712 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 713 "data/maps/LittlerootTown/scripts.pory"
	return
# 714 "data/maps/LittlerootTown/scripts.pory"

# 715 "data/maps/LittlerootTown/scripts.pory"

# 716 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 721 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 723 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 724 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 726 "data/maps/LittlerootTown/scripts.pory"
	return
# 727 "data/maps/LittlerootTown/scripts.pory"

# 728 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 729 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 730 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 731 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 733 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 734 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 735 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 736 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 738 "data/maps/LittlerootTown/scripts.pory"
	return
# 739 "data/maps/LittlerootTown/scripts.pory"

# 740 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 741 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 742 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 743 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 744 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 745 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 746 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 747 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 748 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 749 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 750 "data/maps/LittlerootTown/scripts.pory"
	return
# 751 "data/maps/LittlerootTown/scripts.pory"

# 752 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 753 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 754 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 755 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 756 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 757 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 758 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 759 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 760 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 761 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 762 "data/maps/LittlerootTown/scripts.pory"
	return
# 763 "data/maps/LittlerootTown/scripts.pory"

# 764 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 765 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 766 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 767 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 769 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 770 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 771 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 772 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 774 "data/maps/LittlerootTown/scripts.pory"
	return
# 775 "data/maps/LittlerootTown/scripts.pory"

# 776 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 777 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 778 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 779 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 780 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 781 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 782 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 783 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 784 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 786 "data/maps/LittlerootTown/scripts.pory"
	return
# 787 "data/maps/LittlerootTown/scripts.pory"

# 788 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 789 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 790 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 791 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 793 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 794 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 795 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 796 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 798 "data/maps/LittlerootTown/scripts.pory"
	return
# 799 "data/maps/LittlerootTown/scripts.pory"

# 800 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 801 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 802 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 803 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 804 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 805 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 806 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 807 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 808 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 810 "data/maps/LittlerootTown/scripts.pory"
	return
# 811 "data/maps/LittlerootTown/scripts.pory"

# 812 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 822 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 823 "data/maps/LittlerootTown/scripts.pory"

# 824 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 833 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 834 "data/maps/LittlerootTown/scripts.pory"

# 835 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 843 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 844 "data/maps/LittlerootTown/scripts.pory"

# 845 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 852 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 853 "data/maps/LittlerootTown/scripts.pory"

# 854 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 857 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 858 "data/maps/LittlerootTown/scripts.pory"

# 859 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 863 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 864 "data/maps/LittlerootTown/scripts.pory"

# 865 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 870 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 871 "data/maps/LittlerootTown/scripts.pory"

# 872 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 878 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 879 "data/maps/LittlerootTown/scripts.pory"

# 880 "data/maps/LittlerootTown/scripts.pory"

# 881 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 891 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 892 "data/maps/LittlerootTown/scripts.pory"

# 893 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 902 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 903 "data/maps/LittlerootTown/scripts.pory"

# 904 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 905 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 912 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 913 "data/maps/LittlerootTown/scripts.pory"

# 914 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 920 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 921 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 927 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 928 "data/maps/LittlerootTown/scripts.pory"

# 929 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 931 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 932 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 934 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 935 "data/maps/LittlerootTown/scripts.pory"

# 936 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 937 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 938 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 939 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 940 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 941 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 942 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 943 "data/maps/LittlerootTown/scripts.pory"

# 944 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 947 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 948 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 949 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 950 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 951 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 952 "data/maps/LittlerootTown/scripts.pory"

# 953 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 955 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 956 "data/maps/LittlerootTown/scripts.pory"

# 957 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 958 "data/maps/LittlerootTown/scripts.pory"
	lock
# 959 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 960 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 961 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 962 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 963 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 964 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 965 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 966 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 967 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 968 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 969 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 970 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 971 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 972 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 973 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 974 "data/maps/LittlerootTown/scripts.pory"
	end
# 975 "data/maps/LittlerootTown/scripts.pory"

# 976 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 977 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 978 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 979 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 980 "data/maps/LittlerootTown/scripts.pory"
	release
# 981 "data/maps/LittlerootTown/scripts.pory"
	end
# 982 "data/maps/LittlerootTown/scripts.pory"

# 983 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 984 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 985 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 986 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 987 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_MACH_BIKE, 1
# 988 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_NOT_DOUBLE_BIKE
# 989 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 990 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 991 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 992 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 993 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 994 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 995 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 996 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 997 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 998 "data/maps/LittlerootTown/scripts.pory"
	return
# 999 "data/maps/LittlerootTown/scripts.pory"

# 1000 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "¡LLegamos, amor!\p"
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "Lamento haberte dejado en el camión,\n"
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "pero no teníamos más dinero…\p"
# 1004 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Pero bueno, esto es Villa Littleroot!\n"
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "¿Te gusta? Se me hace que es un lugar\l"
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "tranquilo para vivir.\p"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Entremos!$"
# 1008 "data/maps/LittlerootTown/scripts.pory"

# 1009 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Alto, {PLAYER}!$"
# 1011 "data/maps/LittlerootTown/scripts.pory"

# 1012 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1013 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Cariño! {PAUSE 2}¿Ya le hablaste al Profe?\p"
# 1014 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Ah, ya veo que te dio un Pokémon!\p"
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "Y es el mismo que tu padre eligió…\n"
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "-sniff sniff- …{PAUSE 5} …{PAUSE 5} …{PAUSE 5}\l"
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "Perdón por llorar pero… {PAUSE 5}Estoy tan\l"
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "orgullosa de ti, mi pequeñ{ITOITA}…\p"
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "Pero bueno… {PAUSE 5}No puedo evitar que\n"
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "crezcas, así que… {PAUSE 5}Toma esto, mi amor.$"
# 1021 "data/maps/LittlerootTown/scripts.pory"

# 1022 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "Amor, esa Bici es especial. Es\n"
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "capaz de {COLOR BLUE}cambiar de función{COLOR DARK_GRAY} si tocas el\l"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "botón R. Pero parece estar rota…\p¡En Ciudad Mauville seguro la podrán reparar!$"
# 1026 "data/maps/LittlerootTown/scripts.pory"

# 1027 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\n"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Ya tienes un Pokémon…\n"
# 1031 "data/maps/LittlerootTown/scripts.pory"
	.string "Estoy tan, tan orgullosa de ti, mi\l"
# 1032 "data/maps/LittlerootTown/scripts.pory"
	.string "pequeñ{OA}…\p"
# 1033 "data/maps/LittlerootTown/scripts.pory"
	.string "Si pasa algo, acá está mami para darte\n"
# 1034 "data/maps/LittlerootTown/scripts.pory"
	.string "amor y cariño.\p"
# 1035 "data/maps/LittlerootTown/scripts.pory"
	.string "Cuídate mucho, mi amor…\n"
# 1036 "data/maps/LittlerootTown/scripts.pory"
	.string "Voy a extrañarte…$"
# 1037 "data/maps/LittlerootTown/scripts.pory"

# 1038 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan_Text_5:
# 1039 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que\n"
# 1040 "data/maps/LittlerootTown/scripts.pory"
	.string "paso demasiado tiempo afuera, pero es\l"
# 1041 "data/maps/LittlerootTown/scripts.pory"
	.string "que… ¡Acá es mejor!\p"
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "El aire es fresco y limpio, la naturaleza\n"
# 1043 "data/maps/LittlerootTown/scripts.pory"
	.string "es bella…\p"
# 1044 "data/maps/LittlerootTown/scripts.pory"
	.string "Aunque entiendo que debería pasar\n"
# 1045 "data/maps/LittlerootTown/scripts.pory"
	.string "más tiempo con él dentro de casa…$"
# 1046 "data/maps/LittlerootTown/scripts.pory"

# 1047 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "El Profesor Birch se la pasa todo el día,\n"
# 1049 "data/maps/LittlerootTown/scripts.pory"
	.string "o bien en el Laboratorio, o afuera de la\l"
# 1050 "data/maps/LittlerootTown/scripts.pory"
	.string "Villa estudiando…\p"
# 1051 "data/maps/LittlerootTown/scripts.pory"
	.string "¿Cuándo está con su familia ese tipo?$"
# 1052 "data/maps/LittlerootTown/scripts.pory"

# 1053 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1054 "data/maps/LittlerootTown/scripts.pory"
	.string "¡NOOOOOOOOOOOOOOOOO\n"
# 1055 "data/maps/LittlerootTown/scripts.pory"
	.string "OOOOOOOOOOOOOOOOOOO\l"
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "OOOOOOOOOOOOOOOOOOO!\l"
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "¡VETE!$"
# 1058 "data/maps/LittlerootTown/scripts.pory"

# 1059 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "¡NO!.$"
# 1061 "data/maps/LittlerootTown/scripts.pory"

# 1062 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "¡EY EY!\p"
# 1064 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Están atacando al Profe! ¡Por favor,\n"
# 1065 "data/maps/LittlerootTown/scripts.pory"
	.string "rescátalo!$"
# 1066 "data/maps/LittlerootTown/scripts.pory"

# 1067 "data/maps/LittlerootTown/scripts.pory"

# 1068 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1069 "data/maps/LittlerootTown/scripts.pory"
	.string "¿VAS A ATRAPAR POKÉMON? ¡GENIAL!$"
# 1070 "data/maps/LittlerootTown/scripts.pory"

# 1071 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1072 "data/maps/LittlerootTown/scripts.pory"
	.string "VILLA LITTLEROOT\n"
# 1073 "data/maps/LittlerootTown/scripts.pory"
	.string "“Una Villa bonita.”$"
# 1074 "data/maps/LittlerootTown/scripts.pory"

# 1075 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1076 "data/maps/LittlerootTown/scripts.pory"
	.string "LABORATORIO DEL PROFE BIRCH$"
# 1077 "data/maps/LittlerootTown/scripts.pory"

# 1078 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1079 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE {PLAYER}$"
# 1080 "data/maps/LittlerootTown/scripts.pory"

# 1081 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1082 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DEL PROFE BIRCH$"
# 1083 "data/maps/LittlerootTown/scripts.pory"

# 1084 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1085 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Bueno, bueno, {PLAYER}, sabía que\n"
# 1086 "data/maps/LittlerootTown/scripts.pory"
	.string "eras especial!\p"
# 1087 "data/maps/LittlerootTown/scripts.pory"
	.string "Tu gran poder…\p"
# 1088 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Te ha llevado a lograr tanto!\p"
# 1089 "data/maps/LittlerootTown/scripts.pory"
	.string "Gracias a eso, voy a darte algo…\p"
# 1090 "data/maps/LittlerootTown/scripts.pory"
	.string "Ven a mi Laboratorio…$"
