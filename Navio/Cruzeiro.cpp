#include "Cruzeiro.h"
#include <stdlib.h>
#include <windows.h>
#include "Navio.h"

using std::cout;
using std::cin;

Cruzeiro::Cruzeiro(const string &nomeCruzeiro,const Data &dataPartida,const Porto &portoPartida,const Porto &portoDestino,int *passageirosNoPorto)
:Navio(nomeCruzeiro,dataPartida,portoPartida,portoDestino)
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

Cruzeiro::Cruzeiro(const Navio &navioCopia,const string &nomeNavio,const Data &dataPartida,int *passageirosNoPorto)
:Navio(navioCopia,nomeNavio,dataPartida)
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

Cruzeiro::Cruzeiro(const navio &navioCopia,int *)
:Navio(navioCopia)
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

Cruzeiro::Cruzeiro(int *passageirosNoPorto)
Navio()
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

Cruzeiro::~Cruzeiro()
{
}

bool Cruzeiro::embarque(int *passageirosNoPorto)
{
    if(*passageirosNoPorto > capacidadeMaxima) return false;
    else
    {
		int passageirosASubir;
		do
		{
			system("cls");
			cout << "- " << getNomeNavio();
			cout << "\n- Passageiros no Porto: " << *passageirosNoPorto;
			cout << "\n-- Ha quantos passageiros a subir a bordo? : ";
			cin >> passageirosASubir;
			if(passageirosASubir > *passageirosNoPorto) cout << "Ha menos passageiros no Porto.\n";
		}while(passageirosASubir > *passageirosNoPorto);
		system("CLS");
		Sleep(500);
        int passageiros;
		passageiros = *passageirosNoPorto - passageirosASubir;
        delete passageirosNoPorto;
        passageirosNoPorto = &passageiros;
		this->passageirosABordo = passageirosASubir;
		return true;
    }
}
