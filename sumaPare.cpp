// suma elementelor pare - DEI

#include <iostream>
using namespace std;

void citireVector(int x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "x["<<i<<"]=";
        cin >> x[i];
    }
}

int sumaPare(int x[], int k, int p)
{
    int s1, s2;
    if(k == p)
    {
        if(x[k] % 2 == 0) return x[k];
        else return 0;
    }
    else
    {
        s1 = sumaPare(x, k, (k+p)/2);
        s2 = sumaPare(x, (k+p)/2+1, p);
        return s1+s2;
    }
}

int main()
{
    int x[30], n;
    cout << "n = "; cin >> n;
    citireVector(x, n);
    cout << "suma pare= " << sumaPare(x, 0, n-1);
    return 0;
}



