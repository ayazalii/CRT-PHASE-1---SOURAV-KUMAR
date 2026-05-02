// wap that takes two integer input from user , find the maximum of two using ternary conditional operator.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    int max;
    cout<<"enter values of a and b :" <<endl;
    cin>>a>>b;
    max = (a>b) ? a : b;
    cout<<"maximum is : " << max << endl;
    return 0;
} 