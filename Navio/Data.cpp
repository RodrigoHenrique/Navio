#include "Data.h"
#include <iostream>

using std::cout;

int Data::diasPorMes[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

Data::Data(int dia, int mes, int ano)
{

    this->dia = checarDia(dia,mes,ano);

    if(mes >= 1 && mes <= 12) this->mes = mes;
    else this->mes = 1;
    
    if(ano < 0) this->ano = 1900;
    else this->ano = ano;
}

Data::~Data()
{
}

int Data::checarDia(int dia,int mes,int ano) const
{
	int d = diasPorMes[mes];
    
    if((dia>0) && (dia<=d)) return dia;	
    if((mes == 2) && (dia == 29) && ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))) return dia;
    cout << "Dia invalido.\n";
    return 1;
}

void Data::imprimeData() const
{
    cout << "Data (DD/MM/AA): " << dia << "/" << mes << "/" << ano <<"\n"; 
}
