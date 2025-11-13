#include <iostream>
#include <string>

using namespace std;

struct esame 
{
    int codice;
    string nome;
    unsigned int voto; //0 = esame non superato
};

struct studente
{
    string nome, cognome;
    unsigned int matricola;
    vector <esame> pds; //pds:piano di studi
};

//FUNZIONE CHE DATI : 
// ELENCO DELLE CARRIERE 
// UNA MATRICOLA
// UN CODICE ESAME

//>0 voto consegnato
//0 esame non superato
//-1 non in piano di studi
//-2 studente inesistente

//RESTITUISCE IL VOTO CONSEGUITO DELLO STUDENTE IN QUELL'ESAME

int voto(const carriera &c, unsigned int m, const unsigned int e)
{
    for (int i = 0; i<c.size(); i++)
    {
        if (c[i].matricola==m) //con la dot notation accediamo alla matricola che appatrtiene alla struct grande dello studente
        {
            vector<esame> v= c[i].pds;
            for (int j=0; j < v.size(); j++)
            {
                if(v[j].codice == e)
                {
                    return v[j].voto;
                }
                return -1;
            }
        }
        return -2;
    }
}