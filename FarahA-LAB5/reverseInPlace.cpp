#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int x;
    cout << "Inserisci il numero di elementi del vector: ";
    cin >> x;
    
    vector<int> v(x);
    int n;
    int size = v.size();

    // Inserimento dei numeri nel vector
    for (int i = 0; i < size; i++)
    {
        cout << "Inserisci un numero intero v(" << i << "): ";
        cin >> n;
        v[i] = n;
    }

    // Inversione del vector
    for (int i = 0; i < size / 2; i++)
    {
        int temp = v[i];
        v[i] = v[size - 1 - i];
        v[size - 1 - i] = temp;
    }

    // Stampa del vector invertito
    cout << "Vector invertito: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
