//wap that takes two integer inputs from the user , swap their values using a temporary variable and print the updated value.
#include <iostream>
using namespace std;
int main(){
    int a , b,temp;
    cout<<"enter two integers:";
    cin>>a>>b;
    temp = a;
    a=b;
    b=temp;
    cout<<"after swapping a becomes"  << a << endl;
    cout<<"after swapping b becomes"  << b << endl;
    return 0;
}