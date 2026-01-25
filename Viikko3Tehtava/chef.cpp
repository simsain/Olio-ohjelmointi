#include "chef.h"

Chef::Chef()
{

}

Chef::~Chef()
{
    cout<<"Chef dekonstruktori"<<endl;
}
Chef::Chef(string nimi)
{
    cout<<"Chef konstruktori"<<endl;
    chefName = nimi;
    cout<<"Chefin nimi: "<<nimi<<"\n"<<endl;
}
int Chef::makeSalad(int aines)
{
    cout<<"MakeSalad konstruktori"<<endl;
    int annos = aines / 5;
    cout<<aines<<" kappaleella salaattiaineksia "<<chefName<<" tekee "<<annos<<" kappaletta salaattiannoksia\n"<<endl;
    return annos;
}
int Chef::makeSoup(int aines)
{
    cout<<"MakeSoup konstruktori"<<endl;
    int annos = aines / 3;
    cout<<aines<<" kappaleella keittoaineksia "<<chefName<<" tekee "<<annos<<" kappaletta keittoannoksia\n"<<endl;
    return annos;
}
string Chef::getName()
{
    return chefName;
}
