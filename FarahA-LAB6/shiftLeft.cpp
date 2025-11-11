#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int D = 5;
    vector<int> v(D);

    srand(time(NULL));
    
    cout << "Inserisci " << D << " numeri interi: ";
    for (int i = 0; i < D; i++) 
    {
        int x = (rand() % 20);
        v[i]=x;
    }
  
    cout << "[ ";
    for (int i = 0; i < D; i++) 
    {
        cout << v[i] << " ";
    }
    cout << "] " << endl;

    // Traslazione verso sinistra
    for (int i = 0; i < D - 1; i++) 
    {
        v[i] = v[i + 1];
    }
    v[D - 1] = 0;

    // Stampa del risultato
    cout << " ---> [ ";
    for (int i = 0; i < D; i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
