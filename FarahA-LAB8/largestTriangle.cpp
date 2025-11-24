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

double triangle1 ()
{
    Triangle t1;

    //inserimento coordinate
    cout<<"Inserisci le coordinate del punto a del primo triangolo (con uno spazio in mezzo): ";
    cin>>t1.a.x>>t1.a.y;
    cout<<"Inserisci le coordinate del punto b del primo triangolo (con uno spazio in mezzo): ";
    cin>>t1.b.x>>t1.b.y;
    cout<<"Inserisci le coordinate del punto c del primo triangolo (con uno spazio in mezzo): ";
    cin>>t1.c.x>>t1.c.y;

    //controllo dei punti diversi
    if ((t1.a.x==t1.b.x && t1.a.y==t1.b.y) || (t1.a.x==t1.c.x && t1.a.y==t1.c.y) || (t1.c.x==t1.b.x && t1.c.y==t1.b.y))
    {
        cout<<"Inserisci 3 punti diversi tra loro!"<<endl;
        return 0;
    }

    //distanze tra i punti
    double l_ab = distanza (t1.a, t1.b);
    double l_ac = distanza (t1.a, t1.c);
    double l_bc = distanza (t1.b, t1.c);

    //perimetro
    t1.x2perimetro = l_ab + l_ac + l_bc;
    double perimetro= t1.x2perimetro /2;

    //area
    t1.area = Area(l_ab, l_ac, l_bc, perimetro);

    return t1.area;
}

double triangle2 ()
{
    Triangle t2;

    //inserimento coordinate
    cout<<"Inserisci le coordinate del punto a del secondo triangolo (con uno spazio in mezzo): ";
    cin>>t2.a.x>>t2.a.y;
    cout<<"Inserisci le coordinate del punto b del secondo triangolo (con uno spazio in mezzo): ";
    cin>>t2.b.x>>t2.b.y;
    cout<<"Inserisci le coordinate del punto c del secondo triangolo (con uno spazio in mezzo): ";
    cin>>t2.c.x>>t2.c.y;

    //controllo dei punti diversi
    if ((t2.a.x==t2.b.x && t2.a.y==t2.b.y) || (t2.a.x==t2.c.x && t2.a.y==t2.c.y) || (t2.c.x==t2.b.x && t2.c.y==t2.b.y))
    {
        cout<<"Inserisci 3 punti diversi tra loro!"<<endl;
        return 0;
    }

    //distanze tra i punti
    double l_ab = distanza (t2.a, t2.b);
    double l_ac = distanza (t2.a, t2.c);
    double l_bc = distanza (t2.b, t2.c);

    //perimetro
    t2.x2perimetro = l_ab + l_ac + l_bc;
    double perimetro= t2.x2perimetro /2;

    //area
    t2.area = Area(l_ab, l_ac, l_bc, perimetro);

    return t2.area;
}

double triangle3 ()
{
    Triangle t3;

    //inserimento coordinate
    cout<<"Inserisci le coordinate del punto a del terzo triangolo (con uno spazio in mezzo): ";
    cin>>t3.a.x>>t3.a.y;
    cout<<"Inserisci le coordinate del punto b del terzo triangolo (con uno spazio in mezzo): ";
    cin>>t3.b.x>>t3.b.y;
    cout<<"Inserisci le coordinate del punto c del terzo triangolo (con uno spazio in mezzo): ";
    cin>>t3.c.x>>t3.c.y;

    //controllo dei punti diversi
    if ((t3.a.x==t3.b.x && t3.a.y==t3.b.y) || (t3.a.x==t3.c.x && t3.a.y==t3.c.y) || (t3.c.x==t3.b.x && t3.c.y==t3.b.y))
    {
        cout<<"Inserisci 3 punti diversi tra loro!"<<endl;
        return 0;
    }

    //distanze tra i punti
    double l_ab = distanza (t3.a, t3.b);
    double l_ac = distanza (t3.a, t3.c);
    double l_bc = distanza (t3.b, t3.c);

    //perimetro
    t3.x2perimetro = l_ab + l_ac + l_bc;
    double perimetro= t3.x2perimetro /2;

    //area
    t3.area = Area(l_ab, l_ac, l_bc, perimetro);

    return t3.area;
}

int main ()
{
    double AreaT1=triangle1();
    double AreaT2=triangle2();
    double AreaT3=triangle3();

    if(AreaT1>AreaT2 && AreaT1>AreaT3)
    {
        cout<<"Il primo triangolo è il più grande, con area di valore "<<AreaT1<<endl;
    }
    if(AreaT2>AreaT1 && AreaT2>AreaT3)
    {
        cout<<"Il secondo triangolo è il più grande, con area di valore "<<AreaT2<<endl;
    }
    if(AreaT3>AreaT1 && AreaT3>AreaT2)
    {
        cout<<"Il terzo triangolo è il più grande, con area di valore "<<AreaT3<<endl;
    }

    return 0;
}