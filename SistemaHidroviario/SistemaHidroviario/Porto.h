#ifndef PORTO_H
#define PORTO_H
#include <vector>
#include <queue>
#include <string>
#include <iostream>
#include "Passageiro.h"
#include "Embarcacao.h"

using std::vector;
using std::queue;
using std::string;
using std::ostream;

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
	
	string get_nome_porto() const;
	
private:
	string nome_porto;
	vector<queue <Embarcacao *> > filas_embarcacao;
	const static int max_filas = 10;
	const static int max_embarcacoes_por_fila = 5;
	
};

#endif // PORTO_H