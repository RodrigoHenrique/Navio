#include <string>

using namespace std;

class Navio
{
	private:
	
	// Parte 1: Essa parte está relacionada a todo e qualquer navio.

		string cRegistro;     // Convencao sobre a Facilitacao do Tráfego Marítimo internacional, 1995 (Convenção FAL).
		string cInternacionalIMO;       // Resolução IMO A.600(15)/1987.
		string cinternacionalTonelagem; // Convenção sobre tonelagem.
		string cInternacionalLinhasdeCarga; // Convenção LL.
		string folhetodeEstabilidadeIntacta; // SOLAS 1974.
		string docTripulacaoMinSeguranca;    // SOLAS 1974.
		string cComandanteseTripulacao[];    // STCW 1995.
		string cDesratizacao; //Convecao FAL
		string cInternacionalPrevecaodaPoluicaoporOleo; //MARPOL 73/78.
		string registrodeOleo;                          //MARPOL 73/78.
		string decMaritimadeSaude; //Conveçãoo FAL.
	
	// Parte 2: Características.

		string tipoNavio;       // Informa o tipo de Navio.
		string metodoLocomocao; // Informa se é por meio de remos, velas, hélices.
		string tipoCombustao;   // Informa o tipo de material de combustao.

	public:
		
		Navio(string,string,string,string,string,string,string,string,string,string,string,string,string,string);
		
		void setTipoNavio(string);
		void setMetodoLocomocao(string);
		void setTipoCombustao(string);

};
