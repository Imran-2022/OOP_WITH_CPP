#include <iostream>
using namespace std;

class Grandparent {
public:
    void familyName() {
        cout << "Family name: Smith" << endl;
    }
};

class Parent : public Grandparent {
public:
    void parentTrait() {
        cout << "Parent trait: Tall" << endl;
    }
};

class Child : public Parent {
public:
    void childTrait() {
        cout << "Child trait: Smart" << endl;
    }
};

int main() {
    Child c;
    c.familyName();   // From Grandparent
    c.parentTrait();  // From Parent
    c.childTrait();   // Own function
    return 0;
}
