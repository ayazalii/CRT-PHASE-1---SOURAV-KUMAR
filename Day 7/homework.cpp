// abstraction,encapsulation
// create a college management system in that in  base class containing person's name and age details and two derived class students and teachers contains their data respectively, then also create a virtual function in that so they belong to which category either student or teacher , by default they belong to their derived class.
#include<iostream>
using namespace std;

// Base Class
class Person{

    protected:
    string name;
    int age;

    public:

    // Constructor
    Person(string n, int a){
        name = n;
        age = a;
    }

    // Virtual Function
    virtual void category(){
        cout << "This person belongs to a college." << endl;
    }

    // Display Function
    void displayPerson(){
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Derived Class : Student
class Student : public Person{

    private:
    int rollno;
    float marks;

    public:

    Student(string n, int a, int r, float m)
    : Person(n, a){
        rollno = r;
        marks = m;
    }

    // Overriding Virtual Function
    void category() override{
        cout << "Category : Student" << endl;
    }

    void displayStudent(){
        displayPerson();
        cout << "Roll No  : " << rollno << endl;
        cout << "Marks    : " << marks << endl;
    }
};

// Derived Class : Teacher
class Teacher : public Person{

    private:
    string subject;
    float salary;

    public:

    Teacher(string n, int a, string s, float sal)
    : Person(n, a){
        subject = s;
        salary = sal;
    }

    // Overriding Virtual Function
    void category() override{
        cout << "Category : Teacher" << endl;
    }

    void displayTeacher(){
        displayPerson();
        cout << "Subject  : " << subject << endl;
        cout << "Salary   : " << salary << endl;
    }
};

int main(){

    // Student Object
    Student s1("Ayaz", 20, 33, 89.5);

    // Teacher Object
    Teacher t1("Rahul Sir", 40, "C++", 50000);

    cout << "Student Details\n";
    s1.displayStudent();
    s1.category();

    cout << "\nTeacher Details\n";
    t1.displayTeacher();
    t1.category();

    return 0;
}