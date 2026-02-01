#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numeros(10);
    double suma = 0;
    int arribaPromedio = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }
    double promedio = suma / 10;
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > promedio) arribaPromedio++;
    }
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Numeros por encima del promedio: " << arribaPromedio << endl;
    return 0;
}
