// wap that takes the person name as input , if person age is 18 or older then this person is eligible 
#include <iostream>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"enter ur name:"<<endl;
    cin>>name;
    cout<<"enter ur age:"<<endl;
    cin>>age;
    if(age>=18){
        cout<<name<<" is eligible to vote"<<endl;
    }
    else{
        cout<<name<<" is not eligible to vote"<<endl;
    }
return 0;
}