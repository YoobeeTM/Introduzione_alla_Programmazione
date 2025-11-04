#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    int a, b;
    do
    {
        cout<<"Inserisci due valori (compresi fra 1 e 10): ";
        cin>>a>>b;
    }while (a<1 || b<1 || a>10 || b>10);
    const int N=10;
    vector<vector<int>> v(N, vector<int>(N, 0));
    for (int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++ )
        {
            v[i][j]=(i+1)*(j+1);
        }
    }
    cout<<"Il prodotto fra i due numeri vale: "<<v[a-1][b-1]<<endl;
    return 0;
}