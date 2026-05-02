// wap that takes three distinct integers as input and find the largest among them using nested conditional statement.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter value of a,b,c : "<<endl;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is largest."<<endl;
        } else{
            cout<<c<<" is largest."<<endl;
        }
    } else if(b>c){
        cout<<b<<" is largest."<<endl;
    } else{
        cout<<c<<" is largest."<<endl;
    }
    return 0;
}