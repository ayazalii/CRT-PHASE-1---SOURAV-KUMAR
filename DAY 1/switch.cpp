//wap that stimulates a simple customer support system using switch case statement in which  menu options are 1.for support 2.for billing 3. for technical support 4. 4 or 0 for speak to agent 5. other invalid input
#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"CUSTOMER BILLING SUPPORT : "<<endl;
    cout<<"1. for general support."<<endl;
    cout<<"2.for billing."<<endl;
    cout<<"3.for technical support."<<endl;
    cout<<"0. speak to agent."<<endl<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;

    switch(choice){
        case 1 : 
        cout<<"u selected general support.";
        break;
        case 2 :
        cout<<"u selected billing.";
        break;
        case 3 :
        cout<<"u selected technical support.";
        break;
        case 4 : 
        cout<<"u selected for speaking to agent.";
        break;

        default :
        cout<<"Invalid input"<<endl;
    }

    return 0;
}