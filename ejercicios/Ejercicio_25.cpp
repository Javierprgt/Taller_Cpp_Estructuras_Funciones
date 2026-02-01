#include <iostream>
using namespace std;

int main() {
    float notas[10], suma = 0, alta, baja;
    int apr = 0, rep = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese nota " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
        if (i == 0) { alta = baja = notas[i]; }
        if (notas[i] > alta) alta = notas[i];
        if (notas[i] < baja) baja = notas[i];
        if (notas[i] >= 7) apr++;
        else rep++;
    }
    cout << "\n=== RESUMEN DE RESULTADOS ===" << endl;
    cout << "Promedio General: " << suma / 10 << endl;
    cout << "Nota mas alta: " << alta << endl;
    cout << "Nota mas baja: " << baja << endl;
    cout << "Aprobados: " << (apr * 100.0) / 10 << "%" << endl;
    cout << "Reprobados: " << (rep * 100.0) / 10 << "%" << endl;
    return 0;
}
