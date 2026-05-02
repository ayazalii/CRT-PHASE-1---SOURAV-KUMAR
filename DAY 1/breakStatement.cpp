//wap that continuosly takes positive integer as an input from the user and add them to running a sum variable , if the user enters a negative number immediately terminate the loop using break statement and print the final sum. 
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;

    while(true){
        cout<<"enter the numbers one by one (negative number to stop): "<<endl;
        cin>>n;

        if (n<0){
            break;
        }
        sum+=n;
    }
    cout<<"Total sum is : "<<sum<<endl;
    return 0;
}