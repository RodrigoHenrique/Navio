#ifndef TRIPULANTE_H
#define TRIPULANTE_H
#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Tripulante
{
	friend ostream &operator<<(ostream &,const Tripulante &);
	
public:
	Tripulante(const string &,const string &);
	~Tripulante();
	
	const Tripulante &operator=(const Tripulante &);
	bool operator==(const Tripulante &) const;
	
	string get_cargo() const;
	string get_sobrenome() const;
	
	void set_cargo(const string &);
	
private:
	string cargo;
	string sobrenome;
	
};

#endif // TRIPULANTE_H