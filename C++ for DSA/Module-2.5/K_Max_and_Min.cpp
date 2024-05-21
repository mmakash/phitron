#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxNumber = a;
    if (b > maxNumber)
    {
        maxNumber = b;
    }
    if (c > maxNumber)
    {
        maxNumber = c;
    }
    int minNumber = a;
    if (b < minNumber)
    {
        minNumber = b;
    }
    if (c < minNumber)
    {
        minNumber = c;
    }
    cout << minNumber << " " << maxNumber << endl;
    return 0;
}