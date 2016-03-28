#ifndef CARGUEIRO_H
#define CARGUEIRO_H
#include "Navio.h"
#include <string>
#include <iostream>
#include "Carga.h"

using std::string;
using std::ostream;

class Cargueiro : public Navio
{
    friend ostream &operator<<(ostream &,const Cargueiro &);
    
public:
    Cargueiro(const string &,const Data &,const string &,const string &);
    Cargueiro(const Cargueiro &);
    ~Cargueiro();
    
    const Cargueiro &operator=(const Cargueiro &);
    bool operator==(const Cargueiro &) const;
    bool operator!=(const Cargueiro &) const;
    
    void definir_cargas(list<Carga *> );

};

#endif // CARGUEIRO_H
