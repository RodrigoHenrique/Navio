#ifndef MERCANTE_H
#define MERCANTE_H
#include "Navio.h"
#include <string>
#include <iostream>
#include "Mercadoria.h"

using std::string;
using std::ostream;

class Mercante : public Navio
{
    friend ostream &operator<<(ostream &,const Mercante &);
    
public:
    Mercante(const string &,const Data &,const string &,const string &);
    Mercante(const Mercante &);
    ~Mercante();
    
    const Mercante &operator=(const Mercante &);
    bool operator==(const Mercante &) const;
    bool operator!=(const Mercante &) const;

    void definir_mercadorias(list<Mercadoria * > );
    
};

#endif // MERCANTE_H
