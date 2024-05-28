# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_ARCHIE, 2
# 3 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_OLD_LADY, 3
# 4 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 5 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 6 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_3, 6
# 7 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_4, 7
# 8 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MAXIE, 8
# 9 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_RIVAL, 9
# 10 "data/maps/MtPyre_Summit/scripts.pory"

# 11 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 13 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 14 "data/maps/MtPyre_Summit/scripts.pory"

# 15 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 0, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 17 "data/maps/MtPyre_Summit/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 19 "data/maps/MtPyre_Summit/scripts.pory"

# 20 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 23, 6
# 22 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 22, 6
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 24 "data/maps/MtPyre_Summit/scripts.pory"

# 25 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 30 "data/maps/MtPyre_Summit/scripts.pory"

# 31 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 36 "data/maps/MtPyre_Summit/scripts.pory"

# 37 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 42 "data/maps/MtPyre_Summit/scripts.pory"

# 43 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	addobject LOCALID_RIVAL
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	namebox Unknown
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MyPyre_Summit_Text_WaitImHere
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	hidenamebox
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_RIVAL, MtPyre_Summit_Movement_RivalEnter
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	namebox Rival
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WeCanBeatThem, MSGBOX_INTERRUPT
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	namebox Archie
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieReady, MSGBOX_DEFAULT
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	namebox Maxie
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieReady, MSGBOX_DEFAULT
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	namebox Archie
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieIntro, MSGBOX_DEFAULT
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	hidenamebox
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_EventScript_PrepareMultiBattle
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	checkplayergender
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, MtPyre_Summit_EventScript_MultiBattleFemale
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	multi_2_vs_2 TRAINER_ARCHIE_DOUBLE, MtChimney_Text_TabithaDefeat, TRAINER_ARCHIE_DOUBLE, MtChimney_Text_CourtneyDefeat, TRAINER_RIVAL_HELPS, TRAINER_BACK_PIC_MAY
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MultiBattleContinue
# 76 "data/maps/MtPyre_Summit/scripts.pory"

# 77 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_RivalEnter:
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 86 "data/maps/MtPyre_Summit/scripts.pory"

# 87 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MultiBattleFemale::
# 88 "data/maps/MtPyre_Summit/scripts.pory"
	multi_2_vs_2 TRAINER_ARCHIE_DOUBLE, MtChimney_Text_TabithaDefeat, TRAINER_ARCHIE_DOUBLE, MtChimney_Text_CourtneyDefeat, TRAINER_RIVAL_HELPS, TRAINER_BACK_PIC_MAY
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MultiBattleContinue
# 90 "data/maps/MtPyre_Summit/scripts.pory"

# 91 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MultiBattleContinue::
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 93 "data/maps/MtPyre_Summit/scripts.pory"
    compare VAR_RESULT, B_OUTCOME_LOST
# 94 "data/maps/MtPyre_Summit/scripts.pory"
    goto_if_eq MtPyre_EventScript_LostMultiBattle
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 105 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 117 "data/maps/MtPyre_Summit/scripts.pory"

# 118 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_EventScript_LostMultiBattle::
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 0
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	special SetCB2WhiteOut
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 124 "data/maps/MtPyre_Summit/scripts.pory"

# 125 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_EventScript_PrepareMultiBattle:
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	namebox Rival
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox PleasePick3Mons
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	hidenamebox
# 131 "data/maps/MtPyre_Summit/scripts.pory"
    choose_mons
# 132 "data/maps/MtPyre_Summit/scripts.pory"
    compare VAR_RESULT, 0
# 133 "data/maps/MtPyre_Summit/scripts.pory"
    goto_if_eq script_NeedToChoose3ValidMons
# 134 "data/maps/MtPyre_Summit/scripts.pory"
    return
# 135 "data/maps/MtPyre_Summit/scripts.pory"

# 136 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 23, 13
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 139 "data/maps/MtPyre_Summit/scripts.pory"

# 140 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 141 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 22, 13
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 144 "data/maps/MtPyre_Summit/scripts.pory"

# 145 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 23, 13
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 148 "data/maps/MtPyre_Summit/scripts.pory"

# 149 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 155 "data/maps/MtPyre_Summit/scripts.pory"

# 156 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 160 "data/maps/MtPyre_Summit/scripts.pory"

# 161 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 167 "data/maps/MtPyre_Summit/scripts.pory"

# 168 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 173 "data/maps/MtPyre_Summit/scripts.pory"

# 174 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 177 "data/maps/MtPyre_Summit/scripts.pory"

# 178 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 183 "data/maps/MtPyre_Summit/scripts.pory"

# 184 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 188 "data/maps/MtPyre_Summit/scripts.pory"

# 189 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 193 "data/maps/MtPyre_Summit/scripts.pory"

# 194 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 203 "data/maps/MtPyre_Summit/scripts.pory"

# 204 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 210 "data/maps/MtPyre_Summit/scripts.pory"

# 211 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 214 "data/maps/MtPyre_Summit/scripts.pory"

# 215 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 218 "data/maps/MtPyre_Summit/scripts.pory"

# 219 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 222 "data/maps/MtPyre_Summit/scripts.pory"

# 223 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 232 "data/maps/MtPyre_Summit/scripts.pory"

# 233 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 238 "data/maps/MtPyre_Summit/scripts.pory"

# 239 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 243 "data/maps/MtPyre_Summit/scripts.pory"

# 244 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 248 "data/maps/MtPyre_Summit/scripts.pory"

# 249 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 254 "data/maps/MtPyre_Summit/scripts.pory"

# 255 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 260 "data/maps/MtPyre_Summit/scripts.pory"

# 261 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 266 "data/maps/MtPyre_Summit/scripts.pory"

# 267 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 287 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 297 "data/maps/MtPyre_Summit/scripts.pory"

# 298 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 304 "data/maps/MtPyre_Summit/scripts.pory"

# 305 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 311 "data/maps/MtPyre_Summit/scripts.pory"

# 312 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 318 "data/maps/MtPyre_Summit/scripts.pory"

# 319 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 325 "data/maps/MtPyre_Summit/scripts.pory"

# 326 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 332 "data/maps/MtPyre_Summit/scripts.pory"

# 333 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 339 "data/maps/MtPyre_Summit/scripts.pory"

# 340 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 347 "data/maps/MtPyre_Summit/scripts.pory"

# 348 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 355 "data/maps/MtPyre_Summit/scripts.pory"

# 356 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 363 "data/maps/MtPyre_Summit/scripts.pory"

# 364 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 369 "data/maps/MtPyre_Summit/scripts.pory"

# 370 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 375 "data/maps/MtPyre_Summit/scripts.pory"

# 376 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 384 "data/maps/MtPyre_Summit/scripts.pory"

# 385 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 393 "data/maps/MtPyre_Summit/scripts.pory"

# 394 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 402 "data/maps/MtPyre_Summit/scripts.pory"

# 403 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 411 "data/maps/MtPyre_Summit/scripts.pory"

# 412 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 419 "data/maps/MtPyre_Summit/scripts.pory"

# 420 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 426 "data/maps/MtPyre_Summit/scripts.pory"

# 427 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 433 "data/maps/MtPyre_Summit/scripts.pory"

# 434 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 440 "data/maps/MtPyre_Summit/scripts.pory"

# 441 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 445 "data/maps/MtPyre_Summit/scripts.pory"

# 446 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 450 "data/maps/MtPyre_Summit/scripts.pory"

# 451 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 458 "data/maps/MtPyre_Summit/scripts.pory"

# 459 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 465 "data/maps/MtPyre_Summit/scripts.pory"

# 466 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 472 "data/maps/MtPyre_Summit/scripts.pory"

# 473 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 477 "data/maps/MtPyre_Summit/scripts.pory"

# 478 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 482 "data/maps/MtPyre_Summit/scripts.pory"

# 483 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 487 "data/maps/MtPyre_Summit/scripts.pory"

# 488 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 492 "data/maps/MtPyre_Summit/scripts.pory"

# 493 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those TEAM MAGMA goons got\n"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 497 "data/maps/MtPyre_Summit/scripts.pory"

# 498 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the MAGMAS\n"
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 501 "data/maps/MtPyre_Summit/scripts.pory"

# 502 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 505 "data/maps/MtPyre_Summit/scripts.pory"

# 506 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy TEAM MAGMA.\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 513 "data/maps/MtPyre_Summit/scripts.pory"

# 514 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "TEAM MAGMA first…$"
# 517 "data/maps/MtPyre_Summit/scripts.pory"

# 518 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 521 "data/maps/MtPyre_Summit/scripts.pory"

# 522 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at MT. CHIMNEY.\p"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either TEAM,\n"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 527 "data/maps/MtPyre_Summit/scripts.pory"

# 528 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be TEAM MAGMA…$"
# 531 "data/maps/MtPyre_Summit/scripts.pory"

# 532 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BOSS should have snatched what\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 537 "data/maps/MtPyre_Summit/scripts.pory"

# 538 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join TEAM MAGMA,\l"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our TEAM AQUA!$"
# 544 "data/maps/MtPyre_Summit/scripts.pory"

# 545 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join TEAM AQUA that\n"
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 548 "data/maps/MtPyre_Summit/scripts.pory"

# 549 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 552 "data/maps/MtPyre_Summit/scripts.pory"

# 553 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieReady:
# 554 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ya sabes que lo estoy, Archie.\p"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "¡Prepárense para ser derrotados por el\n"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "poder combinado del Equipo Aqua y\l"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Magma!$"
# 558 "data/maps/MtPyre_Summit/scripts.pory"

# 559 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieReady:
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie, este es el momento, ¿Estás listo?$"
# 561 "data/maps/MtPyre_Summit/scripts.pory"

# 562 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieIntro:
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "¡Deben saber que hacemos un equipo\n"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "formidable!\p"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "¡Dennos una batalla de la que estar\n"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "orgullosos!$"
# 567 "data/maps/MtPyre_Summit/scripts.pory"

# 568 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 587 "data/maps/MtPyre_Summit/scripts.pory"

# 588 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 593 "data/maps/MtPyre_Summit/scripts.pory"

# 594 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two POKéMON…\p"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a POKéMON, but no one knows.$"
# 607 "data/maps/MtPyre_Summit/scripts.pory"

# 608 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 611 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 613 "data/maps/MtPyre_Summit/scripts.pory"

# 614 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient POKéMON…\p"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "POKéMON have life, our world, too,\l"
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient POKéMON have\n"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 624 "data/maps/MtPyre_Summit/scripts.pory"

# 625 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of POKéMON that have passed on…\p"
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of POKéMON\n"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 635 "data/maps/MtPyre_Summit/scripts.pory"

# 636 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 637 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the POKéMON of the land\l"
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the POKéMON of the sea…\p"
# 641 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the land raised\n"
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the sea raised huge\n"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 650 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 653 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 655 "data/maps/MtPyre_Summit/scripts.pory"

# 656 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 657 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 658 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 659 "data/maps/MtPyre_Summit/scripts.pory"

# 660 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 661 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 662 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 663 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 664 "data/maps/MtPyre_Summit/scripts.pory"

# 665 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 666 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 667 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 668 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 669 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 670 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 671 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 672 "data/maps/MtPyre_Summit/scripts.pory"

# 673 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 674 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 675 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 676 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the POKéMON of the land\l"
# 677 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the POKéMON of the sea…\p"
# 678 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the land raised\n"
# 679 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 680 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON of the sea raised huge\n"
# 681 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 682 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 683 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 684 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 685 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the POKéMON of\n"
# 686 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 687 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The POKéMON, shining a vivid green,\n"
# 688 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged POKéMON.\p"
# 689 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green POKéMON\n"
# 690 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
# 691 "data/maps/MtPyre_Summit/scripts.pory"

# 692 "data/maps/MtPyre_Summit/scripts.pory"
MyPyre_Summit_Text_WaitImHere:
# 693 "data/maps/MtPyre_Summit/scripts.pory"
	.string "¡Espera! ¡Ya llegué!$"
# 694 "data/maps/MtPyre_Summit/scripts.pory"

# 695 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WeCanBeatThem:
# 696 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hola, {PLAYER}, lamento haber tardado\n"
# 697 "data/maps/MtPyre_Summit/scripts.pory"
	.string "tanto en llegar, tuve unos problemas y{PAUSE 32}-$"
