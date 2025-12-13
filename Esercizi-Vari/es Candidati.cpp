#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Candidato
{
    string nome, cognome, nomelista;
    int voti;
};

int contaVoti(vector<Candidato> v, string nomelista)
{
    int somma = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].nomelista == nomelista)
        {
            somma += v[i].voti;
        }
    }

    return somma;
}

Candidato vincitore(vector<Candidato> v)
{
    Candidato vincitore = v[0];
    for (int i = 1; i < v.size(); ++i)
    {
        if (v[i].voti > vincitore.voti)
        {
            vincitore = v[i];
        }
    }
    return vincitore; // MANCAVA!
}

int main()
{
    int n;
    cout << "Inserisci il numero di candidati: ";
    cin >> n;

    vector<Candidato> v(n);
    for (int i = 0; i < n; ++i)
    {
        cout << "Inserisci nome, cognome, nomelista e voti del candidato " << (i + 1) << ": ";
        cin >> v[i].nome >> v[i].cognome >> v[i].nomelista >> v[i].voti;
    }

    string listaDaContare;
    cout << "Inserisci il nome della lista da contare: ";
    cin >> listaDaContare;

    int totaleVoti = contaVoti(v, listaDaContare);
    cout << "Il totale dei voti per la lista " << listaDaContare << " è: " << totaleVoti << endl;

    // Uso opzionale della funzione vincitore
    Candidato win = vincitore(v);
    cout << "Il vincitore è: " << win.nome << " " << win.cognome
         << " con " << win.voti << " voti." << endl;

    return 0;
}