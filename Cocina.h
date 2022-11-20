
#include "Restaurante.h"
#include <iostream>
#include "Librerias.h"
#include <string>
using namespace std;
// Mi clase cocina es hija de restaurante
class Cocina : public Restaurante {
    int sueldo;
    string nombre;
public:
    Cocina(int _precios[_platos_precios], string _platos[_platos_precios], int _sueldo, string _nombre)
            : Restaurante(_precios, _platos) {
        this->sueldo = _sueldo;
        this->nombre = _nombre;
    }
    //obtiene un valor para sueldo
    int getSueldo() const { return sueldo; }
    //obtiene un valor para nombre
    const string getNombre() const { return nombre; }
};