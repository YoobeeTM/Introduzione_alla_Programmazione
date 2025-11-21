#include "studente.h"

vector<Studente> leggiFile(ifstream &f)
{
    vector<Studente> buf;
    Studente s;
    s.ris.resize(12);
    s.punti = -1;
    while (f>>s.mat)
    {
        f>>s.nome>>s.cognome;
        for (int i=0; i<12; i++)
        {
            f>>s.ris[i];
        }
        buf.push_back(s);
    }
    return buf;
}

void stampaStudenti(const vector<Studente> &)
{
    for (int i; i<v.size(); i++)
    {
        cout<<"Mat.: "<<v[i].mat;
        cout<<"Nome: "<<v[i].nome;
        cout<<" Cognome: "<<v[i].cognome;
        cout<<"  Risposte: ";
        for (int j=0; j<12; j++)
        {
            cout<<v[i].ris[j]<<" ";
        }
        cout<<endl;
    }
}