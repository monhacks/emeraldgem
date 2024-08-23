# 1 "data/maps/Route121/scripts.pory"

# 2 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_1, 12
# 3 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_2, 13
# 4 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_3, 14
# 5 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_4, 31
# 6 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_5, 30
# 7 "data/maps/Route121/scripts.pory"

# 8 "data/maps/Route121/scripts.pory"
Route121_MapScripts::
# 9 "data/maps/Route121/scripts.pory"
	.byte 0
# 10 "data/maps/Route121/scripts.pory"

# 11 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 12 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 13 "data/maps/Route121/scripts.pory"
	end
# 14 "data/maps/Route121/scripts.pory"

# 15 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 16 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 17 "data/maps/Route121/scripts.pory"
	end
# 18 "data/maps/Route121/scripts.pory"

# 19 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 20 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 21 "data/maps/Route121/scripts.pory"
	end
# 22 "data/maps/Route121/scripts.pory"

# 23 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 24 "data/maps/Route121/scripts.pory"
	lockall
# 25 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 26 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 27 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route121/scripts.pory"
	namebox Aqua
# 29 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 30 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceRight
# 31 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SurpriseAttack, MSGBOX_DEFAULT
# 33 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_WalkInPlaceLeft
# 34 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route121/scripts.pory"
	namebox Magma
# 36 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_ThatWasOur, MSGBOX_DEFAULT
# 37 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_WalkInPlaceDown
# 38 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_LetsGoMagma, MSGBOX_DEFAULT
# 40 "data/maps/Route121/scripts.pory"
	closemessage
# 41 "data/maps/Route121/scripts.pory"
	hidenamebox
# 42 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_GruntExit
# 43 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_GruntExit
# 44 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_GruntExit
# 45 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_4, Route121_Movement_GruntExit
# 46 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_5, Route121_Movement_GruntExit
# 47 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 50 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 51 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 52 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 53 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_5
# 54 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 55 "data/maps/Route121/scripts.pory"
	namebox Rival
# 56 "data/maps/Route121/scripts.pory"
	pokenavcall Route121_PokeNavCall_Rival
# 57 "data/maps/Route121/scripts.pory"
	waitmessage
# 58 "data/maps/Route121/scripts.pory"
	releaseall
# 59 "data/maps/Route121/scripts.pory"
	end
# 60 "data/maps/Route121/scripts.pory"

# 61 "data/maps/Route121/scripts.pory"
Route121_Movement_GruntExit:
# 62 "data/maps/Route121/scripts.pory"
	walk_down
# 63 "data/maps/Route121/scripts.pory"
	walk_down
# 64 "data/maps/Route121/scripts.pory"
	walk_down
# 65 "data/maps/Route121/scripts.pory"
	walk_down
# 66 "data/maps/Route121/scripts.pory"
	walk_down
# 67 "data/maps/Route121/scripts.pory"
	walk_down
# 68 "data/maps/Route121/scripts.pory"
	walk_down
# 69 "data/maps/Route121/scripts.pory"
	walk_down
# 70 "data/maps/Route121/scripts.pory"
	walk_down
# 71 "data/maps/Route121/scripts.pory"
	step_end
# 72 "data/maps/Route121/scripts.pory"

# 73 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 74 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 75 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route121/scripts.pory"
	end
# 77 "data/maps/Route121/scripts.pory"

# 78 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 79 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
# 80 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 81 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchWalter
# 82 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 83 "data/maps/Route121/scripts.pory"
	release
# 84 "data/maps/Route121/scripts.pory"
	end
# 85 "data/maps/Route121/scripts.pory"

# 86 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 87 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 88 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 90 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 91 "data/maps/Route121/scripts.pory"
	release
# 92 "data/maps/Route121/scripts.pory"
	end
# 93 "data/maps/Route121/scripts.pory"

# 94 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 95 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 96 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route121/scripts.pory"
	end
# 98 "data/maps/Route121/scripts.pory"

# 99 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 100 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 101 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route121/scripts.pory"
	end
# 103 "data/maps/Route121/scripts.pory"

# 104 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 105 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 106 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route121/scripts.pory"
	end
# 108 "data/maps/Route121/scripts.pory"

# 109 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 110 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 111 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route121/scripts.pory"
	end
# 113 "data/maps/Route121/scripts.pory"

# 114 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 115 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 116 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 117 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 118 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 119 "data/maps/Route121/scripts.pory"
	release
# 120 "data/maps/Route121/scripts.pory"
	end
# 121 "data/maps/Route121/scripts.pory"

# 122 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 123 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 124 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 126 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 127 "data/maps/Route121/scripts.pory"
	release
# 128 "data/maps/Route121/scripts.pory"
	end
# 129 "data/maps/Route121/scripts.pory"

# 130 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 131 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 132 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route121/scripts.pory"
	end
# 134 "data/maps/Route121/scripts.pory"

# 135 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 136 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 137 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route121/scripts.pory"
	end
# 139 "data/maps/Route121/scripts.pory"

# 140 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 141 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 142 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/Route121/scripts.pory"
	end
# 144 "data/maps/Route121/scripts.pory"

# 145 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 146 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 147 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/Route121/scripts.pory"
	end
# 149 "data/maps/Route121/scripts.pory"

# 150 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 151 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 152 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/Route121/scripts.pory"
	end
# 154 "data/maps/Route121/scripts.pory"

# 155 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 156 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
# 157 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 158 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchCristin
# 159 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 160 "data/maps/Route121/scripts.pory"
	release
# 161 "data/maps/Route121/scripts.pory"
	end
# 162 "data/maps/Route121/scripts.pory"

# 163 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 164 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 165 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 167 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 168 "data/maps/Route121/scripts.pory"
	release
# 169 "data/maps/Route121/scripts.pory"
	end
# 170 "data/maps/Route121/scripts.pory"

# 171 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 172 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 173 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route121/scripts.pory"
	end
# 175 "data/maps/Route121/scripts.pory"

# 176 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 177 "data/maps/Route121/scripts.pory"
	.string "Okay, si el Jefecito así lo quiere...\n"
# 178 "data/maps/Route121/scripts.pory"
	.string "¡Tendremos que acompañar al\lEquipo Magma al Monte Pyre!$"
# 179 "data/maps/Route121/scripts.pory"

# 180 "data/maps/Route121/scripts.pory"
Route121_Text_SurpriseAttack:
# 181 "data/maps/Route121/scripts.pory"
	.string "Y entonces, ¡Seguro que los atacaremos\n"
# 182 "data/maps/Route121/scripts.pory"
	.string "por sorpresa, MUAJAJA!$"
# 183 "data/maps/Route121/scripts.pory"

# 184 "data/maps/Route121/scripts.pory"
Route121_Text_ThatWasOur:
# 185 "data/maps/Route121/scripts.pory"
	.string "Pero nuestro Líder quiere que vayamos\l"
# 186 "data/maps/Route121/scripts.pory"
	.string "sin problemas, así que cálmate, ¿Ok?$"
# 187 "data/maps/Route121/scripts.pory"

# 188 "data/maps/Route121/scripts.pory"
Route121_Text_LetsGoMagma:
# 189 "data/maps/Route121/scripts.pory"
	.string "¡Vámonos ya, nos esperan!$"
# 190 "data/maps/Route121/scripts.pory"

# 191 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 192 "data/maps/Route121/scripts.pory"
	.string "Ahead looms MT. PYRE…\p"
# 193 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 194 "data/maps/Route121/scripts.pory"
	.string "of departed POKéMON…$"
# 195 "data/maps/Route121/scripts.pory"

# 196 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 197 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
# 198 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 199 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 200 "data/maps/Route121/scripts.pory"

# 201 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 202 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare POKéMON!”\n"
# 203 "data/maps/Route121/scripts.pory"
	.string "SAFARI ZONE$"
# 204 "data/maps/Route121/scripts.pory"

# 205 "data/maps/Route121/scripts.pory"
Route121_PokeNavCall_Rival:
# 206 "data/maps/Route121/scripts.pory"
	.string "Hola, {PLAYER}, me he estado\n"
# 207 "data/maps/Route121/scripts.pory"
	.string "sintiendo mejor al combatir los\l"
# 208 "data/maps/Route121/scripts.pory"
	.string "Gimnasios. De tu padre escuché que el\l"
# 209 "data/maps/Route121/scripts.pory"
	.string "Equipo Magma se dirije hacia el Monte\l"
# 210 "data/maps/Route121/scripts.pory"
	.string "Pyre, ¿Estás bien?\p"
# 211 "data/maps/Route121/scripts.pory"
	.string "... ... ...\n"
# 212 "data/maps/Route121/scripts.pory"
	.string "¿¡El Equipo Aqua también!?\p"
# 213 "data/maps/Route121/scripts.pory"
	.string "Estaré aquí en Ciudad Lilycove\n"
# 214 "data/maps/Route121/scripts.pory"
	.string "comprando Objetos Curativos en caso de\l"
# 215 "data/maps/Route121/scripts.pory"
	.string "que los necesitemos. Te veré allá o en el\l"
# 216 "data/maps/Route121/scripts.pory"
	.string "Monte Pyre, donde sea que decidas ir\l"
# 217 "data/maps/Route121/scripts.pory"
	.string "primero.\p"
# 218 "data/maps/Route121/scripts.pory"
	.string "Ten cuidado, {PLAYER}, necesitamos\n"
# 219 "data/maps/Route121/scripts.pory"
	.string "toda la ayuda posible para derrotar a\l"
# 220 "data/maps/Route121/scripts.pory"
	.string "esos villanos.$"
