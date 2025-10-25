#include <iostream>
#include <string>
using namespace std;

void replicate (int x, char c)
{
    for (int i=0; i<x; i++)
    {
        cout<<c;
    }
}

int main()
{
	int x;
	cin >> x;
	
	char c;
	cin >> c;
    if (x<=0) return 0;
	
	replicate(x,c); 
}