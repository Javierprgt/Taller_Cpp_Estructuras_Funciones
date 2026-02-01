#include <iostream>
#include <string>
using namespace std;

struct Cliente {
    string nombre;
    int edad;
};

int main() {
    Cliente clientes[3];
    for (int i = 0; i < 3; i++) {
        cout << "Nombre " << i + 1 << ": "; cin >> clientes[i].nombre;
        cout << "Edad " << i + 1 << ": "; cin >> clientes[i].edad;
    }
    cout << "\nClientes mayores de edad:" << endl;
    for (int i = 0; i < 3; i++) {
        if (clientes[i].edad >= 18) {
            cout << "Nombre: " << clientes[i].nombre << " | Edad: " << clientes[i].edad << endl;
        }
    }
    return 0;
}
