// File-IN-1.cpp

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//1) il file dice quanti numeri contiene

int main ()
{
    istream f;
    vector <double> v;
    f.open("Dati.dati");
    int n;
    f>>n;
    v.resize(n);
    for (int i=0; i<n; i++)
    {
        f>> v[i];
    }

    f.close();
    return 0;
}

//2) il file contiene solo i dati, non si sa quanti
int main ()
{
    istream f;
    vector <double> v;
    f.open("Dati.dati");
    if (!g)
    {
        cout<<"Impossibile aprire il file in lettura\n";
        return 1;
    }
    int n;
    f>>n;
    v.resize(n);
    for (int i=0; i<n; i++)
    {
        f>> v[i]; 
    }

    f.close();

    ofstream g;
    g.open("copia.txt");
    if (!g)
    {
        cout<<"Impossibile aprire il file in scrittuta\n";
        return 1;
    }
    g<<n<<endl;
    for (int i=0; i<n; i++)
    {
        g<< v[i]<<endl;
    }
    g.close()


    return 0;
}