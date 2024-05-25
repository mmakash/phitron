#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;
    switch (c)
    {
    case '>':
        cout << (a > b ? "Right" : "Wrong") << endl;
        break;
    case '<':
        cout << (a < b ? "Right" : "Wrong") << endl;
        break;
    case '=':
        cout << (a == b ? "Right" : "Wrong") << endl;
        break;
    default:
        break;
    }

    return 0;
}