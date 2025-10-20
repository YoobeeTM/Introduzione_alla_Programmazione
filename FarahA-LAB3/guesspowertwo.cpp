#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,N,q;
    cout<<"Inserisci un numero intero: ";
    cin>>n;
    N=n*n;
    cout<<"\nQual'è il quadrato del numero inserito?\nProva ad indovinare: ";
    cin>>q;
    while(q!=N)
    {
        cout<<"Riprova: ";
        cin>>q;
    }
    cout<<"Bravo!"<<endl;
    return 0;
}