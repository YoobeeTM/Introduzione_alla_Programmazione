struct Indirizzo
{
    string via= "";
    int numero_civico;
    int CAP;
    string città;
};

struct Cliente
{
    string cognome, nome;
    Indirizzo indirizzo;
};

bool verifica_vicinanza (Cliente c1, Cliente c2)
{
    if (c1.indirizzo.CAP==c2.indirizzo.CAP) return true;
    return false;
}

void aggiorna_indirizzo (Indirizzo &i)
{
}