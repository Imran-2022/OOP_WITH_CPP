#include <iostream>

class Test {
private:
    int num;
public:
    // Constructor to initialize num
    Test() : num(8) {}

    // Overloading the prefix increment operator (++)
    void operator++() {
        num = num + 2;
    }

    // Function to print the value of num
    void Print() {
        std::cout << "The Count is: " << num << std::endl;
    }
};

// void Test::operator++(){
//      num = num + 2;
// }

int main() {
    Test tt; // Initialize object with num = 8
    
    ++tt; // This calls the overloaded operator++() function
    
    tt.Print(); // Outputs: The Count is: 10
    
    return 0;
}