#include "insert.h"
using namespace std;


int main() 
{
    vector<int> v;
    insert(v, 0, 42);


    v = {10, 20, 30};
    insert(v, 0, 99);


    v = {1, 2, 3, 4};
    insert(v, v3.size(), 7);


    v = {5, 6, 7, 8, 9};
    insert(v, 2, 123);


    v = {3, 4, 5};
    try {
    insert(v, 10, 77);
    } catch (int e) {}


    try {
    insert(v, (unsigned int)-1, 88);
    } catch (int e) {}


    return 0;
} 4