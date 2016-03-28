#include "Navio.h"
#include "Embarcacao.h"

Navio::Navio(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida)
:Embarcacao(nome_embarcacao,data_registro,proprietario,porto_partida)
{
}

Navio::~Navio()
{
}

list<Passageiro * > Navio::get_passageiros_navio() const
{
	return get_passageiros();
}

void Navio::definir_passageiros(list<Passageiro * > passageiros_navio)
{
	if(passageiros_navio.size() > Navio::qde_max_ocupantes) return;
	set_passageiros(passageiros_navio);
}

int Navio::definir_velocidade()
{
	return -1;
}

bool Navio::mover()
{
	return true;
}