
/* Programa per pintar rectangles cutres. */


#include <iostream>
using namespace std;


// Pinta una fila amb c columnes amb el caràcter s.
void pintar_fila(int c, char s) {
    for (int i = 0; i < c; ++i) {
        cout << s;
    }
    cout << endl;
}


// Pinta un rectangle amb f files i c columnes amb el caràcter s.
void pintar_rectangle(int f, int c, char s) {
    for (int i = 0; i < f; ++i) {
        pintar_fila(c, s);
    }
}


int main() {
    int f, c;
    cin >> f >> c;
    char s;
    cin >> s;

    pintar_rectangle(f, c, s);
}
