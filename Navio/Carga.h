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
	Carga(const Carga &);
	~Carga();
	
	const Carga &operator=(const Carga &);
    bool operator==(const Carga &) const;
    bool operator!=(const Carga &) const;
    
    string getNCarga() const;
    double getPeso() const;
    void setNCarga(const string &);
    void setPeso(const double &);

private:
	string nCarga;
	double peso;

};

#endif // CARGA_H