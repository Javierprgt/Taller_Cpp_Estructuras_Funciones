#include <iostream>
#include <vector>
#include <fstream>
#include <numeric>

using namespace std;

void ingresarCalificaciones(vector<double>& notas, int n) {
    for (int i = 0; i < n; i++) {
        double nota;
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> nota;
        notas.push_back(nota);
    }
}

void guardarArchivo(const vector<double>& notas) {
    ofstream archivo("calificaciones.txt");
    for (double n : notas) {
        archivo << n << endl;
    }
    archivo.close();
}

void leerArchivo(vector<double>& notas) {
    notas.clear();
    ifstream archivo("calificaciones.txt");
    double nota;
    while (archivo >> nota) {
        notas.push_back(nota);
    }
    archivo.close();
}

void procesarDatos(const vector<double>& notas) {
    double total = 0;
    for (double n : notas) total += n;
    
    double promedio = total / notas.size();
    int encima = 0, debajo = 0;

    for (double n : notas) {
        if (n > promedio) encima++;
        else if (n < promedio) debajo++;
    }

    cout << "Total: " << total << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Encima del promedio: " << encima << endl;
    cout << "Debajo del promedio: " << debajo << endl;
}

int main() {
    vector<double> notas;
    int n;
    cout << "Cantidad de calificaciones: "; cin >> n;
    
    ingresarCalificaciones(notas, n);
    guardarArchivo(notas);
    leerArchivo(notas);
    procesarDatos(notas);

    return 0;
}
