#include<iostream>
using namespace std;

int fac(int x){

//BASE CASE

if(x==1)
return 1;

//recursion

return x*fac(x-1);
}

int main(){

    int n;
    cout<<"enter no: "<<endl;
    cin>>n;

    cout<<"Factorial of "<<n<<" is: "<<fac(n)<<endl;

    return 0;
}