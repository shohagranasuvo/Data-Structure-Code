import java.lang.*;
class Food {
    double price;
    String name;

    Food() {}

    Food(double price, String name) {
        this.price = price;
        this.name = name;
    }

    void setPrice(double price) {
        this.price = price;
    }

    void setName(String name) {
        this.name = name;
    }

    double getPrice() {
        return price;
    }

    String getName() {
        return name;
    }

    void showDetails() {
        System.out.println("Name: " + name);
        System.out.println("Price: " + price);
    }
}

class Sweet extends Food {
    String colour;

    Sweet() {}

    Sweet(double price , String name ,String colour) {
        super(price ,name );
        this.colour = colour;
    }

    void setColour(String Colour) {
        this.colour = colour;
    }

    String getColour() {
        return colour;
    }

    void showDetails() {
        super.showDetails();
        System.out.println("Colour: " + colour);
    }
}

public class F{
    public static void main(String[] args) {
        Sweet s1 = new Sweet(100,"Misti","White");
        Sweet s2 = new Sweet(500,"DOI" ,"Black");


        s1.showDetails();
        System.out.println();
        s2.showDetails();
        System.out.println();
    }
}