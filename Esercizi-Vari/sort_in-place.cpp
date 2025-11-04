void insertionSort(vector<int> &seq) //seq é IN-OUT
{
    int location, temp;
    for (int f=1; f<seq.size(); f++)
    {
        if (seq[f]<seq[f-1])
        {
            temp=seq[f];
            location=f;
            do
            {
                seq[location]=seq[location-1];
                location--;
            }while (location>0 && seq[location-1]>temp);
            seq[location]=temp;
        } //end if
    }//end for
}//end insertionSort