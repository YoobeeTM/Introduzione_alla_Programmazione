#include <iostream>
#include <string>

using namespace std;
float div (float n)
{
    n/=4.9;
    n/=3.53;
    n/=6.9998;
    return n;
}

float molt (float n)
{
    n*=4.9;
    n*=3.53;
    n*=6.9998;
    return n;
}
int main()
{
    float n, n1;
    cout<<"Inserisci un numero: ";
    cin>>n;
    n1=n;
    div (n);
    molt (n);
    cout<<"Numero inserito: "<<n1;
    cout<<"\nNumero dopo le operazioni: "<<n<<endl;
}