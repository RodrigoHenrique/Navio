#include "Cruzeiro.h"

using std::cin;

Cruzeiro::Cruzeiro(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida)
:Navio(nome_embarcacao,data_registro,proprietario,porto_partida)
{
    this->inicia_passageiros_a_bordo();
}

Cruzeiro::Cruzeiro(const Cruzeiro &cruzeiro_copia)
:Navio(static_cast<Navio> (cruzeiro_copia))
{
    set_passageiros(cruzeiro_copia.get_passageiros());
}

Cruzeiro::~Cruzeiro()
{
}

void Cruzeiro::definir_passageiros(list<Passageiro * > passageiros_navio)
{
	if(passageiros_navio.size() > Navio::qde_max_passageiros) return;
	set_passageiros(passageiros_navio);
	set_passageiros_a_bordo();
}

ostream &operator<<(ostream &output,const Cruzeiro &cruzeiro_imprime)
{
    output << static_cast<Navio> (cruzeiro_imprime);
    output << "\nPassageiros: ";
	if(cruzeiro_imprime.get_passageiros_navio().empty()) output << " sem passageiros";
	int j;
	output << "\nImprimir a relacao de passageiros do cruzeiro? <digite 1-sim> : ";
	cin >> j;
	if(j != 1) return output;
	list <Passageiro *> ::iterator k;
	for(k = cruzeiro_imprime.get_passageiros().begin();k!=cruzeiro_imprime.get_passageiros().end();k++)
	{
		output << "\n " << *(*k);
	}
	return output;
}

const Cruzeiro & Cruzeiro::operator=(const Cruzeiro &cruzeiro_atribuicao)
{
    static_cast<Navio> (*this) = static_cast<Navio> (cruzeiro_atribuicao);
    set_passageiros(cruzeiro_atribuicao.get_passageiros());
}

bool Cruzeiro::operator== (const Cruzeiro &cruzeiro_comparacao) const
{
    if(static_cast<Navio> (*this) != static_cast<Navio> (cruzeiro_comparacao)) return false;
    if(get_passageiros().size() != cruzeiro_comparacao.get_passageiros().size()) return false;
	list <Passageiro *> ::iterator k;
	list <Passageiro *> ::iterator j = get_passageiros().begin();
	for(k = cruzeiro_comparacao.get_passageiros().begin();k!=cruzeiro_comparacao.get_passageiros().end();k++)
	{
		if(*(*j) != *(*k)) return false;
		j++;
	}
    return true;
}

bool Cruzeiro::operator!= (const Cruzeiro &cruzeiro_comparacao) const
{
    if((*this) == cruzeiro_comparacao) return false;
    else return true;
}

int Cruzeiro::get_velocidade_max_esp() const
{
    return get_velocidade_max();
}

int Cruzeiro::get_distancia_km_esp() const
{
    return get_velocidade_max();
}