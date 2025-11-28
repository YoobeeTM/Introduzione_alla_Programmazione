#include "reverse_vector.h"

using namespace std;

int main ()
{
    vector<int> v;
    readVectorAlt(v);
    v=reverse(v);
    printVector(v);
}