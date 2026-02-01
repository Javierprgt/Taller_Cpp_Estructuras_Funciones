#include <iostream>

using namespace std;

int main() {
    float numeros[15], sumaPos = 0, sumaNeg = 0;
    int cantPos = 0, cantNeg = 0;

    for (int i = 0; i < 15; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] > 0) {
            sumaPos += numeros[i];
            cantPos++;
        } else if (numeros[i] < 0) {
            sumaNeg += numeros[i];
            cantNeg++;
        }
    }

    if (cantPos > 0) cout << "Promedio positivos: " << sumaPos / cantPos << endl;
    else cout << "No se ingresaron numeros positivos." << endl;

    if (cantNeg > 0) cout << "Promedio negativos: " << sumaNeg / cantNeg << endl;
    else cout << "No se ingresaron numeros negativos." << endl;

    return 0;
}
