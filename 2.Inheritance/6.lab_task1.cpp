#include <bits/stdc++.h>
using namespace std;

// Base class Employee
class Employee {
protected:
    string name;
    string employeeID;

public:
    // Constructor to initialize Employee attributes
    Employee(const string& n, const string& id)
        : name(n), employeeID(id) {}

    // Method to display basic employee information
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class Doctor
class Doctor : public Employee {
private:
    string specialization;

public:
    // Constructor to initialize Doctor and inherited Employee attributes
    Doctor(const string& n, const string& id, const string& spec)
        : Employee(n, id), specialization(spec) {}

    // Method specific to doctors
    void prescribeMedication() const {
        cout << "Dr. " << name << " is prescribing medication." << endl;
    }

    // Method to display doctor's information, including specialization
    void displayDoctorInfo() const {
        displayInfo();
        cout << "Specialization: " << specialization << endl;
    }
};

// Derived class Nurse
class Nurse : public Employee {
private:
    string shiftDetails;

public:
    // Constructor to initialize Nurse and inherited Employee attributes
    Nurse(const string& n, const string& id, const string& shift)
        : Employee(n, id), shiftDetails(shift) {}

    // Method to display nurse's information, including shift details
    void displayNurseInfo() const {
        displayInfo();
        cout << "Shift Details: " << shiftDetails << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Doctor doctor1("Dr. Alice Smith", "D101", "Cardiology");
    Nurse nurse1("Bob Johnson", "N202", "Night Shift (8 PM - 6 AM)");

    // Demonstrating the use of the objects
    cout << "--- Doctor Information ---" << endl;
    doctor1.displayDoctorInfo();
    doctor1.prescribeMedication();

    cout << "\n--- Nurse Information ---" << endl;
    nurse1.displayNurseInfo();

    return 0;
}