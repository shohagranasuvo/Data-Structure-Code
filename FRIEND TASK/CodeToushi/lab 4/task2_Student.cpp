#include <iostream>
using namespace std;

struct Student {
    int id;
    int creditsCompleted;
    double cgpa;
};

int main() {
    
    cout << "Enter the number of students: ";
    int n=10;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Credits Completed: ";
        cin >> students[i].creditsCompleted;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
    }

    cout << "\nStudents with CGPA greater than 3.75:\n";
    for (int i = 0; i < n; i++) {
        if (students[i].cgpa > 3.75) {
            cout << "ID: " << students[i].id << endl;
        }
    }

    cout << "\nStudents with more than 50 credits completed:\n";
    for (int i = 0; i < n; i++) {
        if (students[i].creditsCompleted > 50) {
            cout << "ID: " << students[i].id << endl;
        }
    }

    return 0;
}
