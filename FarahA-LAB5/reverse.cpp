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
    vector <int> dest(x);
    int n;
    //inserisco i numeri nel vector
    for (size_t i=0; i<source.size(); i++)
    {
        cout<<"Inserisci un numero intero source""("<<i<<")"": ";
        cin>>n;
        source[i]=n;
    }
    for(size_t i=0; i<source.size(); i++)
    {
        dest[(source.size()-1)-i]=source[i];
    }
    cout << "\nVettore originale (source): ";
    for (size_t i = 0; i < source.size(); i++) {
        cout << source[i] << " ";
    }
    cout << "\nVettore invertito (dest): ";
    for (size_t i = 0; i < dest.size(); i++) {
        cout << dest[i] << " ";
    }

    cout << endl;
    return 0;
}