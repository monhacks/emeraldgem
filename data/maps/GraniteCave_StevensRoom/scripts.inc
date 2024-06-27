# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	 map_script MAP_SCRIPT_ON_LOAD, GraniteCave_StevensRoom_CoverItAll 
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_CoverItAll::
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_StevensRoom_UnCoverItAll
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 9, METATILE_Cave_Mountain_BottomMid, TRUE
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 9, METATILE_Cave_Mountain_BottomMid, TRUE
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 9, METATILE_Cave_Mountain_BottomMid, TRUE
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special DrawWholeMapView
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_UnCoverItAll::
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 9, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 9, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 9, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 10, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 10, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 10, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special DrawWholeMapView
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_1::
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_Braille_1_Done
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	braillemsgbox GraniteCave_Braille_1Text
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_Braille_Check
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_2::
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_Braille_1_Done
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	braillemsgbox GraniteCave_Braille_2Text
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_Braille_Check
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_Check::
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGICE
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGIROCK
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGISTEEL
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGIDRAGO
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGIELEKI
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, 2 
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8005, 2 
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8006, 4
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8007, 4
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ShakeCamera
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, 4
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8005, 4
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8006, 6
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8007, 3
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ShakeCamera
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, 6
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8005, 6
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8006, 8
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8007, 2
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ShakeCamera
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_DOOR
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 9, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 9, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 9, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 10, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 10, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 10, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special DrawWholeMapView
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGIGIGAS_UNLOCKED
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	message GraniteCave_StevensRoom_Text_Done
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 35
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_1_Done::
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_Done
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_Done:
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "¡Una puerta se abrió!$"
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_None::
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven::
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	namebox Unknown
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	namebox Steven
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe2, MSGBOX_DEFAULT
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	hidenamebox
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	namebox Steven
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	hidenamebox
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM47
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	namebox Steven
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	hidenamebox
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	namebox Steven
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 149 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	hidenamebox
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 153 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 158 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 159 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 160 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 161 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 162 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 163 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 183 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 187 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 188 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 189 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 191 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 193 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 194 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 195 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 198 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 199 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 200 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 202 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 203 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 204 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 205 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 206 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 207 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 208 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 209 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 210 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 211 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 212 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 213 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 214 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 215 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 216 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 217 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 218 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ah, ¡Hola, mi nombre es {COLOR BLUE}Steven{COLOR DARK_GRAY}.$"
# 219 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 220 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe2:
# 221 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Me interesa la geología, y la historia\n"
# 222 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "que Hoenn tiene para contar, por eso\l"
# 223 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "vine a esta cueva.\p"
# 224 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Estas rocas aquí datan de hace más de\n"
# 225 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "10.000 años, y parecen estar llenas de\l"
# 226 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "algún tipo de energía de gran poder.\p"
# 227 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ah, ¿Una carta para mí?\p"
# 228 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ja, ¿Porqué lo dices así? Parece que me\n"
# 229 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "estuvieras callando.\p"
# 230 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "¡Pero gracias por traerla!$"
# 231 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 232 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 233 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "¡Voy a darte esto como\n"
# 234 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "agradecimiento!$"
# 235 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 236 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 237 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Creo que sería útil mantener el\n"
# 238 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "contacto, así que voy a registrarme en\l"
# 239 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "tu PokéNav.\p"
# 240 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 241 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 242 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 243 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven se registró en tu\n"
# 244 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "POKéNAV, por algún motivo.$"
# 245 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 246 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 247 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ahora debería irme.$"
# 248 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 249 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 250 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
# 251 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
