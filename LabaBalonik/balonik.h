#ifndef BALONIK_H
#define BALONIK_H

#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class balonik
{
private:
    float wysokosc;
    float srednica;
    string nazwa;

public:
    balonik(float wys, float sred, string nowa_nazwa);

    float zmien_wysokosc(float ile);

    float zmien_srednice(float ile);

    void info();
};
void pompuj(float ile);
#endif