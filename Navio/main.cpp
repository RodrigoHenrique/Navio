#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include "Navio.h"
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"
#include "CruzeiroComercial.h"
#include "Cargueiro.h"
#include <vector>
#include "Submarino.h"
#include "Embarcacao.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;

int main(int argc, char **argv)
{
	cout << "Simulando Embarcacoes - Prototipo.\n\n";
	
    vector<Embarcacao *> embarcacoes(2);
    Data data1(1,12,2014);
    Porto porto1("Belem"),porto2("Lisboa");
    //int passageirosNoPortoCruzeiro = 100;
    
    Submarino *subi = new Submarino("Mar","PropSubmarino","HeliceDeSubmarino","Plutonio");
    Cargueiro *carg = new Cargueiro("CargueiroNomeTeste",data1,porto1,porto2,"Mar","PropCargueiro","Tripla");
    //Cruzeiro *cruz  = new Cruzeiro("CruzeiroNometeste",data1,porto1,porto2,passageirosNoPortoCruzeiro,"Mar","PropCruzeiro","Quadrupla");
    
    embarcacoes.push_back(subi);
    embarcacoes.push_back(carg);
    //embarcacoes.push_back(cruz);
    
    for(int i=0;i<embarcacoes.size();i++)
    {
        Submarino *objetoPtr = dynamic_cast<Submarino *> (embarcacoes[i]);
        if(objetoPtr != 0)
        {
            objetoPtr->imprimeViagem();
        }
    }
    
    
	cout << "\n";
    //delete [] embarcacoes;
	return 0;
}