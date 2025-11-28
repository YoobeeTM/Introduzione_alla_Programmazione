#include "iovector.h"

using namespace std;

/*
void readVector(vector<int> &v) 
{
    cout<<"Inserisci la dimensione della sequenza: ";
    int N;
    cin>>N;
    while (N<0)
    {
        cout<<"La dimensione deve essere positiva - riprova: "<<endl;
        cin>>N;
    }
    v.resize(N);

    cout<<"Inserisci i valori del vector (canche con gli spazi): ";
    for (size_t i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    cout<<endl;
} */

void readVectorAlt(vector<int> &v)
{
    cout << "Inserisci direttamente gli elementi (digita 'y' per terminare): ";
    string token;
    while (cin >> token) {
        if (token == "y" || token == "Y") break;
        try {
            int val = stoi(token);
            v.push_back(val);
        } catch (...) {
            cerr << "Valore non valido, riprova.\n";
        }
    }
    cout << endl;
}

void printVector(const vector<int> &v) 
{
    cout<<"Il vector stampato: ";
    for (size_t i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}