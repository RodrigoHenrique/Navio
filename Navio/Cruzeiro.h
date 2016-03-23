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
    Cruzeiro(const string &,const Data &,const Porto &, const Porto &,const int &,const string &,const string &,const string &);
    Cruzeiro(const Cruzeiro &);
    ~Cruzeiro();
    
    const Cruzeiro &operator=(const Cruzeiro &);
    bool operator==(const Cruzeiro &) const;

    bool embarque(const int &);
    bool getEmbarqueEfetuado() const;
    int getPassageirosABordo() const;
    static const void dadosdaViagem(const Cruzeiro &);
    
    virtual void imprimeViagem();
    virtual bool mover();

private:
    int passageirosABordo;
    bool embarqueEfetuado;
};

#endif // CRUZEIRO_H