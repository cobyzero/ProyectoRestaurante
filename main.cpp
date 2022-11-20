#include "Chef.h"
#include "Mesero.h"
#include "Cliente.h"
#include "Ayudante.h"
#include "Librerias.h"
using namespace std;

int precios_p[2]={30, 35};
string platos_p[2]= {"Arroz","Pollo"};
int aforo_a= 30;

void menu();

int main() {
    menu();
}

void crearayudante(Ayudante h){
    h.a.push_back(h);
}

void crearmesero(Mesero h){
    h.s.push_back(h);
}

void crearcliente(Cliente h){
    h.l.push_back(h);
}

void menu(){
    cout << "1. Crear chef\n";
    cout << "2. Crear ayudante\n";
    cout << "3. Crear mesero\n";
    cout << "4. Crear cliente\n";
    int t;
    cin >> t;
    switch (t){
        case 1:{
            int sueldo;
            string nombre;
            string universidad;
            cout << "Ingrese su sueldo: "; cin >> sueldo;
            cout << "Ingrese su nombre: "; cin >> nombre;
            cout << "Ingrese su universidad: "; cin >> universidad;
            Chef c= Chef(precios_p,platos_p,sueldo,nombre,universidad);
            c.crearchef(c);
            c.mostrartodo();
        }
            break;
        case 2:{
            int sueldo;
            string nombre;
            cout << "Ingrese su sueldo: ";cin >> sueldo;
            cout << "Ingrese su nombre: ";cin >> nombre;
            Ayudante y= Ayudante(precios_p,platos_p,sueldo,nombre);
            crearayudante(y);
        }
            break;
        case 3: {
            int sueldo;
            string nombre;
            cout << "Ingrese su sueldo: ";cin >> sueldo;
            cout << "Ingrese su nombre: ";cin >> nombre;
            Mesero m = Mesero(sueldo, aforo_a, nombre, precios_p, platos_p);
            crearmesero(m);
        }
            break;
        case 4:{
            int presupuesto;
            string nombre;
            cout << "Ingrese su presupuesto: "; cin >> presupuesto;
            cout << "Ingrese su nombre: ";cin >> nombre;
            Cliente c= Cliente(presupuesto,aforo_a,nombre,precios_p,platos_p);
            crearcliente(c);
        }
            break;
        default:
            break;
    }

}


