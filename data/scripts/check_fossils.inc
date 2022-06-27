ScriptThereYouGo::
	lockall
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
    msgbox Text_WithThatICan
	applymovement 5, Movement_Work
	waitmovement 0
    msgbox Text_ThereYouGo
	release
    end

Movement_Work:
	face_up
	step_end

ScriptThatsNotAFossil::
	lockall
    msgbox Text_NotAFossil
	release
	end

ScriptYouDontHaveFossil::
	lockall
	msgbox Text_YouDont
	release
	end

Text_YouDont::
	.string "Parece que no tienes fósiles.$"

Text_WithThatICan::
	.string "¡Ah, un {STR_VAR_1}!\nCon él, podré resucitar un\l{STR_VAR_2}.\pDame un momento.$"

Text_NotAFossil::
	.string "Ah, supongo que te arrepentiste.\p¡Vuelve cuando quieras!$"
	
Text_ThereYouGo::
    .string "¡Has dado un {STR_VAR_1}, y has\nrecibido un {STR_VAR_2} a cambio!$"

Fossils_Noticed_One::
	release
	end
Fossils_Check::
	lockall
	checkitem ITEM_HELIX_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_DOME_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_OLD_AMBER
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_CLAW_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_ROOT_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_ARMOR_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_SKULL_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_COVER_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_PLUME_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_JAW_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	checkitem ITEM_SAIL_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Fossils_Noticed_One
	goto ScriptYouDontHaveFossil
	release
	end

