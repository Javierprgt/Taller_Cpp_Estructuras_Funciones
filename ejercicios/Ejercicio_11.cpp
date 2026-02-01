#include <iostream>

using namespace std;

int main() {
    float numeros[10], suma = 0, pos = 0, neg = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
        if (numeros[i] > 0) pos++;
        else if (numeros[i] < 0) neg++;
    }

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << suma / 10 << endl;
    cout << "Porcentaje positivos: " << (pos / 10) * 100 << "%" << endl;
    cout << "Porcentaje negativos: " << (neg / 10) * 100 << "%" << endl;

    return 0;
}
