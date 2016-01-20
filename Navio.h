#include <string>

using namespace std;

class Navio
{
	public:
		
		Navio(string,string,string,string,string,string);
		
		void setTipoNavio(string);
		void setMetodoLocomocao(string);
		void localizacao(float*,float*);
		void sos(float*,float*);
		float acostagem(float,float,float); // distancia de aproximacao do outro navio, direcao de deslocamente em relacao ao norte do navio e velocidade do navio em relacao ao outro.
		
	//Para Veleiros:
		
		float abatimento(float,float,float,float,float*,float*); //vel do vento, direção em radianos do vento, vel da correnteza, direção em radianos da correnteza, Velocidade resultante do veleiro e desvio de direção em radianos do veleiro em relação ao norte magnético.
		float adernamento(string); // inclinacao para bombordo ou estibordo, retornando os graus de inclinacao.		
		bool alargamento(); //retorna true se o vento esta a favor, e false quando contra.

	private:
	
	// Parte 1: Essa parte está relacionada a todo e qualquer navio.

		string cRegistro;     // Convencao sobre a Facilitacao do Tráfego Marítimo internacional, 1995 (Convenção FAL).
		string docTripulacaoMinSeguranca;    // SOLAS 1974.
		string cComandanteseTripulacao;    // STCW 1995.
	
	// Parte 2: Características.

		string tipoNavio;       // Informa o tipo de Navio.
		string metodoLocomocao; // Informa se é por meio de remos, velas, hélices.
		string tipoCombustao;   // Informa o tipo de material de combustao.

	// Parte 3: Localização:
		float latitude;
		float longitude;
		string direcao;   //bombordo ou estibordo.

	
};
	
	