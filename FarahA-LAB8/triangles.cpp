#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Point
{
    int x, y;
};
struct Triangle
{
    Point a, b, c;
    double area;
    double x2perimetro;
};

double distanza (Point p1, Point p2)
{
    double l;
    l=sqrt(pow((p2.x-p1.x), 2) + pow((p2.y-p1.y), 2));
    return l;
}

double Area (int ab, int ac, int bc, double p)
{
    double area;
    area=sqrt(p*(p-ab)*(p-ac)*(p-bc));
    return area;
}

int main ()
{
    Triangle t;

    //inserimento coordinate
    cout<<"Inserisci le coordinate del punto a (con uno spazio in mezzo): ";
    cin>>t.a.x>>t.a.y;
    cout<<"Inserisci le coordinate del punto b (con uno spazio in mezzo): ";
    cin>>t.b.x>>t.b.y;
    cout<<"Inserisci le coordinate del punto c (con uno spazio in mezzo): ";
    cin>>t.c.x>>t.c.y;

    //controllo dei punti diversi
    if ((t.a.x==t.b.x && t.a.y==t.b.y) || (t.a.x==t.c.x && t.a.y==t.c.y) || (t.c.x==t.b.x && t.c.y==t.b.y))
    {
        cout<<"Inserisci 3 punti diversi tra loro!"<<endl;
        return 0;
    }

    //distanze tra i punti
    double l_ab = distanza (t.a, t.b);
    double l_ac = distanza (t.a, t.c);
    double l_bc = distanza (t.b, t.c);

    //perimetro
    t.x2perimetro = l_ab + l_ac + l_bc;

    double perimetro= t.x2perimetro /2;
    //area
    t.area = Area(l_ab, l_ac, l_bc, perimetro);  

    //stampa informazioni
    cout<<"Il perimetro vale: "<<t.x2perimetro<<endl;
    cout<<"L'area vale: "<<t.area<<endl;

    return 0;

}