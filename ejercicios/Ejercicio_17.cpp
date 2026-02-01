#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> valores(8);
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> valores[i];
    }
    int maximo = valores[0];
    int minimo = valores[0];
    for (int i = 1; i < 8; i++) {
        if (valores[i] > maximo) maximo = valores[i];
        if (valores[i] < minimo) minimo = valores[i];
    }
    cout << "Valor maximo: " << maximo << endl;
    cout << "Valor minimo: " << minimo << endl;
    cout << "Rango: " << maximo - minimo << endl;
    return 0;0
}
