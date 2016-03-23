#ifndef SUBMARINO_H
#define SUBMARINO_H
#include "Embarcacao.h"
#include <string>

using std::string;

class Submarino : public Embarcacao
{
public:
    Submarino(const string &,const string &,const string &,const string &);
    ~Submarino();
    virtual bool mover();
	void imprimeViagem(const Submarino &);
	
	string getTipoCombustivelNuclear() const;
    bool getSubmerso() const;
	
	void setSubmerso();

private:
    string tipoCombustivelNuclear;
    bool submerso;

};

#endif // SUBMARINO_H