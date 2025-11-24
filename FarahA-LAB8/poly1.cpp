#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Point {
    int x, y;
};

// funzione che calcola la distanza tra due punti
double distanza(Point p1, Point p2) {
    double dx = double(p2.x - p1.x);
    double dy = double(p2.y - p1.y);
    return sqrt(dx*dx + dy*dy);
}

// funzione principale che legge la spezzata e ritorna 0/1 (non usata come in esempio)
// qui la mettiamo come funzione per mantenere lo stile modulare
int spezzata() {
    int N = 4; // numero di punti preimpostato (modificabile nel sorgente)
    cout << "Numero di punti preimpostato (modificabile): " << N << endl;

    if (N < 2) {
        cout << "Servono almeno 2 punti per formare una spezzata." << endl;
        return 0;
    }

    vector<Point> punti(N);

    cout << "Inserisci " << N << " punti (x y), uno per riga o separati da spazi:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> punti[i].x >> punti[i].y;
    }

    // calcolo delle lunghezze dei lati e lunghezza totale
    vector<double> lunghezze;
    double lunghezzaTotale = 0.0;
    for (int i = 0; i < N - 1; i++) {
        double d = distanza(punti[i], punti[i+1]);
        lunghezze.push_back(d);
        lunghezzaTotale += d;
    }

    cout.setf(std::ios::fixed);
    cout.precision(6);
    cout << "Lunghezza totale della spezzata: " << lunghezzaTotale << endl;

    // verifica se tutti i lati hanno la stessa lunghezza (con tolleranza)
    bool tuttiUguali = true;
    const double EPS = 1e-6;
    if (lunghezze.size() > 1) {
        double primo = lunghezze[0];
        for (size_t i = 1; i < lunghezze.size(); i++) {
            if (fabs(lunghezze[i] - primo) > EPS) {
                tuttiUguali = false;
                break;
            }
        }
    }

    if (tuttiUguali) cout << "I lati hanno tutti la stessa lunghezza." << endl;
    else cout << "I lati NON hanno tutti la stessa lunghezza." << endl;

    // verifica se la spezzata è chiusa (primo punto coincide con ultimo)
    bool chiusa = (fabs(double(punti[0].x - punti[N-1].x)) < EPS &&
                   fabs(double(punti[0].y - punti[N-1].y)) < EPS);

    if (chiusa) {
        cout << "La linea è chiusa e quindi definisce un poligono";
        if (tuttiUguali) cout << " regolare";
        cout << "." << endl;
    } else {
        cout << "La linea NON è chiusa." << endl;
    }

    return 0;
}

int main() {
    spezzata();
    return 0;
}
