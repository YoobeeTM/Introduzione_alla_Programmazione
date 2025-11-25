#include <iostream>
#include <vector>
#include "allDiffVectorElements_funct.h"

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {3, 7, 2, 7, 9};

    cout << "Test v1 (tutti diversi): ";
    cout << (allDiffVectorElements(v1) ? "true" : "false") << endl;

    cout << "Test v2 (contiene duplicati): ";
    cout << (allDiffVectorElements(v2) ? "true" : "false") << endl;

    return 0;
}
