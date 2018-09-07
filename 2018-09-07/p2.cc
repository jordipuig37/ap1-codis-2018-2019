/* Programa que calcula el màxim i el mínim de dos enters. */

int main() {
    int a, b;
    cin >> a >> b;
    int minim, maxim;
    if (a < b) {
        minim = a;
        maxim = b;
    } else {
        minim = b;
        maxim = a;
    }
    cout << minim << " " << maxim << endl;
}
