// Base class
class Animal {
    // Method to be overridden in subclasses
    public void speak() {
        System.out.println("Animal speaks");
    }
}

// Subclass 1
class Lion extends Animal {
    // Override the speak method
    @Override
    public void speak() {
        System.out.println("Lion roars");
    }
}

// Subclass 2
class Elephant extends Animal {
    // Override the speak method
    @Override
    public void speak() {
        System.out.println("Elephant trumpets");
    }
}

// Subclass 3
class Penguin extends Animal {
    // Override the speak method
    @Override
    public void speak() {
        System.out.println("Penguin honks");
    }
}

// Main class
public class java {
    public static void main(String[] args) {
        // Create instances of each animal type
        Animal lion = new Lion();
        Animal elephant = new Elephant();
        Animal penguin = new Penguin();

        // Call the speak method for each animal
        lion.speak();
        elephant.speak();
        penguin.speak();
    }
}