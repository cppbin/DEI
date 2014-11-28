/** minimul elementelor unui vector - DEI **/

#include <iostream>
using namespace std;

void citireVector(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
}

int minim(int a[], int k, int p)
{
    int m1, m2;
    if(k == p)
        return a[k];
    else
    {
        m1 = minim(a, k, (k+p)/2);
        m2 = minim(a, (k+p)/2+1, p);
        if(m1 < m2)
            return m1;
        else return m2;
    }
}

int main()
{
    int a[50], n;
    cout << "n = "; cin >> n;
    citireVector(a, n);
    cout << minim(a, 0, n-1);
}
