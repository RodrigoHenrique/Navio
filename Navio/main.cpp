#include <iostream>
#include "Navio.h"
using std::count;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

int main(int argc, char **argv)
{
	string navio,passageiros,comandante,tripulacao;
	float latinicial = -1.477252;
	float loninicial = -48.454593;
	
	cout << "Inicializacao\n\n";
	
	cout << "Certificado de Registro: ";
	getline(cin,navio);
	cout << "Certificado de Passageiros: ";
	getline(cin,passageiros);
	cout << "Certificado do Comandante: ";
	getline(cin,comandante);
	cout << "Certificado de cTripulacao: ";
	getline(cin,tripulacao);
	
	Navio navio1(navio,passageiros,comandante,tripulacao,latinicial,loninicial);
	navio1.imprimeRegistros()
	return 0;
}
