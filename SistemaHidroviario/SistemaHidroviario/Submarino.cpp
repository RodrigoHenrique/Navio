#include "Submarino.h"
#include "Embarcacao.h"
#include "iostream"

using std::cout;
using std::cin;

Submarino::Submarino(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida,const string &tipo_combustivel)
:Embarcacao(nome_embarcacao,data_registro,proprietario,porto_partida)
{
	this->tipo_combustivel = tipo_combustivel;
	this->submerso = false;
}

Submarino::Submarino(const Submarino &sub_copia)
:Embarcacao(sub_copia.get_nome_embarcacao(),sub_copia.get_data_registro(),sub_copia.get_proprietario(),sub_copia.get_porto_partida())
{
	this->tipo_combustivel = sub_copia.tipo_combustivel;
	this->submerso = sub_copia.submerso;
}

Submarino::~Submarino()
{
}

ostream &operator<<(ostream &output,const Submarino &submarino_imprime)
{
	output << "Nome do submarino: "  << submarino_imprime.get_nome_embarcacao();
	output << "\nRegistrado em:\n        " << submarino_imprime.get_data_registro();
	output << "\nPorto de partida: " << submarino_imprime.get_porto_partida();
	output << "\nPorto de chegada: " << submarino_imprime.get_porto_chegada();
	output << "\nEstado do motor: " << submarino_imprime.get_estado_motor();
	output << "\nDistancia do destino: " << submarino_imprime.get_distancia_km();
	output << "\nVelocidade atual: " << submarino_imprime.get_velocidade_km();
	output << "\nTempo de viagem decorrido: " << submarino_imprime.get_tempo_decorrido();
	output << "\n\nNome do Proprietario: " << submarino_imprime.get_proprietario();
	output << "\nTipo de locomocao: " << submarino_imprime.get_tipo_locomocao();
	output << "\nTripulacao:";
	for(int i=0;i<submarino_imprime.get_tripulantes().size();i++)
	{
		output << "\n-Tripulante " << i << ": " << submarino_imprime.get_tripulantes()[i];
	}
	
	return output;
}

const Submarino & Submarino::operator =(const Submarino &submarino_atribuicao)
{
	set_navegacao_liberada(submarino_atribuicao.get_navegacao_liberada());
	set_porto_partida(submarino_atribuicao.get_porto_partida());
	set_porto_chegada(submarino_atribuicao.get_porto_chegada());
	set_nome_embarcacao(submarino_atribuicao.get_nome_embarcacao());
	set_data_registro(submarino_atribuicao.get_data_registro());
	set_embarcacao_aportada(submarino_atribuicao.get_embarcacao_aportada());
	set_rota_definida(submarino_atribuicao.get_rota_definida());
	set_tripulacao_definida(submarino_atribuicao.get_tripulacao_definida());
	set_distancia_km(submarino_atribuicao.get_distancia_km());
	set_estado_motor(submarino_atribuicao.get_estado_motor());
	set_velocidade_km(submarino_atribuicao.get_velocidade_km());
	set_tempo_decorrido(submarino_atribuicao.get_tempo_decorrido());
	set_proprietario(submarino_atribuicao.get_proprietario());
	set_tipo_locomocao(submarino_atribuicao.get_tipo_locomocao());
	set_tripulantes(submarino_atribuicao.get_tripulantes());
}

bool Submarino::operator==(const Submarino &submarino_comparacao) const
{
	if(get_navegacao_liberada() != submarino_comparacao.get_navegacao_liberada()) return false;
	if(get_porto_partida() != submarino_comparacao.get_porto_partida()) return false;
	if(get_porto_chegada() != submarino_comparacao.get_porto_chegada()) return false;
	if(get_nome_embarcacao() != submarino_comparacao.get_nome_embarcacao()) return false;
	if(get_data_registro() != submarino_comparacao.get_data_registro()) return false;
	if(get_embarcacao_aportada() != submarino_comparacao.get_embarcacao_aportada()) return false;
	if(get_rota_definida() != submarino_comparacao.get_rota_definida()) return false;
	if(get_tripulacao_definida() != submarino_comparacao.get_tripulacao_definida()) return false;
	if(get_distancia_km() != submarino_comparacao.get_distancia_km()) return false;
	if(get_estado_motor() != submarino_comparacao.get_estado_motor()) return false;
	if(get_velocidade_km() != submarino_comparacao.get_velocidade_km()) return false;
	if(get_tempo_decorrido() != submarino_comparacao.get_tempo_decorrido()) return false;
	if(get_proprietario() != submarino_comparacao.get_proprietario()) return false;
	if(get_tipo_locomocao() != submarino_comparacao.get_tipo_locomocao()) return false;
	if(get_tripulantes().size() != submarino_comparacao.get_tripulantes().size()) return false;
	for(int i=0;i<submarino_comparacao.get_tripulantes().size();i++)
	{
		if(get_tripulantes()[i] != submarino_comparacao.get_tripulantes()[i]) return false;
	}
	return true;
}

bool Submarino::mover()
{
	set_navegacao_liberada();
	if(get_navegacao_liberada()) this->submerso = true;
	if(this->submerso) return true;
	else return false;
}

int Submarino::definir_velocidade()
{
	if(get_estado_motor())
	{
		int nivelVelocidade;
		cout << "\nMudar nivel de velocidade?\n";
		cout << "0 -> 0 Km/h\n";
		cout << "1 -> 3 Km/h\n";
		cout << "2 -> 9 Km/h\n";
		cout << "3 -> 27 Km/h\n";
		cout << "4 -> 81 Km/h\n";
		cout << "Digite: ";
		cin >> nivelVelocidade;
		switch(nivelVelocidade)
		{
			case 0:
				return 0;
				break;
			case 1:
				return 3;
				break;
			case 2:
				return 9;
				break;
			case 3:
				return 27;
				break;
			case 4:
				return 81;
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