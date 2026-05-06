#include<iostream>
using namespace std;

class Cricketers{
    public:
    string name;
    int runs;
    double avg;

    //Parametrized constructor
    Cricketers(string n,int r,double avg){
        name=n;
        runs=r;
        this->avg=avg;
    }

    //member fn
    void show(){
    cout<<"Player's name: "<<name<<endl;
    cout<<"Runs: "<<runs<<endl;
    cout<<"AVG IS: "<<avg<<endl;
    }
};
int main(){
    Cricketers c1("Sachin",101,75);
    c1.show();

    return 0;
}