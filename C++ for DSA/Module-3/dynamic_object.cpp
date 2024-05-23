#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};
int main()
{
    Student(120, 10, 4.3);
    Student *karim = new Student(120, 10, 4.3);
    cout << karim->roll << " " << karim->cls << " " << karim->cgpa << endl;
    return 0;
}