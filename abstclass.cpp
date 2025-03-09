#include<iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function in the base class
};

class Dog : public Animal {
public:
    void makeSound()  {
        cout << "Woof!" << endl; // Overriding function in the derived class
    }
};

class Cat : public Animal {
public:
    void makeSound()  {
        cout << "Meow!" << endl; // Overriding function in the derived class
    }
};
int main(){
    
    
    Dog dog1;
    //dog1.makeSound();
    Dog* ptr;
    ptr=&dog1;
    ptr->makeSound();






    return 0;
}
