EventScript_StartDexNavBattle::
	lock
	playse 0x15
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	dowildbattle
	release
	end

EventScript_JumpPlayerDexNav::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_NORTH, EventScript_JumpPlayerDexNavNorth
	case DIR_EAST, EventScript_JumpPlayerDexNavEast
	case DIR_WEST, EventScript_JumpPlayerDexNavWest
	case DIR_SOUTH, EventScript_JumpPlayerDexNavSouth
	goto EventScript_JumpPlayerDexNavNorth
EventScript_JumpPlayerDexNavFinish::
	waitmovement 0
	return


EventScript_JumpPlayerDexNavNorth::
	applymovement OBJ_EVENT_ID_PLAYER, DexNav_Movement_JumpInPlaceUp
	goto EventScript_JumpPlayerDexNavFinish

EventScript_JumpPlayerDexNavEast::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpInPlaceRight
	goto EventScript_JumpPlayerDexNavFinish

EventScript_JumpPlayerDexNavWest::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpInPlaceLeft
	goto EventScript_JumpPlayerDexNavFinish

EventScript_JumpPlayerDexNavSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpInPlaceDown
	goto EventScript_JumpPlayerDexNavFinish


DexNav_Movement_JumpInPlaceUp:
	jump_in_place_up
	step_end

EventScript_NotFoundNearby::
    msgbox sText_NotFoundNearby, MSGBOX_SIGN
    end

EventScript_CaughtOverworld::
	call EventScript_JumpPlayerDexNav
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox sText_CaughtOverworld, MSGBOX_SIGN
	waitfanfare
	end

EventScript_NotCaughtOverworld::
	call EventScript_JumpPlayerDexNav
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox sText_NotCaughtOverworld, MSGBOX_SIGN
    end

sText_CaughtOverworld:
	.string "¡Atrapaste a {STR_VAR_1}\nsin que te viera!$"

sText_NotCaughtOverworld:
	.string "¡{STR_VAR_1} se escapó!\n¡Tan cerca estabas!$"

sText_NotFoundNearby:
    .string "No parece que esté por aquí.\n"
    .string "¡Intenta buscar en otra parte!$"


EventScript_MovedTooFast::
    msgbox sText_TryMovingSlower, MSGBOX_SIGN
    end

sText_TryMovingSlower:
    .string "¡El Pokémon se asustó!\n"
    .string "Intenta ir caminando la próxima.$"


EventScript_PokemonGotAway::
    msgbox sText_PokemonGotAway, MSGBOX_SIGN
    end
sText_PokemonGotAway:
    .string "¡El Pokémon se escapó!$"


EventScript_LostSignal::
    msgbox sText_LostSignal, MSGBOX_SIGN
    end
sText_LostSignal:
    .string "No responde.\n"
    .string "¡Se perdió la señal!$"


EventScript_TooDark::
    msgbox sText_TooDark, MSGBOX_SIGN
    end

sText_TooDark:
    .string "¡Está muy oscuro como\npara buscar Pokémon!$"
