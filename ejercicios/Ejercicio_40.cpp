#include <iostream>

using namespace std;

int obtenerMayor(int arr[], int n) {
    int mayor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mayor) mayor = arr[i];
    }
    return mayor;
}

int obtenerMenor(int arr[], int n) {
    int menor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < menor) menor = arr[i];
    }
    return menor;
}

void contarTipos(int arr[], int n, int& pos, int& neg, int& ceros) {
    pos = 0; neg = 0; ceros = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else ceros++;
    }
}

int main() {
    int numeros[10];
    int p, n, c;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    contarTipos(numeros, 10, p, n, c);

    cout << "\nValor mayor: " << obtenerMayor(numeros, 10) << endl;
    cout << "Valor menor: " << obtenerMenor(numeros, 10) << endl;
    cout << "Positivos: " << p << endl;
    cout << "Negativos: " << n << endl;
    cout << "Ceros: " << c << endl;

    return 0;
}
