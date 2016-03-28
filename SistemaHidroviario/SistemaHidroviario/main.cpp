#include <iostream>
#include "Embarcacao.h"
#include <string>
#include <stdlib.h>
#include "Data.h"
#include "Porto.h"
#include "Submarino.h"
#include "Navio.h"
#include "Passageiro.h"
#include "list"

using std::list;
using std::cout;
using std::string;

int main(int argc, char** argv) {
	
	Porto porto_teste("Meereen");

	list<Passageiro * > pass_teste;
	
	
	Porto porto_copia("PortoReal");
	
	Data data_teste(12,12,2012);
	
	/*
	Submarino *embarcacao_teste1 = new Submarino("Balerion",data_teste,"Rodrigo",porto_teste.get_nome_porto(),"Plutonio");
	Submarino *embarcacao_teste2 = new Submarino("Meraxes",data_teste,"Rodrigo",porto_teste.get_nome_porto(),"Neptunio");
	Submarino *embarcacao_teste3 = new Submarino("Vhagar",data_teste,"Rodrigo",porto_teste.get_nome_porto(),"Tritio");
	
	porto_teste.entrada_embarcacao(embarcacao_teste1);
	porto_teste.entrada_embarcacao(embarcacao_teste2);
	porto_teste.entrada_embarcacao(embarcacao_teste3);
	
	embarcacao_teste1->definir_rota();
	embarcacao_teste1->definir_tripulacao();
	porto_teste.saida_embarcacao(embarcacao_teste1);
	embarcacao_teste1->ligar_motores();
	embarcacao_teste1->navegar();
	
	cout << "\n" << *embarcacao_teste1 << "\n";
	
	system("pause");
	
	porto_copia.entrada_embarcacao(embarcacao_teste1);
	
	embarcacao_teste1->viagem_finalizada();
	
	cout << "\n" << porto_copia;
	
	*/
	
	Navio *navio1 = new Navio("Balerion",data_teste,"Rodrigo",porto_teste.get_nome_porto());
	
	porto_teste.entrada_embarcacao(navio1);
	
	cout << porto_teste;
	
	return 0;
}