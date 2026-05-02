#include <iostream>
using namespace std;
int main(){
    float celsius,fahrenheit;
    cout<<"Enter temp in celsius:";
    cin>>celsius;

    //conversion formula
    fahrenheit=(celsius*9/5)+32;
    cout<<"temp in fahrenheit:"<<fahrenheit<<endl;
    return 0;
}