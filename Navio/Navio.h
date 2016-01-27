#ifndef NAVIO_H
#define NAVIO_H
#include <string>


class Navio
{
public:
	Navio(string,string,string,string,float,float);
	~Navio();
	
	void imprimeRegistros();
	bool ligarMotores(string,bool);
	bool desligarMotores(string,bool);
	bool ativarSonar(string,bool);
	void localizacaoAtual(float,float);
	void sos(float,float);
	
private:
	string cRegistro;
	string cPassageiros;
	string cComandante;
	string cTripulacao;
	float latitude;
	float longitude;
	string direcao;
	bool estadoMotor;
	bool estadoSonar;
};

#endif // NAVIO_H
