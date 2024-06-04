#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int sumFirstThree = 0;
        int sumLastThree = 0;
        for (int i = 0; i < 3; i++)
        {
            sumFirstThree += str[i] - '0';
        }
        for (int i = str.size() - 3; i < str.size(); i++)
        {
            sumLastThree += str[i] - '0';
        }
        if (sumFirstThree == sumLastThree)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}