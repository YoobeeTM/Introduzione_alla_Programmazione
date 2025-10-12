#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Inserisci il valore per la variabile a: ";
    float a;
    cin>> a;
    cout<<"Inserisci il valore per la variabile b: ";
    float b;
    cin>> b;
    cout<<"Inserisci il valore per la variabile c: ";
    float c;
    cin>> c;
    cout<<"\n";
    cout<< "Prima dello scambio: \n";
    cout<<"a = "<<a;
    cout<<"   ";
    cout<<"b = "<<b;
    cout<<"   ";
    cout<<"c = "<<c;
    cout<<"\n";
    float d=a;
    a=b;
    b=c;
    c=d;
    cout<< "Dopo lo scambio verso sinistra: \n";
    cout<<"a = "<<a;
    cout<<"   ";
    cout<<"b = "<<b;
    cout<<"   ";
    cout<<"c = "<<c;
    cout<<"\n";
}