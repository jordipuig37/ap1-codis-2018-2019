/* Programa que determina si un natural és primer o no. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // suposem n>=0

    bool p = n >= 2;
    int c = 2;
    while (c*c <= n) {
        if (n % c == 0) p = false;
        ++c;
    }

    if (p) cout << "es primer" << endl;
    else cout << "no es primer" << endl;
}
