#include<iostream>
using namespace std;
template<class t>
class abc {
    public:
    t x;
    abc(t b){
        x=b;
    }
    void setx(t a){
        x=a;
    }
    void showx(){
        cout<<x<<endl;
    }
   


};
// template<class n>
// n add (n a, n b){
//     return a+b;
// }

int main(){
    abc<int> ob(5);
    ob.showx();


    return 0;
}