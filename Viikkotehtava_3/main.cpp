#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int game(int maxnum)
{
    std::srand(time(NULL));
    int satunnaisluku=std::rand()%maxnum+1;
    int annettuluku;
    int arvaukset=0;
    bool stayinloop=true;
    while(stayinloop)
    {
        std::cout<<"Anna luku valilta 1 - "<<maxnum<<endl;
        std::cin>>annettuluku;
        arvaukset++;
        while(satunnaisluku != annettuluku)
        {
            if(annettuluku < satunnaisluku){
                std::cout<<"Anna suurempi luku: "<<endl;
            }else{
                std::cout<<"Anna pienempi luku: "<<endl;
            }
            std::cin>>annettuluku;
            arvaukset++;
        }
        std::cout<<"Annoit oikean luvun: "<<annettuluku<<endl;
        stayinloop=false;

    }

    return arvaukset;

}

int main()
{
    int maxnum;
    std::cout<<"Anna pelille maksiminumero: "<<endl;
    std::cin>>maxnum;
    std::cout<<"Peli alkaa!"<<endl;
    int lkm = game(maxnum);
    std::cout<<"Voitit pelin "<<lkm<<" arvauksella"<<endl;

    return 0;
}
