#ifndef CARGUEIRO_H
#define CARGUEIRO_H

#include "Navio.h"
#include <string>
#include "Data.h"
#include "Porto.h"
#include "Carga.h"

using std::string;

class Cargueiro
{
public:
    Cargueiro();
    Cargueiro(const Cargueiro &);
    ~Cargueiro();
    
    void embarqueCarga();

private:
    int nCargueiros;
    static const int pesoMaximo;
    Carga *cargaCargueiro;
};

#endif // CARGUEIRO_H
