#ifndef CRUZEIRO_H
#define CRUZEIRO_H
#include <Navio.h>
#include <string>
#include "Data.h"
#include "Porto.h"

using std::string;

class Cruzeiro : public Navio
{
public:
    Cruzeiro(const string &,const Data &,const Porto &, const Porto &,const int &);
    Cruzeiro(const Navio &,const string &,const Data &,const int &);
    Cruzeiro(const Navio &,const int &);
    Cruzeiro(const int &);
    
    ~Cruzeiro();

    bool embarque(const int &);
    bool getEmbarqueEfetuado() const;
    int getPassageirosABordo() const;
    static const void dadosdaViagem(const Cruzeiro &);

private:
    int passageirosABordo;
    bool embarqueEfetuado;
};

#endif // CRUZEIRO_H
