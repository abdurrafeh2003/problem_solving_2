#include<iostream>
using namespace std;

class car {
    private :
    int fuelcap;

 public:   
void setcapacity (int setfuelcap){
    fuelcap = setfuelcap;
}
    
void showcapacity() {
    cout<< fuelcap << endl;
}
};

int main(){
    car miycar;
    miycar.setcapacity(50);
    miycar.showcapacity();
    


return 0;
}