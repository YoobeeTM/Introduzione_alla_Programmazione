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

int Punteggio(Studente s, vector <char> r, vector <int> p)
{
    int punti=0;
    for (int i=0; ir.size(); i++)
    {
        if (s.ris==r[i])
        {
            punti+= p[i];
        }
    }
    return punti;
}

void Dividi(vector<Studente> C, vector <char> r, vector <int> p, int s, vector<Studente> & suff, vector<Studente> & insuff)
{
    suff.clear();
    insuff.clear();
    for (int i=0; i<C.size(); i++)
    {
        int punti=Punteggio(C[i], r, p);
        C[i],punti=punti;
        if (punti<s)
        {
            insuff.push_back(C[i]);
        }
        else
        {
            suff.push_back(C[i]);
        }
    }
}

void Ordina(vector<Studente>)
{

}

bool confronta(Studente A, Studente B)//true se a<=b
{
    if (A.cognome<B.cognome) return true;
    if (A.cognome>B.cognome) return false;

    if (A.nome<B.nome) return true;
    if (A.nome>B.nome) return false;

    if (A.mat<B.mat) return true;
    //sappiamo che le matricole sono perforza diverse quindi non dobbiamo confrontare il contrario
    return false;
}
void OrdinaLex(vector<Studente> &C)
{
    //sort
}

void stampaPunti(const vector<Studente> &)
{
    cout<<"Matricola\t Nome\t Cognome\t Punteggio\n";
    for (int i; i<v.size(); i++)
    {
        cout<<v[i].mat<<"\t"<<v[i].nome<<"\t"<<v[i].cognome<<"\t";5

        cout<<"  Risposte: ";
        for (int j=0; j<12; j++)
        {
            cout<<v[i].ris[j]<<" ";
        }
        cout<<endl;
    }
}