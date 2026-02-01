#include <iostream>
using namespace std;

int main() {
    int opc;
    float n1, n2;
    do {
        cout << "\n1) Ingresar numeros\n2) Suma y Resta\n3) Mostrar mayor\n4) Salir\nOpcion: ";
        cin >> opc;
        switch (opc) {
            case 1: cout << "N1: "; cin >> n1; cout << "N2: "; cin >> n2; break;
            case 2: cout << "Suma: " << n1 + n2 << "\nResta: " << n1 - n2 << endl; break;
            case 3: cout << "Mayor: " << (n1 > n2 ? n1 : n2) << endl; break;
        }
    } while (opc != 4);
    return 0;
}
