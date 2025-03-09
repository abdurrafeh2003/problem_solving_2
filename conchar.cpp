#include<iostream>
using namespace std;
int main(){
     char x;
     int y;
     cin>>x;
     y=x;
     if(y>=97 && y<=122){
        y=y-32;
    
        char z=y;
        cout<<z;
     }
    else if(y>=65&& y<=90){
        y=y+32;
        char z2=y;
        cout<<z2;
    }












    return 0;
}