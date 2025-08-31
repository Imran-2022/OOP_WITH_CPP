#include<bits/stdc++.h>
using namespace std;

class Distnace {
    private:
        int meter;
        friend int addFive(Distnace);
    public: 
        Distnace():meter(0){};
};

int addFive(Distnace d){
    d.meter+=5;
    return d.meter;
}

int main(){
    Distnace d;
    cout<<"Distance : "<<addFive(d); 

    return 0; 
}