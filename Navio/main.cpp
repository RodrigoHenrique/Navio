#include <iostream>
#include <string>
#include "Navio.h"
#include "Data.h"
#include "Porto.h"

using std::cout;
using std::cin;


int main(int argc, char **argv)
{
    Data date1(10,10,2010);
    
	Porto partida("Mereen");
	Porto destino("Porto Real");
	
	Navio navio1("Balerion",date1,partida,destino);
	
	navio1.definirRota();
	Data date2(15,10,2010);
	
	Navio navio2(navio1,"Meraxes",date2);
	
	if(navio1.ligarMotores())
	{
		navio1.navegar();
		if(navio1.chegouDestino()) navio1.dadosdaViagem();
	}
	
	if(navio2.ligarMotores(navio1))
	{
		navio2.navegar();
		if(navio2.chegouDestino()) navio2.dadosdaViagem();
	}

	return 0;
}
