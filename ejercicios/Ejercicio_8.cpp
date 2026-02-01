#include <iostream>

using namespace std;

int main() {
    int num, pos = 0, neg = 0, cero = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese numero " << i << ": ";
        cin >> num;
        if (num > 0) pos++;
        else if (num < 0) neg++;
        else cero++;
    }
    cout << "Positivos: " << pos << endl;
    cout << "Negativos: " << neg << endl;
    cout << "Ceros: " << cero << endl;
    return 0;
}
