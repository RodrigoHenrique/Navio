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
    CruzeiroComercial(const string &,const Data &,const Porto &, const Porto &,const int &,const string &,const string &,const string &);
    ~CruzeiroComercial();
	CruzeiroComercial(const CruzeiroComercial &);
    
    const CruzeiroComercial &operator=(const CruzeiroComercial &);
    bool operator==(const CruzeiroComercial &) const;
    
    bool testaTempoHabil();
    virtual void imprimeViagem(const CruzeiroComercial &);
    
private:
    static const int tempoMaximo;
    bool podeNavegarTempoHabil;

};

#endif // CRUZEIROCOMERCIAL_H
