#include <iostream>
#include "studente.h"

using namespace std;
const int n=12;

int main ()
{
    vector <Studente> Classe;
    ifstream f("consegne.txt");
    Classe=leggiFile(f);
    
    f.close();

    f.open("soluzione.txt");
    vector <char> risposte(n);
    vector <int> punteggi(n);
    char dummy;
    //leggere le risposte
    for (int i=0; i<n; i++)
    {
        f>>risposte[i]>>dummy;
    }
    //leggere i punteggi
    for (int i=0; i<n; i++)
    {
        f>>punteggi[i];
    }


    coout<<"Elenco studenti:\n";
    stampaStudenti(Classe);
    cout<<Punteggio(Classe[0], risposte, punteggi)<<endl;

    vector <Studente> suff, insuff;
    Dividi(Classe, risposte, punteggi, 15, suff, insuff);
    
    cout<<"Insufficienti:\n";
    stampaPunti(insuff);
    return 0;

}