    #include<stdio.h>

int main(){
    int y1,m1,d1,y2,m2,d2,age,ee,ea,te;
    scanf("%d %d %d",&y1,&m1,&d1);
    scanf("%d %d %d",&y2,&m2,&d2);
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
     if(y1<1973 ){
        int te2=((y2-1973)/5)+1;
        printf("total election : %d\n",te2);
//for eligible election
        if(ea>=0){
            if(ee>5){
                printf("Eligible election : %d\n",ee);
            }
            else{
                printf("Eligible election : 1\n");
            }

        
        }
        else{
            printf("Eligible election : 0\n");
        }
        }
        
    
    
    else{
        
       printf("total election : %d\n",te);

        if(ea>=0){
            if(ee>5){
                printf("Eligible election : %d\n",ee);
            }
            else{
                printf("Eligible election : 1\n");
            }

        
        }
        else{
            printf("Eligible election : 0\n");
        }
        }

    return 0;
}