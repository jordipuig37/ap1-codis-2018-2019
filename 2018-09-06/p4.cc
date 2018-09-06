/* Descomposició horària. */

#include <iostream>
using namespace std;

int main() {
    // Lectura de l'entrada
    int n;
    cin >> n;

    // Càlcul del resultat
    int h = n/3600;
    int m = (n%3600)/60;
    int s = n%60;

    // Escriptura de la sortida
    cout << h << " hores" << endl;
    cout << m << " minuts" << endl;
    cout << s << " segons" << endl;
}
