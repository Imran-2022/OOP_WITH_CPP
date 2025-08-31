#include <iostream>

using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Display function to print the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Friend function to overload the '+' operator
    friend Complex operator+(const Complex& lhs, const Complex& rhs);
};

// Definition of the friend function for operator overloading
Complex operator+(const Complex& lhs, const Complex& rhs) {
    // Returns a new Complex object which is the sum of the two operands
    return Complex(lhs.real + rhs.real, lhs.imag + rhs.imag);
}

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.0);

    // Using the overloaded '+' operator
    Complex c3 = c1 + c2;

    cout << "Output:" << endl;
    c3.display();

    return 0;
}