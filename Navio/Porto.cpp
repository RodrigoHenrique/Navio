#include "Porto.h"
#include <string>

using std::string;

Porto::Porto(const string &Porto)
{
	this->nomePorto = Porto;
}

Porto::Porto(const Porto &portoCopia)
{
	this->nomePorto = portoCopia.nomePorto;
}

Porto::Porto()
{
	this->nomePorto = "Porto Desconhecido";
}

Porto::~Porto()
{
}

ostream &operator<<(ostream &output,const Porto &portoImprime)
{
    output << "NOME DO PORTO: " << portoImprime.nomePorto;
    return output;
}

bool Porto::operator== (const Porto &portoCompara) const
{
	if(portoCompara.nomePorto == nomePorto) return true;
	else return false;
}

/*const Porto & Porto::operator=(const Porto &portoAtrib)
{
	this->nomePorto = portoAtrib.nomePorto;
}*/ //Por Algum motivo, esse trecho dá erro.

string Porto::getNomePorto() const
{
	return this->nomePorto;
}