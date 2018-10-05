/* Direcció dels paràmetres */


// h, m i s són paràmetres d'entrada-i-sortida
void incrementar_un_segon(int& h, int& m, int& s) {
    ++s;
    if (s == 60) {
        s = 0;
        ++m;
        if (m == 60) {
            ++h;
            if (h == 24) {
                h = 0;
            }
        }
    }
}


// h, m i s són paràmetres d'entrada
void escriure_hora(int h, int m, int s) {
    if (h < 10) cout << 0;
    cout << h;
    if (m < 10) cout << 0;
    cout << m;
    if (s < 10) cout << 0;
    cout << s;
    cout << endl;
}


// S és d'entrada, h, m i s són de sortida
void descomposicio_horaria(int S, int& h, int& m, int& s) {
    ...
}


int main1() {
    int hores = 23;
    int minuts = 59;
    int segons = 59;
    escriure_hora(hores, minuts, segons);
    incrementar_un_segon(hores, minuts, segons)
    escriure_hora(hores, minuts, segons);
}


int main2() {
    int segons = 7201;
    int h, m, s;            // no els inicialitzem perquè els calcularà descomposicio_horaria()
    descomposicio_horaria(segons, h, m, s);
    escriure_hora(h, m, s);
}
