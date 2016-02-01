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
	velocidade = 0;
	tempoHoras = 0;
}

Navio::Navio()
{
	nomeNavio = "Desconhecido";
	liberaNavegacao = false;
	estadoMotor = false;
	nivelVelocidade = 0;
	velocidade = 0;
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
		cin >> distancia;	
	}
}

bool Navio::ligarMotores()
{
	if(liberaNavegacao == true)
	{
		estadoMotor = true;
		velocidade = 2;
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
	float velocidade;
	switch(nivelVelocidade)
	{
		case 0:
			velocidade = 0;
			break;
		case 1:
			velocidade = 2;
			break;
		case 2:
			velocidade = 4;
			break;
		case 3:
			velocidade = 8;
			break;
		case 4:
			velocidade = 16;
			break;
		case 5:
			velocidade = 32;
			break;
		 default:
		 	cout << "\nNivel de velocidade invalido.\n";
		 	velocidade = 0;
			break;
	}
	return velocidade;
}

void Navio::navegar()
{
	if(distancia == 0.0) cout << "\nChegou ao Destino.\n\n";
	else
	{
		cout << "\n-Horas passadas: " << tempoHoras << "\n-Distancia do destino: " << distancia << " Km\n";
		
		if(distancia < velocidade)
		{
			cout << "\nReducao forcada da velocidade para 2 Km/h, destino iminente.\n";
			if (distancia == 1) velocidade = 1;
			else velocidade = 2;
		}
		else
		{
			if(distancia >=32)
			{
				int resp;
				cout << "\nAlterar Nivel de Velocidade? [1 -> sim] : ";
				cin >> resp;
				if (resp == 1) velocidade = definirVelocidade();
			}
		}
		
		distancia-=velocidade;
		tempoHoras++;
		navegar();
	}
}

bool Navio::chegouDestino()
{
	if(distancia == 0) return true;
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
