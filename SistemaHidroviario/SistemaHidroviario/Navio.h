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
    Navio(const Navio &);
	~Navio();
	
	const Navio &operator=(const Navio &);
	bool operator==(const Navio &) const;
	bool operator!=(const Navio &) const;
	
    virtual void definir_mercadorias(list<Mercadoria * > );
    
	virtual int definir_velocidade();
	virtual bool mover();
	
	list<Passageiro *> get_passageiros_navio() const;
    
	bool get_passageiros_a_bordo() const;
    bool get_cargas_a_bordo() const;
    bool get_mercadorias_a_bordo() const;
	
	void set_passageiros_a_bordo();
    void set_cargas_a_bordo();
    void set_mercadorias_a_bordo();
    
    void inicia_passageiros_a_bordo();
    void inicia_cargas_a_bordo();
    void inicia_mercadorias_a_bordo();
    
    const static int qde_max_passageiros = 500;
    const static int qde_max_cargas = 50;
    const static double peso_max_cargas = 100000;
    const static int qde_max_mercadorias = 500;
    const static float valor_RS_max_mercadorias = 1000000;

private:
	bool passageiros_a_bordo;
    bool cargas_a_bordo;
    bool mercadorias_a_bordo;

};

#endif // NAVIO_H
