/* Intercanviar dues variables enteres */


#include <iostream>
using namespace std;


// amb variable auxiliar
void swap1(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}


// sense variable auxiliar (solució d'en Víctor)
void swap2(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}


int main() {
    int x = 3;
    int y = 4;
    swap1(x, y);        // o swap2
    cout << x << "," << y << endl;
}


// cas patològic: swap2 no funciona del tot 😭😭😭
int main() {
    int x = 3;
    swap2(x, x);        // amb swap1 va bé però amb swap2 no.
    cout << x << endl;
}
