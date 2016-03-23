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
	
    vector<Embarcacao *> embarcacoes(3);
    Data data1(1,12,2014);
    Porto porto1("Belem"),porto2("Lisboa");
    
    Submarino sub("Mar","PropSubmarino","HeliceDeSubmarino","Plutonio"); //Nao permite um objeto de cclasse abstrata, mas Submarino nao é abstrato
    Cargueiro("CargueiroNomeTeste",data1,porto1,porto2,"Mar","PropCargueiro","Tripla"); //Idem
    
	cout << "\n";
    
    //delete [] embarcacoes;
	return 0;
}