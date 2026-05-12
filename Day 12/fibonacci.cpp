#include<iostream>
using namespace std;

int fib(int n){

    //base case

    if(n==0 || n==1){
        return n;
    }

    //recursive call

    return fib(n-1) + fib(n-2);
}
int main(){
    int n=10;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
    
}