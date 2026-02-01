#include <iostream>
using namespace std;

int main() {
    int mat[3][3], total = 0;
    for (int i = 0; i < 3; i++) {
        int filaSuma = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Matriz[" << i << "][" << j << "]: "; cin >> mat[i][j];
            filaSuma += mat[i][j];
            total += mat[i][j];
        }
        cout << "Suma fila " << i << ": " << filaSuma << endl;
    }
    cout << "Suma total: " << total << endl;
    return 0;
}
