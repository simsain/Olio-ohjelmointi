#include "luottotili.h"

//Luottotili::Luottotili() {}


Luottotili::Luottotili(string o, double lr) : Pankkitili (o)
{
    luottoraja = -1 * lr;
    cout<<"Luottili luotu "<<omistaja<<" omistajalle, luottoraja "<<luottoraja<<" rahaa"<<endl;
}

Luottotili::~Luottotili()
{

}

bool Luottotili::withdraw(double summa)
{
    if(summa<0){
        cout<<"Kayttajan "<<omistaja<<" luottotilin nosto summalla "<<summa<<" epaonnistunut"<<endl;
        return false;
    }else if(saldo-summa < luottoraja){
        cout<<"Kayttajan "<<omistaja<<" luottotilin nosto summalla "<<summa<<" ylittaa luottorajan, nosto epaonnistunut"<<endl;
        return false;
    }else{
        cout<<"Kayttajan "<<omistaja<<" luottotilin nosto summalla "<<summa<<" onnistunut"<<endl;
        saldo=saldo-summa;
        //cout<<"Luottotilin saldo "<<saldo<<" rahaa"<<endl;
        return true;
    }
}



bool Luottotili::deposit(double summa)
{
    if(summa<0){
        cout<<"Kayttajan "<<omistaja<<" luottotilille talletus summalla "<<summa<<" rahaa epaonnistunut"<<endl;
        return false;
    }else{
        cout<<"Kayttajan "<<omistaja<<" luottotilille talletus summalla "<<summa<<" rahaa onnistunut"<<endl;
        saldo=saldo+summa;
        //cout<<"Luottotilin saldo "<<saldo<<" rahaa"<<endl;
        return true;
    }
}
