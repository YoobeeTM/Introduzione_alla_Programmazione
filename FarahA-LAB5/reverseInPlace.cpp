#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    int x;
    cout<<"Inserisci il numero di elementi del vector: ";
    cin>>x;
    vector <int> v(x);
    int n;
    int size = int (v.size());
    //inserisco i numeri nel vector
    for (int i=0; i<size; i++)
    {
        cout<<"Inserisci un numero intero v""("<<i<<")"": ";
        cin>>n;
        v[i]=n;
    }
    for (int i=size-1; i>=0; i--)
    {
        cout<<v[i]<<" ";
    }
    cout << endl;
    return 0;
}