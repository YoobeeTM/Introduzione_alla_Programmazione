#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    vector <bool> isprime(1000, true);
    isprime[0]=false;
    isprime[1]=false;
    size_t p=2;
    while(p<isprime.size())
    {
        for (size_t i=2; i*p<isprime.size(); i++)
        {
            isprime[i*p]=false;
        }
        p++;
    }
    cout<<"I numeri primi fino a 1000 sono: ";
    for(size_t i=2; i<isprime.size();i++)
    {
        if (isprime[i])
        {
            cout<<i<<" ";
        }
    }
    return 0;
}