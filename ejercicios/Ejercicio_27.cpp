#include <iostream>
using namespace std;

int main() {
    int opc, num;
    do {
        cout << "\n1) Ingresar numero\n2) Rango (1-100)\n3) Par o Impar\n4) Salir\nOpcion: ";
        cin >> opc;
        switch (opc) {
            case 1: cout << "Numero: "; cin >> num; break;
            case 2: cout << (num >= 1 && num <= 100 ? "En rango" : "Fuera de rango") << endl; break;
            case 3: cout << (num % 2 == 0 ? "Par" : "Impar") << endl; break;
        }
    } while (opc != 4);
    return 0;
}
