#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=0;
    int k;
    cout<<"Inserisci un numero intero strettamente positivo: ";
    cin>>k;
    if (k<=0) 
        cout<<"Il numero inserito NON e' valido";
    else if (k>=1 && k<=9) 
        cout<<"Il numero inserito e' composto da 1 cifra";
    else
    {
        while (k!=0)
        {
            k=k/10;
            i++;
        }
        cout<<"Il numero inserito e' composto da "<<i<<" cifre";
    }
    return 0;
}