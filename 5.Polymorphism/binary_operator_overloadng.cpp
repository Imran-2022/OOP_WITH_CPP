#include<bits/stdc++.h>
using namespace std;

class A {
private:
    int x;

public:
    // Constructor to initialize x
    A(int i) : x(i) {}

    void operator+(A);
    void display();

};

void A :: operator+(A a){
    int m= x+a.x;
    cout<< "the result of the addition of two object is : " <<m<<endl;
}

int main() {
    A a1(5); // Create an object a1 with x = 5
    A a2(4); // Create an object a2 with x = 4
    
    a1 + a2; // This calls a1.operator+(a2)
    

    return 0;
}