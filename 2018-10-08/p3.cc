// Retorna el nombre de dígits 3 en la representació decimal de x.
// Precondició: x >= 0.
// => Recorregut

int compta_digits3(int x) {
    int n = 0;
    while (x > 0) {
        if (x%10 == 3) ++n;
        x /= 10;
    }
    return n;
}
