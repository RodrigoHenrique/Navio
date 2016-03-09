#include "CruzeiroComercial.h"

#include "Navio.h"
#include <string>
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"

using std::string;
using std::cout;

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
:Cruzeiro(passageiros)
{
    this->podeNavegarTempoHabil = false;
}

CruzeiroComercial::~CruzeiroComercial()
{
}

ostream &operator<<(ostream &output,const CruzeiroComercial &cruzeiroComImprime)
{
    output << static_cast <CruzeiroComercial> (cruzeiroComImprime);
    return output;
}

const CruzeiroComercial & CruzeiroComercial::operator=(const CruzeiroComercial &cruzeiroComAtribui)
{
    static_cast<Cruzeiro> (*this) = static_cast<Cruzeiro> (cruzeiroComAtribui);
    this->podeNavegarTempoHabil = cruzeiroComAtribui.podeNavegarTempoHabil;
}

bool CruzeiroComercial::operator==(const CruzeiroComercial &cruzeiroComCompara) const
{
    if((static_cast<Cruzeiro> (*this) == static_cast<Cruzeiro>(cruzeiroComCompara)) && podeNavegarTempoHabil == cruzeiroComCompara.podeNavegarTempoHabil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CruzeiroComercial::testaTempoHabil()
{
    int vel = getVelocidadeMaxima();
    int distanciaKm = getDistanciaKm();
    if((distanciaKm/vel) > tempoMaximo) return false;
    return true;
}