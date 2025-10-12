#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Inserisci quante ore: ";
    int h;
    cin>> h;
    if (h<0 || h>23)
        cout<<"Il valore dev'essere compreso fra 0 e 23";
    else
        cout<<"Inserisci quanti minuti: ";
        int m;
        cin>> m;
        if (h<0 || h>59)
            cout<<"Il valore dev'essere compreso fra 0 e 59";
        else
            cout<<"Il tempo inserito equivale a: "<<h*60+m<<" minuti";
}