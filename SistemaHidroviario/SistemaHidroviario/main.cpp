#include <iostream>
#include "Embarcacao.h"
#include <string>
#include <stdlib.h>
#include "Data.h"
#include "Porto.h"
#include "Submarino.h"
#include "Navio.h"
#include "Passageiro.h"
#include "Carga.h"
#include "Mercadoria.h"
#include "list"
#include "Cruzeiro.h"
#include "Cargueiro.h"
#include "Mercante.h"

using std::list;
using std::cout;
using std::string;

int main(int argc, char** argv) {
	
	Porto porto_teste("PedraDoDragao");
    Porto porto_chegada("PortoReal");
    
    Data data_teste(12,12,2012);

	list<Passageiro *> pass_teste;
	
	for(int i=0;i<600;i++)
	{
		Passageiro *pass = new Passageiro();
		pass_teste.push_back(pass);
	}
	
	porto_teste.entrada_passageiros(&pass_teste);
	
    list<Carga *> carg_teste;
    
    for(int i=0;i<90;i++)
    {
        Carga *carg = new Carga();
        carg_teste.push_back(carg);
    }
    
    porto_teste.entrada_cargas(&carg_teste);
    
    
    list<Mercadoria *> merc_teste;
    
    for(int i=0;i<999;i++)
    {
        Mercadoria *merc = new Mercadoria();
        merc_teste.push_back(merc);
    }
    
    porto_teste.entrada_mercadorias(&merc_teste);
    
    Cruzeiro *cruzeiro = new Cruzeiro("Balerion",data_teste,"Aegon",porto_teste.get_nome_porto());
    
    Cargueiro *cargueiro = new Cargueiro("Meraxes",data_teste,"Rhaenys",porto_teste.get_nome_porto());
    
    Mercante *mercante = new Mercante("Vhagar",data_teste,"Visenya",porto_teste.get_nome_porto());
    
    
    porto_teste.entrada_embarcacao(cruzeiro);
    porto_teste.entrada_embarcacao(cargueiro);
    porto_teste.entrada_embarcacao(mercante);
    
    cruzeiro->definir_rota();
    porto_teste.saida_embarcacao(cruzeiro);
    cruzeiro->definir_tripulacao();
    
    list<Passageiro *> passageiros_embarque_cruzeiro;
    
    porto_teste.saida_passageiros(&passageiros_embarque_cruzeiro);
    
    cruzeiro->definir_passageiros(passageiros_embarque_cruzeiro);
    
    cruzeiro->ligar_motores();
    cruzeiro->navegar();
    
    porto_chegada.entrada_embarcacao(cruzeiro);
    cruzeiro->viagem_finalizada();
    list<Passageiro *> passageiros_desembarque_cruzeiro = cruzeiro->get_passageiros();
    porto_chegada.entrada_passageiros(&passageiros_desembarque_cruzeiro);
    
    cout << porto_teste;
    cout << "\n";
    
    cargueiro->definir_rota();
    porto_teste.saida_embarcacao(cargueiro);
    cargueiro->definir_tripulacao();
    
    list<Carga *> cargas_embarque_cargueiro;
    
    porto_teste.saida_cargas(&cargas_embarque_cargueiro);
    
    cargueiro->definir_cargas(cargas_embarque_cargueiro);
    
    cargueiro->ligar_motores();
    cargueiro->navegar();
    
    list<Carga *> cargas_desembarque_cargueiro = cargueiro->get_cargas();
    porto_chegada.entrada_cargas(&cargas_desembarque_cargueiro);
    
    cout << porto_teste;
    cout << porto_chegada;
    
	pass_teste.clear();
    carg_teste.clear();
    merc_teste.clear();
    passageiros_embarque_cruzeiro.clear();
    passageiros_desembarque_cruzeiro.clear();
    
	return 0;
}