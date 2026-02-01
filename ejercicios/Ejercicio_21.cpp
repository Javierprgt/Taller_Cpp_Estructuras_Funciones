#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int dentro = 0, fuera = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] >= 20 && numeros[i] <= 80) {
            dentro++;
        } else {
            fuera++;
        }
    }
    cout << "Dentro del rango: " << dentro << " (" << (dentro * 100.0) / 10 << "%)" << endl;
    cout << "Fuera del rango: " << fuera << " (" << (fuera * 100.0) / 10 << "%)" << endl;
    return 0;
}
