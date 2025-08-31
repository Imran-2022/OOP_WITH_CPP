#include<bits/stdc++.h>
using namespace std;

class B; // Forward declaration.

class A{
    private:
        int val;
    
    public:
        A():val(4){};
        friend int add(A,B);
};

class B{
    private: 
        int val2;
    public:
        B():val2(5){};
        friend int add(A,B);

};

int add(A ob1, B ob2){
    return (ob1.val+ob2.val2);
}

int main(){
    A objA;
    B objB;
    cout<<"Sum : "<<add(objA,objB);
    return 0; 
}