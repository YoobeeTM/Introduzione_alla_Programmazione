#include <iostream>
#include <string>
using namespace std;
int main()
{
    char a;
    char b;
    cout<<"Inserisci il primo carattere: ";
    cin>>a;
    cout<<"Inserisci il secondo carattere: ";
    cin>>b;
    cout<<"\n";
    if (a==b)
        cout<<"Uguali";
    else
        cout<<"Diversi";
return 0;
}