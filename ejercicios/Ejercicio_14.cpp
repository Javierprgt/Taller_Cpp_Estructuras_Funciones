#include <iostream>

using namespace std;

int main() {
    float notas[10], suma = 0;
    int aprobados = 0, reprobados = 0;

    for (int i = 0; i < 10; i++) {
        do {
            cout << "Ingrese calificacion " << i + 1 << " (0-10): ";
            cin >> notas[i];
        } while (notas[i] < 0 || notas[i] > 10);

        suma += notas[i];
        if (notas[i] >= 7) aprobados++;
        else reprobados++;
    }

    cout << "Promedio general: " << suma / 10 << endl;
    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;

    return 0;
}
