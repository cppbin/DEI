/** Realizati prin DEI produsul elementelor pozitive ale unui vector
de numere intregi **/

#include <iostream>
using namespace std;

void citireVector(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cin >> v[i];
}

int produsPozitive(int v[], int k, int p)
{
    int p1, p2;
    if(k == p)
    {
        if(v[k] > 0)
            return v[k];
        else return 1;
    }
    else
    {
        p1 = produsPozitive(v, k, (k+p)/2);
        p2 = produsPozitive(v, (k+p)/2+1, p);
        return p1 * p2;
    }
}

int main()
{
    int v[20], n;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    cout << produsPozitive(v, 0, n-1);
}

