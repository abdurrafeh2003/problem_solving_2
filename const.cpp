#include <iostream> 
using namespace std; 
class B1 
{ 
public: 
B1() { cout << "Constructing B1"; } 
~B1() { cout << "Destructing B1\n"; } 
}; 
class B2 
{ 
int b; 
public: 
B2() { cout << "Constructing B2"; } 
~B2() { cout << "Destructing B2\n"; } 
}; 
class D: public B1, public B2{ 
public: 
D(){cout<<"Constructing D";} 
~D(){cout<<"Destructing D";} };
int main(){ 
D ob; 
return 0; 
} 