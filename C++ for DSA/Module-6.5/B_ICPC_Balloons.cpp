#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int freq[26] = {0};  
        int totalSum = 0;
        for (char ch : str) {
            if (freq[ch - 'A'] == 0) {   
                totalSum += 2;
                freq[ch- 'A']++;
            } else {
                totalSum += 1;
            }
        }

        cout << totalSum << endl;
        
    }
    
    return 0;
}