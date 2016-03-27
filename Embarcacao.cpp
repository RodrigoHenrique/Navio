#include "Embarcacao.h"
#include "Veiculo.h"
#include <iostream>

using std::cout;
using std::cin;

Embarcacao::Embarcacao(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida,const string &porto_chegada)
:Veiculo(proprietario,"Mar")
{
	this->nome_embarcacao = nome_embarcacao;
	this->data_registro = data_registro;
	this->embarcacao_aportada = false;
	this->navegacao_liberada = false;
	this->porto_partida = porto_partida;
	this->porto_chegada = porto_chegada;
	this->estadoMotor = false;
	this->nivelVelocidade = 0;
	this->velocidadeKmHora = 0;
	this->tempoHoras = 0;
	this->distanciaKm = 0;
	this->distanciaKmAuto = 0;
	this->distanciaKmEntrePortos = 0;
	this->modoPilotoAuto = false;
	this->rota_definida = false;
	this->tripulacao_definida = false;
}

Embarcacao::Embarcacao(const Embarcacao &embarcacao_copia)
:Veiculo()
{
	(*this) = embarcacao_copia;
}

Embarcacao::~Embarcacao()
{
	tripulacao.clear();
}

const Embarcacao & Embarcacao::operator =(const Embarcacao &embarcacao_atribuicao)
{
	nome_embarcacao = embarcacao_atribuicao.nome_embarcacao;
	data_registro = embarcacao_atribuicao.data_registro;
	navegacao_liberada = embarcacao_atribuicao.navegacao_liberada;
	set_proprietario(embarcacao_atribuicao.get_proprietario());
	set_tipo_locomocao(embarcacao_atribuicao.get_tipo_locomocao());
}

bool Embarcacao::mover()
{
	set_navegacao_liberada();
	return this->navegacao_liberada;
}

string Embarcacao::get_nome_embarcacao() const
{
	return this->nome_embarcacao;
}

Data Embarcacao::get_data_registro() const
{
	return this->data_registro;
}

bool Embarcacao::get_embarcacao_aportada() const
{
	return this->embarcacao_aportada;
}

bool Embarcacao::get_navegacao_liberada() const
{
	return this->navegacao_liberada;
}

string Embarcacao::get_porto_partida() const
{
	return this->porto_partida;
}

string Embarcacao::get_porto_chegada() const
{
	return this->porto_chegada;
}

bool Embarcacao::get_rota_definida() const
{
	return this->rota_definida;
}

bool Embarcacao::get_tripulacao_definida() const
{
	return this->tripulacao_definida;
}

void Embarcacao::set_embarcacao_aportada()
{
	if(this->embarcacao_aportada) this->embarcacao_aportada = false;
	else this->embarcacao_aportada = true;
}

void Embarcacao::set_navegacao_liberada()
{
	if(this->embarcacao_aportada) this->navegacao_liberada = false;
	else this->navegacao_liberada = true;
}

void Embarcacao::set_porto_partida(const string &porto_partida)
{
	this->porto_partida = porto_partida;
}

void Embarcacao::set_porto_chegada(const string &porto_chegada)
{
	this->porto_chegada = porto_chegada;
}

void Embarcacao::definir_rota()
{
	cout << "\nEmbarcacao: " << nome_embarcacao << "\n";
	if(!get_embarcacao_aportada()) cout << "Navio nao aportado.";
	else
	{
		int km;
		cout << "\nPorto de partida: " << get_porto_partida();
		cout << "\nPorto de chegada: " << get_porto_chegada();
		cout << "\nQual a distancia entre os portos, em Kms <digite um num inteiro positivo> : ";
		cin >> km;
		this->distanciaKm = km;
		this->distanciaKmEntrePortos = km;
		this->rota_definida = true;
	}
}

void Embarcacao::definir_tripulacao()
{
	while(1)
	{
		int i;
		this->tripulacao_definida = true;
		cout << "\nAdicionar oficial a tripulacao? <1 - sim> <digite um inteiro> : ";
		cin >> i;
		if(i!= 1) break;
		this->tripulacao_definida = false;
		string trip_nome,trip_cargo;
		cout << "\n Tripulante: ";
		cin >> trip_nome;
		cout << "\n Cargo: ";
		cin >> trip_cargo;
		Tripulante trip(trip_nome,trip_cargo);
		tripulacao.push_back(trip);
	}
}

void Embarcacao::ligar_motores()
{
	set_navegacao_liberada();
	if(!this->navegacao_liberada) 
	{
		this->estadoMotor = false;
		cout << "\nNao habilitado para zarpar.";
		return;
	}
	else
	{
		cout << "\n*Motores Ligados.\n";
		this->estadoMotor = true;
		velocidadeKmHora = 2;
		modoPilotoAuto = false;
	}
}

