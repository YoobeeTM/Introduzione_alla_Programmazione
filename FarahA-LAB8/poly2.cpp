#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    // leggo N
    int N;
    cout << "Quanti punti vuoi inserire? ";
    cin >> N;

    // creo un vector di punti (x,y)
    vector<float> x(N);
    vector<float> y(N);

    // leggo le coordinate
    for (int i = 0; i < N; i++) {
        cout << "Inserisci x e y del punto " << i << ": ";
        cin >> x[i] >> y[i];
    }

    // calcolo la lunghezza totale
    float lunghezza_totale = 0;

    for (int i = 0; i < N - 1; i++) {
        float dx = x[i+1] - x[i];
        float dy = y[i+1] - y[i];
        float distanza = sqrt(dx*dx + dy*dy);
        lunghezza_totale += distanza;
    }

    cout << "Lunghezza totale della spezzata: " << lunghezza_totale << endl;

    // controllo se tutti i lati sono uguali
    bool lati_uguali = true;
    if (N > 2) {
        float lato0 = sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2));
        for (int i = 1; i < N - 1; i++) {
            float dx = x[i+1] - x[i];
            float dy = y[i+1] - y[i];
            float distanza = sqrt(dx*dx + dy*dy);
            if (fabs(distanza - lato0) > 0.0001) {
                lati_uguali = false;
            }
        }
    }

    // controllo se la linea è chiusa
    bool chiusa = (x[0] == x[N-1] && y[0] == y[N-1]);

    if (chiusa) {
        int lati = N - 1;

        string nome;
        switch (lati) {
            case 3: nome = "triangolo"; break;
            case 4: nome = "quadrilatero"; break;
            case 5: nome = "pentagono"; break;
            case 6: nome = "esagono"; break;
            case 7: nome = "ettagono"; break;
            case 8: nome = "ottagono"; break;
            default: nome = "poligono"; break;
        }

        cout << "La linea è chiusa e quindi definisce un " << nome;
        if (lati_uguali) {
            cout << " regolare";
        }
        cout << "." << endl;
    }

    return 0;
}