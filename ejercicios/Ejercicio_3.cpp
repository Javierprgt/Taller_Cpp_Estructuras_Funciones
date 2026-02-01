#include <iostream>

using namespace std;

int main() {
    int contador = 0;
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
        contador++;
    }
    cout << "Total de numeros mostrados: " << contador << endl;
    return 0;
}
