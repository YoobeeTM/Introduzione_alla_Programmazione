#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a0;
    int a1;
    int a2;
    cout<<"Il primo numero: ";
    cin>>a0;
    cout<<"Inserisci il secondo numero: ";
    cin>>a1;
    cout<<"Inserisci il terzo numero: ";
    cin>>a2;
    cout<<"\n";
    int aux=a1;
    if (a0>a1)
    {
        a1=a0;
        a0=aux;
        aux=a1;
    }
    else if (a0>a2)
    {
        a0=a1;
        a0=a2;
        a2=aux;
    }
    else
    {
        a1=a2;
        a2=aux;
    }
    cout<<"I numeri inseriti, in ordine crescente, sono: ";
    cout<<a0<<">"<<a1<<">"<<a2<<">";
}