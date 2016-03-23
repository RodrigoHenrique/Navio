#include "Cargueiro.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using std::cout;
using std::string;
using std::cin;

const double pesoMaximoTON = 10;

Cargueiro::Cargueiro(const string &nomeCargueiro,const Data &data,const Porto &pPartida, const Porto &pDestino,const string &meioLoc,const string &prop,const string &tipoHel)
:Navio(nomeCargueiro,data,pPartida,pDestino,meioLoc,prop,tipoHel)
{
	this->totalCargas = 0;
	cargas = 0;
}

Cargueiro::Cargueiro(const Cargueiro &cCopia)
:Navio(static_cast<Navio> (cCopia))
{
	this->totalCargas = 0;
	cargas = 0;
}

Cargueiro::~Cargueiro()
{
	delete [] cargas;
}


ostream &operator<<(ostream &output,const Cargueiro &cargueiroImprime)
{
	output << static_cast<Navio> (cargueiroImprime);
	output << "\nTOTAL DE CARGAS: " << cargueiroImprime.totalCargas;
	output << "\nLISTAGEM DE CARGAS:";
	if(cargueiroImprime.totalCargas == 0) output << " <SEM CARGA>.";
	else
	{
		for(int i=0;i<cargueiroImprime.totalCargas;i++) output << "\nNOME DA CARGA [" << i << "]: " << cargueiroImprime.cargas[i].getNCarga() << "\n--- PESO: " << cargueiroImprime.cargas[i].getPeso(); 
	}
	return output;
}

const Cargueiro & Cargueiro::operator=(const Cargueiro &cargueiroAtribui)
{
	static_cast<Navio> (*this) = static_cast<Navio> (cargueiroAtribui);
	this->totalCargas = cargueiroAtribui.totalCargas;
	delete [] cargas;
	cargas = new Carga[cargueiroAtribui.totalCargas];
	for(int i=0;i<cargueiroAtribui.totalCargas;i++) this->cargas[i] = cargueiroAtribui.cargas[i];
}

bool Cargueiro::operator==(const Cargueiro &cargueiroCompara) const
{
	if(static_cast<Navio> (*this) == static_cast<Navio> (cargueiroCompara))
	{
		if(this->totalCargas == cargueiroCompara.totalCargas)
		{
			for(int i=0;i<this->totalCargas;i++) if(this->cargas[i] != cargueiroCompara.cargas[i]) return false;
			return true;
		}
		else return false;
	}
	else return false;
}


void Cargueiro::setCargas(const string &nCarga,const double &peso)
{
	if(this->getLiberaNavegacao())
	{
		if(this->totalCargas > 0)
		{
			Carga *aux = new Carga[totalCargas];
            int i;
            for(i = 0;i < totalCargas;i++)
			{
				aux[i] = cargas[i];
			}
            delete [] cargas;
            totalCargas++;
            cargas = new Carga[totalCargas];
            for(int i = 0;i < totalCargas - 1;i++) cargas[i] = aux[i];
            cargas[totalCargas - 1].setNCarga(nCarga);
            cargas[totalCargas - 1].setPeso(peso);
            delete [] aux;
		}
		else
		{
			cargas = new Carga[++totalCargas];
            cargas[0].setNCarga(nCarga);
            cargas[0].setPeso(peso);
		}
	}
}

void Cargueiro::embarcaCargas()
{
	string nome;
	double peso;
	cout << "\nEmbarque de Cargas\n";
	do
    {
        int i;
        cout << "\nAdicionar carga ao Navio? <1 - sim> : ";
        cin >> i;
        if(i != 1) break;
        
        cout << "\n---Nome da Carga: ";
        cin >> nome;
        cout << "\n---Peso <em Toneladas>: ";
        cin >> peso;
        setCargas(nome,peso);
        Sleep(100);
    }while(1);
    system("pause");
    system("cls");
}


void Cargueiro::imprimeViagem()
{
    cout << "Isso e um cargueiro\n";
}

bool Cargueiro::mover()
{
    cout << "Cargueiro move\n";
    return true;
}