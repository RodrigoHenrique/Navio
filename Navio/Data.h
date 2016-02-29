#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int = 1,int = 1,int = 1900);
    ~Data();
    const Data &operator=(const Data &);
    bool operator==(const Data &) const;
    bool operator!=(const Data &) const;
    
    void imprimeData() const;
    
private:
    int dia;
    int mes;
    int ano;
    int checarDia(int,int,int) const;
    static int diasPorMes[];

};

#endif // DATA_H
