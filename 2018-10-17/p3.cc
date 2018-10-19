/* Escalat d'un vector per un coeficient. */

#include <iostream>
#include <vector>
using namespace std;


// escriu el vector v separant els seus elements per espais i posant un endl al final
void escriu(const vector<double>& v) {
    bool primer = true;
    for (double x : v) {
        if (primer) primer = false; else cout << ' ';
        cout << x;
    }
    cout << endl;
}

// escala un vector v per un coeficient c
void escala(vector<double>& v, double c) {
    for (double& x : v) {       // iterar elements per referència
        x *= c;
    }
}

int main() {
    vector<double> v = {3.4, 4.5, 8.8, 2.4, 5.5};
    escriu(v);
    escala(v, 2.0);
    escriu(v);
}
