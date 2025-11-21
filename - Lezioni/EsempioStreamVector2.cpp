// File-IN-2.cpp

#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream f;          // sorgente dei dati
    f.open("dati.txt");       // apro il file in lettura
    if (!f) { std::cout << "Impossibile aprire il file!"; return 1; }

    std::vector<double> v;    // destinazione dei dati
    double d;

    // continuo a leggere un dato finché l'operazione di lettura diventa falsa (fine file)
    while (f >> d)            // legge e memorizza d
        v.push_back(d);       // aggiunge il valore al vector

    // implementazione alternativa che usa f.eof()
    // while (true) {
    //     f >> d;
    //     if (f.eof()) break;
    //     v.push_back(d);
    // }

    f.close();                // libero il file che non serve più

    // aggiungere stampa del contenuto di v per verificare
    return 0;
}
