#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    bool inside_word = false;
    int cnt  = 0;
    for (char ch:str)
    {
        if (isalpha(ch))
        {
            if (inside_word==false)
            {
                cnt++;
            }
            inside_word = true;
        }
        else{
            inside_word = false;
        }
        
    }
    cout << cnt << endl;
    
    return 0;
}