#include<iostream>
using namespace std;
class Base 
{
public:
     void show() // virtual function
    {
        cout <<"base class"<<endl;
    }
};
class Derv1 : public Base // derived class 1
{
public:
    void show()
    {
        cout <<"Derv1\n";
    }
};

class Derv2 : public Base // derived class 2
{
    public:
void show()
{
    cout << "Derv2\n";
}
}; 
int main()
{
    Derv1 dv1;
    Derv2 dv2;
    Base *ptr;

    ptr = &dv1;
    ptr->show();
    ptr = &dv2;
    //ptr->show();
    return 0;
}
