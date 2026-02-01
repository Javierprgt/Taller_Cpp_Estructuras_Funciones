#include <iostream>

using namespace std;

int main() {
    int num, dentro = 0, fuera = 0;
    for (int i = 1; i <= 15; i++) {
        cout << "Ingrese numero " << i << ": ";
        cin >> num;
        if (num >= 20 && num <= 80) {
            dentro++;
        } else {
            fuera++;
        }
    }
    cout << "Dentro del rango (20-80): " << dentro << endl;
    cout << "Fuera del rango: " << fuera << endl;
    return 0;
}
