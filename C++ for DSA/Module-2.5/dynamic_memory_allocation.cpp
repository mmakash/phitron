#include <bits/stdc++.h>
using namespace std;

int *get_array(int n)
// ekhane jehetu address return hobe a pointer theke tai function ekti pointer
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int *p = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}