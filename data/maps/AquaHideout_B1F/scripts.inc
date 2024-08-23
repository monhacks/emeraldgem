AquaHideout_B1F_MapScripts::
# 5 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME
# 16 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	return

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 4
	goto_if_eq AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 3
	goto_if_eq AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	return

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/AquaHideout_B1F/scripts.pory"
	setobjectxyperm 9, 32, 21
# 19 "data/maps/AquaHideout_B1F/scripts.pory"
	setobjectxyperm 1, 32, 20
# 20 "data/maps/AquaHideout_B1F/scripts.pory"
	setobjectxyperm 4, 31, 21
	goto AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 23 "data/maps/AquaHideout_B1F/scripts.pory"
	setobjectxyperm 9, 32, 20
	goto AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


AquaHideout_B1F_EventScript_Trigger::
# 40 "data/maps/AquaHideout_B1F/scripts.pory"
	namebox Aqua
# 41 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Trigger_Text_0
# 42 "data/maps/AquaHideout_B1F/scripts.pory"
	namebox Delta
# 43 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Trigger_Text_1
# 52 "data/maps/AquaHideout_B1F/scripts.pory"
	hidenamebox
# 53 "data/maps/AquaHideout_B1F/scripts.pory"
	closemessage
# 54 "data/maps/AquaHideout_B1F/scripts.pory"
	applymovement 9, AquaHideout_B1F_Movement_LeavesFirstRoom
# 55 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 56 "data/maps/AquaHideout_B1F/scripts.pory"
	setobjectxyperm 9, 32, 20
# 57 "data/maps/AquaHideout_B1F/scripts.pory"
	namebox Aqua
# 60 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Trigger_Text_2
# 66 "data/maps/AquaHideout_B1F/scripts.pory"
	hidenamebox
# 67 "data/maps/AquaHideout_B1F/scripts.pory"
	closemessage
# 68 "data/maps/AquaHideout_B1F/scripts.pory"
	setvar VAR_AQUA_HIDEOUT_STATE, 3
# 69 "data/maps/AquaHideout_B1F/scripts.pory"
	releaseall
	end


AquaHideout_B1F_EventScript_Electrode1::
# 74 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_Electrodes
# 75 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AquaHideout_B1F_EventScript_Electrode1_2
AquaHideout_B1F_EventScript_Electrode1_1:
# 80 "data/maps/AquaHideout_B1F/scripts.pory"
	release
	end

AquaHideout_B1F_EventScript_Electrode1_2:
# 76 "data/maps/AquaHideout_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 77 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
# 78 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto AquaHideout_B1F_EventScript_Electrode1_1


AquaHideout_B1F_EventScript_Electrodes::
# 85 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 86 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 87 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 88 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 89 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 90 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 91 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 93 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 95 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
	return


AquaHideout_B1F_EventScript_Electrode2::
# 100 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_Electrodes
# 101 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AquaHideout_B1F_EventScript_Electrode2_2
AquaHideout_B1F_EventScript_Electrode2_1:
# 106 "data/maps/AquaHideout_B1F/scripts.pory"
	release
	end

AquaHideout_B1F_EventScript_Electrode2_2:
# 102 "data/maps/AquaHideout_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 103 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
# 104 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto AquaHideout_B1F_EventScript_Electrode2_1


AquaHideout_B1F_EventScript_Grunt3::
# 111 "data/maps/AquaHideout_B1F/scripts.pory"
	lockall
# 112 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 113 "data/maps/AquaHideout_B1F/scripts.pory"
	namebox Aqua
# 116 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Grunt3_Text_0
# 122 "data/maps/AquaHideout_B1F/scripts.pory"
	hidenamebox
# 123 "data/maps/AquaHideout_B1F/scripts.pory"
	closemessage
# 124 "data/maps/AquaHideout_B1F/scripts.pory"
	releaseall
	end


AquaHideout_B1F_EventScript_Grunt5::
# 129 "data/maps/AquaHideout_B1F/scripts.pory"
	lockall
# 130 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 3
	goto_if_eq AquaHideout_B1F_EventScript_Grunt5_1
# 134 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 135 "data/maps/AquaHideout_B1F/scripts.pory"
	namebox Aqua
# 138 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Grunt5_Text_0
# 144 "data/maps/AquaHideout_B1F/scripts.pory"
	hidenamebox
# 145 "data/maps/AquaHideout_B1F/scripts.pory"
	closemessage
	return

AquaHideout_B1F_EventScript_Grunt5_1:
# 131 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_Delta2
	return


AquaHideout_B1F_EventScript_Delta::
# 150 "data/maps/AquaHideout_B1F/scripts.pory"
	lockall
# 151 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_AQUA_HIDEOUT_STATE, 3
	goto_if_eq AquaHideout_B1F_EventScript_Delta_1
	return

AquaHideout_B1F_EventScript_Delta_1:
# 152 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_Delta2
	return


AquaHideout_B1F_EventScript_Delta2::
# 156 "data/maps/AquaHideout_B1F/scripts.pory"
	applymovement 1, AquaHideout_B1F_Movement_AquaWin1
# 157 "data/maps/AquaHideout_B1F/scripts.pory"
	applymovement 4, AquaHideout_B1F_Movement_AquaWin2
# 158 "data/maps/AquaHideout_B1F/scripts.pory"
	applymovement 9, AquaHideout_B1F_Movement_DeltaDefeat
# 159 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 160 "data/maps/AquaHideout_B1F/scripts.pory"
	namebox Delta
# 162 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Delta2_Text_0, MSGBOX_INTERRUPT
# 163 "data/maps/AquaHideout_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 16
# 165 "data/maps/AquaHideout_B1F/scripts.pory"
	namebox Aqua
# 166 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Delta2_Text_1
# 167 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Delta2_Text_2
# 178 "data/maps/AquaHideout_B1F/scripts.pory"
	hidenamebox
# 179 "data/maps/AquaHideout_B1F/scripts.pory"
	closemessage
# 180 "data/maps/AquaHideout_B1F/scripts.pory"
	playse SE_M_ICY_WIND
# 181 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 182 "data/maps/AquaHideout_B1F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 183 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 184 "data/maps/AquaHideout_B1F/scripts.pory"
	playse SE_FAINT
# 185 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 186 "data/maps/AquaHideout_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 187 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 16
# 188 "data/maps/AquaHideout_B1F/scripts.pory"
	playse SE_PIN
# 189 "data/maps/AquaHideout_B1F/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 190 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 191 "data/maps/AquaHideout_B1F/scripts.pory"
	namebox Delta
# 194 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_EventScript_Delta2_Text_3
# 200 "data/maps/AquaHideout_B1F/scripts.pory"
	setvar VAR_AQUA_HIDEOUT_STATE, 4
# 201 "data/maps/AquaHideout_B1F/scripts.pory"
	hidenamebox
# 202 "data/maps/AquaHideout_B1F/scripts.pory"
	closemessage
# 203 "data/maps/AquaHideout_B1F/scripts.pory"
	releaseall
	end


# 207 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Movement_DeltaDefeat:
# 208 "data/maps/AquaHideout_B1F/scripts.pory"
	lock_facing_direction
# 209 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_down
# 210 "data/maps/AquaHideout_B1F/scripts.pory"
	unlock_facing_direction
# 211 "data/maps/AquaHideout_B1F/scripts.pory"
	delay_8
# 212 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_in_place_left
# 213 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_in_place_up
	step_end

# 216 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Movement_AquaWin1:
# 217 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_faster_down
# 217 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_faster_down
	step_end

# 220 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Movement_AquaWin2:
# 221 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_faster_down
# 221 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_faster_down
# 222 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_in_place_fast_right
	step_end

# 225 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Movement_LeavesFirstRoom:
# 226 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_down
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_right
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_up
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_up
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_up
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_up
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_up
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_up
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
	walk_up
# 229 "data/maps/AquaHideout_B1F/scripts.pory"
	set_invisible
	step_end

AquaHideout_B1F_EventScript_Trigger_Text_0:
# 41 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡N-{PAUSE 5}No!\n"
	.string "Me derrotó usando un solo Pokémon…$"

AquaHideout_B1F_EventScript_Trigger_Text_1:
# 43 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Tsk.\n"
	.string "¿Es todo este Equipo igual de patético?$"

AquaHideout_B1F_EventScript_Trigger_Text_2:
# 60 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Tengo que avisarle a Matt!$"

AquaHideout_B1F_EventScript_Grunt3_Text_0:
# 116 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Normalmente, te atacaría, pero ya no\n"
	.string "tengo Pokémon…\p"
	.string "¡Igual! ¡Todo estará bien!\n"
	.string "Le avisé a nuestro {COLOR BLUE}Administrador Matt{COLOR DARK_GRAY}\l"
	.string "sobre esta intrusa…\p"
	.string "¡El poder que él posee es abismal!$"

AquaHideout_B1F_EventScript_Grunt5_Text_0:
# 138 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Tomó todo lo que teníamos, hasta los\n"
	.string "más débiles, pero parece que logramos\l"
	.string "detenerla…\p"
	.string "¡Estos idiotas no son tan invencibles\n"
	.string "como creíamos!$"

AquaHideout_B1F_EventScript_Delta2_Text_0:
# 162 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Dejen de engañarse, los tres sabemos\n"
	.string "que no podrán derrot-{PAUSE 50}$"

AquaHideout_B1F_EventScript_Delta2_Text_1:
# 166 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Usa {COLOR LIGHT_BLUE}Granizo{COLOR DARK_GRAY}!$"

AquaHideout_B1F_EventScript_Delta2_Text_2:
# 167 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Y tú, usa {COLOR LIGHT_BLUE}Rayo Hielo{COLOR DARK_GRAY}!$"

AquaHideout_B1F_EventScript_Delta2_Text_3:
# 194 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "M-me han… Derrotado.$"
