#include "reverse_vector.h"

using namespace std;

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

vector<int> reverse(const vector<int> &v)
{
    vector <int> r(v.size());
    for (size_t i = 0; i < v.size(); i++)
    {
        r[i] = v[v.size() - 1 - i];
    }
    return r;
}

void printVector(const vector<int> &v) 
{
    cout<<"Reverse vector: ";
    for (size_t i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}