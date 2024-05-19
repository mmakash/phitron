#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[100];
    // cin >> s;
    int x;
    cin >> x;
    getchar();
    cin.getline(s,100);
    cout << x << endl;
    cout << s << endl;
    return 0;
}