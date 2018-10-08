// Indica si el dígit 3 és a la representació decimal de x.
// Precondició: x >= 0.
// => Cerca

bool hi_ha_digit3(int x) {
    bool trobat = true;
    while (not trobat and x > 0) {
        if (x%10 == 3) trobat = true;
        else x /= 10;
    }
    return trobat;
}


// Aquí, millor sense el boolèa!
// (aprofitem que en una funció tenim el return directe):

bool hi_ha_digit3(int x) {
    while (x > 0) {
        if (x%10 == 3) return true;
        x /= 10;
    }
    return false;
}
