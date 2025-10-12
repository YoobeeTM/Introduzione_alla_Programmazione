#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Inserisci il raggio del cerchio: ";
    int r;
    cin>> r;
    const double pi=3.14;
    cout<<"L'area del cerchio vale: "<<pi*r*r;
    cout<<"\n";
    cout<<"La circonferenza del cerchio vale: "<<2*pi*r;
}