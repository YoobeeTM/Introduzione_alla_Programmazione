#include <iostream>
using namespace std;

int leggiVoto(int numeroStudente)
{
    int voto;
    do 
    {
        cout << "Inserisci il voto dello studente " << numeroStudente << " (0-100): ";
        cin >> voto;
        if (voto < 0 || voto > 100)
        {
            cout << "Voto non valido. Riprova." << endl;
        }
    } while (voto < 0 || voto > 100);
    return voto;
}

bool isPromosso(int voto)
{
    return voto >= 60;
}

int aggiornaSomma(int sommaAttuale, int voto)
{
    return sommaAttuale + voto;
}

int aggiornaPromossi(int promossiAttuali, int voto)
{
    if (isPromosso(voto))
        return promossiAttuali + 1;
    else
        return promossiAttuali;
}

int aggiornaBocciati(int bocciatiAttuali, int voto)
{
    if (!isPromosso(voto))
        return bocciatiAttuali + 1;
    else
        return bocciatiAttuali;
}

int calcolaMassimo(int votoMassimo, int voto)
{
    if (voto > votoMassimo)
        return voto;
    else
        return votoMassimo;
}

int calcolaMinimo(int votoMinimo, int voto)
{
    if (voto < votoMinimo)
        return voto;
    else
        return votoMinimo;
}

int main()
{
    int numeroStudenti;
    do {
        cout << "Inserisci il numero di studenti: ";
        cin >> numeroStudenti;
        if (numeroStudenti <= 0)
        {
            cout << "Numero non valido. Deve essere positivo." << endl;
        }
    } while (numeroStudenti <= 0);

    int somma = 0;
    int promossi = 0;
    int bocciati = 0;
    int votoMassimo = 0;
    int votoMinimo = 100;

    for (int i = 1; i <= numeroStudenti; i++) {
        int voto = leggiVoto(i);
        somma = aggiornaSomma(somma, voto);
        promossi = aggiornaPromossi(promossi, voto);
        bocciati = aggiornaBocciati(bocciati, voto);
        votoMassimo = calcolaMassimo(votoMassimo, voto);
        votoMinimo = calcolaMinimo(votoMinimo, voto);
    }

    double media = (1.0 * somma) / numeroStudenti;

    cout << "\nMedia della classe: " << media << endl;
    cout << "Numero di studenti promossi: " << promossi << endl;
    cout << "Numero di studenti bocciati: " << bocciati << endl;
    cout << "Voto più alto: " << votoMassimo << endl;
    cout << "Voto più basso: " << votoMinimo << endl;

    return 0;
}