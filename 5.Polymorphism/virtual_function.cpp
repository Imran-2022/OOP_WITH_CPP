#include <iostream>

// Base class
class A {
public:
    // The 'virtual' keyword enables late binding
    virtual void display() {
        std::cout << "Base class is invoked" << std::endl;
    }
};

// Derived class, inheriting from A
class B : public A {
public:
    // Overriding the virtual function from the base class
    void display() {
        std::cout << "Derived Class is invoked" << std::endl;
    }
};

int main() {
    // Creating an object of the derived class B
    B b;
    
    // Creating a pointer of the base class A
    A *a; 
    
    // The base class pointer 'a' is assigned the address of the derived class object 'b'
    a = &b;
    
    // Calling the virtual function through the base class pointer
    // This demonstrates late binding, where the program determines which function to call at runtime
    a->display(); 
    
    return 0;
}