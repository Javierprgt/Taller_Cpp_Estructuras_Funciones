#include <iostream>

using namespace std;

int main() {
    int numeros[12], sumaPares = 0, sumaImpares = 0;

    for (int i = 0; i < 12; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] % 2 == 0) sumaPares += numeros[i];
        else sumaImpares += numeros[i];
    }

    cout << "Suma pares: " << sumaPares << endl;
    cout << "Suma impares: " << sumaImpares << endl;

    if (sumaPares > sumaImpares) cout << "La suma de pares es mayor." << endl;
    else if (sumaImpares > sumaPares) cout << "La suma de impares es mayor." << endl;
    else cout << "Ambas sumas son iguales." << endl;

    return 0;
}
