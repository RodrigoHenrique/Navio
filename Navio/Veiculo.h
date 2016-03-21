#ifndef VEICULO_H
#define VEICULO_H
#include <string>

using namespace std;

class Veiculo
{
public:
    Veiculo(const string &,const string &);
    ~Veiculo();
    virtual bool mover() = 0;
	
	string getProprietario() const;
    string getMeioLocomocao() const;

private:
    string meioLocomocao;
    string proprietario;

};

#endif // VEICULO_H