// Calculate the area of differnt shape.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const double PI = 3.14159;

class Shape {
public:
    // Function to calculate the area of a circle
    double calculateArea(double radius) {
        return PI * radius * radius;
    }
    // Function to calculate the area of a rectangle
    double calculateArea(double length, double width) {
        return length * width;
    }
    // Function to calculate the area of a square
    double calculateArea(int side) {
        return side * side;
    }
};

int main() {
    Shape shape;

    // Calculate the area of a circle with radius 5
    cout << "Area of the circle (radius = 5): " << shape.calculateArea(5.0) << endl;

    // Calculate the area of a rectangle with length 4 and width 6
    cout << "Area of the rectangle (length = 4, width = 6): " << shape.calculateArea(4.0, 6.0) << endl;

    // Calculate the area of a square with side 3
    cout << "Area of the square (side = 3): " << shape.calculateArea(3) << endl;

    return 0;
}