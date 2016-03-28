#ifndef MERCADORIA_H
#define MERCADORIA_H
#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Mercadoria
{
    friend ostream &operator<<(ostream &,const Mercadoria &);
    
public:
    Mercadoria();
    Mercadoria(const string &,const int &,const float &);
    Mercadoria(const Mercadoria &);
    ~Mercadoria();
    
    const Mercadoria &operator=(const Mercadoria &);
    bool operator==(const Mercadoria &) const;
    bool operator!=(const Mercadoria &) const;
    
    string get_nome_mercadoria() const;
    int get_quantidade() const;
    float get_valor_RS() const;
    
    void set_nome_mercadoria(const string &);
    void set_quantidade(const int &);
    void set_valor_RS(const float &);
    
private:
    string nome_mercadoria;
    int quantidade;
    float valor_RS;

};

#endif // MERCADORIA_H
