/* Programa que calcula el màxim de dos enters. */

#include <iostream>
using namespace std;

int main() {
    // lectura
    int a, b;
    cin >> a >> b;

    // càlcul
    int m;
    if (a > b) m = a;
    else m = b;

    // escriptura
    cout << m << endl;
}
