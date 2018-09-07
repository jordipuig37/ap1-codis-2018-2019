/* Programa que calcula el màxim de dos enters. */

#include <iostream>
using namespace std;

int main() {
    int a, b;               // Declaració de les variables d'entrada
    cin >> a >> b;          // Lectura de les dades d'entrada
    int m;                  // Declaració de la variable de sortida
    if (a > b) {            // Càlcul del resultat
        m = a;
    } else {
        m = b;
    }
    cout << m << endl;      // Escriptura de la dada de sortida
}
