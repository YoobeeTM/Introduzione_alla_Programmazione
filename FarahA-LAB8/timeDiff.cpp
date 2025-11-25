#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Time
{
    unsigned int h, m, s;
};

int toSeconds(Time t)
{
    return t.h*3600 + t.m*60 + t.s;
}

Time diffTime(Time t1, Time t2) {
    Time diff;

    // Convertiamo tutto in secondi
    int s1 = t1.h*3600 + t1.m*60 + t1.s;
    int s2 = t2.h*3600 + t2.m*60 + t2.s;

    int delta = s2 - s1;

    // Riconvertiamo in ore, minuti, secondi
    diff.h = delta / 3600;
    delta %= 3600;

    diff.m = delta / 60;
    diff.s = delta % 60;

    return diff;
}
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
        cout<<"Inserire un orario sensato!"<<endl;
        return 0;
    }

    if (toSeconds(T2) < toSeconds(T1))
    {
        cout<<"Il primo orario dev'essere minore o uguale al secondo!"<<endl;
        return 0;
    }

    
    cout<<"La differenza è di "<<diffTime(T1, T2).h<<" ore "<<diffTime(T1, T2).m<<" minuti "<<diffTime(T1, T2).s<<" secondi."<<endl;

    return 0;
}