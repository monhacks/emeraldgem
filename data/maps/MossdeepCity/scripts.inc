# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_1, 10
# 3 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_2, 11
# 4 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_3, 12
# 5 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_4, 13
# 6 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_MAXIE, 14
# 7 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_SCOTT, 16
# 8 "data/maps/MossdeepCity/scripts.pory"

# 9 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 10 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 11 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 12 "data/maps/MossdeepCity/scripts.pory"

# 13 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 14 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 15 "data/maps/MossdeepCity/scripts.pory"
	end
# 16 "data/maps/MossdeepCity/scripts.pory"

# 17 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 18 "data/maps/MossdeepCity/scripts.pory"
	lock
# 19 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 20 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM08, MossdeepCity_EventScript_PokefanFMagmaGone
# 21 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 22 "data/maps/MossdeepCity/scripts.pory"
	release
# 23 "data/maps/MossdeepCity/scripts.pory"
	end
# 24 "data/maps/MossdeepCity/scripts.pory"

# 25 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 26 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 27 "data/maps/MossdeepCity/scripts.pory"
	release
# 28 "data/maps/MossdeepCity/scripts.pory"
	end
# 29 "data/maps/MossdeepCity/scripts.pory"

# 30 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 31 "data/maps/MossdeepCity/scripts.pory"
	lock
# 32 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 33 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM08, MossdeepCity_EventScript_SailorMagmaGone
# 34 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 35 "data/maps/MossdeepCity/scripts.pory"
	release
# 36 "data/maps/MossdeepCity/scripts.pory"
	end
# 37 "data/maps/MossdeepCity/scripts.pory"

# 38 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 39 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 40 "data/maps/MossdeepCity/scripts.pory"
	release
# 41 "data/maps/MossdeepCity/scripts.pory"
	end
# 42 "data/maps/MossdeepCity/scripts.pory"

# 43 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 44 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 45 "data/maps/MossdeepCity/scripts.pory"
	end
# 46 "data/maps/MossdeepCity/scripts.pory"

# 47 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 48 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 49 "data/maps/MossdeepCity/scripts.pory"
	end
# 50 "data/maps/MossdeepCity/scripts.pory"

# 51 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 52 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 53 "data/maps/MossdeepCity/scripts.pory"
	end
# 54 "data/maps/MossdeepCity/scripts.pory"

# 55 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 56 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 57 "data/maps/MossdeepCity/scripts.pory"
	end
# 58 "data/maps/MossdeepCity/scripts.pory"

# 59 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 60 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 61 "data/maps/MossdeepCity/scripts.pory"
	end
# 62 "data/maps/MossdeepCity/scripts.pory"

# 63 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 64 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 65 "data/maps/MossdeepCity/scripts.pory"
	end
# 66 "data/maps/MossdeepCity/scripts.pory"

# 67 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 68 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 69 "data/maps/MossdeepCity/scripts.pory"
	end
# 70 "data/maps/MossdeepCity/scripts.pory"

# 71 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 72 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 73 "data/maps/MossdeepCity/scripts.pory"
	end
# 74 "data/maps/MossdeepCity/scripts.pory"

# 75 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 76 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 77 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 78 "data/maps/MossdeepCity/scripts.pory"
	end
# 79 "data/maps/MossdeepCity/scripts.pory"

# 80 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 81 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 82 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 83 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 85 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 86 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 87 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 88 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 90 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 91 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 92 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 93 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 94 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MAXIE
# 96 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 97 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 98 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 99 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 100 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 101 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 102 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 103 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 104 "data/maps/MossdeepCity/scripts.pory"
	end
# 105 "data/maps/MossdeepCity/scripts.pory"

# 106 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 107 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 108 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 109 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 110 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 111 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 112 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 113 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 114 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 115 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 116 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 117 "data/maps/MossdeepCity/scripts.pory"

# 118 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 119 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 120 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 121 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 122 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 123 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 124 "data/maps/MossdeepCity/scripts.pory"

# 125 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 126 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 127 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 128 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 129 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 130 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 135 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 136 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 137 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 138 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 139 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 140 "data/maps/MossdeepCity/scripts.pory"

# 141 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 142 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 143 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 145 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 160 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 161 "data/maps/MossdeepCity/scripts.pory"

# 162 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 163 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 164 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 180 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 181 "data/maps/MossdeepCity/scripts.pory"

# 182 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 183 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 184 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 199 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 200 "data/maps/MossdeepCity/scripts.pory"

# 201 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 202 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 203 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 212 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 213 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 214 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 215 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 216 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 217 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 218 "data/maps/MossdeepCity/scripts.pory"

# 219 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 220 "data/maps/MossdeepCity/scripts.pory"
	lock
# 221 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 222 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 223 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 224 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 225 "data/maps/MossdeepCity/scripts.pory"
	release
# 226 "data/maps/MossdeepCity/scripts.pory"
	end
# 227 "data/maps/MossdeepCity/scripts.pory"

# 228 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 229 "data/maps/MossdeepCity/scripts.pory"
	lock
# 230 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 231 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 232 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 233 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 234 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 235 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 236 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 237 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 238 "data/maps/MossdeepCity/scripts.pory"
	release
# 239 "data/maps/MossdeepCity/scripts.pory"
	end
# 240 "data/maps/MossdeepCity/scripts.pory"

# 241 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 242 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 243 "data/maps/MossdeepCity/scripts.pory"
	release
# 244 "data/maps/MossdeepCity/scripts.pory"
	end
# 245 "data/maps/MossdeepCity/scripts.pory"

# 246 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 247 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 248 "data/maps/MossdeepCity/scripts.pory"
	release
# 249 "data/maps/MossdeepCity/scripts.pory"
	end
# 250 "data/maps/MossdeepCity/scripts.pory"

# 251 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 252 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 253 "data/maps/MossdeepCity/scripts.pory"
	end
# 254 "data/maps/MossdeepCity/scripts.pory"

# 255 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 256 "data/maps/MossdeepCity/scripts.pory"
	lock
# 257 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 258 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 259 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 260 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 261 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 262 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 263 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 264 "data/maps/MossdeepCity/scripts.pory"
	release
# 265 "data/maps/MossdeepCity/scripts.pory"
	end
# 266 "data/maps/MossdeepCity/scripts.pory"

# 267 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 268 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 269 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 270 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/MossdeepCity/scripts.pory"
	return
# 272 "data/maps/MossdeepCity/scripts.pory"

# 273 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 274 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 275 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
# 276 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/MossdeepCity/scripts.pory"
	return
# 278 "data/maps/MossdeepCity/scripts.pory"

# 279 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 280 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 281 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 282 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 283 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 284 "data/maps/MossdeepCity/scripts.pory"

# 285 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 286 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 287 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 288 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 289 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 290 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 291 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 292 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 293 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 294 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 295 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 296 "data/maps/MossdeepCity/scripts.pory"

# 297 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 298 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 302 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 303 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 304 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 305 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 306 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 307 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 308 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 309 "data/maps/MossdeepCity/scripts.pory"

# 310 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 311 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 312 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 313 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 314 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 315 "data/maps/MossdeepCity/scripts.pory"

# 316 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 317 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 318 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 319 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 320 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 321 "data/maps/MossdeepCity/scripts.pory"

# 322 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 323 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 324 "data/maps/MossdeepCity/scripts.pory"

# 325 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 326 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 327 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 328 "data/maps/MossdeepCity/scripts.pory"

# 329 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
# 331 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER.\p"
# 332 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 334 "data/maps/MossdeepCity/scripts.pory"
	.string "WAI, WAI, WAI…\p"
# 335 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER watching!$"
# 336 "data/maps/MossdeepCity/scripts.pory"

# 337 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 338 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 340 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 341 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 342 "data/maps/MossdeepCity/scripts.pory"

# 343 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 346 "data/maps/MossdeepCity/scripts.pory"

# 347 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 349 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 350 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 355 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 356 "data/maps/MossdeepCity/scripts.pory"

# 357 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 360 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 362 "data/maps/MossdeepCity/scripts.pory"

# 363 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 367 "data/maps/MossdeepCity/scripts.pory"

# 368 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 370 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 371 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 375 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 376 "data/maps/MossdeepCity/scripts.pory"

# 377 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with POKéMON\n"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 381 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 383 "data/maps/MossdeepCity/scripts.pory"

# 384 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 386 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 389 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 390 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 393 "data/maps/MossdeepCity/scripts.pory"

# 394 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 396 "data/maps/MossdeepCity/scripts.pory"

# 397 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 399 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: LIZA & TATE\p"
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 401 "data/maps/MossdeepCity/scripts.pory"

# 402 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 403 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 404 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish POKéMON!”$"
# 405 "data/maps/MossdeepCity/scripts.pory"

# 406 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 407 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
# 408 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 409 "data/maps/MossdeepCity/scripts.pory"

# 410 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
# 412 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 415 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 416 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 419 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the SPACE CENTER…\p"
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 421 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 422 "data/maps/MossdeepCity/scripts.pory"

# 423 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 425 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 427 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 428 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 429 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 430 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new LEADER once\n"
# 431 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored WALLACE.$"
