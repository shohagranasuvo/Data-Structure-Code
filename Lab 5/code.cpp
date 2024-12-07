#include <bits/stdc++.h>
using namespace std;

struct Student {
    int Student_id;
    string name;
    double cgpa;
    string dob;

    Student() {
        Student_id = 101;
        name = "Suvo";
        cgpa = 3.12;
        dob = "22-11-2002";
    }

    Student(int Student_id, string name, double cgpa, string dob) {
            this->Student_id = Student_id;
         this->name = name;
                this->cgpa = cgpa;
         this->dob = dob;
    }

      void setID(int Student_id) {
    this->Student_id = Student_id;
    }

        void setName(string name) {
    this->name = name;
    }

    void setCgpa(double cgpa) {
 this->cgpa = cgpa;
    }




      int getID() {
  return this->Student_id;
    } 

    string getName() {
        return this->name;
    }

      double getCgpa() {
        return this->cgpa;
    }

    string getDob() {
        return this->dob;
    }

    void display() {
        cout << "ID = " << this->Student_id << "\nName = " << this->name
             << "\nCGPA = " << this->cgpa << "\nDOB = " << this->dob << "\n";
    }

    void findProbation() {
        if (this->cgpa < 2.5) {
            cout << "ID " << this->Student_id << " and Name = " << this->name << " is on probation.\n";
        }
    }
};


 int binarySearch(Student st[], int n, int key) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (st[mid].Student_id == key) {

            return mid;
        } else if (st[mid].Student_id < key)
         {
            low = mid + 1; 
        } else {
            high = mid - 1; 

        }
    }
    return -1; 
}

int main() {
    cout << "How many students' data do you want to store? ";
    int x;
    cin >> x;

      Student st[x];
    for (int i = 0; i < x; i++) {
        cout << "Enter " << i + 1  << "th student's data:\n";



            cout << "Enter ID: ";
        cin >> st[i].Student_id;
            cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, st[i].name);
             cout << "Enter CGPA: ";
        cin >> st[i].cgpa;
             cout << "Enter DOB (DD-MM-YYYY): ";
         cin >> st[i].dob;


    }

    
       sort(st, st + x, [](Student a, Student b) { return a.Student_id < b.Student_id; });

         cout << "\nAll student data:\n";
    for (int i = 0; i < x; i++) {
        cout << i + 1 << "th student data:\n";



        st[i].display();


    } 

   
      cout << "\nEnter the Student ID to search: ";
         int search_id;
               cin >> search_id;

    int result = binarySearch(st, x, search_id);
    if (result != -1) {

        cout << "\nStudent found:\n";




        st[result].display();
    } else {


        cout << "\nStudent with ID " << search_id << " not found.\n";


    }

              return 0;
}
