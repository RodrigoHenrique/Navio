#include "Passageiro.h"
#include <string>

using std::string;

Passageiro::Passageiro()
{
	this->nome = "NaoIdentificado";
	this->sobrenome = "NaoIdentificado";
	this->idade = 0;
	this->peso = 0.0;
}

Passageiro::Passageiro(const string &nome,const string &sobrenome,const int &idade,const double &peso)
{
	this->nome = nome;
	this->sobrenome = sobrenome;
	this->idade = idade;
	this->peso = peso;
}

Passageiro::Passageiro(const Passageiro &passageiro_copia)
{
	(*this) = passageiro_copia;
}

Passageiro::~Passageiro()
{
}

ostream &operator<<(ostream &output, const Passageiro &passageiro_imprime)
{
	output << "Nome completo: " << passageiro_imprime.nome << " " << passageiro_imprime.sobrenome;
	output << "\nIdade: " << passageiro_imprime.idade << " Anos";
	output << "\nPeso: " << passageiro_imprime.peso << " Kgs";
	return output;
}

const Passageiro & Passageiro::operator=(const Passageiro &passageiro_atribuicao)
{
	nome = passageiro_atribuicao.nome;
	sobrenome = passageiro_atribuicao.sobrenome;
	idade = passageiro_atribuicao.idade;
	peso = passageiro_atribuicao.peso;
}

bool Passageiro::operator==(const Passageiro &passageiro_comparacao) const
{
	if(passageiro_comparacao.nome != nome) return false;
	if(passageiro_comparacao.sobrenome != sobrenome) return false;
	if(passageiro_comparacao.idade != idade) return false;
	if(passageiro_comparacao.peso != peso) return false;
	return true;
}

string Passageiro::get_nome() const
{
	return this->nome;
}

string Passageiro::get_sobrenome() const
{
	return this->sobrenome;
}

int Passageiro::get_idade() const
{
	return this->idade;
}

int Passageiro::get_peso() const
{
	return this->peso;
}