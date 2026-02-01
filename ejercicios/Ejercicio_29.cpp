#include <iostream>
using namespace std;

int main() {
    int opc, num[10], pos, neg, mayor, menor;
    float suma;
    do {
        cout << "\n1) Ingresar 10 numeros\n2) Promedio\n3) Mayor y Menor\n4) Positivos y Negativos\n5) Salir\nOpcion: ";
        cin >> opc;
        if (opc == 1) {
            suma = pos = neg = 0;
            for (int i = 0; i < 10; i++) {
                cout << "Num " << i + 1 << ": "; cin >> num[i];
                suma += num[i];
                if (i == 0) mayor = menor = num[i];
                if (num[i] > mayor) mayor = num[i];
                if (num[i] < menor) menor = num[i];
                if (num[i] > 0) pos++; else if (num[i] < 0) neg++;
            }
        } else if (opc == 2) cout << "Promedio: " << suma / 10 << endl;
        else if (opc == 3) cout << "Mayor: " << mayor << " | Menor: " << menor << endl;
        else if (opc == 4) cout << "Positivos: " << pos << " | Negativos: " << neg << endl;
    } while (opc != 5);
    return 0;
}
