#include "game.h"
#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;

Game::Game(int)
{
    cout<<"-- ** Game konstruktori ** --"<<endl;
    cout<<"Anna pelille nollaa suurempi maksiminumero: ";
    cin>>maxNumber;
    cout<<"Pelin maksiminumero: "<<maxNumber<<endl;
}

Game::~Game()
{
    cout<<"\n-- ** Game destruktori ** --"<<endl;
}


void Game::play()
{
    cout<<"\n-- ** Game play konstruktori ** --"<<endl;
    srand(time(NULL));
    //cout<<"maxnumber: "<<maxNumber<<endl;
    int randomNumber = (rand() % maxNumber) + 1;
    numOfGuesses=0;
    playerGuess=0;
    cout<<"numOfGuesses: "<<numOfGuesses<<", playerGuess: "<<playerGuess<<", randomNumber: "<<randomNumber<<endl;
    bool stayInLoop=true;
    while(stayInLoop)
    {
        cout<<"Anna numero valilta 1 - "<<maxNumber<<": ";
        cin>>playerGuess;
        numOfGuesses++;
        if(playerGuess==randomNumber){
            cout<<"Annoit oikean luvun: "<<playerGuess<<endl;
            stayInLoop=false;
        }else if(playerGuess<randomNumber){
            cout<<"Arvauksesi oli liian pieni\n";
        }else{
            cout<<"Arvauksesi oli liian suuri\n";
        }
    }
    printGameResult();
}



void Game::printGameResult()
{
    cout<<"\nVoitit pelin arvaamalla "<<playerGuess<<" Arvauksiesi lukumaara oli: "<<numOfGuesses<<endl;
}

