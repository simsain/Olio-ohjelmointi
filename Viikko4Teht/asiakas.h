#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "pankkitili.h"
#include "luottotili.h"
#include <iostream>

using namespace std;

class Asiakas
{
public:
    //Asiakas();
    Asiakas(string o, double lr);
    ~Asiakas();

    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);

    void showSaldo();
    string getNimi() const;

    bool tiliSiirto(double, Asiakas &viittaus);
private:
    Pankkitili kayttotili;
    Luottotili luottotili;
    string nimi;
};

#endif // ASIAKAS_H
