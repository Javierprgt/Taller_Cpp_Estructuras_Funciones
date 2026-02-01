#include <iostream>

using namespace std;

void llenar(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Venta " << i + 1 << ": "; cin >> a[i];
    }
}

void procesar(float a[], int n, float& t, float& p, int& m) {
    t = 0; m = 0;
    for (int i = 0; i < n; i++) t += a[i];
    p = t / n;
    for (int i = 0; i < n; i++) if (a[i] > p) m++;
}

int main() {
    float v[8], total, promedio; int mayores;
    llenar(v, 8);
    procesar(v, 8, total, promedio, mayores);
    cout << "Total: " << total << "\nPromedio: " << promedio << "\nMayores al prom: " << mayores << endl;
    return 0;
}
