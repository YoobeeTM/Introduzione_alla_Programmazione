#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    vector<int> d(5);

    // genera numeri casuali
    for (size_t i = 0; i < d.size(); i++) {
        d[i] = rand() % 50;
    }

    // stampa il vector generato
    cout << "[ ";
    for (size_t i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    cout << "]"<<endl;

    //inserimento n rotazioni
    cout<<"Inserisci il numero di rotazioni"<<endl;
    cout<<"Numero negativo (sinistra) o numero positivo (destra): ";
    int n;
    cin>>n;

    // rotate right
    if (n<0)
    {
        for(int i=0; i<abs(n); i++)
        {
            int last = d.back();
            for (size_t j = d.size() - 1; j > 0; j--) 
            {
                d[j] = d[j - 1];
            }
            d[0] = last;
        }
    }  

    // rotate left
    if (n>0)
    {
        for(int i=0; i<n; i++)
        {
            int first = d.front();
            for (size_t j = 0; j < d.size() - 1; j++) 
            {
                d[j] = d[j + 1];
            }
            d[d.size() - 1] = first;
        }
    }

    // stampa vector dopo la rotazione
    cout << " ---> [ ";
    for (size_t i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
