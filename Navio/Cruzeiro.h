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
    Cruzeiro(const string &,const Data &,const Porto &, const Porto &,int *);
    Cruzeiro(const Cruzeiro &,const string &,const Data &,int *);
    Cruzeiro(const Cruzeiro &,int *);
    Cruzeiro(int *);
    
    ~Cruzeiro();

    bool embarque(int *);
    bool getEmbarqueEfetuado() const;

private:
    int passageirosABordo;
    bool embarqueEfetuado;
};

#endif // CRUZEIRO_H
