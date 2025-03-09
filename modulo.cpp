#include<iostream>
using namespace std;
int main(){
   long long a;
   cin>>a;
   for( ;a>=10;){
    a=a/10;
   } 
if(a%2==0){
    cout<<"EVEN";

}
else
{
    cout<<"ODD";
}



    return 0;
}