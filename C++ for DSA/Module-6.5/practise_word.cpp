#include<bits/stdc++.h>
using namespace std;
bool containsAlpha(string word){
    for (char ch:word)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            return true;
        }
        return false;
        
    }
};
int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word)
    {
       
         if (containsAlpha(word)) {
            count++;
        }
    }
     cout << count << endl;
    return 0;
}