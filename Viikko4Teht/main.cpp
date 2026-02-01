#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas A("Aatu", 1000);
    Asiakas B("Beetu", 1000);
    A.luotonNosto(100);
    B.talletus(50);
    B.tiliSiirto(25, A);

    return 0;
}
