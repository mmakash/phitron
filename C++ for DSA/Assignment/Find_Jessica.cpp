#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string word;
    int flag = 0;
    while (ss>>word)
    {
        if (word == "Jessica")
        {
            flag = 1;
        }
        
    }
    if (flag==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    
    return 0;
}