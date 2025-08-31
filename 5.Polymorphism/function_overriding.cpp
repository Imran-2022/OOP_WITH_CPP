#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Eating..." << std::endl;
    }
};

// Derived class, inheriting from Animal
class Dog : public Animal {
public:
    // Overriding the eat() method from the base class
    void eat() {
        std::cout << "Eating bread..." << std::endl;
    }
};

int main() {
    Dog d; // Creating an object of the Dog class
    d.eat(); // Calls the overridden eat() method in the Dog class

    return 0;
}