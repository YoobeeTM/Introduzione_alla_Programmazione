#include <iostream>
#include <string>

using namespace std;

int get_choice (int max)
{
    int scelta;
    do
    {
        cout<<"Inserisci una scelta fra 1 e "<<max;
        cout<<endl;
        cin>>scelta;
    } while (scelta < 1 || scelta > max);
    return scelta;
}

int main ()
{
    cout<<get_choice(7)<<endl;
}