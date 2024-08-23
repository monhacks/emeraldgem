# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 34
# 5 "data/maps/Route104/scripts.pory"

# 6 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 7 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 8 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 9 "data/maps/Route104/scripts.pory"
	.byte 0
# 10 "data/maps/Route104/scripts.pory"

# 11 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 12 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 13 "data/maps/Route104/scripts.pory"
	.2byte 0
# 14 "data/maps/Route104/scripts.pory"

# 15 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 16 "data/maps/Route104/scripts.pory"
	lockall
# 17 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 18 "data/maps/Route104/scripts.pory"
	end
# 19 "data/maps/Route104/scripts.pory"

# 20 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 21 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 22 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 23 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 24 "data/maps/Route104/scripts.pory"
	end
# 25 "data/maps/Route104/scripts.pory"

# 26 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 27 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 28 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 29 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 30 "data/maps/Route104/scripts.pory"
	return
# 31 "data/maps/Route104/scripts.pory"

# 32 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 33 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 34 "data/maps/Route104/scripts.pory"
	return
# 35 "data/maps/Route104/scripts.pory"

# 36 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 37 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 38 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 39 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 40 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 41 "data/maps/Route104/scripts.pory"
	return
# 42 "data/maps/Route104/scripts.pory"

# 43 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 44 "data/maps/Route104/scripts.pory"
	return
# 45 "data/maps/Route104/scripts.pory"

# 46 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 47 "data/maps/Route104/scripts.pory"
	lockall
# 48 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 49 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 50 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 52 "data/maps/Route104/scripts.pory"

# 53 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 54 "data/maps/Route104/scripts.pory"
	lockall
# 55 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 56 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 57 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 58 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 59 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route104/scripts.pory"
	delay 10
# 61 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 62 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 63 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 64 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 66 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route104/scripts.pory"
	delay 20
# 68 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 69 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 70 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 71 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 72 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 74 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 76 "data/maps/Route104/scripts.pory"

# 77 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 78 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 79 "data/maps/Route104/scripts.pory"
	checkplayergender
# 80 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 81 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 82 "data/maps/Route104/scripts.pory"
	return
# 83 "data/maps/Route104/scripts.pory"

# 84 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 85 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 86 "data/maps/Route104/scripts.pory"
	return
# 87 "data/maps/Route104/scripts.pory"

# 88 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 89 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 90 "data/maps/Route104/scripts.pory"
	return
# 91 "data/maps/Route104/scripts.pory"

# 92 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 93 "data/maps/Route104/scripts.pory"
	checkplayergender
# 94 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 95 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 96 "data/maps/Route104/scripts.pory"
	end
# 97 "data/maps/Route104/scripts.pory"

# 98 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 99 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 100 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 101 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 102 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 103 "data/maps/Route104/scripts.pory"
	closemessage
# 104 "data/maps/Route104/scripts.pory"
	delay 30
# 105 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 106 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 107 "data/maps/Route104/scripts.pory"
	waitfanfare
# 108 "data/maps/Route104/scripts.pory"
	closemessage
# 109 "data/maps/Route104/scripts.pory"
	delay 30
# 110 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 111 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 112 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 113 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 114 "data/maps/Route104/scripts.pory"
	closemessage
# 115 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 117 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 119 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_DEFAULT
# 120 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleMay
# 121 "data/maps/Route104/scripts.pory"
	releaseall
# 122 "data/maps/Route104/scripts.pory"
	end
# 123 "data/maps/Route104/scripts.pory"

# 124 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 125 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 126 "data/maps/Route104/scripts.pory"
	step_end
# 127 "data/maps/Route104/scripts.pory"

# 128 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 129 "data/maps/Route104/scripts.pory"
	walk_down
# 130 "data/maps/Route104/scripts.pory"
	face_right
# 131 "data/maps/Route104/scripts.pory"
	step_end
# 132 "data/maps/Route104/scripts.pory"

# 133 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 134 "data/maps/Route104/scripts.pory"
	delay_4
# 135 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 136 "data/maps/Route104/scripts.pory"
	step_end
# 137 "data/maps/Route104/scripts.pory"

# 138 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 139 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_NPC
# 140 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleMay
# 141 "data/maps/Route104/scripts.pory"
	releaseall
# 142 "data/maps/Route104/scripts.pory"
	end
# 143 "data/maps/Route104/scripts.pory"

# 144 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 145 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 146 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 147 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 148 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 149 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 150 "data/maps/Route104/scripts.pory"
	end
# 151 "data/maps/Route104/scripts.pory"

# 152 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 153 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 154 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 155 "data/maps/Route104/scripts.pory"
	releaseall
# 156 "data/maps/Route104/scripts.pory"
	end
# 157 "data/maps/Route104/scripts.pory"

# 158 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 159 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 160 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 161 "data/maps/Route104/scripts.pory"
	return
# 162 "data/maps/Route104/scripts.pory"

# 163 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 164 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 165 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 166 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 167 "data/maps/Route104/scripts.pory"
	end
# 168 "data/maps/Route104/scripts.pory"

# 169 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 170 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 171 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 172 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 173 "data/maps/Route104/scripts.pory"
	end
# 174 "data/maps/Route104/scripts.pory"

# 175 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 176 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 177 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 178 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 179 "data/maps/Route104/scripts.pory"
	end
# 180 "data/maps/Route104/scripts.pory"

# 181 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 182 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 183 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 184 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 185 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 186 "data/maps/Route104/scripts.pory"
	closemessage
# 187 "data/maps/Route104/scripts.pory"
	delay 30
# 188 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 189 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 190 "data/maps/Route104/scripts.pory"
	waitfanfare
# 191 "data/maps/Route104/scripts.pory"
	closemessage
# 192 "data/maps/Route104/scripts.pory"
	delay 30
# 193 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 194 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 195 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 196 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 197 "data/maps/Route104/scripts.pory"
	closemessage
# 198 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 200 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 202 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_DEFAULT
# 203 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleBrendan
# 204 "data/maps/Route104/scripts.pory"
	releaseall
# 205 "data/maps/Route104/scripts.pory"
	end
# 206 "data/maps/Route104/scripts.pory"

# 207 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 208 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_DEFAULT
# 209 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleBrendan
# 210 "data/maps/Route104/scripts.pory"
	releaseall
# 211 "data/maps/Route104/scripts.pory"
	end
# 212 "data/maps/Route104/scripts.pory"

# 213 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 214 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 215 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 216 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 217 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 218 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 219 "data/maps/Route104/scripts.pory"
	end
# 220 "data/maps/Route104/scripts.pory"

# 221 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 222 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 223 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 224 "data/maps/Route104/scripts.pory"
	releaseall
# 225 "data/maps/Route104/scripts.pory"
	end
# 226 "data/maps/Route104/scripts.pory"

# 227 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 228 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 229 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 230 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 231 "data/maps/Route104/scripts.pory"
	end
# 232 "data/maps/Route104/scripts.pory"

# 233 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 234 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 235 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 236 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 237 "data/maps/Route104/scripts.pory"
	end
# 238 "data/maps/Route104/scripts.pory"

# 239 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 240 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 241 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 242 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 243 "data/maps/Route104/scripts.pory"
	end
# 244 "data/maps/Route104/scripts.pory"

# 245 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 246 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 247 "data/maps/Route104/scripts.pory"
	walk_down
# 248 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 249 "data/maps/Route104/scripts.pory"
	step_end
# 250 "data/maps/Route104/scripts.pory"

# 251 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 252 "data/maps/Route104/scripts.pory"
	walk_down
# 253 "data/maps/Route104/scripts.pory"
	step_end
# 254 "data/maps/Route104/scripts.pory"

# 255 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 256 "data/maps/Route104/scripts.pory"
	lock
# 257 "data/maps/Route104/scripts.pory"
	faceplayer
# 258 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 259 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 260 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 261 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 262 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 263 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 264 "data/maps/Route104/scripts.pory"
	release
# 265 "data/maps/Route104/scripts.pory"
	end
# 266 "data/maps/Route104/scripts.pory"

# 267 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 268 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 269 "data/maps/Route104/scripts.pory"
	release
# 270 "data/maps/Route104/scripts.pory"
	end
# 271 "data/maps/Route104/scripts.pory"

# 272 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 273 "data/maps/Route104/scripts.pory"
	lock
# 274 "data/maps/Route104/scripts.pory"
	faceplayer
# 275 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 276 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 277 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 278 "data/maps/Route104/scripts.pory"
	giveitem ITEM_RED_SCARF
# 279 "data/maps/Route104/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 280 "data/maps/Route104/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 281 "data/maps/Route104/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 282 "data/maps/Route104/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 283 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 284 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 285 "data/maps/Route104/scripts.pory"
	release
# 286 "data/maps/Route104/scripts.pory"
	end
# 287 "data/maps/Route104/scripts.pory"

# 288 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 289 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 290 "data/maps/Route104/scripts.pory"
	release
# 291 "data/maps/Route104/scripts.pory"
	end
# 292 "data/maps/Route104/scripts.pory"

# 293 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 294 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 295 "data/maps/Route104/scripts.pory"
	end
# 296 "data/maps/Route104/scripts.pory"

# 297 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 298 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 299 "data/maps/Route104/scripts.pory"
	end
# 300 "data/maps/Route104/scripts.pory"

# 301 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 302 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 303 "data/maps/Route104/scripts.pory"
	end
# 304 "data/maps/Route104/scripts.pory"

# 305 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 306 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 307 "data/maps/Route104/scripts.pory"
	end
# 308 "data/maps/Route104/scripts.pory"

# 309 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 310 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 315 "data/maps/Route104/scripts.pory"
	end
# 316 "data/maps/Route104/scripts.pory"

# 317 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 318 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 319 "data/maps/Route104/scripts.pory"
	end
# 320 "data/maps/Route104/scripts.pory"

# 321 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 322 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 323 "data/maps/Route104/scripts.pory"
	end
# 324 "data/maps/Route104/scripts.pory"

# 325 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 326 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 327 "data/maps/Route104/scripts.pory"
	end
# 328 "data/maps/Route104/scripts.pory"

# 329 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 330 "data/maps/Route104/scripts.pory"
	lock
# 331 "data/maps/Route104/scripts.pory"
	faceplayer
# 332 "data/maps/Route104/scripts.pory"
	checkitem ITEM_TM09
# 333 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_ReceivedBulletSeed
# 334 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 335 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM09
# 336 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 337 "data/maps/Route104/scripts.pory"
	release
# 338 "data/maps/Route104/scripts.pory"
	end
# 339 "data/maps/Route104/scripts.pory"

# 340 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 341 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 342 "data/maps/Route104/scripts.pory"
	release
# 343 "data/maps/Route104/scripts.pory"
	end
# 344 "data/maps/Route104/scripts.pory"

# 345 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 346 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 347 "data/maps/Route104/scripts.pory"
	end
# 348 "data/maps/Route104/scripts.pory"

# 349 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 350 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 351 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 352 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 353 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 355 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 356 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 358 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 359 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 360 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 361 "data/maps/Route104/scripts.pory"
	end
# 362 "data/maps/Route104/scripts.pory"

# 363 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 364 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 365 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 366 "data/maps/Route104/scripts.pory"
	delay 32
# 367 "data/maps/Route104/scripts.pory"
	fadescreen FADE_TO_BLACK
# 368 "data/maps/Route104/scripts.pory"
	warp MAP_DEWFORD_TOWN, 1, 1
# 369 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 371 "data/maps/Route104/scripts.pory"

# 372 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 373 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 374 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 375 "data/maps/Route104/scripts.pory"
	delay 32
# 376 "data/maps/Route104/scripts.pory"
	fadescreen FADE_TO_BLACK
# 377 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 378 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 379 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 380 "data/maps/Route104/scripts.pory"
	waitmessage
# 381 "data/maps/Route104/scripts.pory"
	delay 30
# 382 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 383 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 384 "data/maps/Route104/scripts.pory"
	waitfanfare
# 385 "data/maps/Route104/scripts.pory"
	closemessage
# 386 "data/maps/Route104/scripts.pory"
	delay 30
# 387 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 388 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 389 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 390 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 391 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 393 "data/maps/Route104/scripts.pory"

# 394 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 395 "data/maps/Route104/scripts.pory"
	delay 50
# 396 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 397 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 399 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 400 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 401 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 403 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 404 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 405 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 406 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 407 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 409 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 410 "data/maps/Route104/scripts.pory"
	warp MAP_DEWFORD_TOWN, 12, 8
# 411 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 412 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 413 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 414 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 415 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 416 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 417 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 418 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 419 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 420 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 421 "data/maps/Route104/scripts.pory"
	end
# 422 "data/maps/Route104/scripts.pory"

# 423 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 424 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 425 "data/maps/Route104/scripts.pory"
	releaseall
# 426 "data/maps/Route104/scripts.pory"
	end
# 427 "data/maps/Route104/scripts.pory"

# 428 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 429 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 430 "data/maps/Route104/scripts.pory"
	releaseall
# 431 "data/maps/Route104/scripts.pory"
	end
# 432 "data/maps/Route104/scripts.pory"

# 433 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 434 "data/maps/Route104/scripts.pory"
	walk_down
# 435 "data/maps/Route104/scripts.pory"
	walk_down
# 436 "data/maps/Route104/scripts.pory"
	walk_down
# 437 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 438 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 439 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 440 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 442 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 443 "data/maps/Route104/scripts.pory"
	step_end
# 444 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCallsOld:
# 445 "data/maps/Route104/scripts.pory"
	walk_down
# 446 "data/maps/Route104/scripts.pory"
	walk_down
# 447 "data/maps/Route104/scripts.pory"
	walk_down
# 448 "data/maps/Route104/scripts.pory"
	walk_down
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 450 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 451 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 452 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 455 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 456 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 459 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 460 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 461 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 462 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 463 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 464 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 465 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 466 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 467 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 468 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 469 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 470 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 474 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 477 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 478 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 479 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 480 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 481 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 482 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 542 "data/maps/Route104/scripts.pory"
	step_end
# 543 "data/maps/Route104/scripts.pory"

# 544 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 569 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 570 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 571 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 572 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 573 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 574 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 575 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 576 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 595 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 596 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 597 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 598 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 599 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 600 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 601 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 602 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 603 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 604 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 605 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 606 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 607 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 608 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 609 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 610 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 611 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 612 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 613 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 614 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 615 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 616 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 617 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 619 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 620 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 621 "data/maps/Route104/scripts.pory"
	walk_right
# 622 "data/maps/Route104/scripts.pory"
	walk_right
# 623 "data/maps/Route104/scripts.pory"
	walk_down
# 624 "data/maps/Route104/scripts.pory"
	walk_down
# 625 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 626 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 627 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 628 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 629 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 630 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 631 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 632 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 633 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 635 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 636 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 637 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 638 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 639 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 640 "data/maps/Route104/scripts.pory"
	walk_down
# 641 "data/maps/Route104/scripts.pory"
	walk_down
# 642 "data/maps/Route104/scripts.pory"
	step_end
# 643 "data/maps/Route104/scripts.pory"

# 644 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 645 "data/maps/Route104/scripts.pory"
	walk_down
# 646 "data/maps/Route104/scripts.pory"
	walk_down
# 647 "data/maps/Route104/scripts.pory"
	walk_down
# 648 "data/maps/Route104/scripts.pory"
	walk_down
# 649 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 650 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 651 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 652 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 667 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 668 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 669 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 670 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 677 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 678 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 679 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 680 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 681 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 682 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 746 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 766 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 767 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 768 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 769 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 770 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 771 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 772 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 773 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 792 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 793 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 794 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 795 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 796 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 797 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 798 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 799 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 800 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 801 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 802 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 803 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 804 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 805 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 806 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 807 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 808 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 809 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 810 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 811 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 812 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 813 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 814 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 815 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 816 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 817 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 818 "data/maps/Route104/scripts.pory"
	walk_right
# 819 "data/maps/Route104/scripts.pory"
	walk_right
# 820 "data/maps/Route104/scripts.pory"
	walk_down
# 821 "data/maps/Route104/scripts.pory"
	walk_down
# 822 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 823 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 824 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 825 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 826 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 827 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 828 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 829 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 830 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 831 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 832 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 833 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 834 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 835 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 836 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 837 "data/maps/Route104/scripts.pory"
	walk_down
# 838 "data/maps/Route104/scripts.pory"
	walk_down
# 839 "data/maps/Route104/scripts.pory"
	step_end
# 840 "data/maps/Route104/scripts.pory"

# 841 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 842 "data/maps/Route104/scripts.pory"
	walk_left
# 843 "data/maps/Route104/scripts.pory"
	walk_down
# 844 "data/maps/Route104/scripts.pory"
	walk_down
# 845 "data/maps/Route104/scripts.pory"
	step_end
# 846 "data/maps/Route104/scripts.pory"

# 847 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 848 "data/maps/Route104/scripts.pory"
	walk_down
# 849 "data/maps/Route104/scripts.pory"
	step_end
# 850 "data/maps/Route104/scripts.pory"

# 851 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 852 "data/maps/Route104/scripts.pory"
	walk_down
# 853 "data/maps/Route104/scripts.pory"
	walk_left
# 854 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 855 "data/maps/Route104/scripts.pory"
	step_end
# 856 "data/maps/Route104/scripts.pory"

# 857 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 858 "data/maps/Route104/scripts.pory"
	walk_down
# 859 "data/maps/Route104/scripts.pory"
	walk_down
# 860 "data/maps/Route104/scripts.pory"
	step_end
# 861 "data/maps/Route104/scripts.pory"

# 862 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 863 "data/maps/Route104/scripts.pory"
	walk_down
# 864 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 865 "data/maps/Route104/scripts.pory"
	step_end
# 866 "data/maps/Route104/scripts.pory"

# 867 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 868 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 869 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 870 "data/maps/Route104/scripts.pory"
	end
# 871 "data/maps/Route104/scripts.pory"

# 872 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 873 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 874 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 875 "data/maps/Route104/scripts.pory"
	end
# 876 "data/maps/Route104/scripts.pory"

# 877 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 878 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 879 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 880 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 881 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 882 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 883 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 884 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 885 "data/maps/Route104/scripts.pory"
	release
# 886 "data/maps/Route104/scripts.pory"
	end
# 887 "data/maps/Route104/scripts.pory"

# 888 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 889 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 890 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 891 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 892 "data/maps/Route104/scripts.pory"
	release
# 893 "data/maps/Route104/scripts.pory"
	end
# 894 "data/maps/Route104/scripts.pory"

# 895 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 896 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 897 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 898 "data/maps/Route104/scripts.pory"
	release
# 899 "data/maps/Route104/scripts.pory"
	end
# 900 "data/maps/Route104/scripts.pory"

# 901 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 902 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 903 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 904 "data/maps/Route104/scripts.pory"
	release
# 905 "data/maps/Route104/scripts.pory"
	end
# 906 "data/maps/Route104/scripts.pory"

# 907 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 908 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 909 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 910 "data/maps/Route104/scripts.pory"
	release
# 911 "data/maps/Route104/scripts.pory"
	end
# 912 "data/maps/Route104/scripts.pory"

# 913 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 914 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 915 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 916 "data/maps/Route104/scripts.pory"
	end
# 917 "data/maps/Route104/scripts.pory"

# 918 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 919 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 920 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 921 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 922 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 923 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 924 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 925 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 926 "data/maps/Route104/scripts.pory"
	release
# 927 "data/maps/Route104/scripts.pory"
	end
# 928 "data/maps/Route104/scripts.pory"

# 929 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 930 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 931 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 932 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 933 "data/maps/Route104/scripts.pory"
	release
# 934 "data/maps/Route104/scripts.pory"
	end
# 935 "data/maps/Route104/scripts.pory"

# 936 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 937 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 938 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 939 "data/maps/Route104/scripts.pory"
	release
# 940 "data/maps/Route104/scripts.pory"
	end
# 941 "data/maps/Route104/scripts.pory"

# 942 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 943 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 944 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 945 "data/maps/Route104/scripts.pory"
	release
# 946 "data/maps/Route104/scripts.pory"
	end
# 947 "data/maps/Route104/scripts.pory"

# 948 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 949 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 950 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 951 "data/maps/Route104/scripts.pory"
	release
# 952 "data/maps/Route104/scripts.pory"
	end
# 953 "data/maps/Route104/scripts.pory"

# 954 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 955 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 956 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 957 "data/maps/Route104/scripts.pory"
	end
# 958 "data/maps/Route104/scripts.pory"

# 959 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 960 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 961 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 962 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 963 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 964 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 965 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 966 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 967 "data/maps/Route104/scripts.pory"
	release
# 968 "data/maps/Route104/scripts.pory"
	end
# 969 "data/maps/Route104/scripts.pory"

# 970 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 971 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 972 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 973 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 974 "data/maps/Route104/scripts.pory"
	release
# 975 "data/maps/Route104/scripts.pory"
	end
# 976 "data/maps/Route104/scripts.pory"

# 977 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 978 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 979 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 980 "data/maps/Route104/scripts.pory"
	release
# 981 "data/maps/Route104/scripts.pory"
	end
# 982 "data/maps/Route104/scripts.pory"

# 983 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 984 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 985 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 986 "data/maps/Route104/scripts.pory"
	release
# 987 "data/maps/Route104/scripts.pory"
	end
# 988 "data/maps/Route104/scripts.pory"

# 989 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 990 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 991 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 992 "data/maps/Route104/scripts.pory"
	release
# 993 "data/maps/Route104/scripts.pory"
	end
# 994 "data/maps/Route104/scripts.pory"

# 995 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 996 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 997 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 998 "data/maps/Route104/scripts.pory"
	end
# 999 "data/maps/Route104/scripts.pory"

# 1000 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1001 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1002 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1003 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1004 "data/maps/Route104/scripts.pory"
	release
# 1005 "data/maps/Route104/scripts.pory"
	end
# 1006 "data/maps/Route104/scripts.pory"

# 1007 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1008 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1009 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1010 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1011 "data/maps/Route104/scripts.pory"
	release
# 1012 "data/maps/Route104/scripts.pory"
	end
# 1013 "data/maps/Route104/scripts.pory"

# 1014 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1015 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1016 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1017 "data/maps/Route104/scripts.pory"
	end
# 1018 "data/maps/Route104/scripts.pory"

# 1019 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1020 "data/maps/Route104/scripts.pory"
	.string "El Sr. Briney solía ser un\nmarinero sin miedo al mar.\lNi la peor tormenta lo asustaba.$"
# 1021 "data/maps/Route104/scripts.pory"

# 1022 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1023 "data/maps/Route104/scripts.pory"
	.string "El mar, ¿eh?\p"
# 1024 "data/maps/Route104/scripts.pory"
	.string "Me pregunto cómo se verá\n"
# 1025 "data/maps/Route104/scripts.pory"
	.string "el fondo del mar.$"
# 1026 "data/maps/Route104/scripts.pory"

# 1027 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1028 "data/maps/Route104/scripts.pory"
	.string "¿Sabias que hasta hace poco se creía\n"
# 1029 "data/maps/Route104/scripts.pory"
	.string "que {COLOR BLUE}los Pokémon sin género no podían\l"
# 1030 "data/maps/Route104/scripts.pory"
	.string "usar Atracción{COLOR DARK_GRAY}?\p"
# 1031 "data/maps/Route104/scripts.pory"
	.string "Ahora parece tonto creer eso, pero\n"
# 1032 "data/maps/Route104/scripts.pory"
	.string "{COLOR BLUE}pueden enamorar a\l"
# 1033 "data/maps/Route104/scripts.pory"
	.string "cualquier Pokémon{COLOR DARK_GRAY}.\p"
# 1034 "data/maps/Route104/scripts.pory"
	.string "Me pregunto… ¿Qué otros\n"
# 1035 "data/maps/Route104/scripts.pory"
	.string "descubrimientos con respecto a los\l"
# 1036 "data/maps/Route104/scripts.pory"
	.string "{COLOR BLUE}estados{COLOR DARK_GRAY} se habrá hecho…?$"
# 1037 "data/maps/Route104/scripts.pory"

# 1038 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1039 "data/maps/Route104/scripts.pory"
	.string "Siempre que puedas, usa {COLOR BLUE}Ladrón{COLOR DARK_GRAY} contra\n"
# 1040 "data/maps/Route104/scripts.pory"
	.string "sus Pokémon para {COLOR BLUE}robar sus objetos\l"
# 1041 "data/maps/Route104/scripts.pory"
	.string "equipados{COLOR DARK_GRAY}, pues nunca sabes cuándo\l"
# 1042 "data/maps/Route104/scripts.pory"
	.string "tendrán objetos raros o muy valiosos.$"
# 1043 "data/maps/Route104/scripts.pory"

# 1044 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1045 "data/maps/Route104/scripts.pory"
	.string "¿Sabías que hay personas que compran\n"
# 1046 "data/maps/Route104/scripts.pory"
	.string "objetos valiosos por un alto precio?\p"
# 1047 "data/maps/Route104/scripts.pory"
	.string "Esas personas se llaman coleccionistas,\n"
# 1048 "data/maps/Route104/scripts.pory"
	.string "y creo que hay 5 en toda Hoenn, así que\l"
# 1049 "data/maps/Route104/scripts.pory"
	.string "búscalos bien, ¡Quizá puedas volverte\l"
# 1050 "data/maps/Route104/scripts.pory"
	.string "millonari{OA} ese día!$"
# 1051 "data/maps/Route104/scripts.pory"

# 1052 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1053 "data/maps/Route104/scripts.pory"
	.string "¡Me encanta ponerme muchas semillas en\n"
# 1054 "data/maps/Route104/scripts.pory"
	.string "la boca y escupirlas rápidamente!\p"
# 1055 "data/maps/Route104/scripts.pory"
	.string "Mi hermanita bebé se ríe mucho cuando\n"
# 1056 "data/maps/Route104/scripts.pory"
	.string "lo hago, así que me grabé en un DVD y se\l"
# 1057 "data/maps/Route104/scripts.pory"
	.string "lo enseñé a mi Pokémon de esa forma, y\l"
# 1058 "data/maps/Route104/scripts.pory"
	.string "después de eso, ¡Todos querían ese\l"
# 1059 "data/maps/Route104/scripts.pory"
	.string "DVD!\p"
# 1060 "data/maps/Route104/scripts.pory"
	.string "Toma, acá tienes una muestra.$"
# 1061 "data/maps/Route104/scripts.pory"

# 1062 "data/maps/Route104/scripts.pory"

# 1063 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1064 "data/maps/Route104/scripts.pory"
	.string "Me pregunto si podré tener novia\n"
# 1065 "data/maps/Route104/scripts.pory"
	.string "gracias a este invento…$"
# 1066 "data/maps/Route104/scripts.pory"

# 1067 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1068 "data/maps/Route104/scripts.pory"
	.string "¡La Floristería tiene una nueva Tienda\n"
# 1069 "data/maps/Route104/scripts.pory"
	.string "que te vende diferentes tipos de Baya\l"
# 1070 "data/maps/Route104/scripts.pory"
	.string "dependieno de tus Medallas!\p"
# 1071 "data/maps/Route104/scripts.pory"
	.string "¡Muy útil sobretodo si te gustan los\n"
# 1072 "data/maps/Route104/scripts.pory"
	.string "concursos, o quieres ganar con\l"
# 1073 "data/maps/Route104/scripts.pory"
	.string "desventaja de tipos!\p"
# 1074 "data/maps/Route104/scripts.pory"
	.string "Como agradecimiento por escuchar,\n"
# 1075 "data/maps/Route104/scripts.pory"
	.string "¡Toma estas!$"
# 1076 "data/maps/Route104/scripts.pory"

# 1077 "data/maps/Route104/scripts.pory"

# 1078 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1079 "data/maps/Route104/scripts.pory"
	.string "¡La Floristería tiene una nueva Tienda\n"
# 1080 "data/maps/Route104/scripts.pory"
	.string "que te vende diferentes tipos de Baya\l"
# 1081 "data/maps/Route104/scripts.pory"
	.string "dependieno de tus Medallas!\p"
# 1082 "data/maps/Route104/scripts.pory"
	.string "¡Muy útil!$"
# 1083 "data/maps/Route104/scripts.pory"

# 1084 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1085 "data/maps/Route104/scripts.pory"
	.string "CASA DEL SR. BRINEY$"
# 1086 "data/maps/Route104/scripts.pory"

# 1087 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1088 "data/maps/Route104/scripts.pory"
	.string "RUTA 1O4\n"
# 1089 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} CIUDAD PETALBURG$"
# 1090 "data/maps/Route104/scripts.pory"

# 1091 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1092 "data/maps/Route104/scripts.pory"
	.string "RUTA 1O4\n"
# 1093 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} CIUDAD RUSTBORO$"
# 1094 "data/maps/Route104/scripts.pory"

# 1095 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1096 "data/maps/Route104/scripts.pory"
	.string "FLORISTERÍA$"
# 1097 "data/maps/Route104/scripts.pory"

# 1098 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1099 "data/maps/Route104/scripts.pory"
	.string "¡PISTAS PARA ENTRENADORES!\p"
# 1100 "data/maps/Route104/scripts.pory"
	.string "Los Pokémon salvajes de las Rutas\n"
# 1101 "data/maps/Route104/scripts.pory"
	.string "cambian dependiendo si es de día o de\l"
# 1102 "data/maps/Route104/scripts.pory"
	.string "noche, ¡Intenta revisar cada Ruta\l"
# 1103 "data/maps/Route104/scripts.pory"
	.string "durante distintas horas del día!$"
# 1104 "data/maps/Route104/scripts.pory"

# 1105 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1106 "data/maps/Route104/scripts.pory"
	.string "Ah, hola, {PLAYER}.\n"
# 1107 "data/maps/Route104/scripts.pory"
	.string "¿También te dieron el PC Portátil y el\l"
# 1108 "data/maps/Route104/scripts.pory"
	.string "PokéNav?\l"
# 1109 "data/maps/Route104/scripts.pory"
	.string "Creí que eran raros de conseguir…\p"
# 1110 "data/maps/Route104/scripts.pory"
	.string "¡Pero bueno! Ya que estamos, añádeme a\n"
# 1111 "data/maps/Route104/scripts.pory"
	.string "tu lista de contactos para… Bueno…\l"
# 1112 "data/maps/Route104/scripts.pory"
	.string "Porque sí, lo que sea.$"
# 1113 "data/maps/Route104/scripts.pory"

# 1114 "data/maps/Route104/scripts.pory"

# 1115 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1116 "data/maps/Route104/scripts.pory"
	.string "{RIVAL} se registró sol{AO} en tu\n"
# 1117 "data/maps/Route104/scripts.pory"
	.string "PokeNav.$"
# 1118 "data/maps/Route104/scripts.pory"

# 1119 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1120 "data/maps/Route104/scripts.pory"
	.string "Ah, sí, necesito saber, ¿Cómo va tu\n"
# 1121 "data/maps/Route104/scripts.pory"
	.string "Pokédex?\n"
# 1122 "data/maps/Route104/scripts.pory"
	.string "Seguro que no tan bien como la mía.$"
# 1123 "data/maps/Route104/scripts.pory"

# 1124 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1125 "data/maps/Route104/scripts.pory"
	.string "La mía está increíble, ¿Sabías?\p"
# 1126 "data/maps/Route104/scripts.pory"
	.string "Además, algo me dijo mi Papá sobre las\n"
# 1127 "data/maps/Route104/scripts.pory"
	.string "Dexes, que podemos {COLOR GREEN}intercambiar los\l"
# 1128 "data/maps/Route104/scripts.pory"
	.string "datos de la Pokédex{COLOR DARK_GRAY} para poder\l"
# 1129 "data/maps/Route104/scripts.pory"
	.string "completarla más rápido.\p"
# 1130 "data/maps/Route104/scripts.pory"
	.string "Realmente no quiero necesitar tu ayuda\n"
# 1131 "data/maps/Route104/scripts.pory"
	.string "para esto, y también dudo que hacerlo\l"
# 1132 "data/maps/Route104/scripts.pory"
	.string "vaya a registrarme nuevos Pokémon. Así\l"
# 1133 "data/maps/Route104/scripts.pory"
	.string "que hagamos una cosa:\p"
# 1134 "data/maps/Route104/scripts.pory"
	.string "Si me ganas en una Batalla Pokémon, voy\n"
# 1135 "data/maps/Route104/scripts.pory"
	.string "a intercambiarte los datos.$"
# 1136 "data/maps/Route104/scripts.pory"

# 1137 "data/maps/Route104/scripts.pory"

# 1138 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1139 "data/maps/Route104/scripts.pory"
	.string "¡PELEA!$"
# 1140 "data/maps/Route104/scripts.pory"

# 1141 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1142 "data/maps/Route104/scripts.pory"
	.string "¡Ganaré!$"
# 1143 "data/maps/Route104/scripts.pory"

# 1144 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1145 "data/maps/Route104/scripts.pory"
	.string "………………………………………………\n"
# 1146 "data/maps/Route104/scripts.pory"
	.string "No… Puedo derrotarte…\l"
# 1147 "data/maps/Route104/scripts.pory"
	.string "Pero si he… Considerado todo…$"
# 1148 "data/maps/Route104/scripts.pory"

# 1149 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1150 "data/maps/Route104/scripts.pory"
	.string "Pues, como dije, ahora intercambiemos\n"
# 1151 "data/maps/Route104/scripts.pory"
	.string "datos de nuestras Pokédex.\n"
# 1152 "data/maps/Route104/scripts.pory"
	.string "Préstamela un poco.$"
# 1153 "data/maps/Route104/scripts.pory"

# 1154 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1155 "data/maps/Route104/scripts.pory"
	.string "Ah, hola, {PLAYER}.\n"
# 1156 "data/maps/Route104/scripts.pory"
	.string "¿También te dieron el PC Portátil y el\l"
# 1157 "data/maps/Route104/scripts.pory"
	.string "PokéNav?\l"
# 1158 "data/maps/Route104/scripts.pory"
	.string "Creí que eran raros de conseguir…\p"
# 1159 "data/maps/Route104/scripts.pory"
	.string "¡Pero bueno! Ya que estamos, añádeme a\n"
# 1160 "data/maps/Route104/scripts.pory"
	.string "tu lista de contactos para… Bueno…\l"
# 1161 "data/maps/Route104/scripts.pory"
	.string "Porque sí, lo que sea.$"
# 1162 "data/maps/Route104/scripts.pory"

# 1163 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1164 "data/maps/Route104/scripts.pory"
	.string "{RIVAL} se registró sol{AO} en tu\n"
# 1165 "data/maps/Route104/scripts.pory"
	.string "PokeNav.$"
# 1166 "data/maps/Route104/scripts.pory"

# 1167 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1168 "data/maps/Route104/scripts.pory"
	.string "Ah, sí, necesito saber, ¿Cómo va tu\n"
# 1169 "data/maps/Route104/scripts.pory"
	.string "Pokédex?\n"
# 1170 "data/maps/Route104/scripts.pory"
	.string "Seguro que no tan bien como la mía.$"
# 1171 "data/maps/Route104/scripts.pory"

# 1172 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1173 "data/maps/Route104/scripts.pory"
	.string "La mía está increíble, ¿Sabías?\p"
# 1174 "data/maps/Route104/scripts.pory"
	.string "Además, algo me dijo mi Papá sobre las\n"
# 1175 "data/maps/Route104/scripts.pory"
	.string "Dexes, que podemos {COLOR GREEN}intercambiar los\l"
# 1176 "data/maps/Route104/scripts.pory"
	.string "datos de la Pokédex{COLOR DARK_GRAY} para poder\l"
# 1177 "data/maps/Route104/scripts.pory"
	.string "completarla más rápido.\p"
# 1178 "data/maps/Route104/scripts.pory"
	.string "Realmente no quiero necesitar tu ayuda\n"
# 1179 "data/maps/Route104/scripts.pory"
	.string "para esto, y también dudo que hacerlo\l"
# 1180 "data/maps/Route104/scripts.pory"
	.string "vaya a registrarme nuevos Pokémon. Así\l"
# 1181 "data/maps/Route104/scripts.pory"
	.string "que hagamos una cosa:\p"
# 1182 "data/maps/Route104/scripts.pory"
	.string "Si me ganas en una Batalla Pokémon, voy\n"
# 1183 "data/maps/Route104/scripts.pory"
	.string "a intercambiarte los datos.$"
# 1184 "data/maps/Route104/scripts.pory"

# 1185 "data/maps/Route104/scripts.pory"

# 1186 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1187 "data/maps/Route104/scripts.pory"
	.string "¡Perderás!$"
# 1188 "data/maps/Route104/scripts.pory"

# 1189 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1190 "data/maps/Route104/scripts.pory"
	.string "Pero…\n"
# 1191 "data/maps/Route104/scripts.pory"
	.string "He capturado tantos Pokémon.$"
# 1192 "data/maps/Route104/scripts.pory"

# 1193 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1194 "data/maps/Route104/scripts.pory"
	.string "Pues, como dije, ahora intercambiemos\n"
# 1195 "data/maps/Route104/scripts.pory"
	.string "datos de nuestras Pokédex.\n"
# 1196 "data/maps/Route104/scripts.pory"
	.string "Préstamela un poco.$"
