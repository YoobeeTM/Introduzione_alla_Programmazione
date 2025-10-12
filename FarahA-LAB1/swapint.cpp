#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Inserisci il valore per la variabile a: ";
    int a;
    cin>> a;
    cout<<"Inserisci il valore per la variabile b: ";
    int b;
    cin>> b;
    cout<<"a vale:" <<a;
    cout<<"\n";
    cout<<"b vale:" <<b;
    cout<<"\n";
    int c=a;
    a=b;
    b=c;
    cout<<"Dopo lo swap: \n";
    cout<<"a vale:" <<a;
    cout<<"\n";
    cout<<"b vale:" <<b;
}