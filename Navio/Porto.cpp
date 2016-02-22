#include "Porto.h"
#include <string>

using std::string;

Porto::Porto(const string &Porto)
{
	this->nomePorto = Porto;
}

Porto::Porto()
{
	this->nomePorto = "Porto Desconhecido";
}

Porto::~Porto()
{
}

string Porto::getNomePorto() const
{
	return this->nomePorto;
}


