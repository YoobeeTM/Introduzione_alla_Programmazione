#include "allDiffVectorElements_funct.h"
#include <unordered_set>   // per controllare duplicati in modo efficiente

bool allDiffVectorElements(const std::vector<int>& t) {
    std::unordered_set<int> seen;   // insieme per elementi già trovati

    for (int x : t) {
        if (seen.count(x) > 0) {
            return false;            // elemento già visto → duplicato
        }
        seen.insert(x);
    }

    return true;                     // nessun duplicato
}
