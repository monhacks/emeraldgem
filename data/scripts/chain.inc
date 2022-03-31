ChainNumber::
	lockall
    buffernumberstring 0, VAR_CHAIN
    msgbox TextoCool, 2
	release
    end


ChainBroke::
	lockall
	buffernumberstring 0, VAR_CHAIN
    msgbox TextoCool2, 2
	release
	end
 
 
TextoCool2::
	.string "Cadena rota por {STR_VAR_2}.$"
TextoCool::
    .string "Cadena: {STR_VAR_1}, de {STR_VAR_2}.$"
 
AddChain::
    addvar VAR_CHAIN, 1
    end

