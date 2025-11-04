#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    const int m=5, n=8;
    vector<vector<int>> a(n, vector<int>(n, 0)); 
    for (int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++ )
        {
            a[m][n]=i;
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}