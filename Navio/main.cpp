#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include "Navio.h"
#include "Data.h"
#include "Porto.h"
#include "Cruzeiro.h"
#include "CruzeiroComercial.h"
#include "Cargueiro.h"
#include <vector>
#include "Submarino.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;

void opCruzeiro()
{
	system("cls");
	Sleep(500);
	
	int dia,mes,ano;
	cout << "Infome a data de partida: \n";
	cout << "Dia --> ";
	cin >> dia;
	cout << "Mes --> ";
	cin >> mes;
	cout << "Ano --> ";
	cin >> ano;
	Data data(dia,mes,ano);

	system("cls");
	Sleep(500);
			
	string nome1,nome2;
	cout << "Informe o nome do Porto de Partida: ";
	cin >> nome1;
	cout << "Informe o nome do Porto de Destino: ";
	cin >> nome2;
			
	Porto partida(nome1),destino(nome2);
			
	system("cls");
	Sleep(500);
			
	string nome;
	cout << "Informe o nome do Navio: ";
	cin >> nome;
			
	system("cls");
	Sleep(500);
			
	int tt;
	cout << "Informe a quantidade de Passageiros no Porto de Partida: ";
	cin >> tt;
			
	Cruzeiro cruzeiro(nome,data,partida,destino,tt);
	
	cruzeiro.definirRota();
	if(cruzeiro.getEmbarqueEfetuado())
    {
        tt -= cruzeiro.getPassageirosABordo(); 
        if(cruzeiro.ligarMotores())
        {
            cruzeiro.navegar();
            if(cruzeiro.chegouDestino()) Cruzeiro::dadosdaViagem(cruzeiro);
        }
    }
}

void opCruzeiroComercial()
{
	system("cls");
	Sleep(500);
	
	int dia,mes,ano;
	cout << "Infome a data de partida: \n";
	cout << "Dia --> ";
	cin >> dia;
	cout << "Mes --> ";
	cin >> mes;
	cout << "Ano --> ";
	cin >> ano;
	Data data(dia,mes,ano);

	system("cls");
	Sleep(500);
			
	string nome1,nome2;
	cout << "Informe o nome do Porto de Partida: ";
	cin >> nome1;
	cout << "Informe o nome do Porto de Destino: ";
	cin >> nome2;
			
	Porto partida(nome1),destino(nome2);
			
	system("cls");
	Sleep(500);
			
	string nome;
	cout << "Informe o nome do Navio: ";
	cin >> nome;
			
	system("cls");
	Sleep(500);
			
	int tt;
	cout << "Informe a quantidade de Passageiros no Porto de Partida: ";
	cin >> tt;
			
	CruzeiroComercial cruzeiroCom(nome,data,partida,destino,tt);
	
	
	
	cruzeiroCom.definirRota();
	if(cruzeiroCom.testaTempoHabil())
    {
        if(cruzeiroCom.getEmbarqueEfetuado())
        {
            tt -= cruzeiroCom.getPassageirosABordo();
            cruzeiroCom.tempestade(static_cast<Navio> (cruzeiroCom)); //Ocorre um erro durante a execução desse trecho: quando testa-se caso hoive uma tempestade com a viagem do navio anterior, e caso ele e este tenham o mesmo destino, entao o navio presente nao mpode ligar os motores. Porem quando isso nao ocorre, ainda assim não é permitio ligar os motores, cancelaRota = True. 
            if(cruzeiroCom.ligarMotores())
            {
                cruzeiroCom.navegar();
                if(cruzeiroCom.chegouDestino()) Cruzeiro::dadosdaViagem(static_cast <Cruzeiro> (cruzeiroCom));
            }
        }
    }
}

void opCargueiro()
{
	system("cls");
	Sleep(500);
	
	int dia,mes,ano;
	cout << "Infome a data de partida: \n";
	cout << "Dia --> ";
	cin >> dia;
	cout << "Mes --> ";
	cin >> mes;
	cout << "Ano --> ";
	cin >> ano;
	Data data(dia,mes,ano);

	system("cls");
	Sleep(500);
			
	string nome1,nome2;
	cout << "Informe o nome do Porto de Partida: ";
	cin >> nome1;
	cout << "Informe o nome do Porto de Destino: ";
	cin >> nome2;
			
	Porto partida(nome1),destino(nome2);
			
	system("cls");
	Sleep(500);
			
	string nome;
	cout << "Informe o nome do Navio: ";
	cin >> nome;
			
	system("cls");
	Sleep(500);
	
	Cargueiro cargueiro(nome,data,partida,destino);
	
	cargueiro.definirRota();
    cargueiro.embarcaCargas();
    if(cargueiro.ligarMotores())
    {
        cargueiro.navegar();
        if(cargueiro.chegouDestino())
        {
            cout << "Viagem finalizada.\n";
            cout << cargueiro << "\n";
            system("pause");
        }
    }
}

void OpcaoTipoNavio(const int op)
{
	switch(op)
	{
		case 1:
			opCruzeiro();
			break;
		case 2:
			opCruzeiroComercial();
			break;
		case 3:
			opCargueiro();
			break;
	}
}

int main(int argc, char **argv)
{
    /*
	do
	{
		system("cls");
		Sleep(500);
		
		int op;
		cout << "CLASSE NAVIO\n";
		cout << "\nPara simular a viagem de um Cruzeiro, digite 1.\nPara simular a viagem de um Cruzeiro Comercial, digite 2.\nPara simular a viagem de um Cargueiro, digite 3.\nPara sair da simulacao, depois de simular Submarino, digite 4.\n\n";
		cout << "OPCAO --> ";
		cin >> op;
		if(op == 4) break;
		OpcaoTipoNavio(op);
		
	}while(true);
	*/
	system("cls");
	Sleep(500);
	
	vector<Submarino *> subs;
	
	cout << "Simulando Submarinos - Prototipo.\n\n";
	
	while(true)
	{
		int i = 0;
		string s1 = "Mar",s2,s3,s4;
		cout << "Nome do Proprietario do Submarino " << subs.size() << ": ";
		cin >> s2;
		cout << "Tipo de Helice: ";
		cin >> s3;
		cout << "Tipo de Combustivel Nuclear: ";
		cin >> s4;
		Submarino *subTeste = new Submarino(s1,s2,s3,s4);
		subs.push_back(subTeste);
		cout << "\nContinuar? --> Digite 1: ";
		cin >> i;
		
		system("cls");
		Sleep(500);
		
		if (i != 1) break;
	}
	
	for(size_t j=0;j<subs.size();j++)
	{
		cout << "Submarino " << j << ":\n\n";
		subs[j]->imprimeViagem();
		cout << "\n\n";
	}
	
	cout << "\n";
	return 0;
}