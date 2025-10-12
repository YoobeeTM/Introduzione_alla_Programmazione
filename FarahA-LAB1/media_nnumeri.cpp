#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Inserisci quanti numeri vuoi per calcolarne la media\nPer finire inserisci: -1"<<endl;
    int sentinella=-1, variabile;
    cin>>variabile;
    float somma=0;
    int conta=0;
    while (variabile!=sentinella)
    {
        conta++;
        somma+= variabile;
        cin>>variabile;
    }
    if (conta==0)
        cout<<"La media è: 0";
    else
        cout<<"La media é: "<<somma/conta;
    return 0;
}