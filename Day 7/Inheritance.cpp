#include<iostream>
using namespace std;

//PARENT CLASS
class Player{
    public:
    string name;
    int age;

    void setName(string n){
        name=n;
    }

};

//CHILD CLASS
class Cricketer : public Player{
    public:
    int runs;
    void setRuns(int r){
        runs=r;
    }

    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
    }
};
int main(){
    int r;
    cout<<"Enter runs: "<<endl;
    cin>>r;
    Cricketer c1;
    c1.setName("Virat");
    c1.setRuns(r);
    c1.show();

    return 0;
}