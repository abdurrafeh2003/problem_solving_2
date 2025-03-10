#include<iostream>
using namespace std;

class account {
    protected:
    string id;
    double balance;
    public:
    account (string i, double bal){
        id=i;
        balance=bal;
    };
    virtual void deposit(double amount){
        balance = balance+amount;
    }
    virtual void withdraw(double amount){
        if(amount<=balance){
            balance=balance-amount;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    virtual void display(){
        cout<<"id: "<<id<<" "<<"balance: "<<balance<<endl;
        
    }
};
class savings : public account{
    double interest;
    public:
    savings(string i,double bal, double intrate):account(i,bal),interest(intrate){}
    void addinterest(){
        double intramn=balance*interest;
        balance=balance+intramn;
    }
    void display(){
        cout<<"savings account details\n";
        account::display();
        cout<<"interest rate: "<<interest<<endl;

            }
};
class checking : public account{
    double overdraftlim;
    public:
    checking(string i,double bal,double limit):account(i,bal),overdraftlim(limit){}
    void withdraw(double amount){
        if(amount<=balance+overdraftlim){
            balance=balance-amount;
        }
        else
        cout<<"overdraft limit reached!!"<<endl;
    }
    void display(){
        cout<<"checking account  details: \n";
        account::display();
        cout<<"overdraft limit: "<<overdraftlim<<endl;

    }
};
    int main(){
        savings s1("s1",5000.0,0.05);
        checking c1("c1",3000.00,500.00);

        s1.display();
        c1.display();

        s1.deposit(3000.0);
        s1.withdraw(7000.0);
        s1.addinterest();
        
        c1.deposit(1000.0);
        c1.withdraw(4000.0);
        s1.display();
        c1.display();
        return 0;
    }









