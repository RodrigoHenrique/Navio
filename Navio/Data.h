#ifndef DATA_H
#define DATA_H
#include <ostream>

using std::ostream;

class Data
{
public:
    Data(int = 1,int = 1,int = 1900);
    ~Data();
    friend ostream &operator<<(ostream &,const Data &);
    const Data &operator=(const Data &);
    bool operator==(const Data &) const;
    bool operator!=(const Data &) const;
    
private:
    int dia;
    int mes;
    int ano;
    int checarDia(int,int,int) const;
    static int diasPorMes[];

};

#endif // DATA_H
