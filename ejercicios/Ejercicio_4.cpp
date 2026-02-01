#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    for (int i = 2; i <= 20; i += 2) {
        cout << i << endl;
        suma += i;
    }
    cout << "La suma de los numeros pares es: " << suma << endl;
    return 0;
}
