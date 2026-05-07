#include<iostream>
using namespace  std;

class Person{
public:
string name;
void setName(string n){
    name=n;
}
};
class Employee : public Person{
    public:
    int salary;
    void setSalary(int s){
        salary=s;
    }
};
class Manager : public Employee{
    public:
    
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
    }

};
int main(){
    Manager m;
    m.setName("Ayaz");
    m.setSalary(50000);
    m.show();
    return 0;
}
