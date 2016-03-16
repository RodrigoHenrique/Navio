#include "Submarino.h"
#include "Embarcacao.h"
#include <string>

using namespace std;

Submarino::Submarino(const string &meioLoc,const string &prop,const string &tipoHel,const string &tipoCombNuc)
:Embarcacao(meioLoc,prop,tipoHel)
{
    this->tipoCombustivelNuclear = tipoCombNuc;
    this->submerso = true;
}

Submarino::~Submarino()
{
}

bool Submarino::mover()
{
    if(this->submerso == true) return true;
    else return false;
}