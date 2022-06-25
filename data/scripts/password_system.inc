Password1::
	lockall
	playfanfare MUS_OBTAIN_ITEM
    msgbox Password1_Text, 2
	release
    end


Password2::
	lockall
	playfanfare MUS_OBTAIN_ITEM
    msgbox Password2_Text, 2
	release
	end

Password3::
	lockall
	playfanfare MUS_OBTAIN_ITEM
    msgbox Password3_Text, 2
	release
	end

PasswordMuchos::
	lockall
	playfanfare MUS_OBTAIN_ITEM
    msgbox PasswordMuchos_Text, 2
	waitmessage
	release
	end
PasswordFallo::
	lockall
	playse SE_FAILURE
    msgbox PasswordIncorrecta_Text, 2
	waitmessage
	release
	end
PasswordEvento1::
	lockall
	msgbox TextoEvento1
	setflag FLAG_EVENTOMISTERIOSO1
	releaseall
	return


TextoEvento1:
	.string "¡Oh, algo te indica que algo cambió en la\n"
	.string "Ruta 101!\p"
	.string "¡Ve para ahí!$"
 
 
Password1_Text::
	.string "¡Te han enviado un Regalo Misterioso!\n¡Recibiste {STR_VAR_1}!.$"
Password2_Text::
	.string "¡Te han enviado un Regalo Misterioso!\n¡Recibiste {STR_VAR_1}\ly {STR_VAR_2}!$"
Password3_Text::
	.string "¡Te han enviado un Regalo Misterioso!\n¡Recibiste {STR_VAR_1}, \l{STR_VAR_2} y {STR_VAR_3}!$"
PasswordMuchos_Text::
	.string "¡Te han enviado un Regalo Misterioso!\n¡Recibiste muchas cosas!$"
PasswordRecibiste_Text::
	.string "¡Te han enviado un Regalo Misterioso!$"
PasswordIncorrecta_Text::
	.string "Contraseña incorrecta.$"



