#include<bits/stdc++.h>
using namespace std;
class Student
{
	public:
    string name;
	int roll;
	char section;
	int math_marks;
	int cls;
    Student(string name,int roll,char section,int math_marks,int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
   
};
int main(){
    Student Rounok("Rounok", 101, 'A', 85, 10);
    Student Jahan("Jahan", 102, 'B', 90, 10);
    Student Raisa("Raisa", 103, 'A', 88, 10);
   
     Student *highestMathMarks = &Rounok; // Initialize with the first student
    if (Jahan.math_marks > highestMathMarks->math_marks) {
        highestMathMarks = &Jahan; // Update if Jahan has higher marks
    }
    if (Raisa.math_marks > highestMathMarks->math_marks) {
        highestMathMarks = &Raisa; // Update if Raisa has higher marks
    }
    cout << highestMathMarks->name << endl;
    
    return 0;
}