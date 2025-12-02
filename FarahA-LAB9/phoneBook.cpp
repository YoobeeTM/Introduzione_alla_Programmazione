#include "phoneBook.h"

using namespace std;

void push_contact_in_phoneBook(phoneBook &B, const string &surname, const string &name, const string &number)
{
    
}

void print_phoneBook(const phoneBook &B);

void read_phoneBook_from_file(phoneBook &B, const string &fileName);

void write_phoneBook_to_file(const phoneBook &B, const string &fileName);

void sort_phoneBook_by_surnames(phoneBook &B);

bool find_phoneBook_contact_by_surname(const phoneBook &B, const string &s, size_t &pos);

void shift_phoneBook(phoneBook &B, size_t pos);

void add_contact_to_phoneBook(phoneBook &B, const string &surname, const string &name, const string &number);