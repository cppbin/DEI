/** suma elementelor unui vector - DEI **/

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

int suma(int a[], int k, int p)
{
    if(k == p)
        return a[k];
    else
     return suma(a, k, (k+p)/2) + suma(a, (k+p)/2+1, p);
}

int main()
{
    int a[50], n;
    cout << "n = "; cin >> n;
    citireVector(a, n);
    cout << suma(a, 0, n-1);
}
