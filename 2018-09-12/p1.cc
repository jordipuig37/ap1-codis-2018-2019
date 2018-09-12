/* Programa que calcula el màxim de 5 enters. */

#include <iostream>
using namespace std;

int main() {
    int max;
    cin >> max;
    int i = 2;
    while (i <= 5) {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
        }
        i = i + 1;
    }
    cout << max << endl;
}
