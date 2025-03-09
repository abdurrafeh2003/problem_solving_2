#include<iostream>
using namespace std;
class base{
    int a_base;
    public:
    void setdata(int b){
        a_base=b;
    };
    void display(){
        cout<<"the value of base class a_base : "<<a_base<<endl;    }



};
int main(){
    base obj1;
    base* ptr =&obj1;
    ptr->setdata(4);
    ptr->display();






    return 0;
}