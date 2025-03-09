#include<iostream>
using namespace std;
int main(){
    long long a,b,r;
    char s;
    cin>>a>>s>>b;
    int y=s;
    if(y==43){
        r=a+b;
        cout<<r;
    }
    else if(y==42){
        r=a*b;
        cout<<r;
    }
     else if(y==47){
        r=a/b;
        cout<<r;
    }
     if(y==45){
        r=a-b;
        cout<<r;
    }

    return 0;
}