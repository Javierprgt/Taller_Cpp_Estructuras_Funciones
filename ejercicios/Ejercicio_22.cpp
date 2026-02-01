#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> valores(15);
    int m3 = 0, m5 = 0, mAmbos = 0;
    for (int i = 0; i < 15; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> valores[i];
        if (valores[i] % 3 == 0 && valores[i] % 5 == 0) mAmbos++;
        if (valores[i] % 3 == 0) m3++;
        if (valores[i] % 5 == 0) m5++;
    }
    cout << "Multiplos de 3: " << m3 << endl;
    cout << "Multiplos de 5: " << m5 << endl;
    cout << "Multiplos de ambos: " << mAmbos << endl;
    return 0;
}
