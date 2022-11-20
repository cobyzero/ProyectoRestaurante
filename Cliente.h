//
// Created by diego on 17/11/2022.
//

#ifndef CLASE_RESTAURANT_CLIENTE_H
#define CLASE_RESTAURANT_CLIENTE_H
#include "Comedor.h"
#include "Librerias.h"
#include <string>
using namespace std;

//La clase cliente hereda desde la clase comedor
class Cliente : public Comedor{
    int presupuesto;
public:
    vector<Cliente>l;
    Cliente(int presupuesto, int aforo, string nombre,int precios[_platos_precios], string platos[_platos_precios])
    :Comedor(aforo,nombre,precios,platos){
        this->presupuesto = presupuesto;
    }
};


#endif //CLASE_RESTAURANT_CLIENTE_H
