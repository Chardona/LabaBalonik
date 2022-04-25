#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include "balonik.h"


int main(int argc, char* argv[]) {
    balonik zielony(10, 10, "zielony");
    zielony.info();
    zielony.zmien_srednice(12);
    zielony.zmien_wysokosc(15);
    zielony.info();
    pompuj(5);
    balonik czerwony(15, 13, "czerwony");
    czerwony.info();
    czerwony.zmien_srednice(17);
    czerwony.zmien_wysokosc(21);
    czerwony.info();
    pompuj(7);
    cout << endl; system("pause"); return 0;
}
