#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> vec={5,10,2,55,60,3};
    
    //vec.push_back(100);
    for(int val : vec){
        cout<<val<<endl;
    }
    cout<<"\n";
    vec.erase(vec.begin()+1);
    for(int val : vec){
        cout<<val<<endl;
    }
    vec.insert(vec.begin()+0,15);
     cout<<"\n";
    vec.erase(vec.begin()+1);
    for(int val : vec){
        cout<<val<<endl;
    }



 return 0;
}