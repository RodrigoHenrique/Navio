#include "Navio.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "Data.h"
#include "Porto.h"

using std::cout;
using std::cin;
using std::string;
using std::getline;

const int Navio::capacidadeMaxima = 100;

Navio::Navio(const string &nome,const Data &date,const Porto &port1,const Porto &port2)
{
	this->nomeNavio = nome;
	this->pPartida = port1;
	this->pDestino = port2;
    this->dataPartida = date;
	this->liberaNavegacao = true;
	this->estadoMotor = false;
	this->nivelVelocidade = 0;
	this->velocidadeKmHora = 0;
	this->tempoHoras = 0;
    tripulacao = 0;
    nTripulantes = 0;
}

Navio::Navio(const Navio &n)
{
    this->nomeNavio = n.nomeNavio;
    this->dataPartida = n.dataPartida;
	this->pPartida = n.pPartida;
	this->pDestino = n.pDestino;
	this->liberaNavegacao = n.liberaNavegacao;
	this->estadoMotor = false;
	this->nivelVelocidade = 0;
	this->velocidadeKmHora = 0;
	this->tempoHoras = 0;
    tripulacao = 0;
    nTripulantes = 0;
}

Navio::Navio(const Navio &n,const string &nome,const Data &date)
{
    this->nomeNavio = nome;
    this->dataPartida = date;
    this->pPartida = n.pPartida;
    this->pDestino = n.pDestino;
    this->distanciaKm = n.distanciaKmEntrePortos;
    this->liberaNavegacao = n.liberaNavegacao;
	this->estadoMotor = false;
	this->nivelVelocidade = 0;
	this->velocidadeKmHora = 0;
	this->tempoHoras = 0;
    tripulacao = 0;
    nTripulantes = 0;
}
Navio::Navio()
{
	this->nomeNavio = "Desconhecido";
    Data data;
    this->dataPartida = data;
	this->liberaNavegacao = false;
	this->estadoMotor = false;
	this->nivelVelocidade = 0;
	this->velocidadeKmHora = 0;
	this->tempoHoras = 0;
    tripulacao = 0;
    nTripulantes = 0;
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
		int km;
		cout << "Porto de Partida: " << pPartida.getNomePorto();
		cout << "\nPorto de Destino: " << pDestino.getNomePorto();
		cout << "\nDistancia entre os Portos: ";
		cin >> km;
		this->distanciaKm = km;
		this->distanciaKmEntrePortos = km;
        
        do
        {
            int i;
            cout << "\nAdicionar oficial a tripulacao? <1 - sim> : ";
            cin >> i;
            if(i != 1) break;
            string nTrip;
            cout << "\nTripulante : ";
            cin >> nTrip;
            adicionarTripulacao(nTrip);
        }while(1);
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
	if(tempestade(n))
	{
		cout << "Navio: " << nomeNavio;
		Sleep(500);
		cout << "\nHa tempestade relatada pelo Navio que possui o mesmo destino que este.\n\nViagem Impossibilitada.\n\n";
	}
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
		cout << "--" << nomeNavio << "\n";
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

void Navio::operar()
{
	cout << "--" << nomeNavio << "\n";
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
		cout << "\nHa tempestade deste lado do mar? [1-sim] : ";
		cin >> resp;
		if(resp == 1) cancelaRota = true;
		else cancelaRota = false;
		system("cls");
		Sleep(1000);
		return true;
	} 
	else return false;
}

const void Navio::dadosdaViagem(const Navio &n)
{
	cout << "Dados da Viagem\n\n";
	cout << "-- Nome do Navio: " << n.nomeNavio << "\n";
	cout << "-- Quantidade de Passageiros a bordo: " << n.passageirosABordo;
	cout << "\n-- Porto de Partida: " << n.pPartida.getNomePorto();
	cout << "\n-- Porto de Destino: " << n.pDestino.getNomePorto();
	cout << "\n-- Tempo de Viagem [/hrs]: " << n.tempoHoras << "\n";
	cout << "-- Partida: ";
	n.dataPartida.imprimeData();
	Sleep(1000);
	system("pause");
	system("cls");
}

bool Navio::tempestade(const Navio &n)
{
	if(n.cancelaRota&&(this->pDestino.getNomePorto() == n.pDestino.getNomePorto())) return true;
	else return false;
}

bool Navio::embarque(int &passageiros)
{
	if(passageiros > capacidadeMaxima) return false;
	else
	{
		int passageirosASubir;
		do
		{
			system("cls");
			cout << "- " << nomeNavio;
			cout << "\n- Passageiros no Porto: " << passageiros;
			cout << "\n-- Ha quantos passageiros a subir a bordo? : ";
			cin >> passageirosASubir;
			if(passageirosASubir > passageiros) cout << "Ha menos passageiros no Porto.\n";
		}while(passageirosASubir > passageiros);
		system("CLS");
		Sleep(500);
		passageiros -= passageirosASubir;
		passageirosABordo = passageirosASubir;
		return true;
	} 
}

string Navio::getPortoPartida() const
{
	return this->pPartida.getNomePorto();
}

void Navio::adicionarTripulacao(const string &cargoTripulante)
{
    if(liberaNavegacao == true)
    {
        if(nTripulantes !=0)
        {
        	cout << "1\n";
            string *aux = new string[nTripulantes];
            cout << "2\n";
            int i;
            for(i = 0;i < nTripulantes;i++)
			{
				aux[i] = tripulacao[i];
				cout << "laco\n";		
			}
            cout << "3\n";
            delete [] tripulacao;
            cout << "4\n";
            nTripulantes++;
            tripulacao = new string[nTripulantes];
            cout << "5\n";
            for(int i = 0;i < nTripulantes - 1;i++) tripulacao[i] = aux[i];
            cout << "6\n";
            tripulacao[nTripulantes - 1] = cargoTripulante;
            cout << "7\n";
            delete [] aux;
            cout << "8\n";
        }
        else
        {
        	cout << "1\n";
            tripulacao = new string;
            cout << "2\n";
            tripulacao[0] = cargoTripulante;
            cout << "3\n";
            nTripulantes++;
            cout << "4\n";
        }
    }
}
