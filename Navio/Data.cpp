#include "Data.h"
#include <iostream>

using std::cout;

Data::Data()
{
}

Data::~Data()
{
}

int Data::checarDia() const
{
    static const int diasPorMes[13] = {31,28,31,30,31,30,31,31,30,31,30,31,30,31};
    
    if(dia>0) &&dia<=diasPorMes[mes]) return dia;
    if(mes == 2 && dia == 29 && (ano % 400 == 0 || ano % 4 == 0 &&ano % 100 != 0)) return dia;
    cout << "Dia invalido.\n";
    return 1;
}