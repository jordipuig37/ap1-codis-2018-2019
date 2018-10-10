
// escriu n vegades el caràcter c
// prec: n >= 0

void repeteix(int n, char c) {
    if (n == 0) {
        // res
    } else {
        repeteix(n - 1, c);
        cout << c;
    }
}

void repeteix(int n, char c) {
    if (n > 0) {
        repeteix(n - 1, c);
        cout << c;
    }
}

void repeteix(int n, char c) {
    if (n > 0) {
        cout << c;
        repeteix(n - 1, c);
    }
}

void repeteix(int n, char c) {
    if (n > 0) {
        repeteix(n/2, c);
        if (n%2 == 1) cout << c;
        repeteix(n/2, c);
    }
}
