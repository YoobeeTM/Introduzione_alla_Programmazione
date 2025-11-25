#include "maxVector_funct.h"

int maxVector(vector <int> v)
{
    //eccezione
    string err="Hai creato un vettore vuoto!";
    if (v.size()==0) throw err;
    //trovo n max
    int maxVal=v[0];
    for (size_t i=0; i<v.size(); i++)
    {
        if (maxVal<v[i])
        {
            maxVal=v[i];
        }
    }

    return maxVal;
}