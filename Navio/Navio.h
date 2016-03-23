#ifndef NAVIO_H
#define NAVIO_H
#include <iostream>
#include <string>
#include "Data.h"
#include "Porto.h"
#include "Embarcacao.h"

using std::string;
using std::ostream;

class Navio : public Embarcacao
{
    friend ostream &operator<<(ostream &,const Navio &);
    
public:

	Navio(const string &,const Data &,const Porto &,const Porto &,const string &,const string &,const string &);
    Navio(const Navio &);
	~Navio();
	
	const Navio &operator=(const Navio &);
    bool operator==(const Navio &) const;
	
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
    
    Porto getPortoPartida() const;
    Porto getPortoDestino() const;
    string getNomeNavio() const;
    int getNTripulantes() const;
    string getTripulacao(const int &) const;
    string getNomePortoPartida() const;
    string getNomePortoDestino() const;
    int getTempoHoras() const;
    Data getData() const;
    int getVelocidadeMaxima() const;
    int getDistanciaKm() const;
	bool getLiberaNavegacao() const;
    bool getTempestadeRelatada() const;
    
    virtual void imprimeViagem();
    virtual bool mover();

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
	bool tempestadeRelatada;
	
    string *tripulacao;
    int nTripulantes;
    
};

#endif // NAVIO_H