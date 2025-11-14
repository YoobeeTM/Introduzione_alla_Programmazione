/*Scrivere una funzione replicate2_line con parametri f, f_c, s, s_c, 
dove f e s sono di tipo intero e f_c e s_c di tipo carattere.
La funzione stampa su una riga a sé stante f volte f_c, seguito da s volte s_c. 
Ad esempio replicate2_line(3, 's', 7, 'q')
stampa
sssqqqqqqq
Quando per un carattere viene inserito un numero <=0 quel carattere non viene stampato.*/

#include <iostream>
using namespace std;

void replicate2_line(int f, char f_c, int s, char s_c) 
{
    // to do
}

int main()
{
    int f;
    char f_c; 
    int s;
    char s_c;
    cin >> f >> f_c >> s >> s_c;
    replicate2_line(f, f_c, s, s_c);

	return 0;
}