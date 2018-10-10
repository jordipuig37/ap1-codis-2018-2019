// escriu el número n en base b (del dret)
// prec: n ≥ 0, b ≥ 2 i b ≤ 10

void escriure_en_base(int n, int b) {
    if (n < b) {
        cout << n;
    } else {
        escriure_en_base(n/b, b);
        cout << n%b;
    }
}

void escriure_en_base(int n, int b) {
    if (n >= b) escriure_en_base(n/b, b);
    cout << n%b;
}
