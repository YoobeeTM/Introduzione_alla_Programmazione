#include <iostream>
#include <string>

using namespace std;

void computeRectInfo(double l1, double l2, double& area, double& perimetro)
{
    string err = "Errore, i lati devono essere positivi!";
    if (l1<=0 || l2<=0) throw err;

    area=l1*l2;
    perimetro=2*l1 + 2*l2;
}

int main ()
{
    double l1, l2, area, perimetro;
    try
    {
        cout<<"Inserisci l1: ";
        cin>>l1;
        cout<<"Inserisci l2: ";
        cin>>l2;
        computeRectInfo(l1, l2, area, perimetro);
        
        cout<<"L'area del rettangolo è: "<<area<<endl;
        cout<<"Il perimetro del rettangolo è: "<<perimetro<<endl;
    }

    catch (string& err)
    {
        cout<<err<<endl;
        return 0;
    }
}