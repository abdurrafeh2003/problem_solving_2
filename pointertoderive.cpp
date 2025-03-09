#include<iostream>
using namespace std;
class base{
    int x;
    public:
     void setx(int i){
        x=i;
    }
    virtual void show(){
        cout<<"value of x is : "<<x<<endl;
    }

};
class der:public base{
    int y;
    public:
    void sety(int k){
        y=k;
    }
    void show(){
        cout<<"value of y is: "<<y<<endl;
    }

};
int main(){

    base objb;
    der objd;
    base *ptrb;
    ptrb = &objd;
   /* ptrb->setx(10);
    ptrb->show();*/
    objd.sety(20);
    ptrb->show();

    return 0;
}