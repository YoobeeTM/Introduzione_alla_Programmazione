#include <iostream>
#include <string>
using namespace std;

void square(int n)
{
    string err="Errore valore < 1";
    string fnl ="x ";
    string mid ="  ";

    if (n<=0) throw err;

    //riga iniziale
	for (int i=0; i<n; i++)
    {
        cout<<fnl;
    }
    cout<<endl;

    //righe in mezzo
    for (int i=0; i<n-2; i++)
    {
        cout<<"x";
        for(int j=0; j<n-2; j++)
        {
            cout<<mid;
        }
        cout<<" x"<<endl;
    }

    //riga finale
	if (n>1)
    {
        for (int i=0; i<n; i++)
        {
            cout<<fnl;
        }
        cout<<endl;
    }
    cout<<endl;

}

int main()
{
	int n;
	cin >> n;
	try
    {
		square(n);
	}
	catch(string& e)
	{
        cout<<e<<endl;
	}
}a