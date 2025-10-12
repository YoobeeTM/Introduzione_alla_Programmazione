#include <iostream>
#include <string>
using namespace std;

const float pi = 3.14;

float area_rett(float b, float h)
{
    return b * h;
}

float area_tri(float b, float h)
{
    return b * h / 2.0;
}

float area_cerchio(float r)
{
    return r * r * pi;
}

char scegli()
{
    cout << "Quale area vuoi calcolare:\nRettangolo: r\nTriangolo: t\nCerchio: c\n";
    char ris;
    cin >> ris;
    return ris;
}

void stampa_area(float area)
{
    cout << "L'area é: " << area << endl;
}

int main()
{
    char ris = scegli();
    float area = 0; // visibile per tutto main()

    if (ris == 'c')
    {
        cout << "Inserisci il raggio del cerchio: ";
        float r;
        cin >> r;
        area = area_cerchio(r);
    }
    else if (ris == 'r' || ris == 't')
    {
        cout << "Inserisci base e altezza: ";
        float b, h;
        cin >> b >> h;

        if (ris == 'r')
        {
            area = area_rett(b, h);
        }
        else
        {
            area = area_tri(b, h);
        }
    }
    else
    {
        cout << "Scelta non valida";
        return 1;
    }

    stampa_area(area);

    return 0;
}