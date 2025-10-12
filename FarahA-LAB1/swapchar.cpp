#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Inserisci il carattere per la variabile a: ";
    char a;
    cin>> a;
    cout<<"Inserisci il carattere per la variabile b: ";
    char b;
    cin>> b;
    cout<<"a = " <<a;
    cout<<"\n";
    cout<<"b = " <<b;
    cout<<"\n";
    char c=a;
    a=b;
    b=c;
    cout<<"Dopo lo swap: \n";
    cout<<"a = " <<a;
    cout<<"\n";
    cout<<"b = " <<b;
}