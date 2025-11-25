#include "vectorIncludedInVector_funct.h"
#include <unordered_set>
using namespace std;

bool vectorIncludedInVector(const vector<int>& t1, const vector<int>& t2) {

    if (t1.empty()) return true;

    unordered_set<int> elementsT2(t2.begin(), t2.end());

    for (int x : t1) {
        if (elementsT2.count(x) == 0) {
            return false;
        }
    }

    return true;
}
