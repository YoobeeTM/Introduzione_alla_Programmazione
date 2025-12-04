#include "phoneBook.h"
#include <iostream>
using namespace std;

void push_contact_in_phoneBook(phoneBook &B, const string &surname, const string &name, const string &number)
{
    contact C;
    C.surname=surname;
    C.name=name;
    C.phoneNumber=number;
    B.push_back(C);

}

void print_phoneBook(const phoneBook &B)
{
    for (size_t i=0; i<B.size(); i++)
    {
        cout<<B[i].surname<<"  "<<B[i].name<<"  "<<B[i].phoneNumber<<endl;
    }
}

void read_phoneBook_from_file(phoneBook &B, const string &fileName)
{
    ifstream fin(fileName);

    B.clear();    // svuota la rubrica

    size_t N;
    fin >> N;     // legge il numero di contatti

    for (size_t i = 0; i < N; ++i) {
        contact c;
        fin >> c.surname >> c.name >> c.phoneNumber;
        B.push_back(c);
    }

}

void write_phoneBook_to_file(const phoneBook &B, const string &fileName)
{
    ofstream fout(fileName);

    fout << B.size() << endl;

    for (const auto &c : B) {
        fout << c.surname << " "
             << c.name << " "
             << c.phoneNumber << endl;
    }
}

void sort_phoneBook_by_surnames(phoneBook &B)
{
    for (size_t i = 0; i < B.size(); i++) {
        for (size_t j = 0; j < B.size() - 1; j++) {

            if (B[j].surname > B[j + 1].surname) {
                contact temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }

        }
    }
}

bool find_phoneBook_contact_by_surname(const phoneBook &B, const string &S, size_t &pos)
{
    size_t left = 0;
    size_t right = B.size();

    while (left < right) {
        size_t mid = (left + right) / 2;

        if (B[mid].surname == S) {
            pos = mid;
            return true;
        }

        if (B[mid].surname < S)
            left = mid + 1;
        else
            right = mid;
    }

    pos = left;
    return false;
}

void shift_phoneBook(phoneBook &B, size_t pos)
{
    // se pos è alla fine (o oltre) basta aggiungere un elemento vuoto
    if (pos >= B.size()) {
        contact c;
        B.push_back(c);
        return;
    }

    // aggiungo una copia dell'ultimo elemento per avere spazio
    B.push_back(B.back());

    // sposto a destra gli elementi (attenzione all'ordine: dal fondo verso pos)
    for (size_t i = B.size() - 2; i > pos; --i) {
        B[i + 1] = B[i];
    }
    // i == pos
    B[pos + 1] = B[pos];
}

void add_contact_to_phoneBook(phoneBook &B, const string &surname, const string &name, const string &number)
{
    size_t pos;
    // trova posizione di inserimento (pos sarà dove inserire se non trovato,
    // o l'indice di un elemento con lo stesso surname se trovato)
    bool found = find_phoneBook_contact_by_surname(B, surname, pos);

    // se vogliamo inserire prima dell'elemento trovato (o nella posizione di inserimento)
    shift_phoneBook(B, pos);

    // scrivo il nuovo contatto nella posizione libera
    B[pos].surname = surname;
    B[pos].name = name;
    B[pos].phoneNumber = number;
}