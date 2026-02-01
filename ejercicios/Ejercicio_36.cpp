#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Estudiante {
    string nombre;
    float n1, n2, n3;
};

int main() {
    int n;
    cout << "Cantidad: "; cin >> n;
    ofstream arch("notas.txt");
    for (int i = 0; i < n; i++) {
        Estudiante e;
        cout << "Nombre: "; cin >> e.nombre;
        cout << "Notas 1, 2 y 3: "; cin >> e.n1 >> e.n2 >> e.n3;
        arch << e.nombre << " " << e.n1 << " " << e.n2 << " " << e.n3 << endl;
    }
    arch.close();

    string b;
    cout << "Buscar nombre: "; cin >> b;
    ifstream lectura("notas.txt");
    string nom; float v1, v2, v3;
    bool f = false;
    while (lectura >> nom >> v1 >> v2 >> v3) {
        if (nom == b) {
            float p = (v1 + v2 + v3) / 3;
            cout << "Notas: " << v1 << ", " << v2 << ", " << v3 << endl;
            cout << "Promedio: " << p << " | " << (p >= 7 ? "Aprueba" : "Reprueba") << endl;
            f = true;
        }
    }
    if (!f) cout << "No existe." << endl;
    return 0;
}
