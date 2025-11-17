#include <iostream>
#include <string>

using namespace std;

int popolazione_nuova (int p_iniziale, int perc_p_nate, int perc_p_morte, int p_andate, int p_arrivate)
{
    int p_trasferite = p_arrivate - p_andate;
    int p_nate = (p_iniziale*perc_p_nate)/100;
    int p_morte = (p_iniziale*perc_p_morte)/100;
    int p_finali = p_iniziale - p_morte+p_nate + p_trasferite;
    return p_finali;

}

int main ()
{
    int p_iniziale;
    int perc_p_nate;
    int perc_p_morte;
    int p_andate;
    int p_arrivate;

    cout<<"Inserisci la popolazione iniziale: ";
    cin>>p_iniziale;
    do{
        cout<<"\nInserisci la percentuale di nascita (da -100% a 100%): ";
        cin>>perc_p_nate;
    } while(perc_p_nate<-100 || perc_p_nate>100);

    do{
        cout<<"\nInserisci la percentuale di morte (da -100% a 100%): ";
        cin>>perc_p_morte;
    } while(perc_p_morte<-100 || perc_p_morte>100);

    do{
        cout<<"\nInserisci le persone arrivate (N>=0): ";
    cin>>p_arrivate;
    } while(p_arrivate<0);

    do{
        cout<<"\nInserisci le persone andate via (N>=0): ";
    cin>>p_andate;
    } while(p_andate<0);

    int new_pop = popolazione_nuova (p_iniziale, perc_p_nate, perc_p_morte, p_andate, p_arrivate);
    cout<<"\nLa popolazione aggiornata è di: "<<new_pop<<endl;
}