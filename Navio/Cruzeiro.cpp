#include "Cruzeiro.h"
#include <stdlib.h>
#include <windows.h>
#include "Navio.h"
#include <string>

using std::string;
using std::cout;
using std::cin;

Cruzeiro::Cruzeiro(const string &nomeCruzeiro,const Data &dataPartida,const Porto &portoPartida,const Porto &portoDestino,const int &passageirosNoPorto,const string &meioLoc,const string &prop,const string &tipoHel)
:Navio(nomeCruzeiro,dataPartida,portoPartida,portoDestino,meioLoc,prop,tipoHel)
{
    if(embarque(passageirosNoPorto)) this->embarqueEfetuado = true;
    else this->embarqueEfetuado = false;
}

/*
Cruzeiro::Cruzeiro(const Cruzeiro &cruzeiroCopia)
:Navio(static_cast<Navio> (cruzeiroCopia)) //Porque nao se pode usar static_cast aqui, sse naio não ée abstrato? Corrigir os parâmetros dos objetonss no main.cpp: Cruzeiroe e Cruzero Comercial
{
	this->passageirosABordo = cruzeiroCopia.passageirosABordo;
	this->embarqueEfetuado = cruzeiroCopia.embarqueEfetuado;
}

*/
Cruzeiro::~Cruzeiro()
{
}

/*
ostream &operator<<(ostream &output,const Cruzeiro &cruzeiroImprime)
{
    output << static_cast <Navio> (cruzeiroImprime);
    output << "\nPassageiros a bordo: " << cruzeiroImprime.passageirosABordo;
    return output;
}

const Cruzeiro & Cruzeiro::operator=(const Cruzeiro &cruzeiroAtribui)
{
    static_cast<Navio> (*this) = static_cast<Navio> (cruzeiroAtribui);
    this->passageirosABordo = cruzeiroAtribui.passageirosABordo;
}

bool Cruzeiro::operator==(const Cruzeiro &cruzeiroCompara) const
{
    if((static_cast<Navio> (*this) == static_cast<Navio>(cruzeiroCompara)) && getPassageirosABordo() == cruzeiroCompara.passageirosABordo && getEmbarqueEfetuado() == cruzeiroCompara.embarqueEfetuado)
    {
        return true;
    }
    else
    {
        return false;
    }
}
*/
bool Cruzeiro::embarque(const int &passageirosNoPorto)
{
    if(passageirosNoPorto > capacidadeMaxima) return false;
    else
    {
		int passageirosASubir;
		do
		{
			system("cls");
			cout << "\n- " << getNomeNavio();
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
    cout << "-- Tripulacao:\n\n";
    if(c.getNTripulantes() != 0) for(int i=0;i<c.getNTripulantes();i++) cout << "--------- " << c.getTripulacao(i) << "\n";
    else cout << "--------- Sem Tripulacao.\n";
    cout << "\n-- Porto de Partida: " << c.getNomePortoPartida();
    cout << "\n-- Porto de Destino: " << c.getNomePortoDestino();
    cout << "\n-- Tempo de Viagem [/hrs]: " << c.getTempoHoras() << "\n";
    cout << "-- Data da Partida " << c.getData() << "\n";
	system("pause");
}

void Cruzeiro::imprimeViagem(const Cruzeiro &cru)
{
    cout << "Isso e um Cruzeiro\n";
}