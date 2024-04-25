EventScript_UseSurf::
	checkpartymove MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
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
	end

EventScript_MoveBeforeSurf::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_NORTH, EventScript_SurfMoveUp
	case DIR_SOUTH, EventScript_SurfMoveDown
	case DIR_EAST, EventScript_SurfMoveRight
	case DIR_WEST, EventScript_SurfMoveLeft
	goto EventScript_ReleaseUseSurf
	
EventScript_SurfMoveUp::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	goto EventScript_ReleaseUseSurf

EventScript_SurfMoveDown::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	goto EventScript_ReleaseUseSurf

EventScript_SurfMoveRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	goto EventScript_ReleaseUseSurf

EventScript_SurfMoveLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto EventScript_ReleaseUseSurf

