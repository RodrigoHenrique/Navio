#ifndef CRUZEIROCOMERCIAL_H
#define CRUZEIROCOMERCIAL_H

#include "Navio.h"
#include <string>
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"

using std::string;

class CruzeiroComercial : public Cruzeiro
{
public:
    CruzeiroComercial(const string &,const Data &,const Porto &, const Porto &,const int &);
    CruzeiroComercial(const Navio &,const string &,const Data &,const int &);
    CruzeiroComercial(const Navio &,const int &);
    CruzeiroComercial(const int &);
    ~CruzeiroComercial();
    
    bool testaTempoHabil();
    
private:
    static const int tempoMaximo;
    bool podeNavegarTempoHabil;

};

#endif // CRUZEIROCOMERCIAL_H
