#include <iostream>
#include <string>

using namespace std;

int area(int length, int width)
{
    string err = "parametro con valore non positivo";
    if (0>= length || 0>= width) throw err;
    return length*width;
}

int main()
{
    int z, y;
    try
    {
        cout<<"Inserisci lunghezza e altezza el rettangolo";
        cin>>x>>y;
        cout<<"L'area del rettangolo é: "<<area(x,y);
    }

    catch (string& err)
    {
        cout<<err;
        cerr<<"oops! Bad area calculation - fix program\n";
    }
}