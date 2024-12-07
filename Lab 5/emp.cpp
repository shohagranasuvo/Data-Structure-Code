#include <iostream>
#include <vector>
using namespace std;

struct emp {
    int id;
    string name;
    double salary;
    string dob;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter DOB: ";
        cin >> dob;
    }

    void display() const {
        cout << "ID = " << id 
             << "\nName = " << name 
             << "\nSalary = " << salary 
             << "\nDOB = " << dob << endl;
    }
};

int main() {
    int x;
    cout << "Total number of employees: ";
    cin >> x;

    vector<emp> employees(x);

    
    for (int i = 0; i < x; i++) {
        cout << "Employee " << i + 1 << ":\n";
        employees[i].input();
    }

   
    cout << "\nEmployee Details:\n";
    for (const auto& e : employees) {
        e.display();
        cout << endl;
    }

    
    double totalSalary = 0;
    for (const auto& e : employees) {
        totalSalary += e.salary;
    }

    cout << "Average Salary: " << totalSalary / x << endl;

    return 0;
}
