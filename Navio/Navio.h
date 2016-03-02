
#ifndef NAVIO_H
#define NAVIO_H
#include <iostream>
#include <string>
#include "Data.h"
#include "Porto.h"

using std::string;
using std::ostream;

class Navio
{
    friend ostream &operator<<(ostream &,const Navio &);
    
public:

    const Navio &operator=(const Navio &);
    bool operator==(const Navio &) const;
    
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
	bool tempestade(const Navio &);
    void adicionarTripulacao(const string &);
    const static int capacidadeMaxima;
    
    string getPortoPartida() const;
    string getNomeNavio() const;
    int getNTripulantes() const;
    string getTripulacao(const int &) const;
    string getNomePortoPartida() const;
    string getNomePortoDestino() const;
    int getTempoHoras() const;

private:
    Data dataPartida; 
	string nomeNavio;
	bool liberaNavegacao;
	bool estadoMotor;
	Porto pPartida;
	Porto pDestino;
	int distanciaKm;
	int distanciaKmEntrePortos;
	int distanciaKmAuto;
	bool modoPilotoAuto;
	int nivelVelocidade;
	int velocidadeKmHora;
	int tempoHoras;
	bool cancelaRota;
	
    string *tripulacao;
    int nTripulantes;


};


#endif // NAVIO_H
