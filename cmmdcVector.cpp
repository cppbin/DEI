/** cmmdc intr-un vector de numere intregi **/

#include <iostream>
using namespace std;

void citireVector(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cin >> v[i];
}

int cmmdc(int m, int n)
{
    while(m != n)
    {
        if(m > n) m = m - n;
        else n = n - m;
    }
    return m;
}

int cmmdcV(int v[], int k, int p)
{
    int c1, c2;
    if(k == p)
        return v[k];
    else
    {
        c1 = cmmdcV(v, k, (k+p)/2);
        c2 = cmmdcV(v, (k+p)/2+1, p);
        return cmmdc(c1, c2);
    }
}

int main()
{
     int v[20], n;
     cout << "n = "; cin >> n;
     citireVector(v, n);
     cout << "CMMDC = " << cmmdcV(v, 0, n-1);
     return 0;
}

