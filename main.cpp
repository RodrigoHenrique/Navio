#include <iostream>
#include "Embarcacao.h"
#include <string>
#include "Data.h"
#include "Porto.h"

using std::cout;
using std::string;

int main(int argc, char** argv) {
	
	Porto porto_teste("Meereen");

	Porto porto_copia("Porto Real");
	
	Data data_teste(12,12,2012);
	Embarcacao *embarcacao_teste1 = new Embarcacao("Balerion",data_teste,"Rodrigo",porto_teste.get_nome_porto(),porto_copia.get_nome_porto());
	Embarcacao *embarcacao_teste2 = new Embarcacao("Meraxes",data_teste,"Rodrigo",porto_teste.get_nome_porto(),porto_copia.get_nome_porto());
	Embarcacao *embarcacao_teste3 = new Embarcacao("Vhagar",data_teste,"Rodrigo",porto_teste.get_nome_porto(),porto_copia.get_nome_porto());
	
	porto_teste.entrada_embarcacao(embarcacao_teste1);
	porto_teste.entrada_embarcacao(embarcacao_teste2);
	porto_teste.entrada_embarcacao(embarcacao_teste3);
	
	embarcacao_teste1->definir_rota();
	embarcacao_teste1->definir_tripulacao();
	porto_teste.saida_embarcacao(embarcacao_teste1);
	embarcacao_teste1->ligar_motores();
	
	return 0;
}