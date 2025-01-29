#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    // Static variables
    static int totalStudents;
    static int nextRollNumber;

    // General (non-static) variables
    string name;
    int rollNumber;
    int age;

    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        rollNumber = ++nextRollNumber;
        totalStudents++;
    }

    // Member function to display student details
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Age: " << age << endl;
    }

    // Static member function to display total number of students
    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }
};

// Initialize static variables
int Student::totalStudents = 0;
int Student::nextRollNumber = 1;

int main() {
    // Create some Student objects
    Student s1("Alice", 20);
    Student s2("Bob", 21);
    Student s3("Charlie", 22);

    // Display student details
    s1.display();
    s2.display();
    s3.display();

    // Display total number of students using static function
    Student::displayTotalStudents();

    return 0;
}