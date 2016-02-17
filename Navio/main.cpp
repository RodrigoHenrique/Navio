#include <iostream>
#include <string>
#include "Navio.h"

using std::cout;
using std::cin;

bool Navio::cancelaRota = false;
int Navio::qdeNaviosAutorizados = 0;

int main(int argc, char **argv)
{
    Data date(10,10,2010);
	Navio navio1("Balerion",date);
	navio1.definirRota();
	
	Navio navio2(navio1,"Meraxes");

	Navio navio3(navio2,"Vhagar");

	
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
	
	if(navio3.ligarMotores(navio2))
	{
		navio3.navegar();
		if(navio3.chegouDestino()) navio3.dadosdaViagem();
	}
    
    cout << "Qde de navios autorizados a viajar: ";
    navio1.imprimeQdeNaviosAutorizados();
    cout << "/n";
    
	return 0;
}
