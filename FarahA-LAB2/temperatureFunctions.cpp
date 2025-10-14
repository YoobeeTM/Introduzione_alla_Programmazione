#include <iostream>
#include <string>

using namespace std;

int leggiTemperatura()
{
    int t;
    cout<<"Inserisci la temperatura: ";
    cin>>t;
    return t;
}

string descriviTemperatura(int t)
{
    string messaggio;
     if (t>=-20 && t<=0)
        messaggio="Freddo incredibile";
    else if (t>=1 && t<=15)
        messaggio="Freddo";
    else if (t>=16 && t<=23)
        messaggio="Normale";
    else if (t>=24 && t<=30)
        messaggio="Caldo";
    else if (t>=31 && t<=40)
        messaggio="Caldo da morire";
    else
        messaggio="Non ci credo, il termometro deve essere rotto";
    return messaggio;
}

void stampaRisultato(string messaggio)
{
    cout<<messaggio<<endl;
}

int main() 
{
int t = leggiTemperatura();
string messaggio = descriviTemperatura(t);
stampaRisultato(messaggio);
return 0;
}