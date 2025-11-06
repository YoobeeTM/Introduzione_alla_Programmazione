// Esercizio: implementare il gioco TRIS
//--------------------VISIONE TOP-DOWN:------------------------
//0) inizalizzo il campo di gioco
//1) gestisco un ciclo di mosse a giocatori alternati
//2) per ogni mossa controllo se il giocatore ha vinto
//3) se ha vinto o non ci sono più mosse possibili, termino il gioco




//--------------------VISIONE BOTTOM-UP:------------------------
//Definiamo gli ingredienti che servono per gestire il gioco: campo, mossa, controllo vittoria, controllo campo pieno
//Uso gli ingredienti per conferire la meccanica del gioco

// TIPO DI DATO:
// Cosa: tabella quadrata di char con dim: dimensione della tabella

// OPERAZIONI:
//inizializzare la tabella vuota: input  dim; output tabella
//mossa : input Tabella, char, coordinate; output:tabella aggiornata
//controllo vittoria: in Tabella, [mossa]; out:bool
// campo pieno: in Tabella; out:bool

//definire un tipo
typedef vector<vector<char>> Tabella;

//Per istanziare un tipo di dato TRIS dovrò:
//-una variabile Tabella
//-una variabile int che ricorda la dimensioe della tabella
//-serve altro? vedremo...

//Funzione che crea la TABELLA (vuota):
void nuovo_gioco(Tabella&t; int dim)
//oppure

Tabella nuovo_gioco (int dim)
{
    Tabella t (dim);
    for (int i=0; i<dim;)
    {
        t[i].resize(dim);
    }
    for (int i=0; i<dim; i++)//cicla sulle righe
    {
        for (int j=0; j<dim; j++) //cicla sulle colonne
        {
            t[i][j]=" ";
        }
    }
}