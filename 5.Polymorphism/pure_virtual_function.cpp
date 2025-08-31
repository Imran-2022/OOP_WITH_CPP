#include <iostream>

// Base class with a pure virtual function, making it an abstract class
class Base {
public:
    virtual void show() = 0; // Pure virtual function
};

// Derived class that provides an implementation for the pure virtual function
class Derived : public Base {
public:
    void show() {
        std::cout << "Derived class is derived from the base class." << std::endl;
    }
};

int main() {
    // Create a pointer of the base class
    Base *bptr;

    // Create an object of the derived class
    Derived d;
    
    // Assign the address of the derived class object to the base class pointer
    bptr = &d;
    
    // Call the function through the base class pointer.
    // This demonstrates polymorphism; the correct function is called at runtime.
    bptr->show();
    
    return 0;
}