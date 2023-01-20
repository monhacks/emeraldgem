@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	checkpartytype TYPE_GRASS
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanCutTree
	checkpartytype TYPE_BUG
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanCutTree
	checkpartytype TYPE_FLYING
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanCutTree
	checkpartytype TYPE_STEEL
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanCutTree
	goto_if_unset FLAG_BADGE01_GET, EventScript_CancelCut
	goto EventScript_CanCutTree
	releaseall 
	end
EventScript_CanCutTree::
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Text_WantToCut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

Text_WantToCut:
	.string "¿Quieres cortar este árbol?$"

Text_MonUsedFieldMove:
	.string "¡{STR_VAR_1} cortó el árbol!$"

Text_CantCut:
	.string "¡Puedes cortar este árbol!$"

@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
	checkpartytype TYPE_FIGHTING
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanRockSmash
	checkpartytype TYPE_STEEL
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanRockSmash
	checkpartytype TYPE_GROUND
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanRockSmash
	checkpartytype TYPE_GRASS
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanRockSmash
	goto EventScript_CanRockSmash
	releaseall
	end
EventScript_CanRockSmash::
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	msgbox Text_WantToSmash, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_SmashRock::
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
	goto_if_eq VAR_RESULT, TRUE, EventScript_EndSmash
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
	waitstate
	releaseall
	end

EventScript_EndSmash::
	releaseall
	end

Movement_SmashRock:
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

Text_WantToSmash:
	.string "¿Quieres romper esta roca?$"

Text_CantSmash:
	.string "Esta roca se puede romper.$"

EventScript_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

Text_WantToStrength:
	.string "¿Quieres mover este peñasco?$"

Text_MonUsedStrength:
	.string "¡{PLAYER} usó la fuerza de\n"
	.string "{STR_VAR_1}! ¡Con su ayuda,\l"
	.string "{PLAYER} puede mover las piedras\l"
	.string "a gusto!$"

Text_CantStrength:
	.string "Podrías mover esta piedra.$"

Text_StrengthActivated:
	.string "¡Con la ayuda de tus Pokémon,\n"
	.string "las piedras son fáciles de mover!$"

EventScript_UseWaterfall::
	lockall
	checkpartytype TYPE_WATER
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanUseWaterfall
	checkpartytype TYPE_ICE
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanUseWaterfall
	checkpartytype TYPE_NORMAL
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanUseWaterfall
	goto EventScript_CanUseWaterfall
	releaseall
	end
	
EventScript_CanUseWaterfall::
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

Text_CantWaterfall:
	.string "Una pared enorme de agua ruge\n"
	.string "con poder y maestría.$"

Text_WantToWaterfall:
	.string "La cascada ruge con poder y maestría\n"
	.string "¿Deseas escalarla?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} ayudó a {PLAYER}\na escalar la cascada.$"

EventScript_UseDive::
	lockall
	checkpartytype TYPE_WATER
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanDive
	checkpartytype TYPE_ICE
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanDive
	goto EventScript_CanDive
	releaseall
	end
EventScript_CanDive::
	goto_if_unset FLAG_BADGE07_GET, EventScript_CantDive
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	checkpartytype TYPE_WATER
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanSurface
	checkpartytype TYPE_ICE
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanSurface
	goto EventScript_CanSurface
	releaseall
	end
	
EventScript_CanSurface::
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToSurface, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	releaseall
	end

Text_CantDive:
	.string "El agua está profunda y hermosa.$"

Text_WantToDive:
	.string "El agua está profunda y hermosa.\n"
	.string "¿Quieres bucear?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} te ayuda a Bucear.$"

Text_CantSurface:
	.string "Brillan hermsosos los rayos del sol\n"
	.string "iluminando esta zona.$"

Text_WantToSurface:
	.string "Brillan hermsosos los rayos del sol\n"
	.string "iluminando esta zona.\l"
	.string "¿Quieres volver a la superficie?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Aca no hay nada…$"

Script_Wishes::
	lockall
	switch VAR_WISHES_FUFILLED
	case 1, Script_YouFeelAsThough
	case 2, Script_YouFeelAsThough
	case 3, Script_YouFeelAsThough
	case 4, Script_YouAreHalfwayThrough
	case 5, Script_YouFeelAsThough
	case 6, Script_JustOneMoreWish
	case 7, Script_YouHaveAchieved
	releaseall
	end
	
Script_YouFeelAsThough::
	msgbox YouFeelAsThough
	releaseall
	end

Script_YouAreHalfwayThrough::
	msgbox YouAreHalfwayThrough
	releaseall
	end
	
Script_JustOneMoreWish::
	msgbox YouAreAlmostThere
	releaseall
	end

Script_YouHaveAchieved::
	msgbox YouHaveAchieved
	clearflag FLAG_HIDE_JIRACHI
	releaseall
	end

YouFeelAsThough:
	.string "Sientes como si un gran ser\nhubiera visto tu buena acción.\pEsperemos esté complacido.$"
YouHaveAchieved:
	.string "Escuchas una voz a la distancia:\p“Siete deseos has cumplido,\nY yo, estoy complacido.”\p“Para obetener tu regalo,\nhas de volver a donde\ltodo ha comenzado.”$"
YouAreAlmostThere:
	.string "Escuchas una voz a la distancia:\p“Tu travesía esta cerca de terminar,\nun solo deseo queda por completar.”$"
YouAreHalfwayThrough:
	.string "Escuchas una voz a la distancia:\p“Cuatro de siete deseos has completado,\nquedan tres para obetener tu regalo.”$"
