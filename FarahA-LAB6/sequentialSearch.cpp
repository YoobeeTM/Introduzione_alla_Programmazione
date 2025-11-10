#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int n=15;
int main ()
{
    int item;
    int x;
    vector <int> v(n);
    for (size_t i=0; i<v.size(); i++)
    {
        cout<<"Inserisci un numero intero v""("<<i<<")"": ";
        cin>>x;
        v[i]=x;
    }
    cout<<"Inserisci il numero intero da cercare: ";
    cin>>item;
    int loc=-1;
    bool found=false;
    size_t i=0;
    while (!found && i<v.size())
    {
        if (v[i]==item)
        {
            found=true;
            loc=i;
        }
        i++;
    }
    if (found)
        {
            cout<<item<<" è stato trovato in posizione "<<loc<<endl;
            return 0;
        }
        else
        {
            cout<<item<<" non trovato"<<endl;
            return 0;
        }
}