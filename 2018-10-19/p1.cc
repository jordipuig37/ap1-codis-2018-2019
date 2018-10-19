/* Dir si un text és palíndrom */

#include <iostream>
#include <string>
using namespace std;


// indica si s és un palíndrom
bool palindrom(const string& s) {
    int esq = 0;
    int dre = s.size() - 1;
    while (esq < dre) {
        if (s[esq] != s[dre]) {
            return false;
        }
        ++esq;
        --dre;
    }
    return true;
}


int main() {
    string s;
    cin >> s;
    cout << palindrom(s) << endl;
}
