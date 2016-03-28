#ifndef NAVIO_H
#define NAVIO_H
#include "Embarcacao.h"
#include <string>
#include "Passageiro.h"
#include <list>
#include <iostream>

using std::string;
using std::list;
using std::ostream;

class Navio : public Embarcacao
{
	friend ostream &operator<<(ostream &,const Navio &);
	
public:
	Navio(const string &,const Data &,const string &,const string &);
	~Navio();
	
	const Navio &operator=(const Navio &);
	bool operator==(const Navio &) const;
	
	virtual void definir_passageiros(list<Passageiro *> );
	virtual int definir_velocidade();
	virtual bool mover();
	
	list<Passageiro *> get_passageiros_navio() const;

private:
	const static int qde_max_ocupantes = 500;

};

#endif // NAVIO_H
