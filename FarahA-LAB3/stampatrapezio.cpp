#include <iostream>
#include <string>

using namespace std;

int main()
{

    int B,b;
    int altezza;
    cout<<"Inserisci la base maggiore (B): ";
    cin>>B;
    cout<<"\nInserisci la base minore (b): ";
    cin>>b;
    if(b>B)
    {
        cout<<"La base minore deve essere minore o uguale allla base maggiore!";
    }
    if (b==0 || B==0)
    {
        cout<<"I valori devono essere maggiori di zero!";
    }
    altezza= B-b+1;
    for (int i = 0; i < altezza; i++) 
    {
        for (int j = 0; j < b + i; j++) 
        {
            cout << "x";
        }
        cout << endl;
    }
    return 0;
}