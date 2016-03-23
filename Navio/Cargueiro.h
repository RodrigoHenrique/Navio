#ifndef CARGUEIRO_H
#define CARGUEIRO_H
#include <string>
#include "Data.h"
#include <iostream>
#include "Navio.h"
#include "Porto.h"
#include "Carga.h"

using std::string;
using std::ostream;

class Cargueiro : public Navio
{
	friend ostream &operator<<(ostream &,const Cargueiro &);
	
public:
	Cargueiro(const string &,const Data &,const Porto &, const Porto &,const string &,const string &,const string &);
    Cargueiro(const Cargueiro &);
	~Cargueiro();
	
	const Cargueiro &operator=(const Cargueiro &);
	bool operator==(const Cargueiro &) const;
	
	void setCargas(const string &,const double &);
	void embarcaCargas();
    virtual void imprimeViagem();
    virtual bool mover();
	
private:
	static const double pesoMaximoTON;
	Carga *cargas;
	int totalCargas;

};

#endif // CARGUEIRO_H