#include<iostream>
using namespace std;
void print(int n){

    //BASE CASE
    if(n>10)
    return;

    cout<<n<<" ";

    //RECURSIVE CALL
    print(n+1);
}

int main(){
    print(1);
    // for(int i=1;i<=10;i++){
    //     cout<<i<<" ";
    // }
    return 0;
}