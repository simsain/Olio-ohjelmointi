#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef_olio("Mario");
    chef_olio.makeSalad(10);
    chef_olio.makeSoup(20);
    cout<<endl;

    ItalianChef ic_olio("Luigi");
    ic_olio.askSecret("pizza", 29, 520);
    return 0;
}
