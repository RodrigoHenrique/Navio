#include "Mercadoria.h"

Mercadoria::Mercadoria()
{
    this->nome_mercadoria = "Desconhecida";
    this->quantidade = 0;
    this->valor_RS = 0;
}

Mercadoria::Mercadoria(const string &nome_mercadoria,const int &quantidade,const float &valor_RS)
{
    set_nome_mercadoria(nome_mercadoria);
    set_quantidade(quantidade);
    set_valor_RS(valor_RS);
}

Mercadoria::Mercadoria(const Mercadoria &mercadoria_copia)
{
    (*this) = mercadoria_copia;
}

Mercadoria::~Mercadoria()
{
}

ostream &operator<<(ostream &output,const Mercadoria &mercadoria_imprime)
{
    output << "Nome da mercadoria: " << mercadoria_imprime.nome_mercadoria;
    output << "\nQuantidade: " << mercadoria_imprime.quantidade;
    output << "\nValor: RS" << mercadoria_imprime.valor_RS;
    return output;
}

const Mercadoria & Mercadoria::operator =(const Mercadoria &mercadoria_atribuicao)
{
    this->nome_mercadoria = mercadoria_atribuicao.nome_mercadoria;
    this->quantidade = mercadoria_atribuicao.quantidade;
    this->valor_RS = mercadoria_atribuicao.valor_RS;
}

bool Mercadoria::operator==(const Mercadoria &mercadoria_comparacao) const
{
    if(mercadoria_comparacao.nome_mercadoria != nome_mercadoria) return false;
    if(mercadoria_comparacao.quantidade != quantidade) return false;
    if(mercadoria_comparacao.valor_RS != valor_RS) return false;
    return true;
}

bool Mercadoria::operator!=(const Mercadoria &mercadoria_comparacao) const
{
    if(mercadoria_comparacao == (*this)) return false;
    else return true;
}

string Mercadoria::get_nome_mercadoria() const
{
    return this->nome_mercadoria;
}

int Mercadoria::get_quantidade() const
{
    return this->quantidade;
}

float Mercadoria::get_valor_RS() const
{
    return this->valor_RS;
}

void Mercadoria::set_nome_mercadoria(const string &nome_mercadoria)
{
    this->nome_mercadoria = nome_mercadoria;
}

void Mercadoria::set_quantidade(const int &quantidade)
{
    this->quantidade = quantidade;
}

void Mercadoria::set_valor_RS(const float &valor_RS)
{
    this->valor_RS = valor_RS;
}