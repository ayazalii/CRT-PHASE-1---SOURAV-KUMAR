//wap that takes a single alphabet character as an input from the user and determne whether it is vowel or consonent.
#include<iostream>
using namespace std;
int main (){
      char ch;
    cout<<"Enter the  alphabet : "<<endl;
    cin>>ch;
    switch(ch){
        case 'a' : case'e': case 'i' : case 'o' : case 'u' :
        cout<<"Vowel.";
        break;
        default:
        cout<<"Consonant.";
        }
  return 0;
}