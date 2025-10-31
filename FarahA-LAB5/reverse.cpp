#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    int x;
    cout<<"Inserisci il numero di elementi del vector: ";
    cin>>x;
    vector <int> source(x);
    int n;
    //inserisco i numeri nel vector
    for (size_t i=0; i<source.size(); i++)
    {
        cout<<"Inserisci un numero intero v""("<<i<<")"": ";
        cin>>n;
        source[i]=n;
    }
    vector <int> dest(source)
}