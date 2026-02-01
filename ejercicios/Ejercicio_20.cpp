#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numeros(10);
    vector<double> cuadrados(10);
    double sumaCuadrados = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
        cuadrados[i] = numeros[i] * numeros[i];
        sumaCuadrados += cuadrados[i];
    }
    cout << "\nCuadrados de cada numero:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Cuadrado de " << numeros[i] << " es: " << cuadrados[i] << endl;
    }
    cout << "\nSuma de los cuadrados: " << sumaCuadrados << endl;
    cout << "Promedio de los cuadrados: " << sumaCuadrados / 10 << endl;
    return 0;
}
