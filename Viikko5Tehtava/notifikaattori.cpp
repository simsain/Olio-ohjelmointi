#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout<<endl;
    cout<<"Luodaan Notifikaattori"<<endl;
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    cout<<endl;
    cout<<"Tulostetaan Seuraajat: "<<endl;
    while (alku != nullptr){
        cout<<"Seuraaja: "<<alku->getNimi()<<endl;
        alku=alku->next;
    }
    cout<<endl;
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        alku->paivitys(viesti);
        alku=alku->next;
    }
}

void Notifikaattori::lisaa(Seuraaja *seur)
{
    cout<<"Notifikaattori lisaa seuraajan : "<<seur->getNimi()<<" listalle"<<endl;
    seur->next = seuraajat;
    seuraajat = seur;
}

void Notifikaattori::poista(Seuraaja *seur)
{
    cout<<"Poistetaan seuraaja "<<seur->getNimi()<<" listalta"<<endl;
        Seuraaja *alku = seuraajat;
        while(alku != nullptr){
            if(alku->next == seur){
                alku->next = seur->next;
            }
            alku=alku->next;
        }


}
