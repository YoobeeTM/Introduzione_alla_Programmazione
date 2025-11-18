#include <iostream>
#include <string>

using namespace std;
//esempio con la funzione che fa la media
float media (const vector<float> &v)
{
    float somma = 0;
    for (int i=0; i<v.size(); i++)
    {
        somma += v[i];
    }
    return somma/ v.size();
}