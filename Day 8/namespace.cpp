#include<iostream>
using namespace std;

namespace Virat{
    void show(){
        cout<<"He is part of RCB."<<endl;
    }
}
    namespace Rohit{
        void show(){
            cout<<"He is part of MI."<<endl;
        }
    }

int main(){
    Virat :: show();
    Rohit :: show();
    return 0;
}