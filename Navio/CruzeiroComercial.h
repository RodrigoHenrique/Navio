#ifndef CRUZEIROCOMERCIAL_H
#define CRUZEIROCOMERCIAL_H

#include "Navio.h"
#include <string>
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"
#include <iostream>

using std::string;
using std::ostream;

class CruzeiroComercial : public Cruzeiro
{
    friend ostream &operator<<(ostream &,const CruzeiroComercial &);
	
public:
    CruzeiroComercial(const string &,const Data &,const Porto &, const Porto &,const int &);
    CruzeiroComercial(const Navio &,const string &,const Data &,const int &);
    CruzeiroComercial(const Navio &,const int &);
    CruzeiroComercial(const int &);
	CruzeiroComercial(const CruzeiroComercial &);
    ~CruzeiroComercial();
    
    const CruzeiroComercial &operator=(const CruzeiroComercial &);
    bool operator==(const CruzeiroComercial &) const;
    
    bool testaTempoHabil();
    
private:
    static const int tempoMaximo;
    bool podeNavegarTempoHabil;

};

#endif // CRUZEIROCOMERCIAL_H
