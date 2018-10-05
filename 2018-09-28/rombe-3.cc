#include <iostream>
using namespace std;


// escriu n cops el caràcter c
void repeteix(int n, char c) {
    for (int i = 0; i < n; ++i) {
        cout << c;
    }
}


// pinta una fila d'un rombe de mida n amb i asteríscos
void pinta_fila(int n, int i) {
    repeteix(n - i - 1, ' ');
    repeteix(i*2 + 1, '*');
    cout << endl;
}


// pinta el triangle superior d'un rombe de mida n
void triangle_superior(int n) {
    for (int i = 0; i < n; ++i) {
        pinta_fila(n, i);
    }
}


// pinta el triangle inferior d'un rombe de mida n
void triangle_inferior(int n) {
    for (int i = n - 2; i >= 0; --i) {
        pinta_fila(n, i);
    }
}


// pinta un rombe de mida n
void pinta_rombe(int n) {
    triangle_superior(n);
    triangle_inferior(n);
}


int main() {
    int n;
    cin >> n;
    pinta_rombe(n);
}
