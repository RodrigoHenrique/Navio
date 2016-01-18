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
	
	// Parte 2: Alem da Parte 1, abaixo estao as especificações relacionadas a navios de passageiros. 
		
		string cSegurancaparaNaviodePassageiros; // SOLAS 1974, regra I/12, como emendada pelas emendas GMDSS.
		string cInsencaoNavioPassageiro;                        // SOLAS 1974, regra I/12.
		string cNaviosEscpeciaisdePassageiros;   // Acordo STP, regra 5.
		
	// Parte 3: Alem da Parte 1, abaixo estao as especificações relacionadas a navios de carga.

		string cSegurancadeConstrucao;            // SOLAS 1974, regra I-12.
		string cSegurancadeEquipamentos;          // SOLAS 1974, regra I-12.
		string cSeggurancaRadio;                  // SOLAS 1974, regra I-12.
		string cInsencaoNavioCargueiro;           // SOLAS 1974, regra I-12.
		string docTransportedeMercadoriaPerigosa; // SOLAS 1974, regra II-2/54.3.
		string manifestoMercadoriasPerigosas;     // SOLAS 1974, regra 5, cap. VII, parte A.
		string docTransportedeGraos;              // SOLAS 1974, regra VI/09.
		string seguroDanosderPoluicaoporOleo;     // CLC 69, artigo VII.

	// Parte 4: Alem da Parte 1 e 3, abaixo estao as especificações relacionadas a navios de transporte de substâncias químicas líquidas nocivas a granel.

		string cNLS;                 // MARPOL 73/78 anexo II, regras 12 e 12A.
		string livroRegistrodeCarga; // MARPOL 73/78 anexo II, regra 9.
		
	// Parte 5: Alem da Parte 1 e 3, abaixo estao as especificações relacionadas a navios-tanque químico.
		
		string cConformidadeTransportedeSubstQuimicasPerigosasaGranel; // Código BHC seção 1.6.

	// Parte 6: Alem da Parte 1 e 3, abaixo estao as expecificações relacionadas a navios de transporte de gás.

		string cConformidadeTrasnportedeGasesLiquefeitosaGranel; // Código GC seção 1.6.
		string cInternacionalTransportedeGasesLiquefeitosaGranel; // Código IGC seção 1.5.

	// Parte 7: Outros certificados diversos para Navios de finalidade especial.

		string cSegurançaNaviosdeFinalidadeEspecial; // A.534(13) seção 1.7.
		string cAdicionalNaviosdeApoioMaritimoOFFSHORE; // A.673(16)seção 1.5, MARPOL 73/78, anexo II, regra13(4).
	
	// Parte 8: Sistemas de Mergulho.
		
		string cSegurancadeSistemadeMergulho;  //A.536(13) seção 1.6.

	// Parte 9: Embarcação suportada dinamicamente.
		
		string cosntrucaoeCertificadodeEquipamento; // A.373(X) seção 1.6.
		bool altorizacaoparaOperar;                 // A.373(10) seção 1.6.
	
	// Parte 10: Unidades Móveis de Perfuração Off-Shore.
		
		string cSegurancaPerfuracao;

	// Parte 11: Níveis de Barulho.
	
		string relatorioVistoriadeBarulho;     //A.438(XII), seção 4.3.

	public:
		
};
