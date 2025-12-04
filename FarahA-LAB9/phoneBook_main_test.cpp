// phoneBook_main_test.cpp
#include <iostream>
#include "phoneBook.h"

using namespace std;

void printBook(const phoneBook &B)
{
    if (B.empty()) {
        cout << "Rubrica vuota\n";
        return;
    }

    for (size_t i = 0; i < B.size(); ++i) {
        cout << i << ": "
             << B[i].surname << " "
             << B[i].name << " "
             << B[i].phoneNumber << "\n";
    }
}

int main()
{
    // 1) Creo una rubrica di prova e la scrivo su file
    phoneBook B;

    contact c1; c1.surname = "Einstein"; c1.name = "Albert"; c1.phoneNumber = "012334454";
    contact c2; c2.surname = "Tesla";     c2.name = "Nikola"; c2.phoneNumber = "088388831";
    contact c3; c3.surname = "Gauss";     c3.name = "Carl-Friedrich"; c3.phoneNumber = "03966776111";
    contact c4; c4.surname = "Fibonacci"; c4.name = "Leonardo"; c4.phoneNumber = "11235813";

    B.push_back(c1);
    B.push_back(c2);
    B.push_back(c3);
    B.push_back(c4);

    cout << "Rubrica iniziale (creata in memoria):\n";
    printBook(B);
    cout << "\n";

    // scrivo su file
    write_phoneBook_to_file(B, "phonebook.txt");
    cout << "Rubrica salvata in 'phonebook.txt'.\n\n";

    // 2) svuoto e rileggo dal file
    B.clear();
    read_phoneBook_from_file(B, "phonebook.txt");
    cout << "Rubrica letta da 'phonebook.txt':\n";
    printBook(B);
    cout << "\n";

    // 3) ordino per cognome
    sort_phoneBook_by_surnames(B);
    cout << "Rubrica dopo sort per cognome:\n";
    printBook(B);
    cout << "\n";

    // 4) ricerca binaria: caso trovato
    size_t pos;
    bool found = find_phoneBook_contact_by_surname(B, "Gauss", pos);
    if (found) {
        cout << "Trovato 'Gauss' in posizione " << pos << ": "
             << B[pos].surname << " " << B[pos].name << " " << B[pos].phoneNumber << "\n";
    } else {
        cout << "'Gauss' non trovato, posizione di inserimento: " << pos << "\n";
    }
    cout << "\n";

    // 5) ricerca binaria: caso non trovato
    found = find_phoneBook_contact_by_surname(B, "Bianchi", pos);
    if (found) {
        cout << "Trovato 'Bianchi' in posizione " << pos << "\n";
    } else {
        cout << "'Bianchi' non trovato, posizione di inserimento: " << pos << "\n";
    }
    cout << "\n";

    // 6) inserimento di un nuovo contatto (mantiene l'ordine)
    add_contact_to_phoneBook(B, "Bernoulli", "Jacob", "099999999");
    cout << "Dopo add_contact_to_phoneBook(B, \"Bernoulli\", ...):\n";
    printBook(B);
    cout << "\n";

    // 7) salvo la rubrica aggiornata
    write_phoneBook_to_file(B, "phonebook_updated.txt");
    cout << "Rubrica aggiornata salvata in 'phonebook_updated.txt'.\n";

    return 0;
}
