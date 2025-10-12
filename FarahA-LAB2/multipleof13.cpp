#include <iostream>
#include <string>

using namespace std;

bool div_13(int n)
{
    return n % 13 == 0;
} 

int main()
{
    int n;
    cout<<"Inserisci il numero: ";
    cin>>n;
    bool is_div = div_13(n);

    if (is_div)
    {
        cout<<"Il numero é divisibile per 13"<<endl;
    }
    else
    {
        cout<<"Il numero non è divisibile per 13"<<endl;
    }
    
    return 0; 

}
