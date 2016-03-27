#include "Veiculo.h"
#include <string>

using std::string;

Veiculo::Veiculo()
{
}

Veiculo::Veiculo(const string &prop,const string &tipoLoc)
{
	this->proprietario = prop;
    this->tipo_locomocao = tipoLoc;
}

Veiculo::Veiculo(const Veiculo &v)
{
	
}

Veiculo::~Veiculo()
{
}

string Veiculo::get_proprietario() const
{
	return this->proprietario;
}

string Veiculo::get_tipo_locomocao() const
{
	return this->tipo_locomocao;
}

void Veiculo::set_proprietario(const string &proprietario)
{
	this->proprietario = proprietario;
}

void Veiculo::set_tipo_locomocao(const string &tipo_locomocao)
{
	this->tipo_locomocao = tipo_locomocao;
}