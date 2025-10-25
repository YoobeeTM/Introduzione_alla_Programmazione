#include <iostream>
#include <string>

using namespace std;

double onlineAverage()
{
    float n;
    char choice='y';
    int i=1;
    float somma=0.0;
    for (; choice=='y'; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>n;
        cout<<"\nVuoi inserire un altro numero? (y/n): ";
        cin>>choice;
        while (choice!='y' && choice!='n')
        {
            cout<<"Errore, inserisci una scelta tra y/n: ";
            cin>>choice;
        }
        somma+=n;
    }
    return somma/i;
 }

 int main()
 {
    double m=onlineAverage();

    cout<<"La media è: "<<m<<endl;
    return 0;

 }