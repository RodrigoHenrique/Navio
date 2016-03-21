#include "Submarino.h"
#include "Embarcacao.h"
#include <string>
#include <iostream>

using namespace std;

Submarino::Submarino(const string &meioLoc,const string &prop,const string &tipoHel,const string &tipoCombNuc)
:Embarcacao(meioLoc,prop,tipoHel)
{
    this->tipoCombustivelNuclear = tipoCombNuc;
    this->submerso = true;
}

Submarino::~Submarino()
{
}

bool Submarino::mover()
{
    if(this->submerso == true) return true;
    else return false;
}

void Submarino::imprimeViagem()
{
	cout << "PROPRIETARIO : " << this->getProprietario();
	cout << ".\nMEIO DE LOCOMOCAO : " << this->getMeioLocomocao();
	cout << ".\n-> SUBMARINO";
	cout << ".\nTIPO DE HELICE : " << this->getTipHelice();
	cout << ".\nTIPO DE COMBUSTIVEL NUCLEAR : " << this->getTipoCombustivelNuclear();
	if(this->getSubmerso() == true) cout << ".\nSUBMERSO.";
	else cout << ".\nNAO SUBMERSO.";
}

string Submarino::getTipoCombustivelNuclear() const
{
	return this->tipoCombustivelNuclear;
}

bool Submarino::getSubmerso() const
{
	return this->submerso;
}

void Submarino::setSubmerso()
{
	if(this->submerso == true) this->submerso = false;
	else this->submerso = true;
}