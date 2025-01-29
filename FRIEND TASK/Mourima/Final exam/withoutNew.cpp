#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    // Static variables
    static int totalStudents;
    static int nextRollNumber;

    // General variables
    string name;
    int rollNumber;
    int age;

    // Constructor
    Student(string n, int a) : name(n), age(a) {
        rollNumber = nextRollNumber++;
        totalStudents++;
        cout << "Created: " << name << " (Roll: " << rollNumber << ")\n";
    }

    // Destructor
    ~Student() {
        totalStudents--;
        cout << "Deleted: " << name << " (Roll: " << rollNumber << ")\n";
    }

    // Display student details
    void display() {
        cout << "Name: " << name << ", Roll: " << rollNumber << ", Age: " << age << endl;
    }

    // Static function to display total students
    static void showTotal() {
        cout << "Total Students: " << totalStudents << endl;
    }
};

// Initialize static variables
int Student::totalStudents = 0;
int Student::nextRollNumber = 1;

int main() {
    const int numStudents = 3;

    // Create students without using `new`
    Student students[numStudents] = {  Student("Alice", 20),Student("Bob", 21),Student("Charlie", 22)  };


    // Display student details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].display();
    }

    // Show total students
    cout << "\n";
    Student::showTotal();

    // Destructor will be called automatically as objects go out of scope

    return 0;
}
