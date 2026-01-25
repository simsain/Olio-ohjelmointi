#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>

using namespace std;


class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();

    bool askSecret(string, int, int);

private:
    string password = "pizza";
    int flour;
    int water;
    int makepizza();
};

#endif // ITALIANCHEF_H
