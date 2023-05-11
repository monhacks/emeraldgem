.set LOCALID_RALTS, 9
.set LOCALID_ZIGZA, 10
.set LOCALID_BALL, 11
.set LOCALID_BALL2, 13

Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Error::
	lockall
	msgbox NoDeberiasVerlo, MSGBOX_NPC
	releaseall
	end

Route102_EventScript_RaltsAppears::
	addobject LOCALID_RALTS
	delay 8
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
	waitmoncry
	delay 8
	playbgm MUS_VS_WILD, FALSE
	return

Route102_EventScript_ZigzagoonAppears::
	addobject LOCALID_BALL
	playse SE_BALL
	delay 16
	playse SE_BALL_OPEN
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_BALL
	addobject LOCALID_ZIGZA
	delay 8
	fadescreen FADE_FROM_WHITE
	delay 8
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
	waitmoncry
	delay 8
	return

Route102_EventScript_RaltsTeleport::
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
	msgbox Route102_Text_Ralts
	applymovement LOCALID_RALTS, Route102_Movement_RaltsTeleport
	delay 2
	fadescreen FADE_TO_WHITE
	waitmovement 0
	delay 8
	setobjectxy LOCALID_RALTS, 7,5
	delay 16
	applymovement LOCALID_RALTS, Route102_Movement_RaltsTeleport2
	delay 4
	fadescreen FADE_FROM_WHITE
	waitmovement 0
	delay 8
	return
	
Route102_EventScript_ZigzaSurprise::
	applymovement LOCALID_ZIGZA, Common_Movement_ExclamationMark
	playse SE_PIN
	return

Route102_EventScript_ZigzaHurt::
	playse SE_EFFECTIVE
	applymovement LOCALID_ZIGZA, Route102_Movement_RaltsHurt
	waitmovement 0
	return

Route102_EventScript_BallThrow::
	addobject LOCALID_BALL
	applymovement LOCALID_BALL, Route102_Movement_BallThrow
	playse SE_BALL_THROW
	waitse
	playse SE_BALL_OPEN
	removeobject LOCALID_RALTS
	waitse
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
	waitmoncry
	waitmovement 0
	removeobject LOCALID_BALL
	addobject LOCALID_BALL2
	return

Route102_EventScript_BallCatch::
	playse SE_BALL
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
	waitmovement 0
	waitse
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
	waitmovement 0
	delay 16
	playse SE_BALL
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
	waitmovement 0
	waitse
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
	waitmovement 0
	delay 16
	playse SE_BALL
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
	waitmovement 0
	waitse
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
	waitmovement 0
	delay 24
	playse SE_PIN
	waitse 
	delay 10
	playfanfare MUS_EVOLVED
	waitfanfare
	return

Route102_EventScript_BallCatchHide::
	removeobject LOCALID_BALL2
	return

Route102_EventScript_BallZigza::
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_ZIGZA
	addobject LOCALID_BALL
	setobjectxy LOCALID_BALL, 9, 5
	playse SE_BALL_OPEN
	delay 8
	fadescreen FADE_FROM_WHITE
	waitse
	return

Route102_EventScript_BallZigzaHide::
	removeobject LOCALID_BALL
	return
	

Route102_Movement_BallThrow::
	disable_jump_landing_ground_effect
	jump_2_right
	step_end

Route102_Movement_RaltsTeleport::
	jump_in_place_left_right
	set_invisible
	step_end

Route102_Movement_RaltsTeleport2::
	set_visible
	jump_in_place_left_right
	face_right
	step_end

Route102_EventScript_ZigzagoonAttacks::
	applymovement LOCALID_ZIGZA, Route102_Movement_AttackRalts
	delay 24
	playse SE_EFFECTIVE
	applymovement LOCALID_RALTS, Route102_Movement_RaltsHurt
	waitmovement 0
	return
	
	
	
Route102_Movement_AttackRalts::
	walk_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	lock_facing_direction
	delay_16
	walk_left
	unlock_facing_direction
	step_end

Route102_Movement_RaltsHurt::
	face_left
	lock_facing_direction
	jump_right
	unlock_facing_direction
	step_end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "{PLAYER}…\n"
	.string "Los Pokémon viven en el pasto,\l"
	.string "¿no?\p"
	.string "Por favor quédate así puedo…\n"
	.string "¡…AHHH!$"

Route102_Text_WallyIDidIt:
	.string "L-lo hice…\n"
	.string "¡TENGO UN POKÉMON!$"

Route102_Text_WallyZigzagoonThanks:
	.string "¡Gracias, Zigzagoon!\nNo podría haberlo hecho sin ti...\pEh... ¡Regresa!$"

Route102_Text_LetsGoBack:
	.string "¡{PLAYER}, gracias!\n"
	.string "¡Volvamos al Gimnasio!$"

Route102_Text_ImNotVeryTall:
	.string "No…soy tan alto, así que\n"
	.string "me hundo en el pasto alto.\p"
	.string "Ayúdame… Soy alérgico-\n"
	.string "-AAAA…\l"
	.string "CHOOO- alégica…$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "¡ATRAPAR ATRAPAR ATRAPAR!$"

Route102_Text_RouteSignOldale:
	.string "RUTA 102\n"
	.string "{RIGHT_ARROW} PUEBLO OLDALE$"

Route102_Text_RouteSignPetalburg:
	.string "RUTA 102\n"
	.string "{LEFT_ARROW} CIUDAD PETALBURG$"
