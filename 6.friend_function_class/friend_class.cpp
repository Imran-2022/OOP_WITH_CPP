#include <iostream>

using namespace std;

// Forward declaration of ClassB
class ClassB;

class ClassA {
private:
    int numA;

    // Declares ClassB as a friend class
    friend class ClassB;

public:
    // Constructor to initialize numA to 12
    ClassA() : numA(12) {}
};

class ClassB {
private:
    int numB;

public:
    // Constructor to initialize numB to 1
    ClassB() : numB(1) {}

    // Member function to add numA from ClassA and numB from ClassB
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}