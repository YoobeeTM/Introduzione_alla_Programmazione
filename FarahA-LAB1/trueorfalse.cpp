#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<boolalpha;
    cout<<"tre è maggiore di uno: "<<(3>1);
    cout<<"\n";
    cout<<"quattro diviso due è minore di zero: "<<((4/2)<0);
    cout<<"\n";
    cout<<"il carattere zero è uguale al valore zero: "<<('o'==0);
    cout<<"\n";
    cout<<"dieci mezzi è compreso fra zero escluso e dieci incluso: "<<((10/2)>0 && (10/2)<=10);
    cout<<"\n";
    cout<<"non è vero che tre è maggiore di due e minore di uno: "<<(!(3>2 && 3<1));
    cout<<"\n";
    cout<<"tre minore di meno cinque implica sette maggiore di zero: "<<((3<5)||(7>0));
}