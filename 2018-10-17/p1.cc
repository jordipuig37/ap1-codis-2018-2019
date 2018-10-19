/* Donada una seqüència d'enters no buida, comptar quants cops apareix el seu darrer element. */

#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> v;

    // llegir les dades en un vector
    int x;
    while (cin >> x) {
        v.push_back(x);
    }

    // comptar les ocurrències del darrer element
    int ocu = 0;
    int darrer = v[v.size() - 1];
    for (int x : v) {
        if (x == darrer) {
            ++ocu;
        }
    }

    // escriure el resultat
    cout << ocu << endl;
}
