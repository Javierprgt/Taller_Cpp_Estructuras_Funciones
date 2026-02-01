#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> sueldos(10);
    float suma = 0;
    int encima = 0, debajo = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Sueldo " << i + 1 << ": ";
        cin >> sueldos[i];
        suma += sueldos[i];
    }
    float promedio = suma / 10;

    for (int i = 0; i < 10; i++) {
        if (sueldos[i] > promedio) encima++;
        else if (sueldos[i] < promedio) debajo++;
    }
    cout << "Sueldo promedio: " << promedio << endl;
    cout << "Sueldos por encima del promedio: " << encima << endl;
    cout << "Sueldos por debajo del promedio: " << debajo << endl;
    return 0;
}
