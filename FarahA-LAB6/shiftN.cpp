#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    const int D = 5;
    vector<int> v(D);

    srand(time(NULL));
    for (int i = 0; i < D; i++) 
    {
        int x = (rand() % 20);
        v[i]=x;
    }

    //stampa prima della traslazione
    cout << "[ ";
    for (int i = 0; i < D; i++) 
    {
        cout << v[i] << " ";
    }
    cout << "] "<<endl;

    //inserimento n traslazioni
    cout<<"Inserisci il numero di traslazioni"<<endl;
    cout<<"Numero negativo (traslazione a sinistra) o numero positivo (traslazione verso destra): ";
    int n;
    cin>>n;

    // Traslazione verso sinistra n<0
    if (n<0)
    {
        for(int i=0; i<abs(n); i++)
        {
            for (int j = 0; j < D - 1; j++) 
            {
                v[j] = v[j + 1];
            }
            v[D - 1] = 0;
        }
    }

    // Traslazione verso destra n>0
    if (n>0)
    {
        for(int i=0; i!=abs(n); i++)
        {
            for (int j = D-1; j > 0 - 1; j--) 
            {
                v[j] = v[j - 1];
            }
            v[0] = 0;
        }
    }


    // Stampa del risultato
    cout << " ---> [ ";
    for (int i = 0; i < D; i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}