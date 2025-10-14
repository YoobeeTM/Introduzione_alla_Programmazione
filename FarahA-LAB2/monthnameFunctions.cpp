#include <iostream>
#include <string>

using namespace std;

int leggiMese()
{
    int mese;
    cout<<"Inserisci un numero compreso fra 1 e 12: ";
    cin>>mese;
    return mese;
}

string nomeMese(int mese)
{
    string nomeMese;
    switch (mese)
    {
        case 1 :
        {
            nomeMese="Gennaio";
            break;
        }
        case 2 :
        {
            nomeMese="Febbraio";
            break;
        }
        case 3 :
        {
            nomeMese="Marzo";
            break;
        }
        case 4 :
        {
            nomeMese="Aprile";
            break;
        }
        case 5 :
        {
            nomeMese="Maggio";
            break;
        }
        case 6 :
        {
            nomeMese="Giugno";
            break;
        }
        case 7 :
        {
            nomeMese="Luglio";
            break;
        }
        case 8 :
        {
            nomeMese="Agosto";
            break;
        }
        case 9 :
        {
            nomeMese="Settembre";
            break;
        }
        case 10 :
        {
            nomeMese="Ottobre";
            break;
        }
        case 11 :
        {
            nomeMese="Novembre";
            break;
        }
        case 12 :
        {
            nomeMese="Dicembre";
            break;
        }
        default :
        {
            nomeMese="Mese NON valido!";
            break;
        }
    }
    return nomeMese;
}

void stampaRisultato(string risultato)
{
    cout<<risultato<<endl;
}

int main() 
{
int mese = leggiMese();
string risultato = nomeMese(mese);
stampaRisultato(risultato);
return 0;
}
