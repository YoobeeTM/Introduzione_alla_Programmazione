#include <iostream>
#include <string>
using namespace std;

bool isValidPositiveNumber(const string& str) {
    if (str.length() == 0) {
        return false;
    }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}

int stringToNumber(const string& str) {
    int numero = 0;
    for (int i = 0; i < str.length(); i++) {
        numero = numero * 10 + (str[i] - '0');
    }
    return numero;
}

int main() {
    string input;

    do {
        cout << "Inserisci un numero positivo: ";
        cin >> input;
    } while (!isValidPositiveNumber(input));

    int valore = stringToNumber(input);
    cout << "Hai inserito il numero: " << valore << endl;

    return 0;
}
