#ifndef NAVIO_H
#define NAVIO_H
#include <string>
#include "Data.h"
#include "Porto.h"

using std::string;

class Navio
{
public:
	Navio(const string &,const Data &,const Porto &,const Porto &);
    Navio(const Navio &);
    Navio(const Navio &,const string &,const Data &);
	Navio();
	~Navio();
	
	void definirRota();
	bool ligarMotores();
	bool ligarMotores(const Navio &);
	int definirVelocidade();
	void pilotoAutomatico();
	void pilotoManual();
	void navegar();
	void operar();
	bool chegouDestino();
	void dadosdaViagem() const;
	bool tempestade(const Navio &);

private:
    Data dataPartida; 
	string nomeNavio;
	bool liberaNavegacao;
	bool estadoMotor;
	Porto pPartida;
	Porto pDestino;
	int distanciaKm;
	int distanciaKmAuto;
	bool modoPilotoAuto;
	int nivelVelocidade;
	int velocidadeKmHora;
	int tempoHoras;
	bool cancelaRota;
};

#endif // NAVIO_H
