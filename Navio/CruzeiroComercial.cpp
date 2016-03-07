#include "CruzeiroComercial.h"

#include "Navio.h"
#include <string>
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"

using std::string;

const int CruzeiroComercial::tempoMaximo = 100;

CruzeiroComercial::CruzeiroComercial(const string &nomeCruzeiro,const Data &data,const Porto &porto1, const Porto &porto2,const int &passageiros)
:Cruzeiro(nomeCruzeiro,data,porto1,porto2,passageiros)
{
    this->podeNavegarTempoHabil = false;
}

CruzeiroComercial::CruzeiroComercial(const Navio &navio,const string &novoNome,const Data &data,const int &passageiros)
:Cruzeiro(navio,novoNome,data,passageiros)
{
    this->podeNavegarTempoHabil = false;
}

CruzeiroComercial::CruzeiroComercial(const Navio &navio,const int &passageiros)
:Cruzeiro(navio,passageiros)
{
    this->podeNavegarTempoHabil = false;
}

CruzeiroComercial::CruzeiroComercial(const int &passageiros)
:Cruzeiro()
{
    this->podeNavegarTempoHabil = false;
}

CruzeiroComercial::~CruzeiroComercial()
{
}

