EventScript_UseSurf::
	goto_if_unset FLAG_BADGE05_GET, EventScript_EndUseSurf
	checkpartytype TYPE_WATER
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanUseSurf
	checkpartytype TYPE_ICE
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanUseSurf
	checkpartytype TYPE_NORMAL
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_CanUseSurf
	goto EventScript_CanUseSurf
	releaseall
	end
EventScript_CanUseSurf::
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	releaseall
	end
	
	
