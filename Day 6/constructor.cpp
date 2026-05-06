#include<iostream>
using namespace std;

class Student{
    // Data Members
    public:
    string name;
    int rollno;

    // Default Constructor

    Student(){
        name="Riya";
        rollno=8;
    }


    //print
    void show(){
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<"Default constructor is called."<<endl;
    }
};
int main(){
    Student s1;;
    s1.show();
    return 0;
}