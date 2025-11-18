#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main ()
{
    istream f;
    vector <double> v;
    //*(vedi giù)
}

//DUE SCENARI:

//1) il file dice quanti numeri contiene
f.open("Dati.dati");
int n;
f>>n;
v.resize(n);
for (int i=0; i<n; i++)
{
    f>> v[i];
}

f.close();

//1) il file contiene solo i dati, non si sa quanti
