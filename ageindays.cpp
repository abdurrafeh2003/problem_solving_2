#include<iostream>
using namespace std;
int main (){
    long long a;
    cin>>a;
    long long yr,mo,dys,temp1,temp2;
    yr=a/365;
    cout<<yr<<" years"<<endl;
    temp1=a%365;//temp1=270
    
    mo=temp1/30;
    cout<<mo<<" months"<<endl;
    temp2=temp1%30;
    cout<<temp2<<" days";
















    return 0;
}