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
    const int numStudents = 3; // Number of students
    Student* students[numStudents]; // Array of Student pointers

    // Create students using a loop
    string names[] = {"Alice", "Bob", "Charlie"};
    int ages[] = {20, 21, 22};

    for (int i = 0; i < numStudents; i++) {
        students[i] = new Student(names[i], ages[i]); // Dynamically create students
    }
 
    // Display student details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i]->display();
    }

    // Show total students
    cout << "\n";
    Student::showTotal();

    // Clean up memory
      for (int i = 0; i < numStudents; i++) {
        delete students[i]; // Delete students
    }
   

    // Show total students after deletion
    cout << "\nAfter deletion:\n";
    Student::showTotal();

    return 0;
}