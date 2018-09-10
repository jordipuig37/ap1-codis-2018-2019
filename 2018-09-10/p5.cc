/* Programa que calcula factorials. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;      // suposem x ≥ 0

    int f = 1;
    int i = 2;
    while (i <= n) {
        f = f * i;
        i = i + 1;
    }

    cout << f << endl;
}
