#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Cliente {
    string nombre;
    int edad;
};

int main() {
    vector<Cliente> clientes;
    int n;
    cout << "Cantidad: "; cin >> n;
    ofstream archivo("clientes.txt");
    for (int i = 0; i < n; i++) {
        Cliente c;
        cin.ignore();
        cout << "Nombre: "; getline(cin, c.nombre);
        cout << "Edad: "; cin >> c.edad;
        clientes.push_back(c);
        archivo << c.nombre << " " << c.edad << endl;
    }
    archivo.close();
    string buscar;
    cout << "\nNombre a buscar: "; cin.ignore(); getline(cin, buscar);
    bool hallado = false;
    for (const auto& c : clientes) {
        if (c.nombre == buscar) {
            cout << "Edad: " << c.edad << endl;
            hallado = true;
        }
    }
    if (!hallado) cout << "No encontrado." << endl;
    return 0;
}
