#include <iostream>
using namespace std;

class Shape {
public:
    void setName() {
        cout << "Shape name set." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    
    c.setName(); c.draw();
    r.setName(); r.draw();
    
    return 0;
}
