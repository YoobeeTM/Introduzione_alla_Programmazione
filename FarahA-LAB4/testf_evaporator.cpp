#include <iostream>
#include <string>

using namespace std;

int evaporator (float l, int percent, float min)
{
    int days;
    int i=0;
    while(l>min)
    {
        l=l-((l*percent)/100);
        i++;
    }
    days=i;
    return days;
}

int main()
{
    float l;
    int percent;
    float min;
    cout<<"Inserisci i litri: ";
    cin>>l;
    cout<<"\nInserisci la percentuale di evaporazione (%): ";
    cin>>percent;
    cout<<"\nInserisci la soglia minima di spegnimento: ";
    cin>>min;
    int giorni=evaporator(l, percent, min);
    cout<<"\nL'evaporatore può funzionare per "<<giorni<<" giorni senza rifornimento"<<endl;
    return 0;
}