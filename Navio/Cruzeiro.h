#ifndef CRUZEIRO_H
#define CRUZEIRO_H
#include "Navio.h"
#include <string>
#include "Data.h"
#include <iostream>

using std::string;
using std::ostream;

class Cruzeiro : public Navio
{
    friend ostream &operator<<(ostream &,const Cruzeiro &);
public:
    Cruzeiro(const string &,const Data &,const Porto &, const Porto &,const int &);
    Cruzeiro(const Navio &,const string &,const Data &,const int &);
    Cruzeiro(const Navio &,const int &);
    Cruzeiro(const int &);
    
    ~Cruzeiro();
    
    const Cruzeiro &operator=(const Cruzeiro &);
    bool operator==(const Cruzeiro &) const;

    bool embarque(const int &);
    bool getEmbarqueEfetuado() const;
    int getPassageirosABordo() const;
    static const void dadosdaViagem(const Cruzeiro &);

private:
    int passageirosABordo;
    bool embarqueEfetuado;
};

#endif // CRUZEIRO_H
