import java.util.Scanner;

class Food {
    String name;
    double price;
    String category;

    Food(String name, double price, String category) {
        this.name = name;
        this.price = price;
        this.category = category;
    }

    void display() {
        System.out.println("🍽️ " + name + " | $" + price + " | " + category);
    }
}

public class jj {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("🍔 Enter number of food items: ");
        int n = sc.nextInt();
        sc.nextLine(); // flush the newline

        Food[] menu = new Food[n];
        double total = 0;

        System.out.println("\n🔁 Enter food details:\n");

        for (int i = 0; i < n; i++) {
            System.out.println("Food " + (i + 1) + ":");

            System.out.print("🏷️ Name: ");
            String name = sc.nextLine();

            System.out.print("💰 Price: ");
            double price = sc.nextDouble();
            sc.nextLine(); // flush

            System.out.print("📦 Category: ");
            String category = sc.nextLine();

            menu[i] = new Food(name, price, category);
            total += price;

            System.out.println();
        }

        System.out.println("🧾 --- Food Menu ---");
        for (int i = 0; i < n; i++) {
            menu[i].display();
        }

        System.out.println("\n💵 Total cost of all items: $" + total);

        sc.close();
    }
}
