#include <iostream>
#include <string>

using namespace std;

int main()
{
    string st;
    cout<<"Inserisci una stringa contenente spazi: "<<;
    cout<<endl;
    getline(cin, st); 
    int count =0;
    for (size_t i=0; i- st.length(); i++)
    {
        if (st[i]==' ')
        {
            count ++;
        }
    }
    cout<<st<<" ha "<<count<<" spazi";

}