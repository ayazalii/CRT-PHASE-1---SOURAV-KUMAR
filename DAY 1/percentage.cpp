//wap that takes a student percentage 0 to 100 as input and calculate their grade based on following criteria:
// 1. 90 and above 2. 80 to 89 3. 70 to 79 4. 60 to 69 5. below 60 fail
#include<iostream>
using namespace std;
int main(){
    int percentage;
    cout<<"enter percentage : " <<endl;
    cin>>percentage;
    if(percentage<0 || percentage > 100){
        cout<<"Invalid input.";
    }
    else if(percentage>=90){
        cout<<"A+ grade.";
    } else if (percentage>=80){
        cout<<"A grade";
    } else if (percentage>=70){
        cout<<"B grade.";
    } else if (percentage>=60){
        cout<<"C grade.";
    } else {
        cout<<"FAIL ! ";
    }
    return 0;
}