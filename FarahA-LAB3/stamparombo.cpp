#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Inserisci un numero intero positivo: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Errore: inserisci un numero positivo." << endl;
        return 0;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int s = 0; s < n - i; s++)
            cout << " ";

        for (int a = 0; a < 2 * i + 1; a++)
            cout << "*";

        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int s = 0; s < n - i; s++)
            cout << " ";

        for (int a = 0; a < 2 * i + 1; a++)
            cout << "*";

        cout << endl;
    }

    return 0;
}