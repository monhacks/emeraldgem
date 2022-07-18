GraniteCave_1F_MapScripts::
	.byte 0


GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	checkitem ITEM_HM05
	compare VAR_RESULT, TRUE
	goto_if_eq GraniteCave_1F_EventScript_Hiker_2
	msgbox GraniteCave_1F_EventScript_Hiker_Text_1
	giveitem ITEM_HM05
	msgbox GraniteCave_1F_EventScript_Hiker_Text_0
	release
	end

GraniteCave_1F_EventScript_Hiker_2:
	msgbox GraniteCave_1F_EventScript_Hiker_Text_0
	release
	end


GraniteCave_1F_Trigger_Top::
	setvar VAR_DEWFORD_TOWN_STATE, 5
	goto GraniteCave_1F_EventScript_Grunts
	return


GraniteCave_1F_Trigger_Middle::
	setvar VAR_DEWFORD_TOWN_STATE, 6
	goto GraniteCave_1F_EventScript_Grunts
	return


GraniteCave_1F_Trigger_Bottom::
	setvar VAR_DEWFORD_TOWN_STATE, 7
	goto GraniteCave_1F_EventScript_Grunts
	return


GraniteCave_1F_EventScript_Grunts::
	lockall
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_0
	hidenamebox
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceUp
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_1
	hidenamebox
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceRight
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_2
	hidenamebox
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceUp
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_3
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_WalkInPlaceRight
	applymovement 4, Common_Movement_WalkInPlaceRight
	applymovement 5, Common_Movement_WalkInPlaceRight
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_4
	hidenamebox
	closemessage
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_5
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox GraniteCave_1F_EventScript_Grunts_Text_6
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_Movement_PlayerEscapes
	applymovement 4, GraniteCave_1F_Movement_Grunt2_BlockExit_Top
	applymovement 3, GraniteCave_1F_Movement_Grunt1_BlockExit_Top
	applymovement 5, GraniteCave_1F_Movement_Grunt3_BlockExit_Top
	waitmovement 0
	delay 16
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_7
	hidenamebox
	closemessage
	switch VAR_DEWFORD_TOWN_STATE
	case 5, GraniteCave_1F_EventScript_Grunts_3
	case 6, GraniteCave_1F_EventScript_Grunts_4
	case 7, GraniteCave_1F_EventScript_Grunts_5
	call GraniteCave_1F_EventScript_PlayerNoWayOut1
GraniteCave_1F_EventScript_Grunts_1:
	msgbox GraniteCave_1F_EventScript_Grunts_Text_8
	hidenamebox
	closemessage
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_9
	hidenamebox
	closemessage
	applymovement 3, GraniteCave_1F_Grunt1_Attack_Top
	applymovement 4, GraniteCave_1F_Grunt23_Attack_Top
	applymovement 5, GraniteCave_1F_Grunt23_Attack_Top
	waitmovement 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_10
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_Text_Grunt1_Intro
	trainerbattle_no_intro TRAINER_ANDRES_2, GraniteCave_1F_Text_Grunt1_Defeat
	closemessage
	playse SE_PIN
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_11
	hidenamebox
	closemessage
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_Text_Grunt2_Intro
	trainerbattle_no_intro TRAINER_ANDRES_3, GraniteCave_1F_Text_Grunt2_Defeat
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_12
	hidenamebox
	closemessage
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 12
	namebox Aqua
	msgbox GraniteCave_1F_Text_Grunt3_Intro
	trainerbattle_no_intro TRAINER_ANDRES_4, GraniteCave_1F_Text_Grunt3_Defeat
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_13
	hidenamebox
	closemessage
	delay 16
	applymovement 4, Common_Movement_FaceAwayPlayer
	applymovement 3, Common_Movement_FaceAwayPlayer
	applymovement 5, Common_Movement_FaceAwayPlayer
	waitmovement 0
	delay 24
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_14
	hidenamebox
	closemessage
	applymovement 4, Common_Movement_FacePlayer
	applymovement 3, Common_Movement_FacePlayer
	applymovement 5, Common_Movement_FacePlayer
	waitmovement 0
	delay 24
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_15
	hidenamebox
	closemessage
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	namebox Unknown
	msgbox GraniteCave_1F_EventScript_Grunts_Text_16
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_FaceDown
	applymovement 4, Common_Movement_FaceDown
	applymovement 5, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	hidenamebox
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_17
	hidenamebox
	closemessage
	delay 20
	playse SE_DOOR
	addobject 6
	setobjectxy 6, 37, 12
	delay 48
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_18
	hidenamebox
	closemessage
	delay 20
	applymovement 5, Common_Movement_WalkInPlaceDown
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_19
	hidenamebox
	closemessage
	delay 16
	applymovement 4, Common_Movement_WalkInPlaceDown
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_20
	hidenamebox
	closemessage
	delay 16
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_21
	hidenamebox
	closemessage
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_22
	hidenamebox
	closemessage
	applymovement 6, GraniteCave_1F_Movement_BrawlyUp2
	delay 20
	fadescreen FADE_TO_BLACK
	delay 16
	waitmovement 0
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_23
	hidenamebox
	playmoncry SPECIES_HARIYAMA, CRY_MODE_NORMAL
	msgbox GraniteCave_1F_EventScript_Grunts_Text_24
	waitmoncry
	closemessage
	playse SE_SUPER_EFFECTIVE
	waitse
	applymovement 6, GraniteCave_1F_Movement_BrawlyDown2
	delay 20
	fadescreen FADE_FROM_BLACK
	delay 16
	waitmovement 0
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, Common_Movement_ExclamationMark
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_25
	hidenamebox
	closemessage
	delay 16
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_26
	hidenamebox
	closemessage
	delay 16
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_27
	hidenamebox
	closemessage
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_28
	hidenamebox
	closemessage
	delay 16
	namebox Aqua
	msgbox GraniteCave_1F_EventScript_Grunts_Text_29
	hidenamebox
	closemessage
	applymovement 6, GraniteCave_1F_Movement_BrawlyMove
	applymovement 3, GraniteCave_1F_Movement_Grunt1_Escape
	applymovement 5, GraniteCave_1F_Movement_Grunt2_Escape
	applymovement 4, GraniteCave_1F_Movement_Grunt3_Escape
	delay 28
	fadescreen FADE_TO_BLACK
	waitmovement 0
	setobjectxy 3, 9, 9
	setobjectxy 4, 9, 10
	setobjectxy 5, 9, 11
	playse SE_DOOR
	delay 16
	fadescreen FADE_FROM_BLACK
	delay 20
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_30
	hidenamebox
	closemessage
	applymovement 6, Common_Movement_FacePlayer
	waitmovement 0
	delay 16
	applymovement 6, GraniteCave_1F_Movement_BrawlyWalkPlayer
	waitmovement 0
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_31
	hidenamebox
	closemessage
	msgbox GraniteCave_1F_EventScript_Grunts_Text_32
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_33
	hidenamebox
	closemessage
	delay 16
	applymovement 6, Common_Movement_FaceAwayPlayer
	waitmovement 0
	delay 32
	applymovement 6, Common_Movement_FacePlayer
	waitmovement 0
	namebox Brawly
	msgbox GraniteCave_1F_EventScript_Grunts_Text_34
	hidenamebox
	closemessage
	applymovement 6, GraniteCave_1F_Movement_BrawlyOut
	waitmovement 0
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	playse SE_DOOR
	setflag FLAG_GRANITE_GRUNTS
	setvar VAR_DEWFORD_TOWN_STATE, 2
	release
	end

GraniteCave_1F_EventScript_Grunts_3:
	call GraniteCave_1F_EventScript_PlayerNoWayOut1
	goto GraniteCave_1F_EventScript_Grunts_1

GraniteCave_1F_EventScript_Grunts_4:
	call GraniteCave_1F_EventScript_PlayerNoWayOut2
	goto GraniteCave_1F_EventScript_Grunts_1

GraniteCave_1F_EventScript_Grunts_5:
	call GraniteCave_1F_EventScript_PlayerNoWayOut3
	goto GraniteCave_1F_EventScript_Grunts_1


GraniteCave_1F_EventScript_PlayerNoWayOut1::
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_Movement_PlayerNoWayOut
	waitmovement 0
	return


GraniteCave_1F_EventScript_PlayerNoWayOut2::
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_Movement_PlayerNoWayOut2
	waitmovement 0
	return


GraniteCave_1F_EventScript_PlayerNoWayOut3::
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_Movement_PlayerNoWayOut3
	waitmovement 0
	return


GraniteCave_1F_Movement_BrawlyOut:
	walk_down
	walk_down
	walk_down
	step_end

GraniteCave_1F_Movement_BrawlyWalkPlayer:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

GraniteCave_1F_Movement_BrawlyMove:
	walk_left
	walk_left
	face_right
	step_end

GraniteCave_1F_Movement_BrawlyUp2:
	walk_slow_up
	walk_slow_up
	step_end

GraniteCave_1F_Movement_Grunt1_Escape:
	walk_down
	walk_down
	step_end

GraniteCave_1F_Movement_Grunt2_Escape:
	delay_8
	walk_down
	walk_left
	walk_down
	step_end

GraniteCave_1F_Movement_Grunt3_Escape:
	delay_16
	delay_16
	walk_down
	walk_right
	walk_down
	step_end

GraniteCave_1F_Movement_BrawlyDown2:
	walk_slow_down
	walk_slow_down
	delay_16
	delay_8
	walk_in_place_slow_up
	step_end

GraniteCave_1F_Movement_PlayerEscapes:
	lock_facing_direction
	walk_right
	unlock_facing_direction
	walk_fast_right
	walk_fast_right
	step_end

GraniteCave_1F_Movement_PlayerBacksDown:
	lock_facing_direction
	walk_slow_up
	step_end

GraniteCave_1F_Movement_PlayerNoWayOut:
	walk_in_place_slow_up
	delay_16
	walk_in_place_slow_down
	step_end

GraniteCave_1F_Movement_PlayerNoWayOut2:
	lock_facing_direction
	walk_slow_up
	walk_in_place_slow_down
	walk_in_place_slow_up
	delay_16
	walk_in_place_slow_down
	step_end

GraniteCave_1F_Movement_PlayerNoWayOut3:
	lock_facing_direction
	walk_slow_up
	walk_slow_up
	walk_in_place_slow_down
	walk_in_place_slow_up
	delay_16
	walk_in_place_slow_down
	step_end

GraniteCave_1F_Grunt1_Attack_Top:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

GraniteCave_1F_Grunt23_Attack_Top:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	face_player
	step_end

GraniteCave_1F_Movement_Grunt2_BlockExit_Top:
	delay_16
	walk_faster_down
	walk_faster_right
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_down
	walk_faster_down
	walk_faster_right
	face_up
	step_end

GraniteCave_1F_Movement_Grunt1_BlockExit_Top:
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_down
	walk_faster_down
	walk_faster_right
	walk_faster_right
	face_up
	step_end

GraniteCave_1F_Movement_Grunt3_BlockExit_Top:
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_down
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	face_up
	step_end

GraniteCave_1F_EventScript_Hiker_Text_0:
	.string "Flash es un Movimiento Oculto que puede\n"
	.string "ser usado fuera de combate. Aunque,\l"
	.string "honestamente, ya no es de tanta\l"
	.string "utilidad.\p"
	.string "Verás, unos terremotos abrieron unos\n"
	.string "hoyos naturales en las plantas bajas y\l"
	.string "ahora la luz natural pasa\l"
	.string "tranquilamente.$"

GraniteCave_1F_EventScript_Hiker_Text_1:
	.string "Antes, solía darles a los nuevos la MO05\n"
	.string "Flash para que navegaran por este\l"
	.string "lugar. Ahora, lo hago por formalidades.$"

GraniteCave_1F_EventScript_Grunts_Text_0:
	.string "¿Entendieron?\p"
	.string "Entramos, buscamos las {COLOR BLUE}Piedras\n"
	.string "Evolutivas{COLOR DARK_GRAY}, y nos vamos.$"

GraniteCave_1F_EventScript_Grunts_Text_1:
	.string "¿Pero para qué queremos las piedras?$"

GraniteCave_1F_EventScript_Grunts_Text_2:
	.string "Ay, si eres tarada, ¡Para extraer y\n"
	.string "estudiar la {COLOR BLUE}Energía Evolutiva{COLOR DARK_GRAY} que\l"
	.string "contienen, claro está!$"

GraniteCave_1F_EventScript_Grunts_Text_3:
	.string "¡Ay, bueno, pero no te enojes!$"

GraniteCave_1F_EventScript_Grunts_Text_4:
	.string "¡Ay, chicas, tenemos visitas!$"

GraniteCave_1F_EventScript_Grunts_Text_5:
	.string "¿Qué quiere {ELLA} idiota el día de hoy?\p"
	.string "Podemos ofrecerle una amordaza o un\n"
	.string "cascote en el medio de la frente.$"

GraniteCave_1F_EventScript_Grunts_Text_6:
	.string "{PLAYER}: {COLOR BLUE}(¡Mejor me voy!)$"

GraniteCave_1F_EventScript_Grunts_Text_7:
	.string "¿A dónde crees que vas?$"

GraniteCave_1F_EventScript_Grunts_Text_8:
	.string "{PLAYER}: {COLOR BLUE}(D-demonios...)$"

GraniteCave_1F_EventScript_Grunts_Text_9:
	.string "Ahora, ni amordaza ni cascote en la\n"
	.string "frente, ¡Ahora enfrentarás el poder del\l"
	.string "{COLOR BLUE}Equipo Aqua{COLOR DARK_GRAY}!$"

GraniteCave_1F_EventScript_Grunts_Text_10:
	.string "¡Te arrepentirás de escuchar nuestro\n"
	.string "plan!$"

GraniteCave_1F_EventScript_Grunts_Text_11:
	.string "¿¡C-cómo!?$"

GraniteCave_1F_EventScript_Grunts_Text_12:
	.string "¡No puede ser!$"

GraniteCave_1F_EventScript_Grunts_Text_13:
	.string "¿A mí también?\p"
	.string "¡Imposible!$"

GraniteCave_1F_EventScript_Grunts_Text_14:
	.string "¡No nos dejas otra opción!$"

GraniteCave_1F_EventScript_Grunts_Text_15:
	.string "¡Te seguiremos atacando, con nuestros\n"
	.string "Pokémon más débiles, hasta que tú seas\l"
	.string "quien se debilite!$"

GraniteCave_1F_EventScript_Grunts_Text_16:
	.string "¡BASTA!$"

GraniteCave_1F_EventScript_Grunts_Text_17:
	.string "¡¿Quién se atreve a interrumpirnos?!$"

GraniteCave_1F_EventScript_Grunts_Text_18:
	.string "Les dije, basta.$"

GraniteCave_1F_EventScript_Grunts_Text_19:
	.string "¡E-e-e-es Brawly, el {COLOR BLUE} Líder del\n"
	.string "Gimnasio{COLOR DARK_GRAY}!$"

GraniteCave_1F_EventScript_Grunts_Text_20:
	.string "¿Y-y-y él qué hace aquí?\p"
	.string "Creí que los Líderes de Gimnasio no\n"
	.string "salían...$"

GraniteCave_1F_EventScript_Grunts_Text_21:
	.string "¡N-no importa qué haga aquí, lo\n"
	.string "derrotaremos!$"

GraniteCave_1F_EventScript_Grunts_Text_22:
	.string "Parece que no van a retirarse, ¿Will ya?\p"
	.string "¡Entonces tendré que obligarlas!$"

GraniteCave_1F_EventScript_Grunts_Text_23:
	.string "¡Hariyama, usa Tambor, y luego Machada!$"

GraniteCave_1F_EventScript_Grunts_Text_24:
	.string "¡HHYYAAAA!$"

GraniteCave_1F_EventScript_Grunts_Text_25:
	.string "¡N-N-NO!\n"
	.string "¡Nuestras reservas!\p"
	.string "¡Acabó con 12 Pokémon de un sólo\n"
	.string "movimiento!$"

GraniteCave_1F_EventScript_Grunts_Text_26:
	.string "¡What a waste!\n"
	.string "Ni siquiera necesitaba usar Tambor.\l"
	.string "Bueno, ladies, si me hacen el honor de\l"
	.string "no volver a verlas en este Pueblo, se\l"
	.string "los agradecería enormemente.$"

GraniteCave_1F_EventScript_Grunts_Text_27:
	.string "¡M-maldita sea!\p"
	.string "¡Esto no es lo último que verán de\n"
	.string "nosotras!$"

GraniteCave_1F_EventScript_Grunts_Text_28:
	.string "Ah, ¿Quieren más?\p"
	.string "No sabía que disfrutaban tanto la\n"
	.string "humillación, deberían ver a un\l"
	.string "psicólogo por eso, el masoquismo no les\l"
	.string "hará nada bien.$"

GraniteCave_1F_EventScript_Grunts_Text_29:
	.string "¡M-maldito!$"

GraniteCave_1F_EventScript_Grunts_Text_30:
	.string "¡Ah, mantenerme todo serio e\n"
	.string "intimidante es complicado!$"

GraniteCave_1F_EventScript_Grunts_Text_31:
	.string "¿Estás bien, amig{OA}?\n"
	.string "¿Esas locas no te hicieron nada, no?$"

GraniteCave_1F_EventScript_Grunts_Text_32:
	.string "{PLAYER}: N-no, señor.$"

GraniteCave_1F_EventScript_Grunts_Text_33:
	.string "¡Hell yeah, eso significa que llegué\n"
	.string "justo a tiempo!\p"
	.string "Aunque, estoy seguro que las habrías\n"
	.string "derrotado eventualmente si ellas no\l"
	.string "hubieran intentado atacarte con todos\l"
	.string "sus Pokémon al mismo tiempo, después\l"
	.string "de todo, tú solit{OA} derrotaste a sus\l"
	.string "Pokémon principales, ¿Me equivoco?$"

GraniteCave_1F_EventScript_Grunts_Text_34:
	.string "Anyway, ¡Te estaré esperando en el\n"
	.string "Gimnasio, dude!\p"
	.string "¡No puedo esperar a batallar contra tí,\n"
	.string "yeah!$"

GraniteCave_1F_Text_Grunt1_Intro::
	.string "¡Vas a caer!$"

GraniteCave_1F_Text_Grunt2_Intro::
	.string "¡Pues yo no me dejaré ganar!$"

GraniteCave_1F_Text_Grunt3_Intro::
	.string "¡La más fuerte viene ahora!\n¡Ya verás!$"

GraniteCave_1F_Text_Grunt1_Defeat::
	.string "¡¿C-cómo!?$"

GraniteCave_1F_Text_Grunt2_Defeat::
	.string "¡Imposible!\n¡También fui derrotada!$"

GraniteCave_1F_Text_Grunt3_Defeat::
	.string "Entendería que derrotes a esas\ndos tontas, ¿¡Pero a mí!?$"

GraniteCave_1F_Player::
	.string "{COLOR_PLAYER}{PLAYER}$"
