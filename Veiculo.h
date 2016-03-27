#ifndef VEICULO_H
#define VEICULO_H
#include <string>

using std::string;

class Veiculo
{
	
public:
	Veiculo();
    Veiculo(const string &,const string &);
    Veiculo(const Veiculo &);
    ~Veiculo();
	
    virtual bool mover() = 0;
	
	string get_proprietario() const;
    string get_tipo_locomocao() const;
	
	void set_proprietario(const string &);
	void set_tipo_locomocao(const string &);

private:
	string proprietario;
    string tipo_locomocao;

};
#endif // VEICULO_H
