#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        float real;
        float imag;
    public:
        Complex(float r=0,float i=0) : real(r),imag(i){}
        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        friend Complex operator+(const Complex& lhs,const Complex& rhs);
};

Complex operator+(const Complex& lhs,const Complex& rhs){
    return Complex(lhs.real+rhs.real,lhs.imag+rhs.imag);
}


int main(){

    Complex c1(2.5,3.5);
    Complex c2(1.5,2.0);
    Complex c3=c1+c2;

    cout<<"Output : "<<endl;
    c3.display();

    return 0;
}