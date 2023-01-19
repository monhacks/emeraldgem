.set LOCALID_HINT_GUY, 4
RustboroCity_Gym_MapScripts::
	.byte 0

RustboroCity_Gym_EventScript_Roxanne::
	namebox Roxanne
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	hidenamebox
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
	goto_if_unset FLAG_RECEIVED_TM39, RustboroCity_Gym_EventScript_GiveRockTomb
	namebox Roxanne
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	hidenamebox
	release
	end
RustboroCity_Gym_Trigger_Nada::
	setflag FLAG_TEMP_1
	release
	end
RustboroCity_Gym_Trigger_Clear_Down::
	clearflag FLAG_TEMP_1
	setflag FLAG_ENABLED_PC
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkDown
	waitmovement 0
	release
	end
RustboroCity_Gym_Trigger_Clear_Left::
	clearflag FLAG_TEMP_1
	setflag FLAG_ENABLED_PC
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkLeft
	waitmovement 0
	release
	end
RustboroCity_Gym_Trigger_Clear_Right::
	clearflag FLAG_TEMP_1
	setflag FLAG_ENABLED_PC
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkRight1
	waitmovement 0
	release
	end
RustboroCity_Gym_Trigger_Up1::
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Down
	clearflag FLAG_ENABLED_PC
	getpartysize
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
	lockall
	playse SE_PIN
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceUp
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox RustboroCity_Gym_WaitYouCant
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	setflag FLAG_ENABLED_PC
	goto RustboroCity_Gym_EventScript_GymGuide
	end
	
RustboroCity_Gym_PlayerWalkDown:
	walk_down
	step_end
RustboroCity_Gym_PlayerWalkRight:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
RustboroCity_Gym_PlayerWalkRight1:
	walk_right
	step_end
RustboroCity_Gym_PlayerWalkLeft:
	walk_left
	step_end
RustboroCity_Gym_WaitYouCant:
	.string "¡Alto! ¡No puedes pasar así!$"
RustboroCity_Gym_ForThisGym:
	.string "No sé si lo sabías, pero en la región\n"
	.string "Hoenn, {COLOR BLUE}los gimnasios tienen\l"
	.string "requirimientos especiales{COLOR DARK_GRAY} que debes\l"
	.string "cumplir para poder entrar y batallar en\l"
	.string "ellos.\p"
	.string "Para este Gimnasio en específico,\n"
	.string "necesitas usar 3 Pokémon o menos. De\l"
	.string "esa forma tú y la líder tendrán la\l"
	.string "misma cantidad de Pokémon.\p"
	.string "Además, no podrás usar el\n"
	.string "{COLOR RED}Sistema de Almacenamiento Portátil{COLOR DARK_GRAY}\n"
	.string "dentro del Gimnasio.\p"
	.string "¡Pero cada Gimnasio es diferente!$"

RustboroCity_Gym_Trigger_Left::
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Right
	clearflag FLAG_ENABLED_PC
	getpartysize
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
	lockall
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox RustboroCity_Gym_WaitYouCant
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	setflag FLAG_ENABLED_PC
	goto RustboroCity_Gym_EventScript_GymGuide
	end 

RustboroCity_Gym_Trigger_Right::
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Left
	clearflag FLAG_ENABLED_PC
	getpartysize
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
	lockall
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox RustboroCity_Gym_WaitYouCant
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	setflag FLAG_ENABLED_PC
	goto RustboroCity_Gym_EventScript_GymGuide
	end


RustboroCity_Gym_EventScript_RoxanneDefeated::
	setflag FLAG_ENABLED_PC
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	end

RustboroCity_Gym_EventScript_GiveRockTomb::
	giveitem ITEM_TM39
	giveitem ITEM_TM51
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM39
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneRematch::
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_GymGuide::
	lockall
	faceplayer
	setflag FLAG_BAGLESS
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
	msgbox RustboroCity_Gym_ForThisGym
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceOriginalDirection
	releaseall
	end

RustboroCity_Gym_EventScript_GymGuidePostVictory::
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_GymStatueCertified::
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue::
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_RegisterRoxanne::
	lockall
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end


RustboroCity_Gym_Text_GymGuidePostVictory:
	.string "¡Esa batalla fue increíble!$"

RustboroCity_Gym_Text_JoshIntro:
	.string "¡Te mostraré un gran poder!$"

RustboroCity_Gym_Text_JoshDefeat:
	.string "Eres demasiado buen{OA}…$"

RustboroCity_Gym_Text_JoshPostBattle:
	.string "¡Aún te falta mucho!$"

RustboroCity_Gym_Text_TommyIntro:
	.string "Si no me puedes vencer,\n"
	.string "¡Olvídate de ganarle a Roxanne!$"

RustboroCity_Gym_Text_TommyDefeat:
	.string "¡Wow! ¡Tienes potencial!$"

RustboroCity_Gym_Text_TommyPostBattle:
	.string "Roxanne sobrepasa mi poder\n"
	.string "por kilómetros.\p"
	.string "¡Mejor ten cuidado!$"

RustboroCity_Gym_Text_MarcIntro:
	.string "¿Sabías qué?\p"
	.string "¡Mis Pokémon tipo Roca son\n"
	.string "lo mejor que hay!$"

RustboroCity_Gym_Text_MarcDefeat:
	.string "¿Sabías qué?\n"
	.string "¡Mi marido me hará lavar los platos!$"

RustboroCity_Gym_Text_MarcPostBattle:
	.string "Tengo muchos datos nuevos que aprender.\p"
	.string "Me tomó mucho tiempo llegar aquí,\n"
	.string "¡No tuve que apostar hacer quehaceres\l"
	.string "con mi marido si mantenía una racha!$"

RustboroCity_Gym_Text_RoxanneIntro:
	.string "¡Hola, soy Roxanne, la {COLOR RED}Líder del Gimnasio{COLOR DARK_GRAY}\n"
	.string "de Ciudad Rustboro.\p"
	.string "Esta seguramente es la primera vez\n"
	.string "que entras en un Gimnasio de Hoenn, ¿no?\l"
	.string "Pues déjame decirte que aquí, los\l"
	.string "Gimnasios tienen {COLOR BLUE}requisitos especiales\l"
	.string "que debes cumplir para entrar{COLOR DARK_GRAY},\l"
	.string "y por ejemplo, en este Gimnasio,\l"
	.string "se han de usar un máximo de 3 Pokémon.\p"
	.string "¡Además! El acceso al {COLOR RED}Sistema de\n"
	.string "Almacenamiento Portátil está prohibido{COLOR DARK_GRAY},\l"
	.string "para evitar pilluelos que quieran\l"
	.string "saltarse estas reglas.\p"
	.string "¡Pero basta de charlas, vamos al grano!\p"
	.string "¡Vas a enfrentarte ahora, a la\n"
	.string "chica prodigio de Ciudad Rustboro!$"

RustboroCity_Gym_Text_RoxanneDefeat:
	.string "Así que…\n"
	.string "Perdí…\p"
	.string "Ni con mi gran conocimiento conseguido\n"
	.string "con años de estudio de los combates\l"
	.string "pude ganarte.\p"
	.string "¡Acepto mi derrota humildemente!\n"
	.string "¡Eres increíble, {PLAYER}!$"

RustboroCity_Gym_Text_ReceivedStoneBadge:
	.string "{PLAYER} recibió la\n"
	.string "{COLOR RED}Medalla Piedra{COLOR DARK_GRAY} de ROXANNE.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
	.string "Esa es una Medalla de Gimnasio,\n"
	.string "aunque seguro ya las conoces.\p"
	.string "Por favor, toma esto como premio.$"

RustboroCity_Gym_Text_ExplainRockTomb:
	.string "¡Es la {COLOR BLUE}Máquina Técnica 39{COLOR DARK_GRAY}, Antiaéreo!\n"
	.string "Antiaéreo es un movimiento tipo Roca\l"
	.string "que causa que el rival {COLOR BLUE}pierda el tipo\l"
	.string "Volador hasta que sea reemplazado{COLOR DARK_GRAY}.\p"
	.string "¡Recuerda que las MTs no se gastan!$"

RustboroCity_Gym_Text_RoxannePostBattle:
	.string "Te recomendaría visitar otros\n"
	.string "Gimnasios, y ganar.\p"
	.string "Con tu poder, lograrás todo.$"

RustboroCity_Gym_Text_GymStatue:
	.string "Gimnasio Pokémon Rustboro$"
	.string "Vencedores del Gimnasio:\n"
	.string "{RIVAL}\n"
	.string "Leaf$"

RustboroCity_Gym_Text_GymStatueCertified:
	.string "Gimnasio Pokémon Rustboro$"
	.string "Vencedores del Gimnasio:\n"
	.string "{RIVAL}\n"
	.string "Leaf\l"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall:
	.string "… … … … … …\n"
	.string "… … … … … ¡BIP!\p"
	.string "Ah, hola, ¿{PLAYER}?\n"
	.string "Soy Roxanne, del Gimnasio Rustboro.\p"
	.string "Escuché de Brawly que eres más fuerte.\p"
	.string "Te prometo que mejoraré mi Gimnasio,\n"
	.string "para que puedas volver a enfrentame.\p"
	.string "¡Espero te emocione como a mí!\p"
	.string "… … … … … …\n"
	.string "… … … … … ¡Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne:
	.string "Roxanne registrada.$"

RustboroCity_Gym_Text_RoxannePreRematch:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat:
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch:
	.string "ROXANNE: I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"
