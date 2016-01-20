#include <string>

using namespace std;

class Navio
{
	public:
		
		Navio(string,string,string,string,string,string,string,string,string,string,string,string,string,string);
		
		void setTipoNavio(string);
		void setMetodoLocomocao(string);
		void setTipoCombustao(string);

	private:
	
	// Parte 1: Essa parte est� relacionada a todo e qualquer navio.

		string cRegistro;     // Convencao sobre a Facilitacao do Tr�fego Mar�timo internacional, 1995 (Conven��o FAL).
		string cInternacionalIMO;       // Resolu��o IMO A.600(15)/1987.
		string cinternacionalTonelagem; // Conven��o sobre tonelagem.
		string cInternacionalLinhasdeCarga; // Conven��o LL.
		string folhetodeEstabilidadeIntacta; // SOLAS 1974.
		string docTripulacaoMinSeguranca;    // SOLAS 1974.
		string cComandanteseTripulacao[];    // STCW 1995.
		string cDesratizacao; //Convecao FAL
		string cInternacionalPrevecaodaPoluicaoporOleo; //MARPOL 73/78.
		string registrodeOleo;                          //MARPOL 73/78.
		string decMaritimadeSaude; //Conve��oo FAL.
	
	// Parte 2: Caracter�sticas.

		string tipoNavio;       // Informa o tipo de Navio.
		string metodoLocomocao; // Informa se � por meio de remos, velas, h�lices.
		string tipoCombustao;   // Informa o tipo de material de combustao.

	
};
	
	