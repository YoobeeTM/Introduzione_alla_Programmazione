//Scrivere un programma che verifica se tre numeri reali dati in input possono essere i lati di un triangolo
//cioè se nessuno di essi è maggiore della somma degli altri due.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a, b, c;
    cout<<"Inserisci il primo lato del triangolo: ";
    cin>>a;
    cout<<"\n";
    cout<<"Inserisci il secondo lato del triangolo: ";
    cin>>b;
    cout<<"\n";
    cout<<"Inserisci il terzo lato del triangolo: ";
    cin>>c;
    cout<<"\n";
    if(a>(b+c) || b>(a+c) || c>(b+a))
    {
        cout<<"Non è un triangolo\n";
    }
    else
    {
        cout<<"é un triangolo\n";
    }
    return 0;
}