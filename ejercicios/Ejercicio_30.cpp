#include <iostream>
using namespace std;

int main() {
    int mat[2][4], mayor, f, c;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Matriz[" << i << "][" << j << "]: "; cin >> mat[i][j];
            if (i == 0 && j == 0) { mayor = mat[i][j]; f = i; c = j; }
            if (mat[i][j] > mayor) { mayor = mat[i][j]; f = i; c = j; }
        }
    }
    cout << "Mayor: " << mayor << " en posicion Fila: " << f << ", Columna: " << c << endl;
    return 0;
}
