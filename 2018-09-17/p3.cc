/* Programa que determina el mcd de dos naturals no nuls amb l'algorisme d'Euclides */

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // suposem n,m ≥ 1

    while (n != m) {
        if (n > m) n -= m;          // ⇔ n = n - m
        else m -= n;                // ⇔ m = m - n
    }

    cout << n << endl;              // o m, perquè són iguals
}
