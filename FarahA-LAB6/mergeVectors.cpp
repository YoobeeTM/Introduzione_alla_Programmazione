#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    //S1 input
    srand(time(NULL));
    int x = (rand()%10);
    
    vector<int> s1(x);
    int size1 = s1.size();

    for (int i = 0; i < size1; i++)
    {
        int n1 = (rand()%256);
        s1[i] = n1;
    }

    //S2 input
    int y = (rand()%10);
    
    vector<int> s2(y);
    int size2 = s2.size();

    for (int i = 0; i < size2; i++)
    {
        int n2 = (rand()%256);
        s2[i] = n2;
    }
    
    //stampa s1 generato
    cout<<"Vector s1 (generato) = { ";
    for (size_t i=0; i<s1.size(); i++)
    {
        cout<<s1[i];
        if (i!=s1.size()-1) cout<<", ";
    }
    cout<<" }"<<endl;

    //stampa s1 generato
    cout<<"Vector s2 (generato) = { ";
    for (size_t i=0; i<s2.size(); i++)
    {
        cout<<s2[i];
        if (i!=s2.size()-1) cout<<", ";
    }
    cout<<" }"<<endl;

    //ordinamento s1
    int minIndex1;
    for (size_t i = 0; i < s1.size() - 1; i++) 
    {
        minIndex1 = i;
        for (size_t j = i + 1; j < s1.size(); j++) 
        {
            if (s1[j] < s1[minIndex1]) 
            {
                minIndex1 = j;
            }
        }
        int temp = s1[i];
        s1[i] = s1[minIndex1];
        s1[minIndex1] = temp;
    }

    //stampa s1 ordinato
    cout<<"Vector s1 (ordinato) = { ";
    for (size_t i=0; i<s1.size(); i++)
    {
        cout<<s1[i];
        if (i!=s1.size()-1) cout<<", ";
    }
    cout<<" }"<<endl;

    //ordinamento s2
    int minIndex2;
    for (size_t i = 0; i < s2.size() - 1; i++) 
    {
        minIndex2 = i;
        for (size_t j = i + 1; j < s2.size(); j++) 
        {
            if (s2[j] < s2[minIndex2]) 
            {
                minIndex2 = j;
            }
        }
        int temp = s2[i];
        s2[i] = s2[minIndex2];
        s2[minIndex2] = temp;
    }

    //stampa s1 ordinato
    cout<<"Vector s2 (ordinato) = { ";
    for (size_t i=0; i<s2.size(); i++)
    {
        cout<<s2[i];
        if (i!=s2.size()-1) cout<<", ";
    }
    cout<<" }"<<endl;
    
    //stampa d (s1+s2)
    vector <int> d(0);
    for (int i=0; i<x; i++)
    {
        d.push_back(s1[i]);
    }
    for (int i=0; i<y; i++)
    {
        d.push_back(s2[i]);
    }

    cout<<"Vector d = { ";
    for (size_t i=0; i<d.size(); i++)
    {
        cout<<d[i];
        if (i!=d.size()-1) cout<<", ";
    }
    cout<<" }"<<endl;
    
    return 0;
}