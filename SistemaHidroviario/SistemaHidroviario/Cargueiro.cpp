#include "Cargueiro.h"

using std::cin;

Cargueiro::Cargueiro(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida)
:Navio(nome_embarcacao,data_registro,proprietario,porto_partida)
{
    this->inicia_cargas_a_bordo();
}

Cargueiro::Cargueiro(const Cargueiro &cargueiro_copia)
:Navio(static_cast<Navio> (cargueiro_copia))
{
    set_cargas(cargueiro_copia.get_cargas());
}

Cargueiro::~Cargueiro()
{
}

void Cargueiro::definir_cargas(list<Carga *> cargas_cargueiro)
{
    if(cargas_cargueiro.size() > Cargueiro::qde_max_cargas) return;
    set_cargas(cargas_cargueiro);
    set_cargas_a_bordo();
}

ostream &operator<<(ostream &output,const Cargueiro &cargueiro_imprime)
{
    output << static_cast<Navio> (cargueiro_imprime);
    output << "\nCargas: ";
	if(cargueiro_imprime.get_cargas().empty()) output << " sem cargas";
	int j;
	output << "\nImprimir a relacao de cargas do cruzeiro? <digite 1-sim> : ";
	cin >> j;
	if(j != 1) return output;
	list <Carga *> ::iterator k;
	for(k = cargueiro_imprime.get_cargas().begin();k!=cargueiro_imprime.get_cargas().end();k++)
	{
		output << "\n " << *(*k);
	}
	return output;
}

const Cargueiro & Cargueiro::operator=(const Cargueiro &cargueiro_atribuicao)
{
    static_cast<Navio> (*this) = static_cast<Navio> (cargueiro_atribuicao);
    set_cargas(cargueiro_atribuicao.get_cargas());
}

bool Cargueiro::operator== (const Cargueiro &cargueiro_comparacao) const
{
    if(static_cast<Navio> (*this) != static_cast<Navio> (cargueiro_comparacao)) return false;
    if(get_cargas().size() != cargueiro_comparacao.get_cargas().size()) return false;
	list <Carga *> ::iterator k;
	list <Carga *> ::iterator j = get_cargas().begin();
	for(k = cargueiro_comparacao.get_cargas().begin();k!=cargueiro_comparacao.get_cargas().end();k++)
	{
		if(*(*j) != *(*k)) return false;
		j++;
	}
    return true;
}

bool Cargueiro::operator!= (const Cargueiro &cargueiro_comparacao) const
{
    if((*this) == cargueiro_comparacao) return false;
    else return true;
}