#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

int main() {
    int n;
    cin >> n;  // Read number of students
    Student a[n];
    
    // Read input for each student
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >>  a[i].roll >> a[i].marks;
    }
    
    // Sort students by roll number in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].marks < a[j].marks) {
                swap(a[i], a[j]);
            }
            if (a[i].marks == a[j].marks)
            {
                if (a[i].roll > a[j].roll)
                {
                    swap(a[i],a[j]);
                }
                
            }
            
        }
    }
    
    // Print the sorted students
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    
    return 0;
}
