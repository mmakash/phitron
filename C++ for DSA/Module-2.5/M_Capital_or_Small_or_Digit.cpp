#include <bits/stdc++.h>
using namespace std;
int main()
{
    char input;
    cin >> input;
    if (input >= '0' && input <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (input >= 'A' && input <= 'Z')
        {
            cout << "IS CAPITAL" << endl;
        }
        else if (input >= 'a' && input <= 'z')
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}