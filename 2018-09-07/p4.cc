/* Programa d'en José que calcula el màxim de tres enters. */

#include <iostream>
using namespace std;

int main() {
    // lectura
    int a, b, c;
    cin >> a >> b >> c;

    // càlcul
    int m;
    if (a > b) {
        if (a > c) {
            m = a;
        } else {
            m = c;
        }
    } else if (b > c) {
        m = b;
    } else {
        m = c;
    }

    // sortida
    cout << "El màxim de " << a << ", " << b << " i " << c << " es " << m << endl;
}
