#ifndef SUBMARINO_H
#define SUBMARINO_H
#include "Embarcacao.h"
#include <string>

using namespace std;

class Submarino : public Embarcacao
{
public:
    Submarino(const string &,const string &,const string &,const string &);
    ~Submarino();
    virtual bool mover();

private:
    string tipoCombustivelNuclear;
    bool submerso;

};

#endif // SUBMARINO_H
