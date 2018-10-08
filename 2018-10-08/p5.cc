// Trobar si hi ha un pic més alt que la Pica d'Estats (P90260)
// => Cerca

#include <iostream>
using namespace std;


// definim constants per no tenir valors màgics al mig del codi
// (les constants se solen escriure en MAJÚSCULES)
const int ALCADA_PICA = 3143;
const int ULTIM_ELEMENT = 0;

// les constants poden ser globals (com aquí) o locals
// No us deixem utilitzar variables globals.


bool pic_guapo(int x, int y, int z) {
    return x < y and y > z and y > ALCADA_PICA;
}


int main() {
    bool trobat = false;
    int a, b, c;
    cin >> a >> b >> c;
    while (not trobat and c != ULTIM_ELEMENT) {
        if (pic_guapo(a, b, c)) {
            trobat = true;
        } else {
            a = b;
            b = c;
            cin >> c;
        }
    }
    cout << (trobat ? "SI" : "NO") << endl;
}
