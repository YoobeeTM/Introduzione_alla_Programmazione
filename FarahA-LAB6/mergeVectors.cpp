#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int x = (rand() % 20) + 1;
    vector<int> s1(x);

    for (int i = 0; i < x; i++)
    {
        int n1 = (rand() % 255);
        s1[i] = n1;
    }

    int y = (rand() % 20) + 1;
    vector<int> s2(y);

    for (int i = 0; i < y; i++)
    {
        int n2 = (rand() % 255);
        s2[i] = n2;
    }

    cout << "Vector s1 (generato) = { ";
    for (size_t i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
        if (i != s1.size() - 1) cout << ", ";
    }
    cout << " }" << endl;

    cout << "Vector s2 (generato) = { ";
    for (size_t i = 0; i < s2.size(); i++)
    {
        cout << s2[i];
        if (i != s2.size() - 1) cout << ", ";
    }
    cout << " }" << endl;

    for (size_t i = 0; i < s1.size() - 1; i++)
    {
        int minIndex = i;
        for (size_t j = i + 1; j < s1.size(); j++)
        {
            if (s1[j] < s1[minIndex])
                minIndex = j;
        }
        int temp = s1[i];
        s1[i] = s1[minIndex];
        s1[minIndex] = temp;
    }

    for (size_t i = 0; i < s2.size() - 1; i++)
    {
        int minIndex = i;
        for (size_t j = i + 1; j < s2.size(); j++)
        {
            if (s2[j] < s2[minIndex])
                minIndex = j;
        }
        int temp = s2[i];
        s2[i] = s2[minIndex];
        s2[minIndex] = temp;
    }

    cout << "Vector s1 (ordinato) = { ";
    for (size_t i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
        if (i != s1.size() - 1) cout << ", ";
    }
    cout << " }" << endl;

    cout << "Vector s2 (ordinato) = { ";
    for (size_t i = 0; i < s2.size(); i++)
    {
        cout << s2[i];
        if (i != s2.size() - 1) cout << ", ";
    }
    cout << " }" << endl;

    vector<int> d;

    for (size_t i = 0; i < s1.size(); i++)
    {
        d.push_back(s1[i]);
    }

    int ultimo_s1 = s1[s1.size() - 1];

    size_t start_index = s2.size();
    for (size_t i = 0; i < s2.size(); i++)
    {
        if (s2[i] > ultimo_s1)
        {
            start_index = i;
            break;
        }
    }

    if (start_index < s2.size())
    {
        for (size_t i = start_index; i < s2.size(); i++)
        {
            d.push_back(s2[i]);
        }
    }

    cout << "Vector d (s1 + s2 da primo valore maggiore di s1) = { ";
    for (size_t i = 0; i < d.size(); i++)
    {
        cout << d[i];
        if (i != d.size() - 1) cout << ", ";
    }
    cout << " }" << endl;

 return 0;
}