#include <iostream>

using namespace std;

int main() {
    int sumaPares = 0, sumaImpares = 0;
    for (int i = 1; i <= 100; i++) {
    	cout << i << (i == 100 ? "" : ", ");
        if (i % 2 == 0) sumaPares += i;
        else sumaImpares += i;
    }
    cout << "\nSuma de pares: " << sumaPares << endl;
    cout << "Suma de impares: " << sumaImpares << endl;
    if (sumaPares > sumaImpares) {
        cout << "La suma de pares es mayor." << endl;
    } else if (sumaImpares > sumaPares) {
        cout << "La suma de impares es mayor." << endl;
    } else {
        cout << "Ambas sumas son iguales." << endl;
    }
    return 0;
}
