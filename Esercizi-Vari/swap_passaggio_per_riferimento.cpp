#include <iostream>
#include <string>

using namespace std;
void swap (int& x, int& y)
{
    int tmp ;
    tmp=x; x=y; y=tmp;
}

int main ()
{
    int a= 1, b=2;
    cout<<"Prima dello swap\n"<<"a="<<a<<"\nb="<<b<<endl;
    swap (a, b);
    cout<<"Dopo lo swap\n"<<"a="<<a<<"\nb="<<b<<endl;
    return 0;
}