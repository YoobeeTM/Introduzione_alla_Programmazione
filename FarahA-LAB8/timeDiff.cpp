#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Time
{
    unsigned int h, m, s;
};

int main ()
{
    Time T1, T2;

    cout<<"Inserisci il primo orario (ore minuti secondi): ";
    cin>>T1.h>>T1.m>>T1.s;
    if (T1.h>=24 || T1.m>=60 || T1.s>=60)
    {
        cout<<"Inserire un orario sensato!";
        return 0;
    }

    cout<<"Inserisci il secondo orario (ore minuti secondi): ";
    cin>>T2.h>>T2.m>>T2.s;
    if (T2.h>=24 || T2.m>=60 || T2.s>=60)
    {
        cout<<"Inserire un orario sensato!";
        return 0;
    }

    if (T2.h<T1.h && T2.m<T1.m && T2.s<T1.s)
    {
        cout<<"Il primo orario dev'essere minore o uguale al secondo!";
        return 0;4
    }


}