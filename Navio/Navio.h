#ifndef NAVIO_H
#define NAVIO_H
#include <string>
#include "Data.h"

using std::string;

class Navio
{
public:
	Navio(const string &,const Data &);
    Navio(const Navio &);
    Navio(const Navio &,const string &);
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
    static void implementaNaviosAutorizados();
    static void imprimeQdeNaviosAutorizados();

private:
    Data dataPartida; 
	string nomeNavio;
	bool liberaNavegacao;
	bool estadoMotor;
	string pPartida;
	string pDestino;
	int distanciaKm;
	int distanciaKmAuto;
	bool modoPilotoAuto;
	int nivelVelocidade;
	int velocidadeKmHora;
	int tempoHoras;
	static bool cancelaRota;
    static int qdeNaviosAutorizados;
};

#endif // NAVIO_H
