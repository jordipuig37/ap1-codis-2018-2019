#include <iostream>
using namespace std;

// retorna el màxim comú divisor de dos naturals a i b
// prec: no a = b = 0

int mcd(int a, int b) {
    if (b == 0) return a;
    else return mcd(b, a%b);
}


int main() {
    int a, b;
    cin >> a >> b;
    cout << mcd(a, b) << endl;
}
