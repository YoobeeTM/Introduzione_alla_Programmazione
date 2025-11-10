#include <iostream>
#include <vector>
using namespace std;

const int n = 10;

int main() {
    vector<int> v(n);
    int x;

    for (size_t i = 0; i < v.size(); i++) {
        cout << "Inserisci un numero intero v(" << i << "): ";
        cin >> x;
        v[i] = x;
    }

    int minIndex;
    for (size_t i = 0; i < v.size() - 1; i++) {
        minIndex = i;
        for (size_t j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        int temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
    }

    cout << "Il vector ordinato in modo crescente e': ";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
