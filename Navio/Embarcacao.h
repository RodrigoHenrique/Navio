#ifndef EMBARCACAO_H
#define EMBARCACAO_H
#include <string>
#include "Veiculo.h"

using std::string;

class Embarcacao : public Veiculo
{
public:
    Embarcacao(const string &,const string &,const string &);
    ~Embarcacao();
	
	virtual void imprimeViagem() = 0;
	
	string getTipHelice() const;

private:
    string tipoHelice;
};

#endif // EMBARCACAO_H