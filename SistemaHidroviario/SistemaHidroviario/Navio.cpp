#include "Navio.h"
#include "Embarcacao.h"
#include <iostream>;

using std::cin;
using std::cout;

Navio::Navio(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida)
:Embarcacao(nome_embarcacao,data_registro,proprietario,porto_partida)
{
}

Navio::Navio(const Navio &navio_copia)
:Embarcacao(navio_copia.get_nome_embarcacao(),navio_copia.get_data_registro(),navio_copia.get_proprietario(),navio_copia.get_porto_partida())
{
    set_passageiros(navio_copia.get_passageiros());
}

Navio::~Navio()
{
}

ostream &operator<<(ostream &output,const Navio &navio_imprime)
{
	output << "Nome do navio: "  << navio_imprime.get_nome_embarcacao();
	output << "\nRegistrado em:\n        " << navio_imprime.get_data_registro();
	output << "\nPorto de partida: " << navio_imprime.get_porto_partida();
	output << "\nPorto de chegada: " << navio_imprime.get_porto_chegada();
	output << "\nEstado do motor: " << navio_imprime.get_estado_motor();
	output << "\nDistancia do destino: " << navio_imprime.get_distancia_km();
	output << "\nVelocidade atual: " << navio_imprime.get_velocidade_km();
	output << "\nTempo de viagem decorrido: " << navio_imprime.get_tempo_decorrido();
	output << "\n\nNome do Proprietario: " << navio_imprime.get_proprietario();
	output << "\nTipo de locomocao: " << navio_imprime.get_tipo_locomocao();
	output << "\nTripulacao:";
	if(navio_imprime.get_tripulantes().empty()) output << " sem tripulacao";
	for(int i=0;i<navio_imprime.get_tripulantes().size();i++)
	{
		output << "\n-Tripulante " << i << ": " << navio_imprime.get_tripulantes()[i];
	}
}

const Navio & Navio::operator=(const Navio &navio_atribuicao)
{
	set_navegacao_liberada(navio_atribuicao.get_navegacao_liberada());
	set_porto_partida(navio_atribuicao.get_porto_partida());
	set_porto_chegada(navio_atribuicao.get_porto_chegada());
	set_nome_embarcacao(navio_atribuicao.get_nome_embarcacao());
	set_data_registro(navio_atribuicao.get_data_registro());
	set_embarcacao_aportada(navio_atribuicao.get_embarcacao_aportada());
	set_rota_definida(navio_atribuicao.get_rota_definida());
	set_tripulacao_definida(navio_atribuicao.get_tripulacao_definida());
	set_distancia_km(navio_atribuicao.get_distancia_km());
	set_estado_motor(navio_atribuicao.get_estado_motor());
	set_velocidade_km(navio_atribuicao.get_velocidade_km());
	set_tempo_decorrido(navio_atribuicao.get_tempo_decorrido());
	set_proprietario(navio_atribuicao.get_proprietario());
	set_tipo_locomocao(navio_atribuicao.get_tipo_locomocao());
	set_tripulantes(navio_atribuicao.get_tripulantes());
	set_passageiros(navio_atribuicao.get_passageiros());
}

bool Navio::operator== (const Navio &navio_comparacao) const
{
	if(get_navegacao_liberada() != navio_comparacao.get_navegacao_liberada()) return false;
	if(get_porto_partida() != navio_comparacao.get_porto_partida()) return false;
	if(get_porto_chegada() != navio_comparacao.get_porto_chegada()) return false;
	if(get_nome_embarcacao() != navio_comparacao.get_nome_embarcacao()) return false;
	if(get_data_registro() != navio_comparacao.get_data_registro()) return false;
	if(get_embarcacao_aportada() != navio_comparacao.get_embarcacao_aportada()) return false;
	if(get_rota_definida() != navio_comparacao.get_rota_definida()) return false;
	if(get_tripulacao_definida() != navio_comparacao.get_tripulacao_definida()) return false;
	if(get_distancia_km() != navio_comparacao.get_distancia_km()) return false;
	if(get_estado_motor() != navio_comparacao.get_estado_motor()) return false;
	if(get_velocidade_km() != navio_comparacao.get_velocidade_km()) return false;
	if(get_tempo_decorrido() != navio_comparacao.get_tempo_decorrido()) return false;
	if(get_proprietario() != navio_comparacao.get_proprietario()) return false;
	if(get_tipo_locomocao() != navio_comparacao.get_tipo_locomocao()) return false;
	if(get_tripulantes().size() != navio_comparacao.get_tripulantes().size()) return false;
	for(int i=0;i<navio_comparacao.get_tripulantes().size();i++)
	{
		if(get_tripulantes()[i] != navio_comparacao.get_tripulantes()[i]) return false;
	}
	
	return true;
}

bool Navio::operator!= (const Navio &navio_comparacao) const
{
    if((*this) == navio_comparacao) return false;
    else return true;
}

list<Passageiro * > Navio::get_passageiros_navio() const
{
	return get_passageiros();
}

bool Navio::get_passageiros_a_bordo() const
{
	return this->passageiros_a_bordo;
}

void Navio::set_passageiros_a_bordo()
{
	if(this->passageiros_a_bordo) this->passageiros_a_bordo = false;
	else this->passageiros_a_bordo = true;
}

void Navio::set_cargas_a_bordo()
{
    if(this->cargas_a_bordo) this->cargas_a_bordo = false;
    else this->cargas_a_bordo = true;
}

void Navio::set_mercadorias_a_bordo()
{
    if(this->mercadorias_a_bordo) this->mercadorias_a_bordo = false;
    else this->mercadorias_a_bordo = true;
}

void Navio::inicia_passageiros_a_bordo()
{
    this->passageiros_a_bordo = false;
}

void Navio::inicia_cargas_a_bordo()
{
    this->cargas_a_bordo = false;
}

void Navio::inicia_mercadorias_a_bordo()
{
    this->mercadorias_a_bordo = false;
}

int Navio::definir_velocidade()
{
	if(get_estado_motor())
	{
		int nivelVelocidade;
		cout << "\nMudar nivel de velocidade?\n";
		cout << "0 -> 0 Km/h\n";
		cout << "1 -> 2 Km/h\n";
		cout << "2 -> 4 Km/h\n";
		cout << "3 -> 8 Km/h\n";
		cout << "4 -> 16 Km/h\n";
		cout << "5 -> 32 Km/h\n";
		cout << "Digite: ";
		cin >> nivelVelocidade;
		switch(nivelVelocidade)
		{
			case 0:
				return 0;
				break;
			case 1:
				return 2;
				break;
			case 2:
				return 4;
				break;
			case 3:
				return 8;
				break;
			case 4:
				return 16;
				break;
			case 5:
				return 32;
				break;
			 default:
			 	cout << "\nNivel de velocidade invalido.\n";
			 	return get_velocidade_km();
				break;
		}
	}
	else
	{
		cout << "\nMotor desligado.\n";
		return -1;
	}	
}

bool Navio::mover()
{
	set_navegacao_liberada();
	return get_passageiros_a_bordo();
}

int Navio::get_velocidade_max() const
{
    return 32;
}