#include <iostream>
#include <string>
using namespace std;

string numberToString(int n)
{
    if(n == 0)
        return "0";

    string result = "";
    while(n > 0)
    {
        int digit = n % 10;         // prendo l'ultima cifra
        char c = '0' + digit;       // la converto in carattere
        result = c + result;        // aggiungo all'inizio della stringa
        n = n / 10;                 // rimuovo l'ultima cifra
    }
    return result;
}

int main()
{
    int n;
    cout << "Inserisci un numero intero positivo: ";
    cin >> n;

    string s = numberToString(n);
    cout << "Numero convertito in stringa: " << s << endl;

    return 0;
}