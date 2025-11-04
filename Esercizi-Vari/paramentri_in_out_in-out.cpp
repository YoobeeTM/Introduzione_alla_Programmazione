int chiedi_base_altezza (float& b, float&h)
{
    cout<<"Dammi base e altezza: ";
    cin>>b>>h;
    if (!cin) return 1; // errore di input
    return 0;           // tutto ok
}

int main ()
{
    float base, altezza;
    if (chiedi_base_altezza (base, altezza) ==0)
    {
        cout<<"L'area del rettangolo è: "<<base*altezza<<endl;
        return 0;
    }
    else
    {
        cout<<"Errore di input"<<endl;
        return 1;
    }
}