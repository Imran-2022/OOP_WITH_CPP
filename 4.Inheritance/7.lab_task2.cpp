#include <iostream>
#include <string>

// Use a namespace to simplify code, as requested
using namespace std;

// Base class for the Employee
class Employee {
protected:
    string name;
    int employeeID;

public:
    // Constructor to set employee details
    Employee(const string& empName, int empID) 
        : name(empName), employeeID(empID) {}

    // Method to display basic employee information
    void showDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class for managing Salary
class Salary : protected Employee {
private:
    double basicPay;
    double bonus;
    double totalSalary;

public:
    // Constructor to initialize all details
    Salary(const string& empName, int empID, double basic, double bon)
        : Employee(empName, empID), basicPay(basic), bonus(bon) {
        totalSalary = basicPay + bonus;
    }

    // Method to show salary details
    void showSalaryDetails() const {
        cout << "Basic Pay: $" << basicPay << endl;
        cout << "Bonus: $" << bonus << endl;
        cout << "Total Salary: $" << totalSalary << endl;
    }

    // Method to update salary values
    void updateSalary(double newBasicPay, double newBonus) {
        basicPay = newBasicPay;
        bonus = newBonus;
        totalSalary = basicPay + bonus;
        cout << "Salary updated successfully." << endl;
    }

    // A method to display both employee and salary information
    void showAllDetails() const {
        showDetails(); // Can access the protected base class method
        showSalaryDetails();
    }
};

int main() {
    // Create a Salary object
    Salary emp1("Jane Doe", 101, 50000.00, 5000.00);

    // Initial use case: display all details
    cout << "--- Initial Employee and Salary Details ---" << endl;
    emp1.showAllDetails();

    // Update the salary and display again
    cout << "\n--- Updating Salary ---" << endl;
    emp1.updateSalary(55000.00, 6000.00);

    cout << "\n--- Updated Employee and Salary Details ---" << endl;
    emp1.showAllDetails();

    return 0;
}