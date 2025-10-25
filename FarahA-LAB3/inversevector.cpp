#include <iostream>
#include <string>

using namespace std;

vector<int> reverse(vector<int> v)
{
    vector<int> w (v.size()) //crea un vettore w con lo stesso size di v
    for(int i=0; i<v.size(); i++)
    {
        w[i]=v[v.size()]-(i+1);
    }
    return w;
}