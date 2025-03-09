#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b;
    float x;
    cin>>a>>b;
    x=a/b;
    //cout<<x;
    
    cout<<"floor "<<a<<" / "<<b<< " = " <<floor(x)<<"\n";
    cout<<"ceil "<<a<<" / "<<b<< " = "<<ceil(x)<<"\n";
    cout<<"round "<<a<<" / "<<b<< " = " <<round(x)<<"\n";

    return 0;
}
