AquaHideout_B2F_MapScripts::
# 6 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 5
	goto_if_eq AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 6
	goto_if_ge AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	return

AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


AquaHideout_B2F_EventScript_MattNoticePlayerUp::
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_EventScript_MattNoticePlayer
	return


AquaHideout_B2F_EventScript_MattNoticePlayerDown::
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_EventScript_MattNoticePlayer
	return


AquaHideout_B2F_EventScript_MattNoticePlayer::
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement 6, AquaHideout_B2F_Movement_WinonaGetNear
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Winona
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_0, MSGBOX_INTERRUPT
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	hidenamebox
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 64
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement 1, AquaHideout_B2F_Movement_MattGetInWay
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Matt
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_1
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Archie
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_2, MSGBOX_INTERRUPT
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	hidenamebox
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Winona
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_3
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Matt
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_4
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Winona
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_5
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	hidenamebox
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_gt AquaHideout_B2F_EventScript_MattNoticePlayer_2
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_lt AquaHideout_B2F_EventScript_MattNoticePlayer_3
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	call AquaHideout_B2F_EventScript_WinonaPrepare
AquaHideout_B2F_EventScript_MattNoticePlayer_1:
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	end

AquaHideout_B2F_EventScript_MattNoticePlayer_2:
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq AquaHideout_B2F_EventScript_MattNoticePlayer_8
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_B2F_Movement_PlayerHelpDown
AquaHideout_B2F_EventScript_MattNoticePlayer_7:
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Matt
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_6
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Archie
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_7
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	call AquaHideout_B2F_EventScript_WinonaPrepare
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	multi_fixed_2_vs_1 TRAINER_WINONA_AQUA_HIDEOUT, AquaHideout_B2F_EventScript_MattNoticePlayer_Text_8, TRAINER_MATT_PARTNER, TRAINER_BACK_PIC_RED
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_eq MtChimney_EventScript_LostMultiBattle
	goto AquaHideout_B2F_EventScript_MattNoticePlayer_1

AquaHideout_B2F_EventScript_MattNoticePlayer_3:
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq AquaHideout_B2F_EventScript_MattNoticePlayer_12
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_B2F_Movement_PlayerAgainstDown
AquaHideout_B2F_EventScript_MattNoticePlayer_11:
# 79 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Matt
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_9
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Archie
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_10
# 84 "data/maps/AquaHideout_B2F/scripts.pory"
	call AquaHideout_B2F_EventScript_WinonaPrepare
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	multi_fixed_2_vs_1 TRAINER_MATT, AquaHideout_B2F_EventScript_MattNoticePlayer_Text_11, TRAINER_WINONA_AQUA_HIDEOUT, TRAINER_BACK_PIC_RED
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_eq MtChimney_EventScript_LostMultiBattle
	goto AquaHideout_B2F_EventScript_MattNoticePlayer_1

AquaHideout_B2F_EventScript_MattNoticePlayer_8:
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_B2F_Movement_PlayerHelpUp
	goto AquaHideout_B2F_EventScript_MattNoticePlayer_7

AquaHideout_B2F_EventScript_MattNoticePlayer_12:
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_B2F_Movement_PlayerAgainstUp
	goto AquaHideout_B2F_EventScript_MattNoticePlayer_11


AquaHideout_B2F_EventScript_LostMultiBattle::
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	special SetCB2WhiteOut
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	end


AquaHideout_B2F_EventScript_WinonaPrepare::
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	namebox Winona
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_WinonaPrepare_Text_0
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_TO_WHITE
	return


# 118 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_WinonaGetNear:
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
	step_end

# 122 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_MattGetInWay:
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_fast_down
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_right
	step_end

# 127 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_PlayerHelpUp:
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_down
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_8
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_right
	step_end

# 136 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_PlayerHelpDown:
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_down
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_8
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_right
	step_end

# 145 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_PlayerAgainstUp:
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 149 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_down
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_8
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 154 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_PlayerAgainstDown:
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_down
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_8
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 163 "data/maps/AquaHideout_B2F/scripts.pory"

# 164 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_MATT,   1
# 165 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_SUBMARINE,   1
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_ARCHIE, 4
# 167 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_WINONA, 6
# 168 "data/maps/AquaHideout_B2F/scripts.pory"

# 169 "data/maps/AquaHideout_B2F/scripts.pory"

# 170 "data/maps/AquaHideout_B2F/scripts.pory"

# 171 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 172 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 173 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 174 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 175 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 176 "data/maps/AquaHideout_B2F/scripts.pory"

# 177 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 178 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 179 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 180 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 181 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 182 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 183 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 184 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 185 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 186 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 187 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 188 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 189 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 190 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 191 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 192 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 194 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 195 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 196 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 198 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 199 "data/maps/AquaHideout_B2F/scripts.pory"

# 200 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 201 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 203 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 204 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 205 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 206 "data/maps/AquaHideout_B2F/scripts.pory"

# 207 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 208 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 209 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 210 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 211 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 212 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 213 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 214 "data/maps/AquaHideout_B2F/scripts.pory"

# 215 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 216 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 217 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 219 "data/maps/AquaHideout_B2F/scripts.pory"

# 220 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 221 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 222 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 223 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 224 "data/maps/AquaHideout_B2F/scripts.pory"

# 225 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 226 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 227 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 229 "data/maps/AquaHideout_B2F/scripts.pory"

# 230 "data/maps/AquaHideout_B2F/scripts.pory"

# 231 "data/maps/AquaHideout_B2F/scripts.pory"

# 232 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
# 234 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Got here already, did you?\n"
# 235 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 236 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But this is it!\p"
# 237 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm a cut above the GRUNTS you've seen\n"
# 238 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "so far.\p"
# 239 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm not stalling for time.\n"
# 240 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 241 "data/maps/AquaHideout_B2F/scripts.pory"

# 242 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 243 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 244 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 245 "data/maps/AquaHideout_B2F/scripts.pory"

# 246 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 247 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 248 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 249 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 250 "data/maps/AquaHideout_B2F/scripts.pory"

# 251 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 252 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 253 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our BOSS has already gone on his way to\n"
# 254 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 255 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 256 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 257 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "LILYCOVE.\p"
# 258 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 259 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 260 "data/maps/AquaHideout_B2F/scripts.pory"

# 261 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 262 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 263 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 264 "data/maps/AquaHideout_B2F/scripts.pory"

# 265 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 266 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 267 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 268 "data/maps/AquaHideout_B2F/scripts.pory"

# 269 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 270 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 271 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 272 "data/maps/AquaHideout_B2F/scripts.pory"

# 273 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 274 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 275 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 276 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 277 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 278 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 279 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 280 "data/maps/AquaHideout_B2F/scripts.pory"

# 281 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 282 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 283 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 284 "data/maps/AquaHideout_B2F/scripts.pory"

# 285 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 286 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 287 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 288 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 289 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 290 "data/maps/AquaHideout_B2F/scripts.pory"

# 291 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 292 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 293 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 294 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 295 "data/maps/AquaHideout_B2F/scripts.pory"

# 296 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 297 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 298 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 299 "data/maps/AquaHideout_B2F/scripts.pory"

# 300 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 301 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 302 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_0:
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Hola, Archie! ¡Hola, Matt!\n"
	.string "¿Qué ha sido de us{PAUSE 20}-$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_1:
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡No te acerques más! ¡O voy a tener que\n"
	.string "atacarte!$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_2:
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt, esto no es ne{PAUSE 20}-$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_3:
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Al lado de Archie como siempre, ¿No,\n"
	.string "Matt?\n"
	.string "Puedo luchar contigo luego, ahora debo\l"
	.string "hablar con Archie.$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_4:
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡No voy a dejarte que le hagas nada a\n"
	.string "Archie! ¡Apártate!$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_5:
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Qué lástima, no quería tener que luchar,\n"
	.string "pero…$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_6:
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¿Nos vas a ayudar?$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_7:
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Será sólo un{A} niñ{OA}, pero ha estado de\n"
	.string "nuestro lado antes… Aún así, Matt, esto\l"
	.string "no es necesario…$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_8:
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Impresionante!\nNo me esperaba menos\pdel Equipo Aqua.$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_9:
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Así que estás en nuetra contra después\n"
	.string "de todo…$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_10:
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "No me sorprende… Aún así, Matt, esto no\n"
	.string "es necesario…$"

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_11:
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡N-no! Archie, te defraudé…$"

AquaHideout_B2F_EventScript_WinonaPrepare_Text_0:
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Prepárense!$"
