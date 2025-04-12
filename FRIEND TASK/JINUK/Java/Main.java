import java.util.Scanner;


// 🎓 Student class
class Student {
    String name;
    int age;

    // 🧱 Constructor
    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // 📢 Display method
    void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}

// 🚀 Main class
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

      
        System.out.print("Enter number of students: ");
        int n = sc.nextInt();

        // 🎯 Creating an array of Student objects
        Student[] students = new Student[n];

        // 🔁 Taking input in loop
        for (int i = 0; i < n; i++) {
            sc.nextLine(); // 🔁 consume leftover newline
            System.out.println("Enter details for Student " + (i + 1));

            System.out.print("Name: ");
            String name = sc.nextLine();

            System.out.print("Age: ");
            int age = sc.nextInt();

            // 🏗️ Create and store object in array
            students[i] = new Student(name, age);
        }

        // 📤 Display all student info
        System.out.println("\n--- Student Details ---");
        for (int i = 0; i < n; i++) {
            students[i].displayInfo();
        }

        sc.close();
    }
}
