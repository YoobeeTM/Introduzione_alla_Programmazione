#include <iostream>
using namespace std;


typedef int T;
stuct cell
{
    T info;
    cell*next;
};
typedef cell* List;

void Reverse(List &l)
{
    List l1=nullptr;
    while (l!=nullptr)
    {
        //sgancio il primo elemento di l e lo inserisco in testa a l1
        cell* aux = l;
        l = l->next;
        aux->next = l1;
        l1=aux;
    }
    l=l1;
}

int main()
{
    //creo una lista vuota
    List L=nullptr;
    //riempio L in qualche modo
    ...
    Reverse(L);
    //stampo L
    return 0;

}