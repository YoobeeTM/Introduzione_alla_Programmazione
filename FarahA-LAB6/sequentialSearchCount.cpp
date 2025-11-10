#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int n = 30;

int main() {
    int item;
    int loc = -1;
    bool found = false;
    int count = 0;
    
    vector<int> v = {
        1, 3, 5, 7, 10, 12, 13, 15, 19, 21,
        24, 27, 30, 34, 36, 42, 45, 48, 54, 56,
        60, 66, 71, 78, 80, 88, 90, 95, 99, 100
    };

    cout << "Array ordinato (30 elementi): ";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Inserisci il numero intero da cercare: ";
    cin >> item;

    size_t i = 0;
    while (!found && i < v.size()) {
        count++; // conteggio accessi
        if (v[i] == item) {
            found = true;
            loc = i;
        }
        i++;
    }

    if (found) {
        cout << item << " è stato trovato in posizione " << loc << endl;
    } else {
        cout << item << " non trovato" << endl;
    }

    cout << "Numero di accessi effettuati al vector: " << count << endl;

    return 0;
}
