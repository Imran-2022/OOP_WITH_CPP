#include <iostream>
using namespace std;

class Vehicle {
public:
    void type() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void carInfo() {
        cout << "This is a car" << endl;
    }
};

class Truck : public Vehicle {
public:
    void truckInfo() {
        cout << "This is a truck" << endl;
    }
};

class SportsCar : public Car {
public:
    void sportsInfo() {
        cout << "This is a sports car" << endl;
    }
};

int main() {
    SportsCar sc;
    sc.type();       // Vehicle
    sc.carInfo();    // Car
    sc.sportsInfo(); // SportsCar
    return 0;
}
