#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    while (str.find("EGYPT") != -1)
    {
        str.replace(str.find("EGYPT"),5," ");
    }
    // int t = str.find('EGYPT');
    // str.replace(t,5," ");
    cout << str << endl;
    
    return 0;
}