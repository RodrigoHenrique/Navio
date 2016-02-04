#include "Navio.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using std::cout;
using std::cin;



Navio::Navio(const string &nome)
{
	this->nomeNavio = nome;
	this->liberaNavegacao = true;
	this->estadoMotor = false;
	this->nivelVelocidade = 0;
	this->velocidadeKmHora = 0;
	this->tempoHoras = 0;
}

Navio::Navio(const Navio &n)
{
    this->nomeNavio = n.nomeNavio;
	this->liberaNavegacao = n.liberaNavegacao;
	this->estadoMotor = n.estadoMotor;
	this->nivelVelocidade = n.nivelVelocidade;
	this->velocidadeKmHora = n.velocidadeKmHora;
	this->tempoHoras = n.tempoHoras;
}

Navio::Navio(const Navio &n,const string &nome)
{
    this->nomeNavio = nome;
    this->pPartida = n.pPartida;
    this->pDestino = n.pDestino;
    this->distanciaKm = n.distanciaKm;
    this->liberaNavegacao = n.liberaNavegacao;
	this->estadoMotor = n.estadoMotor;
	this->nivelVelocidade = n.nivelVelocidade;
	this->velocidadeKmHora = n.velocidadeKmHora;
	this->tempoHoras = n.tempoHoras;
}
Navio::Navio()
{
	this->nomeNavio = "Desconhecido";
	this->liberaNavegacao = false;
	this->estadoMotor = false;
	this->nivelVelocidade = 0;
	this->velocidadeKmHora = 0;
	this->tempoHoras = 0;
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
		string p1,p2;
		int km;
		cout << "Porto de Partida: ";
		getline(cin,p1);
		cout << "Porto de Destino: ";
		getline(cin,p2);
		cout << "Distancia entre os Portos: ";
		cin >> km;
		this->pPartida = p1;
		this->pDestino = p2;
		this->distanciaKm = km;
		system("cls");
	}
}

bool Navio::ligarMotores()
{
	if(liberaNavegacao)
	{
		estadoMotor = true;
		velocidadeKmHora = 2;
		modoPilotoAuto = false;
		return true;	
	}
	else
	{
		cout << "\nNao tem permissao para zarpar.\n\n";
		return false;
	}
}

bool Navio::ligarMotores(const Navio &n)
{
	if(tempestade(n)) cout << "\nHa tempestade relatada pelo Navio que possui o mesmo destino que este.\n\nViagem Impossibilitada.\n\n";
	else
	{
		if(liberaNavegacao)
		{
		estadoMotor = true;
		velocidadeKmHora = 2;
		modoPilotoAuto = false;
		return true;	
		}
		else cout << "\nNao tem permissao para zarpar.\n\n";
	}
	return false;
}

int Navio::definirVelocidade()
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

void Navio::pilotoAutomatico()
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

void Navio::pilotoManual()
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
					cout << "\nA que distância do destino desativar o modo automatico? : ";
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
				if (resp == 1) velocidadeKmHora = definirVelocidade();
				system("cls");
				Sleep(500);
			}
		}
	}
}

void Navio::navegar()
{
	if(distanciaKm == 0)
	{
		cout << "\n-Horas passadas: " << tempoHoras << "\n-Distancia do destino: " << distanciaKm << " Km\n";
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

void Navio::operar()
{
	cout << "\n-Horas passadas: " << tempoHoras << "\n-Distancia do destino: " << distanciaKm << " Km\n";
	pilotoAutomatico();
	pilotoManual();
	distanciaKm-=velocidadeKmHora;
	tempoHoras++;
}

bool Navio::chegouDestino()
{
	if(distanciaKm == 0)
	{
		estadoMotor = false;
		int resp;
		cout << "\nHá tempestade deste lado do mar? [1-sim] : ";
		cin >> resp;
		if(resp == 1) cancelaRota = true;
		else cancelaRota = false;
		system("cls");
		Sleep(1000);
		return true;
	} 
	else return false;
}

void Navio::dadosdaViagem() const
{
	cout << "Dados da Viagem\n\n";
	cout << "-- Nome do Navio: " << nomeNavio << "\n";
	cout << "-- Porto de Partida: " << pPartida << "\n";
	cout << "-- Porto de Destino: " << pDestino << "\n";
	cout << "-- Tempo de Viagem [/hrs]: " << tempoHoras << "\n";
	Sleep(1000);
	system("pause");
	system("cls");
}

bool Navio::tempestade(const Navio &n)
{
	if(cancelaRota&&(this->pDestino == n.pDestino)) return true;
	else return false;
}
