#include "pankkitili.h"

/*Pankkitili::Pankkitili()
{

}*/

Pankkitili::Pankkitili(string o)
{
    omistaja = o;
    cout<<"Pankkitili luotu omistajalle "<<omistaja<<endl;
}
Pankkitili::~Pankkitili()
{

}

bool Pankkitili::withdraw(double summa)
{

    if(summa<0){
        cout<<"Kayttajan "<<omistaja<<" nosto summalla "<<summa<<" rahaa epaonnistunut"<<endl;
        return false;
    }else if(summa>saldo)
    {
        cout<<"liian suuri summa, ei voi nostaa"<<endl;
        return false;
    }else
    {
        cout<<"Kayttajan "<<omistaja<<" Nosto: "<<summa<<" rahaa onnistunut"<<endl;
        saldo = saldo - summa;
        return true;
    }
}

bool Pankkitili::deposit(double summa)
{
    if(summa<0){
        cout<<"Kayttajan "<<omistaja<<" talletus summalla "<<summa<<" epaonnistunut"<<endl;
        return false;
    }else{
        cout<<"Kayttajan "<<omistaja<<" Pankkitilille laitettu "<<summa<<" rahaa"<<endl;
        saldo = saldo+summa;
        return saldo;
    }
}



double Pankkitili::getBalance()
{
    //cout<<"Tililla "<<saldo<<" rahaa saldoa"<<endl;
    return saldo;
}
