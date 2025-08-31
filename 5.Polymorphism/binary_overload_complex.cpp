#include <iostream>

class Complex {
private:
    float real, imag;

public:
    // Default constructor with parameters to initialize the complex number
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overloading the binary '+' operator to add two Complex objects
    Complex operator+(Complex other) {
        // Create a temporary Complex object to store the result
        Complex temp;
        // Add the real parts
        temp.real = real + other.real;
        // Add the imaginary parts
        temp.imag = imag + other.imag;
        // Return the resulting Complex object
        return temp;
    }

    // A member function to display the complex number in "real + imag i" format
    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    // Create two Complex objects, c1 and c2
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.0);

    // Use the overloaded '+' operator to add c1 and c2
    // This is equivalent to c3 = c1.operator+(c2);
    Complex c3 = c1 + c2;

    // Display the result stored in c3
    c3.display();

    return 0;
}
