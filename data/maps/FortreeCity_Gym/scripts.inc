# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
.set LOCALID_WINONA, 1
# 3 "data/maps/FortreeCity_Gym/scripts.pory"

# 4 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 6 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 7 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 8 "data/maps/FortreeCity_Gym/scripts.pory"

# 9 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 11 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 12 "data/maps/FortreeCity_Gym/scripts.pory"

# 13 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 15 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 16 "data/maps/FortreeCity_Gym/scripts.pory"

# 17 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 20 "data/maps/FortreeCity_Gym/scripts.pory"

# 21 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitem ITEM_TM40
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 29 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 30 "data/maps/FortreeCity_Gym/scripts.pory"

# 31 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	playse SE_PIN
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	applymovement LOCALID_WINONA, Common_Movement_ExclamationMark
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmovement 0
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	applymovement LOCALID_WINONA, Common_Movement_FaceAwayPlayer
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmovement 0
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	namebox Winona
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaMessage
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	applymovement LOCALID_WINONA, Common_Movement_FacePlayer
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmovement 0
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	namebox Winona
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaHasToGo
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	hidenamebox
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	switch VAR_FACING
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	case DIR_NORTH, FortreeCity_Gym_EventScript_GetOut
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaOut
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 69 "data/maps/FortreeCity_Gym/scripts.pory"

# 70 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaOut::
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	applymovement LOCALID_WINONA, FortreeCity_Gym_Movement_WinonaOut
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 8
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmovement 0
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_WINONA_GYM
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 78 "data/maps/FortreeCity_Gym/scripts.pory"

# 79 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GetOut::
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FortreeCity_Gym_Movement_GetOut
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaOut
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 84 "data/maps/FortreeCity_Gym/scripts.pory"

# 85 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Movement_GetOut::
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_left
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	face_right
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	step_end
# 89 "data/maps/FortreeCity_Gym/scripts.pory"

# 90 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Movement_WinonaOut::
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_down
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_down
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_down
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	jump_down
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_down
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_down
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_down
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_down
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	walk_down
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	jump_down
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	step_end
# 102 "data/maps/FortreeCity_Gym/scripts.pory"

# 103 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM40
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 109 "data/maps/FortreeCity_Gym/scripts.pory"

# 110 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM40
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 115 "data/maps/FortreeCity_Gym/scripts.pory"

# 116 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 120 "data/maps/FortreeCity_Gym/scripts.pory"

# 121 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 125 "data/maps/FortreeCity_Gym/scripts.pory"

# 126 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 130 "data/maps/FortreeCity_Gym/scripts.pory"

# 131 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 135 "data/maps/FortreeCity_Gym/scripts.pory"

# 136 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 140 "data/maps/FortreeCity_Gym/scripts.pory"

# 141 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 145 "data/maps/FortreeCity_Gym/scripts.pory"

# 146 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 150 "data/maps/FortreeCity_Gym/scripts.pory"

# 151 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 158 "data/maps/FortreeCity_Gym/scripts.pory"

# 159 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 163 "data/maps/FortreeCity_Gym/scripts.pory"

# 164 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 169 "data/maps/FortreeCity_Gym/scripts.pory"

# 170 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 175 "data/maps/FortreeCity_Gym/scripts.pory"

# 176 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 180 "data/maps/FortreeCity_Gym/scripts.pory"

# 181 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 185 "data/maps/FortreeCity_Gym/scripts.pory"

# 186 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"

# 197 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"

# 201 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"

# 205 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"

# 215 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 220 "data/maps/FortreeCity_Gym/scripts.pory"

# 221 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"

# 225 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 230 "data/maps/FortreeCity_Gym/scripts.pory"

# 231 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"

# 236 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"

# 240 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"

# 245 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"

# 249 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 251 "data/maps/FortreeCity_Gym/scripts.pory"

# 252 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"

# 256 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"

# 262 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"

# 266 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"

# 271 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"

# 276 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"

# 279 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"

# 284 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"

# 294 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"

# 301 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"

# 305 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"

# 314 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Its speed…\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"

# 320 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"

# 324 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 327 "data/maps/FortreeCity_Gym/scripts.pory"

# 328 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"

# 331 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"

# 336 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 341 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 345 "data/maps/FortreeCity_Gym/scripts.pory"

# 346 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 347 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 348 "data/maps/FortreeCity_Gym/scripts.pory"

# 349 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 350 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 351 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"

# 356 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 357 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 361 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 362 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 365 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 366 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 367 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
# 369 "data/maps/FortreeCity_Gym/scripts.pory"

# 370 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaMessage:
# 371 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¿Qué? Estoy ocupada, ¿No lo notas?\n"
# 372 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "... ... ... ...Comprendo.\l"
# 373 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sí, estaré allí cuanto antes.\p"
# 374 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Hasta entonces, hagan lo que acordamos.$"
# 375 "data/maps/FortreeCity_Gym/scripts.pory"

# 376 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaHasToGo:
# 377 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Lo lamento, {PLAYER}, pero tengo que\n"
# 378 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "irme ahora. Tengo muchas responsabilidades\l"
# 379 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "que atender. Cuídate mucho, {PLAYER}.$"
