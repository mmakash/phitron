#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[100]; 
    char section;
    int total_marks;


    Student(int id, char* name, char section, int total_marks) {
        this->id = id;
        strcpy(this->name, name); 
        this->section = section;
        this->total_marks = total_marks;
    }

    
    Student() {
        this->id = 0;
        this->name[0] = '\0'; 
        this->section = ' ';
        this->total_marks = 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        Student sakib, rakib, akib;

        char name[100];
        
        cin >> sakib.id >> name >> sakib.section >> sakib.total_marks;
        strcpy(sakib.name, name);
        
        cin >> rakib.id >> name >> rakib.section >> rakib.total_marks;
        strcpy(rakib.name, name);
        
        cin >> akib.id >> name >> akib.section >> akib.total_marks;
        strcpy(akib.name, name);

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
