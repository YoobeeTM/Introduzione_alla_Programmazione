#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k;
    cout<<"Inserire un valore intero positivo: ";
    cin>>k;
    int n=k;
    if (k<0)
    {
        cout<<"Valore non valido!"<<endl;
        return 66;
    }
    int inv=0;
    while (k>0)
    {
        int mod=k%10;
        k=k/10;
        inv=inv*10;
        inv=inv+mod;
    }
    if(n==inv)
    {
        cout<<"Il numero è palindromo!"<<endl;
    }
    else 
    {
        cout<<"Il numero NON è palindromo"<<endl;
    }
    return 0;
}