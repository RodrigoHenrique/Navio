#ifndef SUBMARINO_H
#define SUBMARINO_H
#include <Embarcacao.h>
#include <string>
#include <iostream>
#include "Passageiro.h"

using std::string;
using std::ostream;

class Submarino : public Embarcacao
{
	friend ostream &operator<<(ostream &,const Submarino &);
	
public:
	Submarino(const string &,const Data &,const string &,const string &,const string &);
	Submarino(const Submarino &);
	~Submarino();
	
	const Submarino &operator=(const Submarino &);
	bool operator==(const Submarino &) const;
	
	virtual bool mover();
	virtual int definir_velocidade();
	virtual void definir_passageiros(list<Passageiro *> );

private:
	string tipo_combustivel;
	bool submerso;

};

#endif // SUBMARINO_H
