#ifndef NAVIO_H
#define NAVIO_H
#include <string>

using std::string;

class Navio
{
public:
	Navio(const string &);
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

private:
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
};

#endif // NAVIO_H
