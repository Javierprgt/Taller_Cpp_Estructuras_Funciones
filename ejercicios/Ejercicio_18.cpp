#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<double> valores(12);
    double sumaPos = 0, sumaNeg = 0, absTotal = 0;
    for (int i = 0; i < 12; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> valores[i];
        if (valores[i] > 0) sumaPos += valores[i];
        else if (valores[i] < 0) sumaNeg += valores[i];
        absTotal += abs(valores[i]);
    }
    cout << "Suma positivos: " << sumaPos << endl;
    cout << "Suma negativos: " << sumaNeg << endl;
    cout << "Valor absoluto total: " << absTotal << endl;
    return 0;
}
