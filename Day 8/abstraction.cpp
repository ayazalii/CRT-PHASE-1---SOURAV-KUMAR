#include<iostream>
using namespace std;

class ATM{
    private:
    int balance;
    public:

    ATM (int balance){
        this->balance=balance;
    }
    //WITHDRAW FROM ATM

    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance."<<endl;
        }else{
            balance-=amount;
        cout<<"Amount withdrawn: "<<amount<<endl;

        }
        
    }

    //SHOW BALANCE METHOD OF ATM

    void  showbalance(){
        cout<<"Current balance after withdraw: "<<balance<<endl;

    }

};
int main(){
    ATM a(5000);
     a.showbalance();
    a.withdraw(500);
    a.showbalance();
    return 0;
}