#include "Veiculo.h"
#include <string>

using namespace std;

Veiculo::Veiculo(const string &meioLoc,const string &prop)
{
    this->meioLocomocao = meioLoc;
    this->proprietario = prop;
}

Veiculo::~Veiculo()
{
}

