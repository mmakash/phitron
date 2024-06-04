#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total;
};
bool cmp(Student a, Student b)
{
    if (a.total > b.total)
    {
        return true;
    }
    else if (a.total < b.total)
    {
        return false;
    }
    else
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].cls >> st[i].section >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
        st[i].total = st[i].math_marks + st[i].eng_marks;
    }
    sort(st, st + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<st[i].name<<" "
        <<st[i].cls<<" "<<st[i].section<<" "
        <<st[i].id<<" "<<st[i].math_marks<<" "
        <<st[i].eng_marks<<" "<< endl;
    }
    
    return 0;
}