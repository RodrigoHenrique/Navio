#include <iostream>
#include <string>
#include "Navio.h"



int main(int argc, char **argv)
{
	Navio navio1("Savannah"),navio2;
	
	navio1.definirRota();
	if(navio1.ligarMotores())
	{
		navio1.navegar();
		if(navio1.chegouDestino()) navio1.dadosdaViagem();	
	}
	
	navio2.definirRota();
	if(navio2.ligarMotores())
	{
		navio2.navegar();
		if(navio2.chegouDestino()) navio2.dadosdaViagem();	
	}
		
	return 0;
}
