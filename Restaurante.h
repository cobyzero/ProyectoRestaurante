#pragma once
#include <iostream>
#include <string>
#include "Librerias.h"
using namespace std;

//Restaruante es la clase padre
class Restaurante {
    int precios[_platos_precios];
    string platos[_platos_precios];

public:
    Restaurante(int precios[_platos_precios], string platos[_platos_precios]) {
        this->precios[0] = precios[0];
        this->precios[1] = precios[1];
        this->platos[0] = platos[0];
        this->platos[1] = platos[1];
    }
    // obtiene un valor para precio
    int *getPrecios() { return precios; }
    //obtiene el valor de platos
    string *getPlatos() { return platos; }
};