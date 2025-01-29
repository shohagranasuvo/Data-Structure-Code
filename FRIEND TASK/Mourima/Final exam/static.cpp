#include <iostream>
using namespace std;

class Example {
    static int count; // Static variable to track objects
    int id;

public:
 
  
    // Constructor
    Example() {
        count++;
        id = count;
        cout << "Constructor called for object " << id << endl;
    }

    // Destructor
    ~Example() {
        cout << "Destructor called for object " << id << endl;
    }

    // Static method to get the count
    static void displayCount() {
        cout << "Number of objects created so far: " << count << endl;
    }
};

// Initialize static variable
int Example :: count = 0 ;

int main() {
    cout << "Start of program" << endl;

    Example obj1;       // Constructor called
    obj1.displayCount();

   
        Example obj2;   // Constructor called
        Example::displayCount();

        Example obj3;   // Constructor called
        Example::displayCount();
                    // Destructor called for obj3 and obj2 (block ends)

    Example::displayCount();

    cout << "End of program" << endl;

    return 0;           // Destructor called for obj1
}