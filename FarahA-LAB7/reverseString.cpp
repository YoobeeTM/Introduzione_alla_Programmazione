#include <iostream>
#include <string>
using namespace std;

void reverseString(string& str) {
    int inizio = 0;
    int fine = str.length() - 1;

    while (inizio < fine) {
        char temp = str[inizio];
        str[inizio] = str[fine];
        str[fine] = temp;

        inizio++;
        fine--;
    }
}

int main() {
    string testo;

    cout << "Inserisci una stringa: ";
    cin >> testo;

    reverseString(testo);

    cout << "Stringa invertita: " << testo << endl;

    return 0;
}
