#ifndef CARGA_H
#define CARGA_H
#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Carga
{
	friend ostream &operator<<(ostream &,const Carga &);
	
public:
    Carga();
	Carga(const string &,const double &);
	Carga(const Carga &);
	~Carga();
	
	const Carga &operator=(const Carga &);
    bool operator==(const Carga &) const;
    bool operator!=(const Carga &) const;
    
    string get_nome_carga() const;
    double get_peso() const;
    void set_nome_carga(const string &);
    void set_peso(const double &);

private:
	string nome_carga;
	double peso;

};

#endif // CARGA_H