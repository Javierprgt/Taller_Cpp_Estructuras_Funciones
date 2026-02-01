#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Cliente {
    string nombre;
    int edad;
    double consumoMensual;
};

int main() {
    vector<Cliente> clientes;
    int n;
    cout << "Cantidad: "; cin >> n;

    ofstream salida("consumos.txt");
    for (int i = 0; i < n; i++) {
        Cliente c;
        cin.ignore();
        cout << "Nombre: "; getline(cin, c.nombre);
        cout << "Edad: "; cin >> c.edad;
        cout << "Consumo: "; cin >> c.consumoMensual;
        clientes.push_back(c);
        salida << c.nombre << " " << c.edad << " " << c.consumoMensual << endl;
    }
    salida.close();

    double total = 0, mayorConsumo = -1;
    string nombreMayor;
    for (const auto& c : clientes) {
        total += c.consumoMensual;
        if (c.consumoMensual > mayorConsumo) {
            mayorConsumo = c.consumoMensual;
            nombreMayor = c.nombre;
        }
    }

    cout << "\nTotal: " << total << endl;
    cout << "Promedio: " << total / n << endl;
    cout << "Mayor consumo: " << nombreMayor << " (" << mayorConsumo << ")" << endl;
    return 0;
}
