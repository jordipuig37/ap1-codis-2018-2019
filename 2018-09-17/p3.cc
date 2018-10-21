/* Programa que determina el mcd de dos naturals no nuls amb l'algorisme d'Euclides */

#include <iostream>
using namespace std;

// Definim una funcio que executi l'algorisme d'euclides rapid
// Prec: a <= b;
int mcd(int a, int b) {
    while (b != 0) {
            int r = a%b;
            a = b;
            b = r;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << mcd(a, b) << endl; // i un endl perque quedi bonic.
}
