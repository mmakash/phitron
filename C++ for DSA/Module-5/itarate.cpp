#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string::iterator it;
    for ( it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}