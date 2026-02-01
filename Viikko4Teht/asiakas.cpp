#include "asiakas.h"

//Asiakas::Asiakas() {}

Asiakas::Asiakas(string o, double lr)
    : kayttotili(o),luottotili(o,lr)
{
    nimi=o;
}

Asiakas::~Asiakas()
{

}

bool Asiakas::talletus(double summa)
{
    bool onnistuu = kayttotili.deposit(summa);
    if(onnistuu==false){
        cout<<"talletus summalla "<<summa<<" epaonnistunut"<<endl;
    }
    return onnistuu;
}

bool Asiakas::nosto(double summa)
{
    bool onnistuu = kayttotili.withdraw(summa);
    if(onnistuu ==false){
        cout<<"nosto summalla "<<summa<<" epaonnistunut"<<endl;
    }
    return onnistuu;
}

bool Asiakas::luotonMaksu(double summa)
{
    bool onnistuu = luottotili.deposit(summa);
    if(onnistuu ==false){
        cout<<"Talletus luottotilille epaonnistunut"<<endl;
    }
    return onnistuu;
}

bool Asiakas::luotonNosto(double summa)
{
    bool onnistuu = luottotili.withdraw(summa);
    if(onnistuu==false){
        cout<<"Nosto luottotililta epaonnistunut"<<endl;
    }
    return onnistuu;
}

void Asiakas::showSaldo()
{
    cout<<"Pankkitilin saldo "<<kayttotili.getBalance()<<" rahaa"<<endl;
    cout<<"Luottotilin saldo "<<luottotili.getBalance()<<" rahaa"<<endl;
}

string Asiakas::getNimi() const
{
    return nimi;
}


bool Asiakas::tiliSiirto(double summa, Asiakas &viittaus)                   //nosto,onnistuko,siirto
{
    bool onnistuu = nosto(summa);
    if(onnistuu==true){
        viittaus.talletus(summa);
        cout<<"Tilisiirto "<<summa<<" rahalla tehty kayttajan "<<viittaus.getNimi()<<" tilille"<<endl;
        return true;
    }
    cout<<"Tilisiirto epaonnistunut"<<endl;
    return false;

}
