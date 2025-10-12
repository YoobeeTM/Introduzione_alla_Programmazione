#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Inserisci l'altezza del rettangolo: ";
    float h;
    cin>> h;
    cout<<"Inserisci la base del rettangolo: ";
    float b;
    cin>> b;
    cout<<"L'area vale: "<<b*h;
    cout<<"\n";
    cout<<"Il perimetro vale: "<<2*b+2*h;
}