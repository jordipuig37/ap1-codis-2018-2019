
/* Programa per pintar rectangles cutres. */


#include <iostream>
using namespace std;


// Pinta una fila amb c columnes.
void pintar_fila(int c) {
    for (int i = 0; i < c; ++i) {
        cout << '*';
    }
    cout << endl;
}


// Pinta un rectangle amb f files i c columnes.
void pintar_rectangle(int f, int c) {
    for (int i = 0; i < f; ++i) {
        pintar_fila(c);
    }
}


int main() {
    int f, c;
    cin >> f >> c;

    pintar_rectangle(f, c);
}
