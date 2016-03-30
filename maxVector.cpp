// maximul elementelor unui vector - DEI

#include <iostream>
using namespace std;

void citireVector(int x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "x["<<i<<"]= ";
        cin >> x[i];
    }
}

int maxVector(int x[], int k, int p)
{
    int max1, max2;
    if(k == p)
        return x[k];
    else
    {
        max1 = maxVector(x, k, (k+p)/2);
        max2 = maxVector(x, (k+p)/2+1, p);
        if(max1 > max2)
            return max1;
        else return max2;
    }
}

int main()
{
    int x[30], n;
    cout << "n = "; cin >> n;
    citireVector(x, n);
    cout << maxVector(x, 0, n-1);
    return 0;
}
