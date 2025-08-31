#include<bits/stdc++.h>
using namespace std;

class ClassA {
    private:
        int *data;
    public:
        ClassA(int val){
            data = new int(val);
            cout<<*data<<endl;
        }
        ~ClassA(){
            cout<<"releasing note with value : "<<*data<<endl;
            delete data;
            data=nullptr; // prenent errors......while use data .  
        }
};

int main(){
    ClassA a(4);
    return 0;
}