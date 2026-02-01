#include <iostream>
#include <vector>

using namespace std;

int suma(vector<int> v) {
    int s = 0;
    for (int x : v) s += x;
    return s;
}

void paresImpares(vector<int> v, int& p, int& i) {
    p = 0; i = 0;
    for (int x : v) if (x % 2 == 0) p++; else i++;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int p, i;
    cout << "Suma: " << suma(vec) << endl;
    cout << "Promedio: " << (float)suma(vec) / vec.size() << endl;
    paresImpares(vec, p, i);
    cout << "Pares: " << p << " | Impares: " << i << endl;
    return 0;
}
