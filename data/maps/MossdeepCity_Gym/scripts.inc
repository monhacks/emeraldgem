# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"

# 5 "data/maps/MossdeepCity_Gym/scripts.pory"

# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitem ITEM_TM04
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"

# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"

# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM04
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"

# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM04
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"

# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"

# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"

# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"

# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"

# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"

# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"

# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"

# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"

# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"

# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"

# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"

# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"

# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"

# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"

# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"

# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"

# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"

# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"

# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"

# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"

# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"

# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"

# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"

# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"

# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"

# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type POKéMON.\p"
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type POKéMON,\l"
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON. Go for it!$"
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"

# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"

# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"

# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"

# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"

# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"

# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"

# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"

# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"

# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"

# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"

# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"

# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"

# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"

# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"

# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"

# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"

# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"

# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"

# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"

# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"

# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"

# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"

# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"

# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"

# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"

# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"

# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"

# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"

# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"

# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"

# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"

# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"

# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"

# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"

# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON hard-battling power!$"
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"

# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"

# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible POKéMON power next.$"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"

# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"

# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"

# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"

# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"

# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM04 contains…\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: CALM MIND!\p"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It raises SP. ATK and…\n"
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It raises SP. DEF!\p"
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC POKéMON!\p"
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"

# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"

# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your POKéMON is far stronger than\l"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"

# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON that can battle.\p"
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more POKéMON.$"
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"

# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"

# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"

# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON…\p"
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"

# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"

# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"

# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one POKéMON!\n"
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one POKéMON!\p"
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two POKéMON when you come back.$"
