#include<iostream>
using namespace std;

class ATM{
    private:
    int balance;

    public:
//ENCAPSULATION
    void setbalance (int balance){
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
    int getbalance(){
        return balance;
    }

};
int main(){
    int n;
    cout<<"Enter balance: "<<endl;
    cin>>n;
    ATM a;
    a.setbalance(n);
    cout<<"Balance is : "<<a.getbalance()<<endl;
    a.withdraw(500);
    cout<<"Balance is: "<<a.getbalance()<<endl;
    return 0;
}