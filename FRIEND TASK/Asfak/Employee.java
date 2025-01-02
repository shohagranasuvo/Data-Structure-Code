

public class Employee {

    private String name;
    private int id;
    private double monthlySalary;

    Employee() {
        this.name = "Asfak";
        this.id = 1;
        this.monthlySalary = 5000;
    }

    Employee(String name, int id, double monthlySalary) {
        this.name = name;
        this.id = id;
        this.monthlySalary = monthlySalary;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getId() {
        return id;
    }

    public void setMonthlySalary(double monthlySalary) {
        this.monthlySalary = monthlySalary;
    }

    public double getMonthlySalary() {
        return monthlySalary;
    }

    public void display() {
        System.out.println("Employee Name: " + this.name);
        System.out.println("Employee ID: " + this.id);
        System.out.println("Monthly Salary: " + this.monthlySalary);
    }

    public void yearlySalaryWithBonus(){

        double total =((((this.monthlySalary *30)/100)*2) +( 12*this.monthlySalary));

        System.out.println("Yearly salary with bonus = "+total);


    }

    public static void main(String[] args) {

        Employee E1= new Employee();

        E1.setName("Shohag Rana");
        E1.setId(23548973);
        E1.setMonthlySalary(10000);

        E1.display();
        E1.yearlySalaryWithBonus();

        Employee E2 = new Employee("Hasmir", 2345, 5000);
        E2.display();
        E2.yearlySalaryWithBonus();




        
    }



}


