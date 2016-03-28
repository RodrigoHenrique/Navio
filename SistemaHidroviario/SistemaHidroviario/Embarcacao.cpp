#include "Embarcacao.h"
#include "Veiculo.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using std::cout;
using std::cin;

Embarcacao::Embarcacao(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida)
:Veiculo(proprietario,"Mar")
{
	this->nome_embarcacao = nome_embarcacao;
	this->data_registro = data_registro;
	this->embarcacao_aportada = false;
	this->navegacao_liberada = false;
	this->porto_partida = porto_partida;
	this->porto_chegada = "desconhecido";
	this->estadoMotor = false;
	this->velocidadeKmHora = 0;
	this->tempoHoras = 0;
	this->distanciaKm = 0;
	this->distanciaKmAuto = 0;
	this->distanciaKmEntrePortos = 0;
	this->modoPilotoAuto = false;
	this->rota_definida = false;
	this->tripulacao_definida = false;
}

Embarcacao::~Embarcacao()
{
	tripulacao.clear();
}

/*
bool Embarcacao::mover()
{
	set_navegacao_liberada();
	return this->navegacao_liberada;
}
*/

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

int Embarcacao::get_distancia_km() const
{
	return this->distanciaKm;
}

bool Embarcacao::get_estado_motor() const
{
	return this->estadoMotor;
}

int Embarcacao::get_velocidade_km() const
{
	return this->velocidadeKmHora;
}

int Embarcacao::get_tempo_decorrido() const
{
	return this->tempoHoras;
}

vector<Tripulante> Embarcacao::get_tripulantes() const
{
	return tripulacao;
}

list<Passageiro *> Embarcacao::get_passageiros() const
{
	return passageiros;
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

void Embarcacao::set_nome_embarcacao(const string &nome_embarcacao)
{
	this->nome_embarcacao = nome_embarcacao;
}

void Embarcacao::set_data_registro(const Data &data_registro)
{
	this->data_registro = data_registro;
}

void Embarcacao::set_embarcacao_aportada(const bool &embarcacao_aportada)
{
	this->embarcacao_aportada = embarcacao_aportada;
}

void Embarcacao::set_navegacao_liberada(const bool &navegacao_liberada)
{
	this->navegacao_liberada = navegacao_liberada;
}

void Embarcacao::set_rota_definida(const bool &rota_definida)
{
	this->rota_definida = rota_definida;
}

void Embarcacao::set_tripulacao_definida(const bool &tripulacao_definida)
{
	this->tripulacao_definida = tripulacao_definida;
}

void Embarcacao::set_distancia_km(const int &distancia_km)
{
	this->distanciaKm = distanciaKm;
}

void Embarcacao::set_estado_motor(const bool &estado_motor)
{
	this->estadoMotor = estadoMotor;
}

void Embarcacao::set_velocidade_km(const int &velocidade_km)
{
	this->velocidadeKmHora = velocidadeKmHora;
}

void Embarcacao::set_tempo_decorrido(const int &tempo_decorrido)
{
	this->tempoHoras = tempo_decorrido;
}

void Embarcacao::set_tripulantes(const vector<Tripulante> &trip)
{
	this->tripulacao = trip;
}
void Embarcacao::set_passageiros(const list<Passageiro *> &pass)
{
	this->passageiros = pass;
}

void Embarcacao::definir_rota()
{
	cout << "\nEmbarcacao: " << nome_embarcacao << "\n";
	if(!get_embarcacao_aportada()) cout << "Navio nao aportado.";
	else
	{
		int km;
		string pC;
		cout << "\nPorto de partida: " << get_porto_partida();
		cout << "\nPorto de chegada: ";
		cin >> pC;
		set_porto_chegada(pC);
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
	if(!this->mover()) 
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

/*
int Embarcacao::definir_velocidade()
{
	if(estadoMotor)
	{
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
			 	return velocidadeKmHora;
				break;
		}
	}
	else
	{
		cout << "\nMotor desligado.\n";
		return -1;
	}	
}
 */ 

void Embarcacao::piloto_automatico()
{
	if(modoPilotoAuto)
	{
		if(distanciaKm < velocidadeKmHora)
		{
			cout << "\nReducao forcada da velocidade para 2 Km/h, destino iminente.\n";
			system("pause");
			system("cls");
			Sleep(500);
			if (distanciaKm == 1) velocidadeKmHora = 1;
			else velocidadeKmHora = 2;
		}
		else
		{
			if(distanciaKm == distanciaKmAuto) modoPilotoAuto = false;
			if(distanciaKm - distanciaKmAuto < velocidadeKmHora)
			{
				if(distanciaKm-distanciaKmAuto >=2)
				{
					cout << "\nReducao forcada da velocidade para 2 Km/h, fim do piloto automatico iminente.\n";
					system("pause");
					system("cls");
					Sleep(500);
					if (distanciaKm == 1) velocidadeKmHora = 1;
					else velocidadeKmHora = 2;
				}
			}
		}
	}
}

void Embarcacao::piloto_manual()
{
	if(!modoPilotoAuto)
	{
		if(distanciaKm < velocidadeKmHora)
		{
			cout << "\nReducao forcada da velocidade para 2 Km/h, destino iminente.\n";
			if (distanciaKm == 1) velocidadeKmHora = 1;
			else velocidadeKmHora = 2;
		}
		else
		{
			if(distanciaKm >=32)
			{
				int resp;
				cout << "\nAtivar Piloto Automatico? [1 -> Sim] : ";
				cin >> resp;
				system("cls");
				Sleep(500);
				if (resp == 1)
				{
					cout << "\nPiloto Automatico LIGADO.\n";
					modoPilotoAuto = true;
					cout << "\nA que distancia do destino desativar o modo automatico? : ";
					cin >> distanciaKmAuto;
					system("cls");
					Sleep(500);
				}
				else
				{
					cout << "\nPiloto Automatico Desligado.\n";
				}
				cout << "\nAlterar Nivel de Velocidade? [1 -> sim] : ";
				cin >> resp;
				system("cls");
				Sleep(500);
				if (resp == 1) velocidadeKmHora = definir_velocidade();
				system("cls");
				Sleep(500);
			}
		}
	}
}

void Embarcacao::navegar()
{
	if(distanciaKm == 0)
	{
		cout << "--" << nome_embarcacao << "\n";
		cout << "\n-Horas passadas: " << tempoHoras << "\n-Distancia do destino: " << distanciaKm << " Km\n";
		system("pause");
		Sleep(1000);
		system("cls");
		cout << "\nChegou ao Destino.\n\n";
	}
	else
	{
		operar();
		Sleep(500);
		system("cls");
		navegar();
		
	}
}

void Embarcacao::operar()
{
	cout << "--" << nome_embarcacao << "\n";
	cout << "\n-Horas passadas: " << tempoHoras << "\n-Distancia do destino: " << distanciaKm << " Km\n";
	piloto_automatico();
	piloto_manual();
	distanciaKm-=velocidadeKmHora;
	tempoHoras++;
}

bool Embarcacao::viagem_finalizada()
{
	if(distanciaKm == 0)
	{
		estadoMotor = false;
		navegacao_liberada = false;
		rota_definida = false;
		tripulacao_definida = false;
		system("cls");
		Sleep(1000);
		return true;
	} 
	else return false;
}