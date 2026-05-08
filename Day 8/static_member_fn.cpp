#include<iostream>
using namespace std;

class Employee{
public:
static int regno;
Employee(){
    regno++;
}
static void show(){
    cout<<"Employee regno is: "<<regno<<endl;
}
};

int Employee :: regno=100;
int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee ::show();
    return 0;
}
