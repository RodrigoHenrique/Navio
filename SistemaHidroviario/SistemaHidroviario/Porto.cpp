#include "Porto.h"
#include <iostream>

using std::cout;
using std::cin;

Porto::Porto(const string &nome)
{
	this->nome_porto = nome;
}

Porto::Porto(const Porto &porto_copia)
{
	(*this) = porto_copia;
}

Porto::~Porto()
{
	filas_embarcacao.clear();
}

ostream &operator<<(ostream &output,Porto &porto_imprime)
{
	output << "Nome do porto: " << porto_imprime.nome_porto;
	output << "\nQde de cais ocupados: " << porto_imprime.filas_embarcacao.size();
	output << "\nQde de cais disponiveis: " << Porto::max_filas - porto_imprime.filas_embarcacao.size();
	
	for(int i=0;i<porto_imprime.filas_embarcacao.size();i++)
	{
		output << "\n-Cais " << i;
		output << "\n Qde de vagas ocupadas: " << porto_imprime.filas_embarcacao[i].size();
		output << "\n Qde de vagas disponiveis: " << Porto::max_embarcacoes_por_fila - porto_imprime.filas_embarcacao[i].size();
		for(int j=0;j<porto_imprime.filas_embarcacao[i].size();j++)
		{
			output << "\n  Nome da embarcacao " << j << " : ";
			output << porto_imprime.filas_embarcacao[i].front()->get_nome_embarcacao();
			Embarcacao *aux = porto_imprime.filas_embarcacao[i].front();
			porto_imprime.filas_embarcacao[i].pop();
			porto_imprime.filas_embarcacao[i].push(aux);
		}
	}
	
	output << "\nQde de passageiros: " << porto_imprime.passageiros_porto.size();
	output << "\nQde de lugares de espera disponiveis para passageiros: " << Porto::max_passageiros - porto_imprime.passageiros_porto.size();
	
	list<Passageiro *> ::iterator k;
	for(k=porto_imprime.passageiros_porto.begin();k!=porto_imprime.passageiros_porto.end();k++)
	{
		output << " " << *k << "\n";
	}
	
	return output;
}

const Porto & Porto::operator=(const Porto &porto_atribuicao)
{
	nome_porto = porto_atribuicao.nome_porto;
	filas_embarcacao = porto_atribuicao.filas_embarcacao;
}

bool Porto::operator==(const Porto &porto_comparacao)
{
	Porto pC1 = porto_comparacao;
	Porto pC2 = *(this);
	
	if(porto_comparacao.nome_porto != nome_porto) return false;
	if(porto_comparacao.filas_embarcacao.size() != filas_embarcacao.size()) return false;
	
	for(int i=0;i<pC1.filas_embarcacao.size();i++)
	{
		if(pC1.filas_embarcacao[i].size() != pC2.filas_embarcacao[i].size()) return false;
		for(int j=0;j<pC1.filas_embarcacao[j].size();j++)
		{
			if(pC1.filas_embarcacao[i].front() != pC2.filas_embarcacao[i].front()) return false;
			Embarcacao *aux1 = pC1.filas_embarcacao[i].front();
			Embarcacao *aux2 = pC2.filas_embarcacao[i].front();
			pC1.filas_embarcacao[i].pop();
			pC2.filas_embarcacao[i].pop();
			pC1.filas_embarcacao[i].push(aux1);
			pC2.filas_embarcacao[i].push(aux2);
		}
	}
	return true;
}

void Porto::entrada_embarcacao(Embarcacao *embarcacao_chegada)
{
	if(this->nome_porto != embarcacao_chegada->get_porto_partida())
	{
		if(this->nome_porto == embarcacao_chegada->get_porto_chegada())
		{
			if(embarcacao_chegada->get_distancia_km() != 0) return;
		}
		else return;
	}
	
	if(filas_embarcacao.size() >= max_filas) cout << "\nTamanho maximo de filas lotadas atingido.";
	else
	{
	
		if(filas_embarcacao.empty())
		{
			filas_embarcacao.push_back(queue <Embarcacao * > ());
			filas_embarcacao.back().push(embarcacao_chegada);
			filas_embarcacao[0].front()->set_embarcacao_aportada();
			filas_embarcacao[0].front()->set_porto_partida(this->nome_porto);
		}
		else
		{
			if(filas_embarcacao.back().size() >= max_embarcacoes_por_fila)
			{
				filas_embarcacao.push_back(queue <Embarcacao * > ());
				filas_embarcacao.back().push(embarcacao_chegada);
				filas_embarcacao.back().back()->set_embarcacao_aportada();
				filas_embarcacao.back().back()->set_porto_partida(this->nome_porto);
			}
			else
			{
				filas_embarcacao.back().push(embarcacao_chegada);
				filas_embarcacao.back().back()->set_embarcacao_aportada();
				filas_embarcacao.back().back()->set_porto_partida(this->nome_porto);
			}
		}
	}
}

void Porto::saida_embarcacao(Embarcacao *embarcacao_saida)
{
	if(filas_embarcacao.empty())
	{
		cout << "\nPorto vazio.";
		embarcacao_saida = 0;
	}
	else
	{
		for(int i=0;i<filas_embarcacao.size();i++)
		{
			if(!filas_embarcacao[i].empty())
			{
				cout << "\nFila " << i << " : Nome da embarcacao: " << filas_embarcacao[i].front()->get_nome_embarcacao();
			}
		}
		int j;
		
		cout << "\nQual embarcacao desaportar? <digite o indice da fila>: ";
		cin >> j;
		
		if(filas_embarcacao[j].front()->get_rota_definida() && filas_embarcacao[j].front()->get_tripulacao_definida())
		{
			filas_embarcacao[j].front()->set_embarcacao_aportada();
			*embarcacao_saida = *(filas_embarcacao[j].front());
			filas_embarcacao[j].pop();
			cout << "\n*Desaportado.\n";
		}
	}
}

void Porto::entrada_passageiros(list<Passageiro *> *passageiros_entrada)
{
	if(passageiros_porto.size() + passageiros_entrada->size() > max_passageiros) return;
	list<Passageiro *> ::iterator j;
	
	for(j=passageiros_entrada->begin();j!=passageiros_entrada->end();j++)
	{
		passageiros_porto.push_back(*j);
	}
}

void Porto::saida_passageiros(list<Passageiro *> *passageiros_saida)
{
	if(!passageiros_porto.empty())
	{
		int i;
		cout << "\nQuantos passageiros embarcarao? <digite um inteiro positivo> : ";
		cin >> i;
		
		list<Passageiro *> ::iterator k;
		k = passageiros_porto.begin();
		while(i >= 0)
		{
			if(k == passageiros_porto.end()) break;
			passageiros_saida->push_back(*k);
			k++;
			i--;
		}
		
	}
}

string Porto::get_nome_porto() const
{
	return this->nome_porto;
}