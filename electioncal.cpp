    #include<iostream>
using namespace std;
int main(){
    int y1,m1,d1,y2,m2,d2,age,ee,ea,te;
    cin>>y1>>m1>>d1;
    cin>>y2>>m2>>d2;
     //if the deathyear is not applicable
     if(y2==0&&m2==0&&d2==0){
        y2=2024;
        m2=11;
        d2=26;
        
    }
    age=(y2-y1);
     ea=age-18;
     ee=(ea)/5;//eligible
     te=(age/5);//total election
     if(y1<1973){
        int te2=((y2-1973)/5)+1;
        cout<<"total election :"<<te2<<endl;
        if(ea<5){

        cout<<"Eligible election : 1"<<endl;
        }
        else{
            cout<<"eligible election :"<<ee<<endl;
        }
        }
    
    
    else{
        
        cout<<"total election :"<<te<<endl;

        if(ea<5){

        cout<<"Eligible election : 1"<<endl;
        }
        else{
            cout<<"eligible election :"<<ee<<endl;
        }
    

    } 

    return 0;
}