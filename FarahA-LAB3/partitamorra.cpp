#include <iostream>
#include <string>

using namespace std;

char mossa_pc()
{
    srand(time(NULL));
    int m2 = (rand()%3);
    if (m2==0) m2='f';
    if (m2==1) m2='c';
    if (m2==2) m2='s';
    return m2;
}
void partita()
{
    cout<<"----------Partita morra cinese contro il PC----------"<<endl;
    char m1;
    cout<<"Giocatore, inserisci la tua mossa (s, c, f): ";
    cin>>m1;

    char m2=mossa_pc();

    if (m1!='s' && m1!='c' && m1!='f')
        cout<<"Immettere i le lettere corrette!"<<endl;

    if ((m1=='s' && m2=='f') || (m1=='c' && m2=='s') || (m1=='f' && m2=='c'))
    {
        cout<<"Il PC ha scelto la mossa: "<<m2<<endl; 
        cout<<"Ha vinto il Giocatore!"<<endl;
    }
    
    if ((m2=='s' && m1=='f') || (m2=='c' && m1=='s') || (m2=='f' && m1=='c'))
    {
        cout<<"Il PC ha scelto la mossa: "<<m2<<endl; 
        cout<<"Ha vinto il PC!"<<endl;
    }

    if (m1==m2)
    {
        cout<<"Il PC ha scelto la mossa: "<<m2<<endl; 
        cout<<"Pareggio!"<<endl;
    }
}
int main()
{
    partita();
    char choice;
    cout<<"Vuoi fare un altra partita? In caso affermativo inserisci 'S': ";
    cin>>choice;
    while (choice=='s' || choice=='S')
    {
        partita();
        cout<<"Vuoi fare un altra partita? In caso affermativo inserisci 'S': ";
        cin>>choice;
    }
    cout<<"Grazie per aver giocato!"<<endl;
    return 0;
}