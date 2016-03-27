#ifndef EMBARCACAO_H
#define EMBARCACAO_H
#include "Veiculo.h"
#include <string>
#include <vector>
#include "Data.h"
#include "Tripulante.h"

using std::string;
using std::vector;

class Embarcacao : public Veiculo
{	
public:
	Embarcacao(const string &,const Data &,const string &,const string &);
	~Embarcacao();
	
	virtual bool mover() = 0;
	string get_nome_embarcacao() const;
	Data get_data_registro() const;
	string get_porto_partida() const;
	string get_porto_chegada() const;
	bool get_embarcacao_aportada() const;
	bool get_navegacao_liberada() const;
	bool get_rota_definida() const;
	bool get_tripulacao_definida() const;
	int get_distancia_km() const;
	bool get_estado_motor() const;
	int get_velocidade_km() const;
	int get_tempo_decorrido() const;
	
	vector<Tripulante> get_tripulantes() const;
	
	void set_embarcacao_aportada(); //Chaveia na operação de entrada e saída de porto na classe porto.
	void set_navegacao_liberada();
	void set_porto_partida(const string &);
	void set_porto_chegada(const string &);
	void set_nome_embarcacao(const string &);
	void set_data_registro(const Data &);
	void set_embarcacao_aportada(const bool &);
	void set_navegacao_liberada(const bool &);
	void set_rota_definida(const bool &);
	void set_tripulacao_definida(const bool &);
	void set_distancia_km(const int &);
	void set_estado_motor(const bool &);
	void set_velocidade_km(const int &);
	void set_tempo_decorrido(const int &);
	
	void set_tripulantes(const vector<Tripulante> &);
	
	void definir_rota();
	void definir_tripulacao();
	void ligar_motores();
	
	virtual int definir_velocidade() = 0;
	
	void piloto_automatico();
	void piloto_manual();
	void navegar();
	void operar();
	bool viagem_finalizada();

private:
	string nome_embarcacao;
	Data data_registro;
	string porto_partida;
	string porto_chegada;
	bool embarcacao_aportada;
	bool navegacao_liberada;
	bool rota_definida;
	bool tripulacao_definida;
	
	bool estadoMotor;
	int distanciaKm;
	int distanciaKmEntrePortos;
	int distanciaKmAuto;
	bool modoPilotoAuto;
	int velocidadeKmHora;
	int tempoHoras;
	
	vector<Tripulante> tripulacao;

};

#endif // EMBARCACAO_H