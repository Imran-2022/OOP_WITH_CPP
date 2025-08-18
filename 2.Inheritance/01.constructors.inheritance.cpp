#include<bits/stdc++.h>
using namespace std; 

class Look{
    public:
        int abc=5;
        Look(){
            cout<<"Look the constructor of parent class"<<endl;
        }
};

class SecondLook:public Look{
    public:
    SecondLook(){
        cout<<"SecondLook constructor here";
    }
};

int main(){
    SecondLook abc;
    return 0;
}