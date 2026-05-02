#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"Enter three input sides of triangle:";
   cin >> a>>b>>c;
   bool isEquilateral = (a==b)&&(b==c);
   cout<<isEquilateral;
   return 0;
}