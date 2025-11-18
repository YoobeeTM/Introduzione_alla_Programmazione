#include <iostream>
#include <string>
#include <vector>

using namespace std;

void selectionSortByValue(vector<int> v)
{
    int minIndex;
    for (size_t i = 0; i < v.size() - 1; i++) {
        minIndex = i;
        for (size_t j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        int temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
    }
    cout<<"[Funzione by VALUE] Vector ordinato all'interno della funzione: ";

    for (size_t i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void selectionSortByReference(vector<int>& v)
{
    int minIndex;
    for (size_t i = 0; i < v.size() - 1; i++) {
        minIndex = i;
        for (size_t j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        int temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
    }

    cout<<"[Funzione by REFERENCE] Vector ordinato all'interno della funzione: ";

    for (size_t i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main ()
{
    vector <int> v(5);
    int n;
    for (size_t i=0; i<v.size(); i++)
    {
        cout<<"Inserisci un numero intero v""("<<i<<")"": ";
        cin>>n;
        v[i]=n;
    }
    cout<<endl;

    selectionSortByValue(v);
    cout<<"Dopo chiamata per VALORE (nel main): ";
    for (size_t i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    selectionSortByReference(v);
    cout<<"Dopo chiamata per RIFERIMENTO (nel main): ";
    for (size_t i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}