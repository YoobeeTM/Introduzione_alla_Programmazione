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

    int left = 0;
    int right = v.size() - 1;

    while (!found && left <= right) {
        int mid = left + (right - left) / 2;
        count++;

        if (v[mid] == item) {
            found = true;
            loc = mid;
        } else if (v[mid] < item) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found) {
        cout << item << " è stato trovato in posizione " << loc << endl;
    } else {
        cout << item << " non trovato" << endl;
    }

    cout << "Numero di accessi effettuati al vector: " << count << endl;

    return 0;
}