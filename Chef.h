//

#include "Cocina.h"
#include "Librerias.h"
using namespace std;

//la clase chef hereda de la clase cocina
class Chef : public Cocina {
    string universidad_estudio;

public:
    vector<Chef>e;
    Chef(int precios[_platos_precios], string platos[_platos_precios], int sueldo, string nombre,
         string universidad_estudio)
            : Cocina(precios, platos, sueldo, nombre) {
        this->universidad_estudio = universidad_estudio;
    }
    //Crea el cheff y lo almacena en  un vector
    void crearchef(Chef h){
        e.push_back(h);
    }
    //Muestra los valores de chef alamacenados en el vector
    void mostrartodo(){
        cout << e[0].getNombre() << endl;
        cout << e[0].getSueldo() << endl;
        cout << e[0].universidad_estudio << endl;
    }
};
