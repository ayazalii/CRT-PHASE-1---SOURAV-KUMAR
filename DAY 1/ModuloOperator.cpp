//wap that takes an integer as a input from the user that print all the number to n that is divisible by 2.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
        for(int i = 1 ; i<=n; i++){
            if(i%2==0){
                cout<<i<<endl;
            }
        }
    return 0;
}