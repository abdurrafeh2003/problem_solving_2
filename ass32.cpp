#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    int num_wheels;
    int range;
    Vehicle(int wheels, int r) : num_wheels(wheels), range(r) {}
    void display() {
        cout << "Number of wheels: " << num_wheels << "\n";
        cout << "Range: " << range << " miles\n";
    }
};

// Derived class Car
class Car : public Vehicle {
public:
    int num_passengers;
    Car(int wheels, int r, int passengers) : Vehicle(wheels, r), num_passengers(passengers) {}
    void display() {
        Vehicle::display();
        cout << "Number of passengers: " << num_passengers << "\n";
    }
};

// Derived class Truck
class Truck : public Vehicle {
public:
    int load_limit;
    Truck(int wheels, int r, int load) : Vehicle(wheels, r), load_limit(load) {}
    void display() {
        Vehicle::display();
        cout << "Load limit: " << load_limit << " kg\n";
    }
};

int main() {
    Car myCar(4, 400, 5);
    Truck myTruck(6, 300, 10000);

    cout << "Car details:\n";
    myCar.display();
    cout << "\nTruck details:\n";
    myTruck.display();

    return 0;
}
