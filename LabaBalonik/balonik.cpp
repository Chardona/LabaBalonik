#include "balonik.h"

balonik::balonik(float wys, float sred, string nowa_nazwa) {
    nazwa = nowa_nazwa;
    srednica = sred;
    wysokosc = wys;
}
float balonik:: zmien_wysokosc(float ile) {
    wysokosc += ile;
    if (wysokosc > 0) {
        return wysokosc;
    }
    else {
        cout << "wysokosc nie moze byc <0";
    }
}
float balonik::zmien_srednice(float ile) {
    if (ile > 0) {
        srednica = ile;
        return srednica;
    }
    else {
        cout << "srednica nie moze byc <0";
    }
}
void balonik::info() {
    cout << "\nTu balonik " << nazwa << " - mam " << srednica << " cm srednicy i jestem na wysokosci " << wysokosc << " m\n";
}
void pompuj(float ile) {
    float d = ile / 2;
    float pole = pow(d, 3);
    float pi = 3.14;
    float srednica = 1.33 * pi * pole;
    cout << "\nJesli pole koła = " << ile << ", ilość powietrza = " << srednica << " cm^3\n";
}