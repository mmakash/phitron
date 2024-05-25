#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int total_marks;

    Student(int id, string name, char section, int total_marks) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->total_marks = total_marks;
    }

    Student() {
        this->id = 0;
        this->name = "";
        this->section = ' ';
        this->total_marks = 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        Student sakib, rakib, akib;

        cin >> sakib.id >> sakib.name >> sakib.section >> sakib.total_marks;
        cin >> rakib.id >> rakib.name >> rakib.section >> rakib.total_marks;
        cin >> akib.id >> akib.name >> akib.section >> akib.total_marks;

        Student *highestMarks = &sakib;

        if (rakib.total_marks > highestMarks->total_marks || 
            (rakib.total_marks == highestMarks->total_marks && rakib.id < highestMarks->id)) {
            highestMarks = &rakib;
        }

        if (akib.total_marks > highestMarks->total_marks || 
            (akib.total_marks == highestMarks->total_marks && akib.id < highestMarks->id)) {
            highestMarks = &akib;
        }

        cout << highestMarks->id << " " 
             << highestMarks->name << " " 
             << highestMarks->section << " " 
             << highestMarks->total_marks << endl;
    }

    return 0;
}
