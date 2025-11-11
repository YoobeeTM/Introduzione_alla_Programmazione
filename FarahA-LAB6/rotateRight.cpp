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
    cout << "]" << endl;

    // rotate right (spostamento a destra)
    int last = d.back();
    for (size_t i = d.size() - 1; i > 0; i--) {
        d[i] = d[i - 1];
    }
    d[0] = last;

    // stampa vector dopo la rotazione
    cout << "[ ";
    for (size_t i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    cout << "]" << endl;

    return 0;
} 
