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
};
bool cmp(Student a, Student b)
{
    if (a.eng_marks > b.eng_marks)
    {
        return true;
    }
    else if (a.eng_marks < b.eng_marks)
    {
        return false;
    }
    else
    {
        if (a.math_marks > b.math_marks)
        {
            return true;
        }
        else if(a.math_marks < b.math_marks)
        {
            return false;
        }
        else{
            if (a.id < b.id)
            {
                return true;
            }
            else{
                return false;
            }
            
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