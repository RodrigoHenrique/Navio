#include "CruzeiroComercial.h"

CruzeiroComercial::CruzeiroComercial(const string &nome_embarcacao,const Data &data_registro,const string &proprietario,const string &porto_partida)
:Cruzeiro(nome_embarcacao,data_registro,proprietario,porto_partida),Mercante(nome_embarcacao,data_registro,proprietario,porto_partida)
{
    this->pode_navegar_tempo_habil = false;
}

CruzeiroComercial::~CruzeiroComercial()
{
}

bool CruzeiroComercial::testa_tempo_habil()
{
    int vel = get_velocidade_max_esp();
    int distanciaKm = get_distancia_km_esp();
    if((distanciaKm/vel) > CruzeiroComercial::tempo_maximo_viagem)
    {
        this->pode_navegar_tempo_habil = false;
        return false;
    }
    this->pode_navegar_tempo_habil = true;
    return true;
}