#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
     
    //push
    s.push(10);
    s.push(20);

    // for(int i=0;i<=s.size();i++){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    //pop
    s.pop();

    //top
    cout<<"TOP : "<<s.top()<<endl;

    //size
    cout<<"Size: "<<s.size()<<endl;

    //empty
    cout<<"Is empty? : "<<s.empty()<<endl;

    return 0;
}