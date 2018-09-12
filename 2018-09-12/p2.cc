/* Programa que calcula el màxim de n enters, on n es dóna al començament. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max;
    cin >> max;
    int i = 2;
    while (i <= n) {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
        }
        i = i + 1;
    }
    cout << max << endl;
}
