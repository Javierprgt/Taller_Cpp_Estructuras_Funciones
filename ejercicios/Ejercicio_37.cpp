#include <iostream>
#include <vector>

using namespace std;

void llenar(vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        int val; cout << "Valor " << i + 1 << ": "; cin >> val;
        v.push_back(val);
    }
}

void calcular(vector<int>& v, int& s, float& p, int& ma, int& me) {
    s = 0; ma = v[0]; me = v[0];
    for (int x : v) {
        s += x;
        if (x > ma) ma = x;
        if (x < me) me = x;
    }
    p = (float)s / v.size();
}

int main() {
    vector<int> vec;
    int n, suma, mayor, menor; float prom;
    cout << "N: "; cin >> n;
    llenar(vec, n);
    calcular(vec, suma, prom, mayor, menor);
    cout << "Suma: " << suma << "\nProm: " << prom << "\nMax: " << mayor << "\nMin: " << menor << endl;
    return 0;
}
