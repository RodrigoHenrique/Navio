#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int = 1,int = 1,int = 1900);
    ~Data();
    
    void imprimeData() const;
    
private:
    int dia;
    int mes;
    int ano;
    int checarDia(int) const;
    

};

#endif // DATA_H
