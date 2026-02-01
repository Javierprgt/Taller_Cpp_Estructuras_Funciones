#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void ingresarVentas(vector<double>& v, int n) {
    for (int i = 0; i < n; i++) {
        double venta;
        cout << "Venta " << i + 1 << ": ";
        cin >> venta;
        v.push_back(venta);
    }
}

void guardarVentas(const vector<double>& v) {
    ofstream arch("ventas.txt");
    for (double x : v) arch << x << endl;
    arch.close();
}

void cargarVentas(vector<double>& v) {
    v.clear();
    ifstream arch("ventas.txt");
    double x;
    while (arch >> x) v.push_back(x);
    arch.close();
}

double calcularTotal(const vector<double>& v) {
    double t = 0;
    for (double x : v) t += x;
    return t;
}

void analizarVentas(const vector<double>& v, double promedio) {
    int mayores = 0, menores = 0;
    for (double x : v) {
        if (x > promedio) mayores++;
        else if (x < promedio) menores++;
    }
    cout << "Ventas mayores al promedio: " << mayores << endl;
    cout << "Ventas menores al promedio: " << menores << endl;
}

int main() {
    vector<double> ventasIniciales, ventasDesdeArchivo;
    int n;
    
    cout << "N de ventas: "; cin >> n;
    ingresarVentas(ventasIniciales, n);
    guardarVentas(ventasIniciales);
    
    cargarVentas(ventasDesdeArchivo);
    
    double total = calcularTotal(ventasDesdeArchivo);
    double promedio = total / ventasDesdeArchivo.size();
    
    cout << "\nTotal de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    analizarVentas(ventasDesdeArchivo, promedio);

    return 0;
}
