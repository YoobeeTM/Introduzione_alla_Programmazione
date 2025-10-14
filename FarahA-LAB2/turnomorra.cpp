#include <iostream>
#include <string>

using namespace std;

int main()
{
    char m1, m2;
    cout<<"Giocatore 1, inserisci la tua mossa (s, c, f): ";
    cin>>m1;

    cout<<"\nGiocatore 2, inserisci la tua mossa (s, c, f): ";
    cin>>m2;

    if ((m1!='s' && m1!='c' && m1!='f') || (m2!='s' && m2!='c' && m2!='f'))
        cout<<"Immettere i le lettere corrette!"<<endl;

    if ((m1=='s' && m2=='f') || (m1=='c' && m2=='s') || (m1=='f' && m2=='c'))
    {
        cout<<"Ha vinto il Giocatore 1!"<<endl;
    }
    
    else if ((m2=='s' && m1=='f') || (m2=='c' && m1=='s') || (m2=='f' && m1=='c'))
    {
        cout<<"Ha vinto il Giocatore 2!"<<endl;
    }

    else
    {
        cout<<"Pareggio!"<<endl;
    }
    return 0;



}