// #include<iostream>
// #include<algorithm>
// #include<utility>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x = min({a,b,c,d});
    int y = max({a,b,c,d});
    // ekhane swap kora hoyeche extra
    swap(x,y);

    cout << x << " " << y;
}