#include<iostream>
using namespace std;
int main(){
    int n,a,max=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        //cout<<a<<" ";
        if(a>max){
            max=a;
        }
    }
    cout<<max<<endl;














    return 0;
}