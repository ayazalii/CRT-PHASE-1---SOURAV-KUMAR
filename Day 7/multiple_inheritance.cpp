#include<iostream>
using namespace std;

//PARENT CLASS OF CRICKET
class Player{
    public:
    string name;
    int age;

    void setName(string n){
        name=n;
    }

};

//CHILD CLASS OF PLAYER CLASS
// PARENT CLASS OF INDIAN CRICKETER CLASS
class Cricketer {
    public:
    int runs;
    void setRuns(int r){
        runs=r;
    }

};

//CHILD CLASS

class IndianCricketer : public Cricketer,public Player
{

    public:

    string state;
    void setState(string s){
        state=s;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"state: "<<state<<endl;
    }
};
int main(){
    int r;
    cout<<"Enter runs: "<<endl;
    cin>>r;
    string s;
    cout<<"Enter state: "<<endl;
    cin>>s;
    IndianCricketer c1;
    c1.setName("Virat");
    c1.setRuns(r);
    c1.setState(s);
    c1.show();

    return 0;
}