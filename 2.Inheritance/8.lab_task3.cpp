#include <iostream>
#include <string>

// Use a namespace to simplify code, as requested
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}

    void displayPersonalDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Intermediate derived class (multilevel inheritance)
class Student : public Person {
protected:
    string studentID;
    string course;

public:
    Student(const string& n, int a, const string& id, const string& c)
        : Person(n, a), studentID(id), course(c) {}

    void displayStudentDetails() const {
        displayPersonalDetails();
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

// Final derived class
class GraduateStudent : public Student {
private:
    string thesisTopic;
    string supervisor;

public:
    GraduateStudent(const string& n, int a, const string& id, const string& c,
                    const string& topic, const string& super)
        : Student(n, a, id, c), thesisTopic(topic), supervisor(super) {}

    void displayGraduateDetails() const {
        displayStudentDetails();
        cout << "Thesis Topic: " << thesisTopic << endl;
        cout << "Supervisor: " << supervisor << endl;
    }
};

int main() {
    // Creating an object of the most derived class, GraduateStudent
    GraduateStudent gradStudent("Emma Stone", 25, "GS12345", "Computer Science",
                                "AI in Healthcare", "Dr. Alan Turing");

    cout << "--- Graduate Student Details ---" << endl;
    gradStudent.displayGraduateDetails();

    return 0;
}