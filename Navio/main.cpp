#include <iostream>
#include <string>
#include "Navio.h"
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"
#include "CruzeiroComercial.h"

using std::cout;
using std::cin;


int main(int argc, char **argv)
{
    Data date1(10,10,2010);
	Porto partida1("Mereen");
	Porto destino("Porto Real");
	Porto partida2("Mereen");
    
	int p = 100;
    
	CruzeiroComercial navio1("Balerion",date1,partida1,destino,p);
	navio1.definirRota();
	if(navio1.testaTempoHabil())
    {
        if(navio1.getEmbarqueEfetuado())
        {
            p -= navio1.getPassageirosABordo(); 
            if(navio1.ligarMotores())
            {
                navio1.navegar();
                if(navio1.chegouDestino()) Cruzeiro::dadosdaViagem(navio1);
            }
        }
    }
    
	
	
	
	Data date2(15,10,2010);
	
	CruzeiroComercial navio2(navio1,"Meraxes",date2,p);
    
    if(navio1 == navio2) cout << navio2 << "\n";
	
	if(navio1.getPortoPartida() != navio2.getPortoPartida()) navio2.definirRota();
	
	if(navio2.testaTempoHabil())
    {
        if(navio2.getEmbarqueEfetuado())
        {
            p -= navio2.getPassageirosABordo(); 
			navio2.tempestade(static_cast<Navio> (navio1)); //Ocorre um erro durante a execução desse trecho: quando testa-se caso hoive uma tempestade com a viagem do navio anterior, e caso ele e este tenham o mesmo destino, entao o navio presente nao mpode ligar os motores. Porem quando isso nao ocorre, ainda assim não é permitio ligar os motores, cancelaRota = True. 
            if(navio2.ligarMotores())
            {
                navio2.navegar();
                if(navio2.chegouDestino()) Cruzeiro::dadosdaViagem(navio2);
            }
        }
    }

	return 0;
}
