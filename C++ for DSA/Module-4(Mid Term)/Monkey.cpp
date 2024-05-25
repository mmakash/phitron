#include <bits/stdc++.h>
using namespace std;

int main() {
    char str1[1000005];
    while (cin.getline(str1, 1000005)) {
        int count[26] = {0}; 
        int n = strlen(str1);

        for (int i = 0; i < n; ++i) {
            if (str1[i] >= 'a' && str1[i] <= 'z') { 
                ++count[str1[i] - 'a'];
            }
        }

        for (int i = 0; i < 26; ++i) {
            while (count[i]--) {
                cout << char(i + 'a');
            }
        }
        cout << endl;
    }
    return 0;
}
