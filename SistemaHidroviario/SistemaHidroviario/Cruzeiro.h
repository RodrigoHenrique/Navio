#ifndef CRUZEIRO_H
#define CRUZEIRO_H
#include "Navio.h"
#include <string>
#include <iostream>
#include "Passageiro.h"

using std::string;
using std::ostream;

class Cruzeiro : public Navio
{
    friend ostream &operator<<(ostream &,const Cruzeiro &);
    
public:
    Cruzeiro(const string &,const Data &,const string &,const string &);
    Cruzeiro(const Cruzeiro &);
    ~Cruzeiro();
    
    const Cruzeiro &operator=(const Cruzeiro &);
    bool operator==(const Cruzeiro &) const;
    bool operator!=(const Cruzeiro &) const;
    
    void definir_passageiros(list<Passageiro *> );

};

#endif // CRUZEIRO_H
