//wap that takes an integer input representing a person's age , use an else if ladder to determine and print : 1. print eligible to vote if age is 100 or more in century category 2. eligible to vote if age between 18 to 99 3. not eligible to vote if age is between 0 to 18 and invalid if age is negative.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age: "<<endl;
    cin>>age;
    if(age>=100){
        cout<<"Eligible to vote in century category."<<endl;
    } else if (age>=18 && age<=99){
        cout<<"eligible to vote. "<<endl;
    } else if (age>=0 && age<=17){
        cout<<"ineligible. "<<endl;
    } else {
        cout<<"Invalid input. "<<endl;
    }
    return 0;
}