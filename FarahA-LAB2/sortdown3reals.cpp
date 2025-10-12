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
    int aux;
    if (a0<a1)
    {
        aux=a0;
        a0=a1;
        a1=aux;
    }
    if (a1<a2)
    {
        aux=a1;
        a1=a2;
        a2=aux;
    }
    if (a0<a1)
    {
        aux=a0;
        a0=a1;
        a1=aux;
    }
    cout<<"I numeri inseriti, in ordine decrescente, sono: ";
    cout<<a0<<">"<<a1<<">"<<a2<<">";
}