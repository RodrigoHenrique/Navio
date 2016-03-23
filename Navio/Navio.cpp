#include "Navio.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "Data.h"
#include "Porto.h"
#include "Embarcacao.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

const int Navio::capacidadeMaxima = 1000;

Navio::Navio(const string &nome,const Data &date,const Porto &port1,const Porto &port2,const string &meioLoc,const string &prop,const string &tipoHel)
:Embarcacao(meioLoc,prop,tipoHel)
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
	this->tempestadeRelatada = false;
}

Navio::Navio(const Navio &n)
:Embarcacao(n.getMeioLocomocao(),n.getProprietario(),n.getTipHelice())
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
	this->tempestadeRelatada = false;
}

Navio::~Navio()
{
    delete [] tripulacao;
}

bool Navio::operator== (const Navio &navioCompara) const
{
    if(navioCompara.nomeNavio != nomeNavio) return false;
    if(navioCompara.getPortoPartida() != getPortoPartida()) return false;
    if(navioCompara.dataPartida != dataPartida) return false;
    if(navioCompara.liberaNavegacao != liberaNavegacao) return false;
    if(navioCompara.estadoMotor != estadoMotor) return false;
    if(navioCompara.distanciaKm != distanciaKm) return false;
    if(navioCompara.distanciaKmAuto != distanciaKmAuto) return false;
    if(navioCompara.distanciaKmEntrePortos != distanciaKmEntrePortos) return false;
    if(navioCompara.modoPilotoAuto != modoPilotoAuto) return false;
    if(navioCompara.nivelVelocidade != nivelVelocidade) return false;
    if(navioCompara.velocidadeKmHora != velocidadeKmHora) return false;
    if(navioCompara.tempoHoras != tempoHoras) return false;
    if(navioCompara.cancelaRota != cancelaRota) return false;
    if(navioCompara.nTripulantes != nTripulantes) return false;
    else for(int i=0;i<nTripulantes;i++) if(navioCompara.tripulacao[i] != tripulacao[i]) return false;
    return true;
}

ostream &operator<<(ostream &output,const Navio &navioImprime)
{
    output << "NOME DO NAVIO: " << navioImprime.nomeNavio << "\nPORTO DE PARTIDA: " << navioImprime.pPartida << "\nPORTO DE DESTINO: " << navioImprime.pDestino;
    output << "\nTEMPO DE VIAGEM DECORRIDO: " << navioImprime.tempoHoras;
    return output;
}

const Navio & Navio::operator=(const Navio &navioAtrib)
{
    nomeNavio = navioAtrib.nomeNavio;
    pPartida = navioAtrib.pPartida;
    dataPartida = navioAtrib.dataPartida;
    liberaNavegacao = navioAtrib.liberaNavegacao;
    estadoMotor = navioAtrib.estadoMotor;
    distanciaKm = navioAtrib.distanciaKm;
    distanciaKmAuto = navioAtrib.distanciaKmAuto;
    distanciaKmEntrePortos = navioAtrib.distanciaKmEntrePortos;
    modoPilotoAuto = navioAtrib.modoPilotoAuto;
    nivelVelocidade = navioAtrib.nivelVelocidade;
    velocidadeKmHora = navioAtrib.velocidadeKmHora;
    tempoHoras = navioAtrib.tempoHoras;
	cancelaRota = navioAtrib.cancelaRota;
    nTripulantes = navioAtrib.nTripulantes;
    
    delete [] tripulacao;
    tripulacao = new string[navioAtrib.nTripulantes];
    for(int i=0;i<navioAtrib.nTripulantes;i++) tripulacao[i] = navioAtrib.tripulacao[i];
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
        string nTrip;
        do
        {
            int i;
            cout << "\nAdicionar oficial a tripulacao? <1 - sim> : ";
            cin >> i;
            if(i != 1) break;
            
            cout << "\nTripulante : ";
            cin >> nTrip;
            adicionarTripulacao(nTrip);
        }while(1);
		system("cls");
	}
}

bool Navio::ligarMotores()
{
	if(this->tempestadeRelatada)
	{
		return false;
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

bool Navio::tempestade(const Navio &n)
{
	if(n.cancelaRota&&(this->pDestino == n.pDestino))
	{
		cout << (*this);
		Sleep(500);
		cout << "\nHa tempestade relatada pelo Navio que possui o mesmo destino que este.\n\nViagem Impossibilitada.\n\n";
		this->tempestadeRelatada = true;
		return true;
	}
	else return false;
}

Porto Navio::getPortoPartida() const
{
	return this->pPartida;
}

Porto Navio::getPortoDestino() const
{
    return this->pDestino;
}

void Navio::adicionarTripulacao(const string &cargoTripulante)
{
    if(liberaNavegacao == true)
    {
        if(nTripulantes !=0)
        {
            string *aux = new string[nTripulantes];
            int i;
            for(i = 0;i < nTripulantes;i++)
			{
				aux[i] = tripulacao[i];
			}
            delete [] tripulacao;
            nTripulantes++;
            tripulacao = new string[nTripulantes];
            for(int i = 0;i < nTripulantes - 1;i++) tripulacao[i] = aux[i];
            tripulacao[nTripulantes - 1] = cargoTripulante;
            delete [] aux;
        }
        else
        {
            tripulacao = new string[++nTripulantes];
            tripulacao[0] = cargoTripulante;
        }
    }
}

string Navio::getNomeNavio() const
{
    return this->nomeNavio;
}

int Navio::getNTripulantes() const
{
    return this->nTripulantes;
}

string Navio::getTripulacao(const int &i) const
{
    return this->tripulacao[i];
}

string Navio::getNomePortoPartida() const
{
    return this->pPartida.getNomePorto();
}

string Navio::getNomePortoDestino() const
{
    return this->pDestino.getNomePorto();
}

int Navio::getTempoHoras() const
{
    return this->tempoHoras;
}

Data Navio::getData() const
{
    return this->dataPartida;
}

int Navio::getVelocidadeMaxima() const
{
    return 32;
}

int Navio::getDistanciaKm() const
{
    return this->distanciaKm;
}

bool Navio::getLiberaNavegacao() const
{
	return this->liberaNavegacao;
}

bool Navio::getTempestadeRelatada() const
{
	return this->tempestadeRelatada;
}

void Navio::imprimeViagem()
{
    cout << "Isso e um Navio\n";
}

bool Navio::mover()
{
    cout << "Move Navio\n";
    return true;
}