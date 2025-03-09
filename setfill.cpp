#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char a='A';
    cout.fill('$');
    cout.width(10);
    cout<< a <<"\n";
    int x=10,b=20;
    cout.setf(ios::showpos);
    cout<<x<<" "<<b;
return 0;
}