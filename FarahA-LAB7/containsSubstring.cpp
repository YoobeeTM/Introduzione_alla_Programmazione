#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Inserisci la prima stringa: ";
    getline(cin, str1);

    cout << "Inserisci la seconda stringa: ";
    getline(cin, str2);

    bool found = false;
    for (int i = 0; i <= str1.length() - str2.length(); i++) {
        bool match = true;
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i + j] != str2[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "La seconda stringa è contenuta nella prima!" << endl;
    } else {
        cout << "La seconda stringa NON è contenuta nella prima." << endl;
    }

    return 0;
}
