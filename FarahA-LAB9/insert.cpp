#include "insert.h"
using namespace std;


void insert(vector<int>& v, unsigned int i, int val) 
{
    if (i > v.size()) 
    {
        throw 1;
    }

    if (v.size() == 0) 
    {
        v.push_back(val);
        return;
    }

    if (i == v.size()) 
    {
        v.push_back(val);
        return;
    }

    v.push_back(v.back());

    for (unsigned int j = v.size() - 1; j > i; --j) 
    {
        v[j] = v[j - 1];
    }

    v[i] = val;
}