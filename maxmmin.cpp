#include<iostream>
using namespace std;
 int main(){

    long long int a,b,c;
    cin>>a>>b>>c;
    //cout<<a <<b <<c;
    if(a<b && a<c){
        if(b<c){
            cout<<a<<" "<<c;
        }
        else {
            cout<<a<<" "<<b;
        }
    }
    else if(b<a&&b<c){
        if(a<c){
            cout<<b<<" "<<c;
        }
        else{
            cout<<b<<" "<<a;
        }
    }
    else if(c<a&&c<b){
        if(b<a){
            cout<<c<<" "<<a;
        }
        else{
            cout<<c<<" "<<b;
        }
    }
    else if(a==b && b==c){
        cout<<a<<" "<<b;
    }
    else if(a==b || b==c || a==c){
        if(a==b){
            if(a<c){
                cout<<a<<" "<<c;
            }
                else{
                    cout<<c<<" "<<a;
                }
         if(a==c){
            if(a<b){
                cout<<a<<" "<<b;
            }
            else{
                cout<<b<<" "<<a;
            }
         }
        if(b==c){
            if(b<a){
                cout<<b<<" "<<a;
            }
            else{
                cout<<a<<" "<<b;
            }

        }
        
    }
    return 0;
 
 }
 }