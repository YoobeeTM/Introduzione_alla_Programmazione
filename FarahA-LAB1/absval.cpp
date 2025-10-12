#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout<<"Inserisci un numero: ";
    cin>>n;
    if (n<0)
    {
        int n1=n-2*n;
        cout<<"Il valore assoluto é: "<<n1;
    }
    else
    {
        cout<<"Il valore assoluto é: "<<n;
    }
    return 0;
}