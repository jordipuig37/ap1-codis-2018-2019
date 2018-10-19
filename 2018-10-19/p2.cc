/* Revessar un vector. */

#include <iostream>         // pel cin/cout
#include <vector>           // pels vectors
#include <algorithm>        // pel swap
using namespace std;


// revessa el vector v
void revessa(vector<int>& v) {
    int esq = 0;
    int dre = v.size() - 1;
    while (esq < dre) {
        swap(v[esq], v[dre]);
        ++esq;
        --dre;
    }
}


int main() {
    vector<int> v = {2, 5, 7, 2, 5, 8, 5};
    for (int x : v) cout << x;
    cout << endl;
    revessa(v);
    for (int x : v) cout << x;
    cout << endl;
}


