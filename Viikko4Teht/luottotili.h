#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"
#include <iostream>
using namespace std;

class Luottotili : public Pankkitili
{
public:
    //Luottotili();
    Luottotili(string o, double lr);
    ~Luottotili();

    virtual bool withdraw(double summa) override;
    virtual bool deposit(double summa) override;

protected:
    double luottoraja = 0;
};

#endif // LUOTTOTILI_H
