#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Cliente {
    string nombre;
    int edad;
};

int main() {
    vector<Cliente> clientes;
    int n;
    cout << "Cantidad de clientes: "; cin >> n;
    for (int i = 0; i < n; i++) {
        Cliente c;
        cin.ignore();
        cout << "Nombre: "; getline(cin, c.nombre);
        cout << "Edad: "; cin >> c.edad;
        clientes.push_back(c);
    }
    cout << "\nLista de Clientes:" << endl;
    for (const auto& c : clientes) {
        cout << "Nombre: " << c.nombre << " | Edad: " << c.edad << endl;
    }
    return 0;
}
