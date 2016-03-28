#ifndef CRUZEIROCOMERCIAL_H
#define CRUZEIROCOMERCIAL_H
#include "Cruzeiro.h"
#include "Mercante.h"
#include <string>

using std::string;

class CruzeiroComercial : public Cruzeiro , public Mercante
{
    
public:
    CruzeiroComercial(const string &,const Data &,const string &,const string &);
    ~CruzeiroComercial();
    
    bool testa_tempo_habil();
    
private:
    const static int tempo_maximo_viagem = 1000;
    bool pode_navegar_tempo_habil;

};

#endif // CRUZEIROCOMERCIAL_H
