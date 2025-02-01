#include <iostream>
#include <string>
using namespace std;

class Manager {
private:
    int id;
    double salary;
    int totalSales;

public:
    // Default constructor
    Manager() {
        cout << "Empty Constructor called" << endl;
    }

    // Parameterized constructor
    Manager(int id, double salary, int totalSales) {
        cout << "Parameterized Constructor called" << endl;
        this->id = id;
        this->salary = salary;
        this->totalSales = totalSales;
    }

    // Setters
    void setId(int id) {
        this->id = id;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    void setTotalSales(int totalSales) {
        this->totalSales = totalSales;
    }

    // Getters
    int getId() {
        return id;
    }

    double getSalary() {
        return salary;
    }

    int getTotalSales() {
        return totalSales;
    }

    // Calculate the annual salary
    double annualSalary() {
        double bonus = 0.02 * totalSales;
        return salary * 12 + bonus;
    }

    // Show manager information
    void showManagerInfo() {
        cout << "Manager ID: " << id << endl;
        cout << "Monthly Salary: $" << salary << endl;
        cout << "Total Sales: " << totalSales << endl;
        cout << "Yearly Salary: $" << annualSalary() << endl;
    }

    // Destructor
    ~Manager() {
        cout << "Destructor called for Manager ID: " << id << endl;
    }
};

int main() {
    //Manager m1 ;
    // Creating objects using the parameterized constructor
    Manager manager1(201, 6000.0, 50000);
    Manager manager2(202, 7000.0, 75000);
    Manager manager3(203, 8000.0, 100000);

    // Displaying information of each manager
    cout << "Manager 1 Information:" << endl;
    manager1.showManagerInfo();
    cout << "Manager 2 Information:" << endl;
    manager2.showManagerInfo();
    cout << "Manager 3 Information:" << endl;
    manager3.showManagerInfo();

    return 0;
}
