#include "Embarcacao.h"
#include "Veiculo.h"
#include <string>

using namespace std;

Embarcacao::Embarcacao(const string &meioLoc,const string &prop,const string &tipoHel)
:Veiculo(meioLoc,prop)
{
    this->tipoHelice = tipoHel;
}

Embarcacao::~Embarcacao()
{
}

