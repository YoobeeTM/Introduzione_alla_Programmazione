#include <iostream>
#include <string>

using namespace std;

int getLength(int num)
{
    int c=0;
    do
    {
        num=num/10;
        c++;
    } while(num!=0);
    return c;
}

int main()
{
    int num;
    cout<<"Inserisci un numero intero positivo: ";
    cin>>num;
    int cifre=getLength(num);
    cout<<"Il numero è composto da "<<cifre<<" cifre"<<endl;
}