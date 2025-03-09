#include <iostream>
using namespace std;
class vehicle
{
public:
    int num_wheel;
    int range;
    vehicle(int wheels, int r){
        num_wheel=wheels;
        range=r;
    } 
    void show(){
        cout<<"number of wheels: "<<num_wheel<<endl;
        cout<<"range: "<<range<<endl;
            }
};
 class car : public vehicle
 {
 public:
     int num_pass;
    
      car(int wheels, int r, int passengers) : vehicle(wheels, r) { num_pass = passengers; }
    
    void display() {
        vehicle::show();         
        cout << "Number of passengers: " << num_pass << "\n\n";
     }
 };
 

class truck : public vehicle
{
public:
    int load;
    truck(int wheels, int r, int l):vehicle(wheels,r),load(l){}
    void display(){
        vehicle::show();
        cout<<"load: "<<load<<endl;
    }
};
int main()
{
    car car1(5 , 400 ,5);
    truck truck1(16,10000,1000000);
    car* ptrc=&car1;
    truck* ptrt=&truck1;
    cout<<"details of car \n";
    ptrc->display();
    cout<<"details of truck \n";
    ptrt->display();

    return 0;
}