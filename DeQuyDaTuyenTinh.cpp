#include<stdio.h>
#include<iostream>
using namespace std;
void dayNhiPhan(int i, int n, int* X)
{
    int val;
    for (val = 0; val < 2; val++) 
    {
        X[i] = val;

        if (i == (n - 1)) 
        {
            int j;
            for (j = 0; j < n; j++) 
            {
                cout << X[j];
            }
            cout << "\n";
        }
        else
        {
            dayNhiPhan(i + 1, n, X); 
        }
    }
}

int main()
{
    int n;
    cout << "Nhập n : ";
    cin >> n;

    int X[n];
    cout << "Dãy nhị phân có độ dài " << n << " là:\n";
    dayNhiPhan(0, n, X);
}