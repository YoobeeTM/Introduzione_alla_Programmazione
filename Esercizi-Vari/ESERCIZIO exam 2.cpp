#include <iostream>
#include <cmath>
using namespace std;

struct POINT
{
    double x;
    double y; 
};

struct RECTANGLE
{
    POINT p1, p2;
};

// funzione che calcola l'area di un rettangolo
double area(const RECTANGLE& r)
{
    double base = abs(r.p2.x - r.p1.x);
    double altezza = abs(r.p2.y - r.p1.y);
    return base * altezza;
}

// funzione che verifica quale rettangolo ha area maggiore
bool verifica(const RECTANGLE& r1, const RECTANGLE& r2)
{
    return area(r1) == area(r2);
    
}

int main()
{
    RECTANGLE r1, r2;

    cout << "Inserisci le coordinate del primo rettangolo (x1 y1 x2 y2): ";
    cin >> r1.p1.x >> r1.p1.y >> r1.p2.x >> r1.p2.y;

    cout << "Inserisci le coordinate del secondo rettangolo (x1 y1 x2 y2): ";
    cin >> r2.p1.x >> r2.p1.y >> r2.p2.x >> r2.p2.y;

    if (verifica(r1, r2))
        cout << "Il primo rettangolo ha un'area maggiore del secondo." << endl;
        cout<<area(r1)<<endl;
    else
        cout << "Il secondo rettangolo ha un'area maggiore o uguale al primo." << endl;
        cout<<area(r2)<<endl;   

    return 0;
}