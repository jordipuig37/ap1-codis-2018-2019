/* Funcions per a mínim i mitjana d'un vector de reals no buit. */

#include <iostream>
#include <vector>
using namespace std;


// retorna l'element més petit d'un vector v
// prec: v no està buit
double minim(const vector<double>& v) {
    double m = v[0];
    for (double x : v) {
        if (x < m) {
            m = x;
        }
    }
    return m;
}

// retorna la mitjana d'un vector v
// prec: v no està buit
double mitjana(const vector<double>& v) {
    double s = 0;
    for (double x : v) {
        s += x;
    }
    return s / v.size();
}


int main() {
    vector<double> v = {3.4, 4.5, 8.8, 2.4, 5.5};
    cout << minim(v) << endl;
    cout << mitjana(v) << endl;
}
