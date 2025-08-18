#include <iostream>
#include <string>

// To avoid using std:: repeatedly, we can include the entire namespace.
using namespace std;

// Base class for all devices
class Device {
protected:
    string deviceID;
    string status;

public:
    Device() : deviceID(""), status("inactive") {}

    void inputDetails() {
        cout << "Enter Device ID: ";
        cin >> deviceID;
        cout << "Enter Status (active/inactive): ";
        cin >> status;
    }

    void displayDetails() const {
        cout << "Device ID: " << deviceID << endl;
        cout << "Status: " << status << endl;
    }
};

// Derived class for Sensor devices
class Sensor : public Device {
protected:
    string sensitivity;

public:
    void inputSensorDetails() {
        inputDetails(); // Call base class method
        cout << "Enter Sensitivity (low/medium/high): ";
        cin >> sensitivity;
    }

    void displaySensorDetails() const {
        displayDetails(); // Call base class method
        cout << "Sensitivity: " << sensitivity << endl;
    }
};

// Derived class for Smart devices
class SmartDevice : public Device {
protected:
    string connectivityType;

public:
    void inputSmartDeviceDetails() {
        inputDetails(); // Call base class method
        cout << "Enter Connectivity Type (e.g., Wi-Fi, Bluetooth): ";
        cin >> connectivityType;
    }

    void displaySmartDeviceDetails() const {
        displayDetails(); // Call base class method
        cout << "Connectivity Type: " << connectivityType << endl;
    }
};

// Derived class for Smart Sensors (multiple inheritance)
class SmartSensor : public Sensor, public SmartDevice {
public:
    void inputSmartSensorDetails() {
        // Input from both base classes.
        // Ambiguity is avoided by using scope resolution operator.
        Sensor::inputDetails(); 
        cout << "Enter Sensitivity (low/medium/high): ";
        cin >> sensitivity;
        cout << "Enter Connectivity Type (e.g., Wi-Fi, Bluetooth): ";
        cin >> connectivityType;
    }

    void displaySmartSensorDetails() const {
        cout << "\n--- Smart Sensor Details ---" << endl;
        // Ambiguity is resolved by explicitly calling the desired base class method.
        Sensor::displayDetails();
        cout << "Sensitivity: " << sensitivity << endl;
        cout << "Connectivity Type: " << connectivityType << endl;
    }
};

int main() {
    // Demonstrate a regular Device
    Device device;
    cout << "--- Input Regular Device Details ---" << endl;
    device.inputDetails();
    cout << "\n--- Displaying Regular Device Details ---" << endl;
    device.displayDetails();
    cout << "---------------------------------------" << endl;

    // Demonstrate a Sensor
    Sensor sensor;
    cout << "\n--- Input Sensor Details ---" << endl;
    sensor.inputSensorDetails();
    cout << "\n--- Displaying Sensor Details ---" << endl;
    sensor.displaySensorDetails();
    cout << "---------------------------------------" << endl;

    // Demonstrate a Smart Device
    SmartDevice smartDevice;
    cout << "\n--- Input Smart Device Details ---" << endl;
    smartDevice.inputSmartDeviceDetails();
    cout << "\n--- Displaying Smart Device Details ---" << endl;
    smartDevice.displaySmartDeviceDetails();
    cout << "---------------------------------------" << endl;

    // Demonstrate a Smart Sensor (combining both functionalities)
    SmartSensor smartSensor;
    cout << "\n--- Input Smart Sensor Details ---" << endl;
    smartSensor.inputSmartSensorDetails();
    smartSensor.displaySmartSensorDetails();
    cout << "---------------------------------------" << endl;

    return 0;
}