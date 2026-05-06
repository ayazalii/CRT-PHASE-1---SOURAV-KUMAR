#include<iostream>
using namespace std;

class Student{

    
    private:
    int regNo= 330;

    public:
    //data member
    string name;
    int rollno;

   

//member fn

    void display(){
        cout<<rollno<<endl;
        cout<<name<<endl;
        cout<<regNo<<endl;
        regNo++;
    }

    
};
int main(){


    Student s1;

     s1.name = "Ayaz";
     s1.rollno=1;

     s1.display();

    return 0;
}