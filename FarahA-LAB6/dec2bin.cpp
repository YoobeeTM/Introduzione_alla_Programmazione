#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

const int n=10;
int main ()
{
    vector <int> v(n, 0);
    int x;
    cin>>x;
    if (x>=pow(2, n) || x<0)
    {
        cout<<"Numero NON valido";
        return 0;
    }
    for (size_t i=v.size(); i>0; i--)
    {
        v[i-1]=x%2;
        x=x/2;
    }
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}