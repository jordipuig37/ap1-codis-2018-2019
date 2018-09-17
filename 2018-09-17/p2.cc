/* Programa que determina el mcd de dos naturals no nuls */

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // suposem n,m ≥ 1

    int d = n < m ? n : m;
    while (n % d != 0 or m % d != 0) {
        --d;
    }

    cout << d << endl;
}
