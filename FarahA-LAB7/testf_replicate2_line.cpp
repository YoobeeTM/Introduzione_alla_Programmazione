#include <iostream>
using namespace std;

void replicate2_line(int f, char f_c, int s, char s_c) 
{
    if (f>=0)
    {
        for(int i=0; i<f; i++)
        {
            cout<<f_c;
        }
    }

    if (s>=0)
    {
        for(int i=0; i<s; i++)
        {
            cout<<s_c;
        }
    }
}

int main()
{
    int f;
    char f_c; 
    int s;
    char s_c;
    cin>> f >> f_c >> s >> s_c;
    replicate2_line(f, f_c, s, s_c);

	return 0;
}