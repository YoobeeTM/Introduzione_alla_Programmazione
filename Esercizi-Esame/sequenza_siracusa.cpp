#include <iostream>
#include <string>
#include <vector>

using namespace std;
unsigned int intnumIterSequenzaSiracusa(unsigned int vinit)
{
    int i=0;
    for(; vinit>1; i++)
    {
        if (vinit%2==0)
        {
            vinit=vinit/2;
        }
        else
        {
            vinit=(3*vinit)+1;
        }
        
    }
    return i;

}
int main()
{
    unsigned int vinit;
    cin>>vinit;
    cout<<intnumIterSequenzaSiracusa(vinit)<<endl;
} {}