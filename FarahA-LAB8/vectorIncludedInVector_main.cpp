#include <iostream>
#include <vector>
#include "vectorIncludedInVector_funct.h"

using namespace std;

int main() {
    vector<int> t1 = {1, 3, 7};
    vector<int> t2 = {7, 1, 9, 3, 3};

    cout << "t1 incluso in t2? ";
    cout << (vectorIncludedInVector(t1, t2) ? "true" : "false") << endl;

    vector<int> t3 = {1, 4};
    vector<int> t4 = {1, 2, 3};

    cout << "t3 incluso in t4? ";
    cout << (vectorIncludedInVector(t3, t4) ? "true" : "false") << endl;

    vector<int> empty;
    vector<int> v = {5, 6};

    cout << "vettore vuoto incluso in v? ";
    cout << (vectorIncludedInVector(empty, v) ? "true" : "false") << endl;

    return 0;
}
