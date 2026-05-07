#include<iostream>
using namespace std;
class Player{
    public:
    virtual void show(){  //VIRTUAL FN
     cout<<"Player class show function."<<endl;
     }
};
class Cricketers : public Player{
    public:
    int a;
    // void show(){
    //     cout<<"Cricketer class show function."<<endl;
    // }
};
int main(){
    Cricketers c1;
    c1.show();
    return 0;
}