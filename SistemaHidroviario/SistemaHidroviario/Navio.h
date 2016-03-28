#ifndef NAVIO_H
#define NAVIO_H
#include "Embarcacao.h"
#include <string>
#include "Passageiro.h"
#include <list>

using std::string;
using std::list;

class Navio : public Embarcacao
{
public:
	Navio(const string &,const Data &,const string &,const string &);
	~Navio();
	
	virtual void definir_passageiros(list<Passageiro *> );
	virtual int definir_velocidade();
	virtual bool mover();
	
	list<Passageiro *> get_passageiros_navio() const;

private:
	const static int qde_max_ocupantes = 500;

};

#endif // NAVIO_H
