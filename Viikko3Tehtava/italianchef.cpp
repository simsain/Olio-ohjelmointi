#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef()
{

}
ItalianChef::ItalianChef(string nimi) : Chef(nimi)
{
    cout<<"ItalianChef konstruktori\n"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef dekonstruktori"<<endl;
}



bool ItalianChef::askSecret(string salasana, int jauho, int vesi)
{
    cout<<"askSecret konstruktori"<<endl;
    if (password.compare(salasana)==0)
    {
        cout<<"Antamasi salasana oikein! Tehdaan pizzaa\n"<<endl;
        flour = jauho;
        water = vesi;
        makepizza();
        return true;
    }
    cout<<"Salasana vaarin! Ei tehda pizzaa\n"<<endl;
    return false;
}

int ItalianChef::makepizza()
{
    cout<<"Makepizza konstruktori"<<endl;
    int pizza_jauho = flour / 5;
    int pizza_vesi = water / 5;
    int pizza = min(pizza_jauho,pizza_vesi);
    cout<<"Jauhoja: "<<flour<<endl;
    cout<<"Vetta: "<<water<<endl;
    cout<<"Cheff "<<chefName<<" tekee "<<pizza<<" kappaletta pizzaa\n"<<endl;
    return pizza;
}

