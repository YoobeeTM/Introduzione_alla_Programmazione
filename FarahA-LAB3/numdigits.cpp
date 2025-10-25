#include <iostream>
#include <string>

using namespace std;

int main()
 {
    int k;
    cout<<"Inserisci un numero intero positivo: ";
    cin>>k;
    if (k<0)
    {
        cout<<"Inserisci un valore positivo!"<<endl;
    }
    else if (k<=9)
    {
        cout<<"Il numero è composto da 1 cifra"<<endl;
    }
    else if (k>9)
    {
        int c=0;
        do
        {
            k=k/10;
            c++;
        } while(k!=0);
        cout<<"Il numero è composto da "<<c<<" cifre"<<endl;
    }
    return 0;
 }