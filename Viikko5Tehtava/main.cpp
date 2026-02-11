#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

int main()
{
    //Seuraaja A("Aepo");
    //A.paivitys("viestix");
    //Seuraaja B("Bepo");
    //Seuraaja C("Cepo");
    //B.paivitys("moroo");
    //A.next = &B;
    //B.next = &C;


    Seuraaja *D = new Seuraaja("Darmo");
    Seuraaja *E = new Seuraaja ("Ermo");
    Seuraaja *F = new Seuraaja ("Fjormo");

    Notifikaattori *N = new Notifikaattori();
    N->lisaa(D);
    N->lisaa(E);
    N->lisaa(F);
    N->tulosta();
    N->postita("Poistetaan Ermo listalta");
    N->poista(E);
    N->tulosta();
    N->postita("Tekstattu tekstiviesti viestitetty");


    delete D;
    delete E;
    delete F;
    delete N;

    return 0;
}
