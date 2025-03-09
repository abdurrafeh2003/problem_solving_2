#include <iostream>
using namespace std;
class base1
{

public:
    int a = 5;
    void show(){ cout << "from base1 a = " << a << endl;}
};
class inherit : public base1{
    public :
    int a =10;

    void show2(){cout << "from inherited class : a= "<<a;} 
};
int main(){

    inherit obj1;
    obj1.show();
    obj1.show2();










    return 0;
}