#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    vector <int> v(5);
    int n;
    int maxVal;
    int maxCount=0;
    //inserisco i numeri nel vector
    for (size_t i=0; i<v.size(); i++)
    {
        cin>>n;
        v[i]=n;
    }
    maxVal=v[0];
    //trovo n max
    for (size_t i=0; i<v.size(); i++)
    {
        if (maxVal<v[i])
        {
            maxVal=v[i];
        }
    }
    //trovo quante volte è presente n max
    for ( size_t i=0; i<v.size(); i++)
    {
        if (maxVal==v[i]) 
        {
        maxCount++;
        }
    }
    cout<<"maxVal= "<<maxVal<<endl;
    cout<<"maxCount= "<<maxCount<<endl;
    return 0;
}