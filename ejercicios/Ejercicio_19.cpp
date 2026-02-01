#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> edades(10);
    double suma = 0;
    int mayores = 0, menoresIguales = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese edad " << i + 1 << ": ";
        cin >> edades[i];
        suma += edades[i];
    }
    double promedio = suma / 10;
    for (int i = 0; i < 10; i++) {
        if (edades[i] > promedio) mayores++;
        else menoresIguales++;
    }
    cout << "Promedio de edades: " << promedio << endl;
    cout << "Edades mayores al promedio: " << mayores << endl;
    cout << "Edades menores o iguales al promedio: " << menoresIguales << endl;
    return 0;
}
