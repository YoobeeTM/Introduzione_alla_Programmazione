bool ric_binari_aux(const vector<int> &v, int elem, int first, int last)
{
    if(first>last) return false;
    int mid=(first+last)/2;
    if (elem==v[mid]) return true     //trovato
    else if (elem < v[mid])
    {
        return ric_binari_aux(array, elem, first, last, mid-1);
    }
    else return ric_binari_aux(array, elem, mid+1, last);
}

bool ric_ninaria(cost vector<int> &v, int elem)
{
    return ric_binari_aux(v, elem, 0, v.size()-1);
}