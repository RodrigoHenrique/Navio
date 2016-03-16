#ifndef EMBARCACAO_H
#define EMBARCACAO_H
#include <string>
#include "Veiculo.h"

using namespace std;

class Embarcacao : public Veiculo
{
public:
    Embarcacao(const string &,const string &,const string &);
    ~Embarcacao();

private:
    string tipoHelice;
};

#endif // EMBARCACAO_H
