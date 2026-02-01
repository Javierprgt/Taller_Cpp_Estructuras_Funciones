#include <iostream>

using namespace std;

int main() {
    int numero, suma = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero > 0) {
        for (int i = 1; i <= 10; i++) {
            int resultado = numero * i;
            cout << numero << " x " << i << " = " << resultado << endl;
            suma += resultado;
        }
        cout << "La suma de los resultados es: " << suma << endl;
    } else {
        cout << "El numero ingresado no es positivo." << endl;
    }
    return 0;
}
