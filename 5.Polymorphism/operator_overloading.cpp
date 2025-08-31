#include <iostream>
using namespace std;


class Complex {
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}


    // Overload + operator
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
};


int main() {
    Complex c1(2, 3), c2(1, 2);
    Complex c3 = c1 + c2;   // compiler knows at compile time which + to use
    cout << c3.real << " + " << c3.imag << "i";
}
