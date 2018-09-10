/* Programa que escriu les taules de multiplicar. */

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i <= 10) {

        int j = 0;
        while (j <= 10) {
            cout << i << " × " << j << " = " << i*j << endl;
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }
}
