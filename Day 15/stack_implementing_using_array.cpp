#include<iostream>
using namespace std;
class stack{
    private:
    int arr[100];
    int top;


    //CONSTRUCTOR
    public:
    stack(){
        top=-1;
    }
    
    //isempty
    bool isempty(){
        return top==-1;
    }
    //isfull
    bool isfull(){
        return top==99;
    }
    //push
    void push(int x){
        if(isfull()){
            cout<<"stack overflow."<<endl;
            return;
        }
        arr[++top] =  x;
    }

    //pop
    void pop(){
        if(isempty()){
            cout<<"stack underflow"<<endl;
            return;
        }
        cout<<"popped: "<<arr[top]<<endl;
        top--;
    }

     int gettop() {
        if (isempty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    //display
     void display() {
        if (isempty()) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout<<"Top element: "<<s.gettop()<<endl;

    s.pop();
    s.display();

    return 0;
}