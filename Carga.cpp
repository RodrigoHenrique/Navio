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
	output << "NOME DA CARGA: " << cargaImprime.nome_carga << "\nPESO: " << cargaImprime.peso;
	return output;
}

const Carga & Carga::operator=(const Carga &cargaAtribui)
{
	this->nome_carga = cargaAtribui.nome_carga;
	this->peso = cargaAtribui.peso;
}

bool Carga::operator==(const Carga &cargaCompara) const
{
	if(cargaCompara.nome_carga != this->nome_carga) return false;
	if(cargaCompara.peso != this->peso) return false;
	return true;
}

bool Carga::operator!=(const Carga &cargaCompara) const
{
	if((*this) == cargaCompara) return false;
	else return true;
}

string Carga::get_nome_carga() const
{
	return this->nome_carga;
}

double Carga::get_peso() const
{
	return this->peso;
}

void Carga::set_nome_carga(const string &nomeCarga)
{
	this->nome_carga = nome_carga;
}

void Carga::set_peso(const double &peso)
{
	this->peso = peso;
}