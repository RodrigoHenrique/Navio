#ifndef CARGA_H
#define CARGA_H

#include <string>

using std::string;

class Carga
{
public:
    Carga(const string &,const int &);
    Carga(const Carga &);
    ~Carga();

private:
    string nomeCarga;
    int peso;
};

#endif // CARGA_H
