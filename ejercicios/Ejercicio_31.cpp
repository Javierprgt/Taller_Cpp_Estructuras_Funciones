#include <iostream>
using namespace std;

int main() {
    int mat[4][4], pos = 0, neg = 0, cero = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Matriz[" << i << "][" << j << "]: "; cin >> mat[i][j];
            if (mat[i][j] > 0) pos++;
            else if (mat[i][j] < 0) neg++;
            else cero++;
        }
    }
    cout << "Positivos: " << pos << "\nNegativos: " << neg << "\nCeros: " << cero << endl;
    return 0;
}
