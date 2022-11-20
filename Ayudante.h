//
// Created by diego on 17/11/2022.
//

#ifndef CLASE_RESTAURANT_AYUDANTE_H
#define CLASE_RESTAURANT_AYUDANTE_H

#include "Librerias.h"

using namespace std;

//La clase Ayudante hereda de la clase cocina
class Ayudante: public Cocina {
public:
    vector<Ayudante>a;
    Ayudante(int precios[_platos_precios],string platos[_platos_precios],int sueldo, string nombre):Cocina(precios,platos, sueldo,  nombre){

    }
};



#endif //CLASE_RESTAURANT_AYUDANTE_H
