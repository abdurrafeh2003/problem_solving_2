#include<iostream>
using namespace std;
int main(){
    char x1;
    
    cin>>x1;
    //cout<<x1<<x2;
    if(x1>=48 && x1<=57){
        cout<<"IS DIGIT"<<endl;
    }
    else if(x1>=65&&x1<=95){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(x1>=97&&x1<=122){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }











    return 0;
}