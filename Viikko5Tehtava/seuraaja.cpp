#include "seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout<<"Luodaan seuraaja nimelta "<<nimi<<endl;
    //cout<<endl;
}

Seuraaja::~Seuraaja()
{

}

void Seuraaja::paivitys(string viesti)
{
    cout<<"Uusi viesti seuraajalle "<<nimi<<": "<<viesti<<endl;
    //cout<<endl;
}

string Seuraaja::getNimi() const
{
    return nimi;
}
