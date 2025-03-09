#include<iostream>
using namespace std;
int main(){

    long long a,b,d,sum,diff,multy;
    char c,e;

    cin>>a>>c>>b>>e>>d;
    sum=a+b;
    diff=a-b;
    multy=a*b;
    if(c=='+'){
        if(d==sum)
        cout<<"Yes"<<endl;  
        else
        cout<<sum;
    }
    else if(c=='-'){
        if(d==diff){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<diff;
        }
    }
    else if(c=='*'){
        if(d==multy){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<multy;
        }
    }









    return 0;
}