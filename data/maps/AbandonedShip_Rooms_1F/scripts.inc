# 1 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 6 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Demetrius::
# 10 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia::
# 15 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, AbandonedShip_Rooms_1F_EventScript_RegisterThalia
# 16 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
# 17 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 18 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 20 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 22 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 25 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 26 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 27 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_TakingALookAround:
# 28 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ships of this sort are rare, so I'm\n"
# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "taking a look around.\p"
# 30 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Hmhm…\n"
# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "There appear to be other cabins…$"
# 32 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 33 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaIntro:
# 34 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
# 35 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "come here? You must be curious!$"
# 36 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 37 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
# 38 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Not just curious, but also strong…$"
# 39 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 40 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
# 41 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "The man next door…\p"
# 42 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "He says he's just sightseeing,\n"
# 43 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "but I don't know about that.$"
# 44 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 45 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRegister:
# 46 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "You're such a tough TRAINER!\n"
# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Let me register you as a memento!$"
# 48 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 49 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusIntro:
# 50 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Waaah!\n"
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I've been found! …Huh?$"
# 52 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 53 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
# 54 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Oh, you're not my mom.$"
# 55 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 56 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm in trouble with my mom, so I ran.\n"
# 58 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Keep it a secret where I am!$"
