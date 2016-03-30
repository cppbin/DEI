#include <iostream>
using namespace std;

void citireVector(int x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "x[" << i << "]= ";
        cin >> x[i];
    }
}

int contork(int x[], int s, int d, int k)
{
    int c1, c2;
    if(s == d)
    {
        if(x[s] % k == 0)
            return 1;
        else return 0;
    }
    else
    {
        c1 = contork(x, s, (s+d)/2, k);
        c2 = contork(x, (s+d)/2+1, d, k);
        return c1+c2;
    }
}

int main()
{
    int x[30], n, k;
    cout << "n = "; cin >> n;
    cout << "k = "; cin >> k;
    citireVector(x, n);
    cout << "nr elemente divizibile cu k=" << contork(x, 0, n-1, k);
    return 0;
}



