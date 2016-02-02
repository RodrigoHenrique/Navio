#ifndef NAVIO_H
#define NAVIO_H
#include <string>

using std::string;

class Navio
{
public:
	Navio(string);
	Navio();
	~Navio();
	
	void definirRota();
	bool ligarMotores();
	int definirVelocidade();
	void navegar();
	bool chegouDestino();
	void dadosdaViagem();
	

private:
	string nomeNavio;
	bool liberaNavegacao;
	bool estadoMotor;
	
	string pPartida;
	string pDestino;
	int distanciaKm;
	int nivelVelocidade;
	int velocidadeKmHora;
	int tempoHoras;
};

#endif // NAVIO_H
