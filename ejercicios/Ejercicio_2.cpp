#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero < 10 || numero > 50) {
        cout << "ADVERTENCIA: El numero se encuentra fuera del rango permitido (10-50)." << endl;
    } else {
        cout << "El numero esta dentro del rango." << endl;
    }

    return 0;
}
