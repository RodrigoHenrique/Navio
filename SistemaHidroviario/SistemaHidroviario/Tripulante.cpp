#include "Tripulante.h"

Tripulante::Tripulante(const string &cargo,const string &sobrenome)
{
	this->cargo = cargo;
	this->sobrenome = sobrenome;
}

Tripulante::~Tripulante()
{
}

ostream &operator<<(ostream &output,const Tripulante &tripulante_imprime)
{
	output << tripulante_imprime.cargo << " " << tripulante_imprime.sobrenome;
	return output;
}

const Tripulante & Tripulante::operator =(const Tripulante &tripulante_atribuicao)
{
	cargo = tripulante_atribuicao.cargo;
	sobrenome = tripulante_atribuicao.sobrenome;
}

bool Tripulante::operator==(const Tripulante &tripulante_comparacao) const
{
	if(tripulante_comparacao.cargo != cargo) return false;
	if(tripulante_comparacao.sobrenome != sobrenome) return false;
	return true;
}

bool Tripulante::operator!=(const Tripulante &tripulante_comparacao) const
{
	if((*this) == tripulante_comparacao) return false;
	else return true;
}

string Tripulante::get_cargo() const
{
	return this->cargo;
}

string Tripulante::get_sobrenome() const
{
	return this->sobrenome;
}

void Tripulante::set_cargo(const string &novoCargo)
{
	this->cargo = novoCargo;
}