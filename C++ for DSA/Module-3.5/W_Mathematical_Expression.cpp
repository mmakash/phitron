#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    switch (s) {
        case '+': {
            int sum = a + b;
            if (sum == c) {
                cout << "Yes" << endl;
            } else {
                cout << sum << endl;
            }
            break;
        }
        case '-': {
            int minus = a - b;
            if (minus == c) {
                cout << "Yes" << endl;
            } else {
                cout << minus << endl;
            }
            break;
        }
        case '*': {
            int multiple = a * b;
            if (multiple == c) {
                cout << "Yes" << endl;
            } else {
                cout << multiple << endl;
            }
            break;
        }
        default:
            break;
    }

    return 0;
}
