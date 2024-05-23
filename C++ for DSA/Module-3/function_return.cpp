#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll,int cls,double cgpa){
        this->roll = roll;
        this->cls =cls;
        this->cgpa =cgpa;
    }
};
Student * func(){
    Student rahim(20,10,4.02);
    Student *p = &rahim;
    return p;
}
int main(){
    Student* ans = func();
    cout << (ans->roll) << " " << (ans->cls) << " " << (ans->cgpa) << endl;
    return 0;
}