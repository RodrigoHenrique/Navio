#include <iostream>
#include <string>
#include "Navio.h"
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"

using std::cout;
using std::cin;


int main(int argc, char **argv)
{
    Data date1(10,10,2010);
	Porto partida1("Mereen");
	Porto destino("Porto Real");
	Porto partida2("Mereen");
    
	int p = 100;
    int *pp;
    pp = &p;
    
	Cruzeiro navio1("Balerion",date1,partida1,destino,pp);
	navio1.definirRota();
	
    
	if(navio1.getEmbarqueEfetuado())
	{
        p = *pp;
		if(navio1.ligarMotores())
		{
			navio1.navegar();
			if(navio1.chegouDestino()) Navio::dadosdaViagem(navio1);
		}
	}
	
	
	Data date2(15,10,2010);
	
	Cruzeiro navio2(navio1,"Meraxes",date2,pp);
    
    if(navio1 == navio2) cout << navio2 << "\n";
	
	if(navio1.getPortoPartida() != navio2.getPortoPartida()) navio2.definirRota();
	
	if(navio2.getEmbarqueEfetuado())
	{
		if(navio2.ligarMotores(navio1))
		{
			navio2.navegar();
			if(navio2.chegouDestino()) Navio::dadosdaViagem(navio2);
		}
	}

	return 0;
}
