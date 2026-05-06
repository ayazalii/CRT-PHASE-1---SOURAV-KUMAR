#include<iostream>
using namespace std;

class Student{
    public:
    //data members
    string name;
    int rollno;

    //member function
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<rollno<<endl;
    }
};
int main(){

    Student s1;
    s1.name="Ayaz";
    s1.rollno=1;

    s1.display();
    return 0;
}