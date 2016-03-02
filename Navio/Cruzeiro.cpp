#include "Cruzeiro.h"
#include <stdlib.h>
#include <windows.h>
#include "Navio.h"

using std::cout;
using std::cin;

Cruzeiro::Cruzeiro(const string &nomeCruzeiro,const Data &dataPartida,const Porto &portoPartida,const Porto &portoDestino,const int &passageirosNoPorto)
:Navio(nomeCruzeiro,dataPartida,portoPartida,portoDestino)
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

Cruzeiro::Cruzeiro(const Navio &navioCopia,const string &nomeNavio,const Data &dataPartida,const int &passageirosNoPorto)
:Navio(navioCopia,nomeNavio,dataPartida)
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

Cruzeiro::Cruzeiro(const Navio &navioCopia,const int &passageirosNoPorto)
:Navio(navioCopia)
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

Cruzeiro::Cruzeiro(const int &passageirosNoPorto)
:Navio()
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

Cruzeiro::~Cruzeiro()
{
}

bool Cruzeiro::embarque(const int &passageirosNoPorto)
{
    if(passageirosNoPorto > capacidadeMaxima) return false;
    else
    {
		int passageirosASubir;
		do
		{
			system("cls");
			cout << "- " << getNomeNavio();
			cout << "\n- Passageiros no Porto: " << passageirosNoPorto;
			cout << "\n-- Ha quantos passageiros a subir a bordo? : ";
			cin >> passageirosASubir;
			if(passageirosASubir > passageirosNoPorto) cout << "Ha menos passageiros no Porto.\n";
		}while(passageirosASubir > passageirosNoPorto);
		system("CLS");
		Sleep(500);
		this->passageirosABordo = passageirosASubir;
		return true;
    }
}

bool Cruzeiro::getEmbarqueEfetuado() const
{
    return this->embarqueEfetuado;
}

int Cruzeiro::getPassageirosABordo() const
{
    return this->passageirosABordo;
}

const void Cruzeiro::dadosdaViagem(const Cruzeiro &c)
{
	cout << "Dados da Viagem\n\n";
	cout << "-- Nome do Navio: " << c.getNomeNavio() << "\n";
    
}