#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
protected:
    string make;
    string model;
    int year;
    int mileage;

public:
    Vehicle(string m, string mo, int y, int mil) : make(m), model(mo), year(y), mileage(mil) {}

    void start()
    {
        cout << "Starting the vehicle..." << endl;
    }

    void stop()
    {
        cout << "Stopping the vehicle..." << endl;
    }

    void displayInfo()
    {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << ", Mileage: " << mileage << endl;
    }
};

class Car : public Vehicle
{
private:
    int numberOfDoors;
    bool isConvertible;

public:
    Car(string m, string mo, int y, int mil, int doors, bool convertible)
        : Vehicle(m, mo, y, mil), numberOfDoors(doors), isConvertible(convertible) {}

    void openTrunk()
    {
        cout << "Opening the car trunk..." << endl;
    }

    void displayInfo()
    {
        Vehicle::displayInfo();
        cout << "Doors: " << numberOfDoors << ", Convertible: " << (isConvertible ? "Yes" : "No") << endl;
    }
};

class Truck : public Vehicle
{
private:
    int loadCapacity;
    int numberOfAxles;

public:
    Truck(string m, string mo, int y, int mil, int capacity, int axles)
        : Vehicle(m, mo, y, mil), loadCapacity(capacity), numberOfAxles(axles) {}

    void dumpLoad()
    {
        cout << "Dumping the truck load..." << endl;
    }

    void displayInfo()
    {
        Vehicle::displayInfo();
        cout << "Load Capacity: " << loadCapacity << " tons, Axles: " << numberOfAxles << endl;
    }
};

int main()
{
    Car car1("Toyota", "Corolla", 2020, 15000, 4, false);
    Truck truck1("Ford", "F-150", 2018, 50000, 3, 2);

    car1.start();
    car1.displayInfo();
    car1.openTrunk();

    truck1.start();
    truck1.displayInfo();
    truck1.dumpLoad();

    return 0;
}