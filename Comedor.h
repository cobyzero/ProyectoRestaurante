//
// Created by diego on 17/11/2022.
//

#ifndef CLASE_RESTAURANT_COMEDOR_H
#define CLASE_RESTAURANT_COMEDOR_H
#include "Restaurante.h"
#include <string>
using namespace std;
#include "Librerias.h"

//La clase comedor hereda de la clase restaurante
class Comedor: public Restaurante {
    int aforo;
    string nombre;
public:
    Comedor(int aforo, string nombre,int precios[_platos_precios], string platos[_platos_precios]):Restaurante(precios, platos){
        this-> aforo= aforo;
        this->nombre= nombre;
    }

};

#endif //CLASE_RESTAURANT_COMEDOR_H
