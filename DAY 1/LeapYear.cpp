//wap that takes a year  as an input and checks if it is leap year or not.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year:"<<endl;
    cin>>year;
    if((year%4 ==0 && year%100 !=0) || (year%400 ==0)){
        cout<<"Leap Year.";
    } else{
        cout<<"Not a leap year.";
    }
    return 0;
}