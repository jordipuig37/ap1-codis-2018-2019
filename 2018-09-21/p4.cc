
/* Programa per pintar triangles cutres. */


#include <iostream>
using namespace std;


// Pinta una fila amb c columnes amb el caràcter s.
void pintar_fila(int c, char s) {
    for (int i = 0; i < c; ++i) {
        cout << s;
    }
    cout << endl;
}


// Pinta un triangle  d'alçada a amb el caràcter s.
void pintar_rectangle(int a, char s) {
    for (int i = 1; i <= a; ++i) {
        pintar_fila(i, s);
    }
}


int main() {
    int a;
    char s;
    cin >> a >> s;

    pintar_rectangle(a, s);
}
