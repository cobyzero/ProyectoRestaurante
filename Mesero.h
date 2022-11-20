//
// Created by diego on 17/11/2022.
//

#ifndef CLASE_RESTAURANT_MESERO_H
#define CLASE_RESTAURANT_MESERO_H
#include "Comedor.h"
#include <string>
using namespace std;
#include "Librerias.h"

//La clase mesero hereda desde la clase comedor
class Mesero: public Comedor {
    int sueldo;
public:
    vector<Mesero>s;
    Mesero(int sueldo, int aforo, string nombre,int precios[_platos_precios], string platos[_platos_precios]):Comedor(aforo,nombre,precios,platos){
        this->sueldo=sueldo;
    }

};

#endif //CLASE_RESTAURANT_MESERO_H
