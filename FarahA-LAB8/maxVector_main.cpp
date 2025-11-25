#include "maxVector_funct.h"
using namespace std;

int main ()
{
    unsigned int N;
    cout<<"Inserisci la grandezza del vector: ";
    cin>>N;
    vector <int> t(N);
    int n;
    for (size_t i=0; i<t.size(); i++)
    {
        cout<<"v["<<i<<"]: ";
        cin>>n;
        t[i]=n;
    }

    try
    {
        maxVector(t);
        cout<<"Il valore massimo è: "<<maxVector(t)<<endl;   
    }
    
    catch(string& err)
    {
        cout<<err<<endl;
        return 0;
    }
}