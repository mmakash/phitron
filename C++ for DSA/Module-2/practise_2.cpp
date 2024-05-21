#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4] = {10,20,30,40};

    int *ptr = arr;

    for (int i = 0; i < 4; i++)
    {
        cout << i << " " << *(ptr + i) << endl;
    }
    
}