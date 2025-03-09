#include<iostream>
using namespace std;

class car {
    private :
    int fuelcap;

public:
car(int x){
    fuelcap=x;
}
void displayfc(){
    cout << fuelcap << endl;
}
};

int main(){
    car car1(50);
    car1.displayfc();
    
    
    


return 0;
}