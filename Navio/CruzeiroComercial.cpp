#include "CruzeiroComercial.h"

#include "Navio.h"
#include <string>
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"

using std::string;
using std::cout;

const int CruzeiroComercial::tempoMaximo = 100;

CruzeiroComercial::CruzeiroComercial(const string &nomeCruzeiro,const Data &data,const Porto &porto1, const Porto &porto2,const int &passageiros,const string &meioLoc,const string &prop,const string &tipoHel)
:Cruzeiro(nomeCruzeiro,data,porto1,porto2,passageiros,meioLoc,prop,tipoHel)
{
    this->podeNavegarTempoHabil = false;
}

/*
CruzeiroComercial::CruzeiroComercial(const CruzeiroComercial &cruzeiroComCopia)
:Cruzeiro(static_cast<Cruzeiro> (cruzeiroComCopia))
{
	this->podeNavegarTempoHabil = cruzeiroComCopia.podeNavegarTempoHabil;
}
*/

CruzeiroComercial::~CruzeiroComercial()
{
}

/*
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
*/

bool CruzeiroComercial::testaTempoHabil()
{
    int vel = getVelocidadeMaxima();
    int distanciaKm = getDistanciaKm();
    if((distanciaKm/vel) > tempoMaximo) return false;
    return true;
}

void CruzeiroComercial::imprimeViagem(const CruzeiroComercial &cruCom)
{
	cout << "E um cruzeiro comercial.\n";
}