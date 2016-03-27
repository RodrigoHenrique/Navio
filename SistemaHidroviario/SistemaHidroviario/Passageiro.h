#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H
#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Passageiro
{
	friend ostream &operator<<(ostream &,const Passageiro &);
	
public:
	Passageiro();
	Passageiro(const string &,const string &,const int &,const double &);
	Passageiro(const Passageiro &);
	~Passageiro();
	
	const Passageiro &operator=(const Passageiro &);
	bool operator==(const Passageiro &) const;
	
	string get_nome() const;
	string get_sobrenome() const;
	int get_idade() const;
	int get_peso() const;

private:
	string nome;      //Primeiro nome.
	string sobrenome; //Último nome.
	int idade;        //Em anos.
	double peso;      //Em Kilogramas.
	

};

#endif // PASSAGEIRO_H
