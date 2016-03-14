#include "Carga.h"
#include <string>

using std::string;

Carga::Carga()
{
}

Carga::Carga(const Carga &cargaCopia)
{
	(*this) = cargaCopia;
}

Carga::~Carga()
{
}

ostream &operator<<(ostream &output,const Carga &cargaImprime)
{
	output << "NOME DA CARGA: " << cargaImprime.nCarga << "\nPESO: " << cargaImprime.peso;
	return output;
}

const Carga & Carga::operator=(const Carga &cargaAtribui)
{
	this->nCarga = cargaAtribui.nCarga;
	this->peso = cargaAtribui.peso;
}

bool Carga::operator==(const Carga &cargaCompara) const
{
	if(cargaCompara.nCarga != this->nCarga) return false;
	if(cargaCompara.peso != this->peso) return false;
	return true;
}

bool Carga::operator!=(const Carga &cargaCompara) const
{
	if((*this) == cargaCompara) return false;
	else return true;
}

string Carga::getNCarga() const
{
	return this->nCarga;
}

double Carga::getPeso() const
{
	return this->peso;
}

void Carga::setNCarga(const string &nomeCarga)
{
	this->nCarga = nomeCarga;
}

void Carga::setPeso(const double &peso)
{
	this->peso = peso;
}