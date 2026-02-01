#include <iostream>

using namespace std;

int main() {
    int numeros[8];
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < 8; i++) {
        if (numeros[i] > mayor) mayor = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    cout << "Numero mayor: " << mayor << endl;
    cout << "Numero menor: " << menor << endl;
    cout << "Diferencia: " << mayor - menor << endl;

    return 0;
}
