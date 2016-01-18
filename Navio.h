#include <string>

using namespace std;

class Navio
{
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
	
	// Parte 2: Alem da Parte 1, abaixo estao as especifica��es relacionadas a navios de passageiros. 
		
		string cSegurancaparaNaviodePassageiros; // SOLAS 1974, regra I/12, como emendada pelas emendas GMDSS.
		string cInsencaoNavioPassageiro;                        // SOLAS 1974, regra I/12.
		string cNaviosEscpeciaisdePassageiros;   // Acordo STP, regra 5.
		
	// Parte 3: Alem da Parte 1, abaixo estao as especifica��es relacionadas a navios de carga.

		string cSegurancadeConstrucao;            // SOLAS 1974, regra I-12.
		string cSegurancadeEquipamentos;          // SOLAS 1974, regra I-12.
		string cSeggurancaRadio;                  // SOLAS 1974, regra I-12.
		string cInsencaoNavioCargueiro;           // SOLAS 1974, regra I-12.
		string docTransportedeMercadoriaPerigosa; // SOLAS 1974, regra II-2/54.3.
		string manifestoMercadoriasPerigosas;     // SOLAS 1974, regra 5, cap. VII, parte A.
		string docTransportedeGraos;              // SOLAS 1974, regra VI/09.
		string seguroDanosderPoluicaoporOleo;     // CLC 69, artigo VII.

	// Parte 4: Alem da Parte 1 e 3, abaixo estao as especifica��es relacionadas a navios de transporte de subst�ncias qu�micas l�quidas nocivas a granel.

		string cNLS;                 // MARPOL 73/78 anexo II, regras 12 e 12A.
		string livroRegistrodeCarga; // MARPOL 73/78 anexo II, regra 9.
		
	// Parte 5: Alem da Parte 1 e 3, abaixo estao as especifica��es relacionadas a navios-tanque qu�mico.
		
		string cConformidadeTransportedeSubstQuimicasPerigosasaGranel; // C�digo BHC se��o 1.6.

	// Parte 6: Alem da Parte 1 e 3, abaixo estao as expecifica��es relacionadas a navios de transporte de g�s.

		string cConformidadeTrasnportedeGasesLiquefeitosaGranel; // C�digo GC se��o 1.6.
		string cInternacionalTransportedeGasesLiquefeitosaGranel; // C�digo IGC se��o 1.5.

	// Parte 7: Outros certificados diversos para Navios de finalidade especial.

		string cSeguran�aNaviosdeFinalidadeEspecial; // A.534(13) se��o 1.7.
		string cAdicionalNaviosdeApoioMaritimoOFFSHORE; // A.673(16)se��o 1.5, MARPOL 73/78, anexo II, regra13(4).
	
	// Parte 8: Sistemas de Mergulho.
		
		string cSegurancadeSistemadeMergulho;  //A.536(13) se��o 1.6.

	// Parte 9: Embarca��o suportada dinamicamente.
		
		string cosntrucaoeCertificadodeEquipamento; // A.373(X) se��o 1.6.
		bool altorizacaoparaOperar;                 // A.373(10) se��o 1.6.
	
	// Parte 10: Unidades M�veis de Perfura��o Off-Shore.
		
		string cSegurancaPerfuracao;

	// Parte 11: N�veis de Barulho.
	
		string relatorioVistoriadeBarulho;     //A.438(XII), se��o 4.3.

	public:
		
};
