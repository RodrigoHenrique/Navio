#ifndef PORTO_H
#define PORTO_H
#include <vector>
#include <queue>
#include <list>
#include <string>
#include <iostream>
#include "Passageiro.h"
#include "Embarcacao.h"
#include "Carga.h"
#include "Mercadoria.h"

using std::vector;
using std::queue;
using std::string;
using std::ostream;
using std::list;

class Porto
{
	friend ostream &operator<<(ostream &,Porto &);
	
public:
	Porto(const string &);
	Porto(const Porto &);
	~Porto();
	
	const Porto &operator=(const Porto &);
	bool operator==(const Porto &);
	
	void entrada_embarcacao(Embarcacao *); //O parametro é o ponteiro para a embarcacao a ser adicionada ao vetor de filas.
	void saida_embarcacao(Embarcacao *);   //O parametro é o ponteiro ao qual aponta a embarcacao quee se escolheu sair.
	
	void entrada_passageiros(list <Passageiro *> *); //O parametro é uma lista de passageiros que é acrescentada a lista presente no porto
	void saida_passageiros(list <Passageiro *> *); //O parametro é uma embarcacao que receberá n passageiros de uma lista do porto, armazendando-os em uma lista dele mesmo.
    
    void entrada_cargas(list <Carga *> *); // O parametro é uma lista de cargas que é acrescentada a lista presente no porto
    void saida_cargas(list <Carga *> *); //O parametro é uma embarcacao que receberá n cargas de uma lista do porto, armazendando-os em uma lista dele mesmo.
    
    void entrada_mercadorias(list <Mercadoria *> *); // O parametro é uma lista de mercadorias que é acrescentada a lista presente no porto
    void saida_mercadorias(list <Mercadoria *> *); //O parametro é uma embarcacao que receberá n mercadorias de uma lista do porto, armazendando-os em uma lista dele mesmo.
	
	string get_nome_porto() const;
	
private:
	string nome_porto;
	vector<queue <Embarcacao *> > filas_embarcacao;
	const static int max_filas = 10;
	const static int max_embarcacoes_por_fila = 5;
	list<Passageiro *> passageiros_porto;
	const static int max_passageiros = 1000;
    list<Carga *> cargas_porto;
    const static int max_cargas = 100;
    list<Mercadoria *> mercadorias_porto;
    const static int max_mercadorias = 1000;
	
};

#endif // PORTO_H