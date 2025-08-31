#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0;  // pure virtual function
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();  // abstraction: we only care about "draw"
}
