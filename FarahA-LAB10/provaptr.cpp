#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ()
{
    string s1 = "Hello", s2 = "World";
    cout<<"Variabile s1: "<<s1<<&s1;
    cout<<"Variabile s2: "<<s2<<&s2;
   
    string* p1 = &s1;
    cout<<"p contiene " ... " (un indirizzo)";


    cout<<"p contiene " ... " (un indirizzo)"  
}

// stampare "Variabile s1: " seguito dal contenuto di s1 e l'indirizzo di s1
// stampare "Variabile s2: " seguito dal contenuto di s2 e l'indirizzo di s2
// dichiarare una variabile p di tipo puntatore a string inizializzata con l'indirizzo di s1
// stampare il messaggio "p contiene " ... " (un indirizzo)"
// stampare il messaggio "mentre con *p si ottiene " ... " (il contenuto della variabile puntata da p)"
// assegnare all'area di memoria puntata da p la stringa "Ciao"
// stampare il messaggio "p contiene " ... " (un indirizzo)"
// stampare il messaggio "mentre con *p si ottiene " ... " (il contenuto della variabile puntata da p)"
// assegnare a p l'indirizzo di s2
// stampare il messaggio "p contiene " ... " (un indirizzo)"
// stampare il messaggio "mentre con *p si ottiene " ... " (il contenuto della variabile puntata da p)"
// assegnare all'area di memoria puntata da p la stringa "Mondo"
// stampare il messaggio "p contiene " ... " (un indirizzo)"
// stampare il messaggio "mentre con *p si ottiene " ... " (il contenuto della variabile puntata da p)"
// stampare "Variabile s1: " seguito dal contenuto di s1 e l'indirizzo di s1
// stampare "Variabile s2: " seguito dal contenuto di s2 e l'indirizzo di s2