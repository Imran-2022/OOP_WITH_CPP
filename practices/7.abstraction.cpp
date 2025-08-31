#include<bits/stdc++.h>
using namespace std;

class Shape{
    // It serves as a blueprint or an interface that specifies what a derived class must implement
    
    public:
        virtual void draw()=0;// pure virtual function
};

class Circle: public Shape{
    public:
        void draw(){
            cout<<"Drawing Circle"<<endl;
        }
};


int main(){
    // you can't create direct object of shape . becasue of abstraciton. 

    Shape *s = new Circle();
    s->draw();

    return 0;
}