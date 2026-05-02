//write a cpp program that takes two integer input a and b , multiply a by 4 using bitwise left shift operator . print the value of a
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two integers  A & B:";
    cin >> a>>b;
    a = a<<2;
    cout<<"Value of a after multiplying by 4 :"<<a<<endl;
    return 0;
}