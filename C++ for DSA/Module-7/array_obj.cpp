#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    // Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].marks >> a[i].roll;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].marks << " " << a[i].roll << endl;
    }

    return 0;
}