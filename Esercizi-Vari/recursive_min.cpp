int  recursive_min_all (vector <int> A)
{
    recursive_min(A, s-1)
}

int recursive_min(vector <int> A, int s)
{
    if (s<=0 || s>A.size()) throw ERROR;
    if (s==1) return A[0];                  //caso base: sequenza vuota
    else
    {
        int aux = recursive_min(A, s-1);    //minimo dei precedenti
        if (aux<A[s-1]) return aux;
        else return A[s-1];

    }
}