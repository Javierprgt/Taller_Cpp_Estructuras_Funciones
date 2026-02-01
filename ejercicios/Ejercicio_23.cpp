#include <iostream>
using namespace std;

int main() {
    float precios[10];
    float subtotal = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Precio " << i + 1 << ": ";
        cin >> precios[i];
        subtotal += precios[i];
    }
    float iva = subtotal * 0.12;
    float total = subtotal + iva;
    cout << "Subtotal: " << subtotal << endl;
    cout << "IVA (12%): " << iva << endl;
    cout << "Total a pagar: " << total << endl;
    return 0;
}
