#include "Navio.h"
#include<string>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

Navio::Navio(string regNavio,string regPassageiros,string regComadante,string regTripulacao,float latIni,float lonIni)
{
	cRegistro = regNavio;
	cPassageiros = regPassageiros;
	cComandante = regComandante;
	cTripulacao = regTripulacao;
	latitude = latIni;
	longitude = lonIni;
}

Navio::~Navio()
{
}

void Navio::imprimeRegistros()
{
	cout << "Certificado de Registro: " << cRegistro << "\n";
	cout << "Certificado de Passageiros: " << cPassageiros << "\n";
	cout << "Certificado do Comandante: " << cComandante << "\n";
	cout << "Certificado de cTripulacao: " << cRegistro << "\n";
}