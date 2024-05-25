#include <bits/stdc++.h>
using namespace std;
// eta dekhe korte hobe 
// https://phitron.gitbook.io/c/undefined-12/undefined-7
bool isPalindrom(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }

        i++;
        j--;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (isPalindrom(a, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}