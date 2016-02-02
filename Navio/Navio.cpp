#include "Navio.h"
#include <string>
#include <iostream>


using std::cout;
using std::cin;

Navio::Navio(string nome)
{
	nomeNavio = nome;
	liberaNavegacao = true;
	estadoMotor = false;
	nivelVelocidade = 0;
	velocidadeKmHora = 0;
	tempoHoras = 0;
}

Navio::Navio()
{
	nomeNavio = "Desconhecido";
	liberaNavegacao = false;
	estadoMotor = false;
	nivelVelocidade = 0;
	velocidadeKmHora = 0;
	tempoHoras = 0;
}

Navio::~Navio()
{	
}

void Navio::definirRota()
{
	cout << "\nNavio: " << nomeNavio << "\n";
	if(nomeNavio == "Desconhecido") cout << "Navio desautorizado a viajar.\n\n";
	else
	{
		cout << "Porto de Partida: ";
		getline(cin,pPartida);
		cout << "Porto de Destino: ";
		getline(cin,pDestino);
		cout << "Distancia entre os Portos: ";
		cin >> distanciaKm;	
	}
}

bool Navio::ligarMotores()
{
	if(liberaNavegacao == true)
	{
		estadoMotor = true;
		velocidadeKmHora = 2;
		return true;	
	}
	else return false;
}

int Navio::definirVelocidade()
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

void Navio::navegar()
{
	if(distanciaKm == 0)
	{
		cout << "\n-Horas passadas: " << tempoHoras << "\n-Distancia do destino: " << distanciaKm << " Km\n";
		cout << "\nChegou ao Destino.\n\n";
	}	
	else
	{
		cout << "\n-Horas passadas: " << tempoHoras << "\n-Distancia do destino: " << distanciaKm << " Km\n";
		
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
				cout << "\nAlterar Nivel de Velocidade? [1 -> sim] : ";
				cin >> resp;
				if (resp == 1) velocidadeKmHora = definirVelocidade();
			}
		}
		
		distanciaKm-=velocidadeKmHora;
		tempoHoras++;
		navegar();
	}
}

bool Navio::chegouDestino()
{
	if(distanciaKm == 0) return true;
	else return false;
}

void Navio::dadosdaViagem()
{
	cout << "Dados da Viagem\n\n";
	cout << "-- Nome do Navio: " << nomeNavio << "\n";
	cout << "-- Porto de Partida: " << pPartida << "\n";
	cout << "-- Porto de Destino: " << pDestino << "\n";
	cout << "-- Tempo de Viagem [/hrs]: " << tempoHoras << "\n";
}
