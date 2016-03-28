#include "Mercante.h"

using std::cin;

Mercante::Mercante(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida)
:Navio(nome_embarcacao,data_registro,proprietario,porto_partida)
{
    inicia_mercadorias_a_bordo();
}

Mercante::Mercante(const Mercante &mercante_copia)
:Navio(static_cast<Navio> (mercante_copia))
{
    set_mercadorias(mercante_copia.get_mercadorias());
}

Mercante::~Mercante()
{
}

void Mercante::definir_mercadorias(list<Mercadoria *> mercadorias_navio)
{
    if(mercadorias_navio.size() > Mercante::qde_max_mercadorias) return;
    set_mercadorias(mercadorias_navio);
    set_mercadorias_a_bordo();
}

ostream &operator<<(ostream &output,const Mercante &mercante_imprime)
{
    output << static_cast<Navio> (mercante_imprime);
    output << "\nMercadorias: ";
	if(mercante_imprime.get_mercadorias().empty()) output << " sem mercadorias";
	int j;
	output << "\nImprimir a relacao de mercadorias do navio mercante? <digite 1-sim> : ";
	cin >> j;
	if(j != 1) return output;
	list <Mercadoria *> ::iterator k;
	for(k = mercante_imprime.get_mercadorias().begin();k!=mercante_imprime.get_mercadorias().end();k++)
	{
		output << "\n " << *(*k);
	}
	return output;
}

const Mercante & Mercante::operator=(const Mercante &mercante_atribuicao)
{
    static_cast<Navio> (*this) = static_cast<Navio> (mercante_atribuicao);
    set_mercadorias(mercante_atribuicao.get_mercadorias());
}

bool Mercante::operator== (const Mercante &mercante_comparacao) const
{
    if(static_cast<Navio> (*this) != static_cast<Navio> (mercante_comparacao)) return false;
    if(get_mercadorias().size() != mercante_comparacao.get_mercadorias().size()) return false;
	list <Mercadoria *> ::iterator k;
	list <Mercadoria *> ::iterator j = get_mercadorias().begin();
	for(k = mercante_comparacao.get_mercadorias().begin();k!=mercante_comparacao.get_mercadorias().end();k++)
	{
		if(*(*j) != *(*k)) return false;
		j++;
	}
    return true;
}

bool Mercante::operator!= (const Mercante &mercante_comparacao) const
{
    if((*this) == mercante_comparacao) return false;
    else return true;
}