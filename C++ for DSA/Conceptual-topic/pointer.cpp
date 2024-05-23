#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5;
    /*kono variable er address evabe store
     kore rakhai hocche pointer*/ 
    int * a_ptr = &a; 
    // * a_ptr = 10; 
    cout << a << endl;
    cout << &a << endl;
    cout << a_ptr << endl;
    cout << *a_ptr << endl;/*address theke value ber kore anlam tai eta d-referencing*/

}