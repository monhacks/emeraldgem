LavaridgeTown_EventScript_EggWoman::
# 10 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 11 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 12 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
# 22 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_1, MSGBOX_YESNO
# 25 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_5
# 30 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 31 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LavaridgeTown_EventScript_EggWoman_8
# 36 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_4
# 37 "data/maps/LavaridgeTown/scripts.pory"
	random 100
# 38 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt LavaridgeTown_EventScript_EggWoman_11
# 42 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_NO_SHINIES
LavaridgeTown_EventScript_EggWoman_10:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	dynmultichoice 25, 4, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LavaridgeTown_EventScript_EggWoman_Text_5, LavaridgeTown_EventScript_EggWoman_Text_6, LavaridgeTown_EventScript_EggWoman_Text_7, LavaridgeTown_EventScript_EggWoman_Text_8, LavaridgeTown_EventScript_EggWoman_Text_9, LavaridgeTown_EventScript_EggWoman_Text_10
# 45 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq LavaridgeTown_EventScript_EggWoman_15
LavaridgeTown_EventScript_EggWoman_14:
# 54 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_19
# 83 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_20
# 113 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_21
# 142 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_22
# 172 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_23
LavaridgeTown_EventScript_EggWoman_17:
# 216 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 217 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 218 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_EventScript_EggWoman_Text_11
# 219 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 220 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 221 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_NO_SHINIES
# 222 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_12
# 223 "data/maps/LavaridgeTown/scripts.pory"
	release
	return

LavaridgeTown_EventScript_EggWoman_2:
# 13 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_0
# 14 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_5:
# 26 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_2
# 27 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_8:
# 32 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_3
# 33 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_11:
# 39 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_SHINY_CREATION
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_15:
# 46 "data/maps/LavaridgeTown/scripts.pory"
	random 6
	goto LavaridgeTown_EventScript_EggWoman_14

LavaridgeTown_EventScript_EggWoman_19:
# 56 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 57 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_26
# 61 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_27
# 65 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_28
# 68 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_29
# 71 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_30
# 74 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_31
# 77 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_32
LavaridgeTown_EventScript_EggWoman_24:
# 81 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SHIFT_GEAR
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_20:
# 84 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 86 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_35
# 91 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_36
# 94 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_37
# 97 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_38
# 100 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_39
# 103 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_40
# 107 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_41
LavaridgeTown_EventScript_EggWoman_33:
# 111 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_FREEZY_FROST
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_21:
# 114 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 115 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_44
# 119 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_45
# 122 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_46
# 126 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_47
# 130 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_48
# 133 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_49
# 136 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_50
LavaridgeTown_EventScript_EggWoman_42:
# 140 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SPARKLY_SWIRL
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_22:
# 143 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 144 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_53
# 148 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_54
# 151 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_55
# 155 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_56
# 159 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_57
# 163 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_58
# 166 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_59
LavaridgeTown_EventScript_EggWoman_51:
# 170 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_NO_RETREAT
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_23:
# 173 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 174 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_62
# 179 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_63
# 183 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_64
# 186 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_65
# 189 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_66
# 192 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_67
# 195 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_68
LavaridgeTown_EventScript_EggWoman_60:
# 199 "data/maps/LavaridgeTown/scripts.pory"
	random 4
# 200 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_71
# 204 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_72
# 207 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_73
# 210 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_74
LavaridgeTown_EventScript_EggWoman_69:
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_26:
# 59 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MEOWTH_GALARIAN
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_27:
# 62 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PAWNIARD
# 63 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SACRED_SWORD
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_28:
# 66 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HONEDGE
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_29:
# 69 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FERROSEED
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_30:
# 72 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_31:
# 75 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BELDUM
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_32:
# 78 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BONSLY
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_35:
# 88 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_DARUMAKA_GALARIAN
# 89 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SIZZLY_SLIDE
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_36:
# 92 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_VULPIX_ALOLAN
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_37:
# 95 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNOM
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_38:
# 98 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPHEAL
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_39:
# 101 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_VANILLITE
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_40:
# 104 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SMOOCHUM
# 105 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_41:
# 108 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNOVER
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_44:
# 117 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_IGGLYBUFF
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_45:
# 120 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CLEFFA
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_46:
# 123 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SWIRLIX
# 124 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_47:
# 127 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPRITZEE
# 128 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_48:
# 131 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_AZURILL
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_49:
# 134 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_50:
# 137 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MIME_JR
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_53:
# 146 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_RIOLU
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_54:
# 149 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TYROGUE
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_55:
# 152 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ELEKID
# 153 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_ZIPPY_ZAP
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_56:
# 156 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MAGBY
# 157 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SIZZLY_SLIDE
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_57:
# 160 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
# 161 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SPLISHY_SPLASH
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_58:
# 164 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_59:
# 167 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOXEL
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_62:
# 176 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
# 177 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SPLISHY_SPLASH
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_63:
# 180 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 181 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_COPYCAT
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_64:
# 184 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BUDEW
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_65:
# 187 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHINGLING
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_66:
# 190 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HAPPINY
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_67:
# 193 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MANTYKE
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_68:
# 196 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_71:
# 202 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BOUNCY_BUBBLE
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_72:
# 205 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BADDY_BAD
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_73:
# 208 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_74:
# 211 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SAPPY_SEED
	goto LavaridgeTown_EventScript_EggWoman_69


# 226 "data/maps/LavaridgeTown/scripts.pory"

# 227 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 228 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 229 "data/maps/LavaridgeTown/scripts.pory"

# 230 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 231 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 232 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 233 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 234 "data/maps/LavaridgeTown/scripts.pory"

# 235 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 236 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 237 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 238 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 239 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 240 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 241 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 242 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 243 "data/maps/LavaridgeTown/scripts.pory"
	end
# 244 "data/maps/LavaridgeTown/scripts.pory"

# 245 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 246 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 247 "data/maps/LavaridgeTown/scripts.pory"
	return
# 248 "data/maps/LavaridgeTown/scripts.pory"

# 249 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 250 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 251 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 252 "data/maps/LavaridgeTown/scripts.pory"
	return
# 253 "data/maps/LavaridgeTown/scripts.pory"

# 254 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 255 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 256 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 257 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 258 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 259 "data/maps/LavaridgeTown/scripts.pory"
	return
# 260 "data/maps/LavaridgeTown/scripts.pory"

# 261 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 262 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 263 "data/maps/LavaridgeTown/scripts.pory"
	return
# 264 "data/maps/LavaridgeTown/scripts.pory"

# 265 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 266 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 267 "data/maps/LavaridgeTown/scripts.pory"
	return
# 268 "data/maps/LavaridgeTown/scripts.pory"

# 269 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 270 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 271 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 272 "data/maps/LavaridgeTown/scripts.pory"

# 273 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 274 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 275 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 276 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 277 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 278 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 279 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 280 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 281 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 282 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 283 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 284 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 285 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 286 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 287 "data/maps/LavaridgeTown/scripts.pory"
	end
# 288 "data/maps/LavaridgeTown/scripts.pory"

# 289 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 290 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 291 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 292 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 293 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 294 "data/maps/LavaridgeTown/scripts.pory"
	end
# 295 "data/maps/LavaridgeTown/scripts.pory"

# 296 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 297 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 298 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 299 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 300 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 301 "data/maps/LavaridgeTown/scripts.pory"
	end
# 302 "data/maps/LavaridgeTown/scripts.pory"

# 303 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 304 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 305 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 306 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 307 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 308 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 309 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 310 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 311 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 312 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 313 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 314 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 315 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 316 "data/maps/LavaridgeTown/scripts.pory"
	end
# 317 "data/maps/LavaridgeTown/scripts.pory"

# 318 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 319 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 320 "data/maps/LavaridgeTown/scripts.pory"
	return
# 321 "data/maps/LavaridgeTown/scripts.pory"

# 322 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 323 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 324 "data/maps/LavaridgeTown/scripts.pory"
	return
# 325 "data/maps/LavaridgeTown/scripts.pory"

# 326 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 327 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 328 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 329 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 330 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 331 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 332 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 333 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 334 "data/maps/LavaridgeTown/scripts.pory"
	return
# 335 "data/maps/LavaridgeTown/scripts.pory"

# 336 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 337 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 338 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 339 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 340 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 341 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 343 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 344 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 345 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 347 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 348 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 349 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 350 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 351 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 352 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/LavaridgeTown/scripts.pory"
	return
# 354 "data/maps/LavaridgeTown/scripts.pory"

# 355 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 356 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 357 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/LavaridgeTown/scripts.pory"
	return
# 359 "data/maps/LavaridgeTown/scripts.pory"

# 360 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 361 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 362 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/LavaridgeTown/scripts.pory"
	return
# 364 "data/maps/LavaridgeTown/scripts.pory"

# 365 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 366 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 367 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 368 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 369 "data/maps/LavaridgeTown/scripts.pory"
	return
# 370 "data/maps/LavaridgeTown/scripts.pory"

# 371 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 372 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 373 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 374 "data/maps/LavaridgeTown/scripts.pory"
	return
# 375 "data/maps/LavaridgeTown/scripts.pory"

# 376 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 377 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 378 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 379 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 380 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 381 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 382 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 383 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 384 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 385 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 386 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 387 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 388 "data/maps/LavaridgeTown/scripts.pory"

# 389 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 390 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 391 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 392 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 393 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 394 "data/maps/LavaridgeTown/scripts.pory"

# 395 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 396 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 397 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 398 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 399 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 400 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 401 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 402 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 403 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 404 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 405 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 406 "data/maps/LavaridgeTown/scripts.pory"

# 407 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 408 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 409 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 410 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 411 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 412 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 413 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 414 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 415 "data/maps/LavaridgeTown/scripts.pory"

# 416 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 417 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 418 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 419 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 420 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 421 "data/maps/LavaridgeTown/scripts.pory"

# 422 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 423 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 424 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 425 "data/maps/LavaridgeTown/scripts.pory"

# 426 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 427 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 428 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 429 "data/maps/LavaridgeTown/scripts.pory"
	end
# 430 "data/maps/LavaridgeTown/scripts.pory"

# 431 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 432 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 433 "data/maps/LavaridgeTown/scripts.pory"
	end
# 434 "data/maps/LavaridgeTown/scripts.pory"

# 435 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 436 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 437 "data/maps/LavaridgeTown/scripts.pory"
	end
# 438 "data/maps/LavaridgeTown/scripts.pory"

# 439 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 440 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 441 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BADDY_BAD
# 442 "data/maps/LavaridgeTown/scripts.pory"
	end
# 443 "data/maps/LavaridgeTown/scripts.pory"

# 444 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 445 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 446 "data/maps/LavaridgeTown/scripts.pory"
	end
# 447 "data/maps/LavaridgeTown/scripts.pory"

# 448 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 449 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 450 "data/maps/LavaridgeTown/scripts.pory"
	end
# 451 "data/maps/LavaridgeTown/scripts.pory"

# 452 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 453 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 454 "data/maps/LavaridgeTown/scripts.pory"
	end
# 455 "data/maps/LavaridgeTown/scripts.pory"

# 456 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 457 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 458 "data/maps/LavaridgeTown/scripts.pory"
	end
# 459 "data/maps/LavaridgeTown/scripts.pory"

# 460 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 461 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 462 "data/maps/LavaridgeTown/scripts.pory"
	end
# 463 "data/maps/LavaridgeTown/scripts.pory"

# 464 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 465 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 466 "data/maps/LavaridgeTown/scripts.pory"
	end
# 467 "data/maps/LavaridgeTown/scripts.pory"

# 468 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 469 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 470 "data/maps/LavaridgeTown/scripts.pory"
	end
# 471 "data/maps/LavaridgeTown/scripts.pory"

# 472 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 473 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 474 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 475 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 476 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 477 "data/maps/LavaridgeTown/scripts.pory"
	.string "good POKéMON…\l"
# 478 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 479 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 480 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 481 "data/maps/LavaridgeTown/scripts.pory"

# 482 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 483 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 484 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 485 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.\p"
# 486 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 487 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 488 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 489 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 490 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 491 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 492 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 493 "data/maps/LavaridgeTown/scripts.pory"

# 494 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 495 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 496 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 497 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 498 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 499 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 500 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 501 "data/maps/LavaridgeTown/scripts.pory"

# 502 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 503 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 504 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 505 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 506 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some POKéMON that\n"
# 507 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 508 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 509 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 510 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 511 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 512 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 513 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 514 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 515 "data/maps/LavaridgeTown/scripts.pory"

# 516 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 517 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 518 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 519 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 520 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 521 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 522 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with POKéMON and\l"
# 523 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 524 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 525 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your POKéMON radiate vitality.\p"
# 526 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 527 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 528 "data/maps/LavaridgeTown/scripts.pory"

# 529 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 530 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 531 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 532 "data/maps/LavaridgeTown/scripts.pory"

# 533 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 534 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 535 "data/maps/LavaridgeTown/scripts.pory"

# 536 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 537 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
# 538 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 539 "data/maps/LavaridgeTown/scripts.pory"

# 540 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 541 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 542 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 543 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 544 "data/maps/LavaridgeTown/scripts.pory"

# 545 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 546 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 547 "data/maps/LavaridgeTown/scripts.pory"
	.string "the POKéMON DAY CARE.\p"
# 548 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 549 "data/maps/LavaridgeTown/scripts.pory"

# 550 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 551 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 552 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 553 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 554 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 555 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 556 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 557 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 558 "data/maps/LavaridgeTown/scripts.pory"

# 559 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 560 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 561 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 562 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 563 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 564 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 565 "data/maps/LavaridgeTown/scripts.pory"

# 566 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 567 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 568 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 569 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 570 "data/maps/LavaridgeTown/scripts.pory"

# 571 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 572 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 573 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 574 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 575 "data/maps/LavaridgeTown/scripts.pory"

# 576 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 577 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 578 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 579 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 580 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 581 "data/maps/LavaridgeTown/scripts.pory"

# 582 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 583 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 584 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 585 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 586 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 587 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 588 "data/maps/LavaridgeTown/scripts.pory"

# 589 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 590 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 591 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 592 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 593 "data/maps/LavaridgeTown/scripts.pory"

# 594 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 595 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 596 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 597 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 598 "data/maps/LavaridgeTown/scripts.pory"

# 599 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 600 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 601 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"

LavaridgeTown_EventScript_EggWoman_Text_0:
# 13 "data/maps/LavaridgeTown/scripts.pory"
	.string "Si quieres más Huevos Pokémon para\n"
	.string "cuidar, habrán en la Guardería a veces...\l"
	.string "¡La cuidadora es mi amiga, seguro te\l"
	.string "dejará cuidarlo si encuentra alguno!$"

LavaridgeTown_EventScript_EggWoman_Text_1:
# 22 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hola, joven... Se ve que eres un{A}\n"
	.string "Entrenador{A} muy fuerte...\p"
	.string "¿Te gustaría cuidar uno de los Huevos\n"
	.string "que encontramos en la Guardería?$"

LavaridgeTown_EventScript_EggWoman_Text_2:
# 26 "data/maps/LavaridgeTown/scripts.pory"
	.string "Como quieras entonces... Podemos\n"
	.string "cuidarlo mi esposo y yo...$"

LavaridgeTown_EventScript_EggWoman_Text_3:
# 32 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh... No tienes espacio...$"

LavaridgeTown_EventScript_EggWoman_Text_4:
# 36 "data/maps/LavaridgeTown/scripts.pory"
	.string "Me pregunto...\p"
	.string "¿Qué Pokémon te gustan más?$"

LavaridgeTown_EventScript_EggWoman_Text_5:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	.string "Resistentes$"

LavaridgeTown_EventScript_EggWoman_Text_6:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	.string "Fríos$"

LavaridgeTown_EventScript_EggWoman_Text_7:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	.string "Mágicos$"

LavaridgeTown_EventScript_EggWoman_Text_8:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	.string "Fuertes$"

LavaridgeTown_EventScript_EggWoman_Text_9:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lindos$"

LavaridgeTown_EventScript_EggWoman_Text_10:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡Todos!$"

LavaridgeTown_EventScript_EggWoman_Text_11:
# 218 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡{PLAYER} recibió el Huevo Extraño!$"

LavaridgeTown_EventScript_EggWoman_Text_12:
# 222 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡Cuida bien de él, joven!$"
