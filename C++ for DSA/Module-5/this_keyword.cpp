#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name = name;
        this->age=age;
    }
    void Pringt(){
        cout << "Hello" << endl;
    }
};
int main(){
    Person rakib("rakib ahsan",25);
    cout << rakib.name << " " << rakib.age << endl;
    return 0;
}